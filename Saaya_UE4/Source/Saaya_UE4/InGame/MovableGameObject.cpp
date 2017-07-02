// Fill out your copyright notice in the Description page of Project Settings.

#include "MovableGameObject.h"
#include "Players/Saaya_UE4Character.h"
#include "Animation/Player1AnimInstance.h"


// Sets default values
AMovableGameObject::AMovableGameObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComp->SetupAttachment(Root);

	TriggerComp = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
	TriggerComp->bGenerateOverlapEvents = true;
	TriggerComp->OnComponentBeginOverlap.AddDynamic(this, &AMovableGameObject::OnOverlapBegin);
	TriggerComp->OnComponentEndOverlap.AddDynamic(this, &AMovableGameObject::OnOverlapEnd);
	TriggerComp->SetupAttachment(MeshComp);

	PushSpeed = 1;
	PlayerObjectGap = 100;
	bKeyReady = false;
	bStartMove = false;

	CurrentPushDirection = PushDirection::ForwardDirection;
}

// Called when the game starts or when spawned
void AMovableGameObject::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* World = GetWorld();
	if (World) {
		World->GetFirstPlayerController()->InputComponent->BindAction("Push", IE_Pressed, this, &AMovableGameObject::PushKeyDown);
		World->GetFirstPlayerController()->InputComponent->BindAction("Push", IE_Released, this, &AMovableGameObject::PushKeyUp);
	}
}

// Called every frame
void AMovableGameObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bStartMove && bKeyReady)
	{
		FVector MoveVector;

		switch (CurrentPushDirection)
		{
		case PushDirection::ForwardDirection:
			MoveVector = FVector(-1, 0, 0);
			break;
		case PushDirection::BackwardDirection:
			MoveVector = FVector(1, 0, 0);
			break;
		case PushDirection::RightDirection:
			MoveVector = FVector(0, -1, 0);
			break;
		case PushDirection::LeftDirection:
			MoveVector = FVector(0, 1, 0);
			break;
		}

		UPlayer1AnimInstance * player1Anim = Cast<UPlayer1AnimInstance>(player1->GetMesh()->GetAnimInstance());
		if (player1Anim)
		{
			player1Anim->IsPushing = true;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "player1Anim not found ");
		}

		if (CurrentPushDirection == PushDirection::ForwardDirection || CurrentPushDirection == PushDirection::BackwardDirection)
		{
			player1->SetActorLocation(FVector( Root->GetComponentLocation().X + (CurrentPushDirection == PushDirection::ForwardDirection ? PlayerObjectGap : - PlayerObjectGap), Root->GetComponentLocation().Y, player1->GetActorLocation().Z));
		}
		else if (CurrentPushDirection == PushDirection::LeftDirection || CurrentPushDirection == PushDirection::RightDirection)
		{
			player1->SetActorLocation(FVector(Root->GetComponentLocation().X, Root->GetComponentLocation().Y + (CurrentPushDirection == PushDirection::RightDirection ? PlayerObjectGap : -PlayerObjectGap), player1->GetActorLocation().Z));
		}

		Root->MoveComponent(MoveVector * PushSpeed, FRotator(0, 0, 0), true);
	}

	//GetWorldTimerManager().SetTimer(PushResetTimer, &AMovableGameObject::StopPushing, 1.0f, true);
}

void AMovableGameObject::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Entered : " + OtherActor->GetName());

	ASaaya_UE4Character* Player = Cast<ASaaya_UE4Character>(OtherActor);

	if (Player)
	{
		if (Player->CurrentPlayerType == PlayerType::Player1)
		{
			player1 = Cast<ACharacter>(OtherActor);
			bStartMove = true;
		}
	}
}

void AMovableGameObject::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Exit : " + OtherActor->GetName());

	ASaaya_UE4Character* Player = Cast<ASaaya_UE4Character>(OtherActor);

	if (Player)
	{
		if (Player->CurrentPlayerType == PlayerType::Player1)
		{
			UPlayer1AnimInstance * player1Anim = Cast<UPlayer1AnimInstance>(player1->GetMesh()->GetAnimInstance());
			if(player1Anim)
				player1Anim->IsPushing = false;

			bStartMove = false;
		}
	}
}

void AMovableGameObject::PushKeyDown()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "StartPushing");
	//CurrentPushDirection = direction;
	
	if (player1)
	{
		int playerRotation = (int)(player1->GetActorRotation().Yaw > 0 ? ceil(player1->GetActorRotation().Yaw) : floor(player1->GetActorRotation().Yaw));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FromInt(playerRotation));

		if (playerRotation == 0)
		{
			CurrentPushDirection = PushDirection::BackwardDirection;
		}
		else if(playerRotation == -180)
		{
			CurrentPushDirection = PushDirection::ForwardDirection;
		}
		else if (playerRotation == -90)
		{
			CurrentPushDirection = PushDirection::RightDirection;
		}
		else if (playerRotation == 90)
		{
			CurrentPushDirection = PushDirection::LeftDirection;
		}
	}


	bKeyReady = true;
}

void AMovableGameObject::PushKeyUp()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "StopPushing");

	if (player1)
	{
		UPlayer1AnimInstance * player1Anim = Cast<UPlayer1AnimInstance>(player1->GetMesh()->GetAnimInstance());
		if (player1Anim)
			player1Anim->IsPushing = false;
	}

	bKeyReady = false;
}

