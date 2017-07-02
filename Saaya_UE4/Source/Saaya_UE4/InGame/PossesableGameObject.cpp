// Fill out your copyright notice in the Description page of Project Settings.

#include "PossesableGameObject.h"
#include "Players/Saaya_UE4Character.h"


// Sets default values
APossesableGameObject::APossesableGameObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComp->SetupAttachment(Root);

	TriggerComp = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
	TriggerComp->bGenerateOverlapEvents = true;
	TriggerComp->OnComponentBeginOverlap.AddDynamic(this, &APossesableGameObject::OnOverlapBegin);
	TriggerComp->OnComponentEndOverlap.AddDynamic(this, &APossesableGameObject::OnOverlapEnd);
	TriggerComp->SetupAttachment(MeshComp);

}

// Called when the game starts or when spawned
void APossesableGameObject::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World) {
		World->GetFirstPlayerController()->InputComponent->BindAction("Push", IE_Pressed, this, &APossesableGameObject::PossesKeyDown);
		World->GetFirstPlayerController()->InputComponent->BindAction("Push", IE_Released, this, &APossesableGameObject::PossesKeyUp);
	}
}

// Called every frame
void APossesableGameObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APossesableGameObject::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ASaaya_UE4Character* Player = Cast<ASaaya_UE4Character>(OtherActor);

	if (Player)
	{
		if (Player->CurrentPlayerType == PlayerType::Player2)
		{
			player2 = Cast<ACharacter>(OtherActor);

			MeshComp->SetRenderCustomDepth(true);
		}
	}

}

void APossesableGameObject::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Exit : " + OtherActor->GetName());

	ASaaya_UE4Character* Player = Cast<ASaaya_UE4Character>(OtherActor);
	if (Player)
	{
		if (Player->CurrentPlayerType == PlayerType::Player2)
		{
			MeshComp->SetRenderCustomDepth(false);
		}
	}
}

void APossesableGameObject::PossesKeyUp()
{

}

void APossesableGameObject::PossesKeyDown()
{

}


void APossesableGameObject::PossesThis()
{

}



