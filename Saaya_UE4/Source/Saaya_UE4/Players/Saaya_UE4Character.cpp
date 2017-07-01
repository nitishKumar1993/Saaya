// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Saaya_UE4Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EngineUtils.h"
#include "Game/GameManager.h"
#include "Game/CameraViewSetArea.h"
#include "Animation/Player1AnimInstance.h"

ASaaya_UE4Character::ASaaya_UE4Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->bGenerateOverlapEvents = true;
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ASaaya_UE4Character::OnOverlapBegin);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->RelativeRotation = FRotator(0.f,180.f,0.f);

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	NewCameraPos = FVector(0, 0, 0);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ASaaya_UE4Character::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	CurrentViewArea = Cast<ACameraViewSetArea>(OtherActor);
	/*if (CurrentViewArea)
	{
		SideViewCameraComponent->SetWorldRotation(CurrentViewArea->GetCameraHandle()->GetComponentRotation());
		SideViewCameraComponent->SetWorldLocation(CurrentViewArea->GetCameraHandle()->GetComponentLocation());
		//LastPlayerDirection = FRotationMatrix::MakeFromX(GetCapsuleComponent()->GetComponentLocation() - CurrentViewArea->GetCameraHandle()->GetComponentLocation()).Rotator();
	}*/
}


// Called when the game starts or when spawned
void ASaaya_UE4Character::BeginPlay()
{
	Super::BeginPlay();

/*	//Find and set GameManager
	for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		if (ActorItr->GetName().Contains(FString("GameManager")))
		{
			m_gameManager = *ActorItr;

			AGameManager* actorClass = Cast<AGameManager>(m_gameManager);

			actorClass->SetPlayer1(this);
		}
	}*/

}

// Called every frame
void ASaaya_UE4Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentViewArea)
	{
		//FRotator PlayerDirection = FRotationMatrix::MakeFromX(GetCapsuleComponent()->GetComponentLocation() - CurrentViewArea->GetCameraHandle()->GetComponentLocation()).Rotator();
		//SetActorLocation(actorLoc); 
		//SetActorRotation(PlayerRot);

		//SideViewCameraComponent->SetWorldLocation(CurrentViewArea->GetCameraHandle()->GetComponentLocation());
		//SideViewCameraComponent->SetWorldRotation((PlayerDirection ));
		//SideViewCameraComponent->AddWorldRotation(FRotator(0, 0, (PlayerDirection - LastPlayerDirection).Roll));
		SideViewCameraComponent->SetWorldRotation(CurrentViewArea->GetCameraHandle()->GetComponentRotation());
		SideViewCameraComponent->SetWorldLocation(CurrentViewArea->GetCameraHandle()->GetComponentLocation());

		//LastPlayerDirection = PlayerDirection;
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASaaya_UE4Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASaaya_UE4Character::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASaaya_UE4Character::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &ASaaya_UE4Character::MoveForward);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ASaaya_UE4Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ASaaya_UE4Character::TouchStopped);
}

void ASaaya_UE4Character::Jump()
{
	bPressedJump = true;
	JumpKeyHoldTime = 0.0f;

	UPlayer1AnimInstance * Animation = Cast<UPlayer1AnimInstance>(GetMesh()->GetAnimInstance());

	if (!Animation)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
	}
}

void ASaaya_UE4Character::MoveRight(float Value)
{
	UPlayer1AnimInstance * Animation = Cast<UPlayer1AnimInstance>(GetMesh()->GetAnimInstance());
	
	if (!Animation)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
	}
	else 
	{
		Animation->IsInAir = GetCharacterMovement()->IsFalling();
		Animation->WalkValue = abs(Value);
	}


	if (!GetCharacterMovement()->IsFalling())
	{
		// add movement in that direction
		AddMovementInput(FVector(0.f, -1.f, 0.f), Value);
	}
}

void ASaaya_UE4Character::MoveForward(float Value)
{
	UPlayer1AnimInstance * Animation = Cast<UPlayer1AnimInstance>(GetMesh()->GetAnimInstance());

	if (!Animation)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
	}
	else
	{
		if (abs(Value) > 0)
			Animation->WalkValue = abs(Value);
	}
	

	if (!GetCharacterMovement()->IsFalling())
	{
		// add movement in that direction
		AddMovementInput(FVector(-1.f, 0.f, 0.f), Value);
	}
}

void ASaaya_UE4Character::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ASaaya_UE4Character::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}
