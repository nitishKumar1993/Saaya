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
#include "InGame/MovableGameObject.h"

ASaaya_UE4Character::ASaaya_UE4Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->bGenerateOverlapEvents = true;
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ASaaya_UE4Character::OnOverlapBegin);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &ASaaya_UE4Character::OnOverlapEnd);
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &ASaaya_UE4Character::OnPlayerHit);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	SelectionIndicatorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SelectionIndicatorMesh"));
	SelectionIndicatorMesh->bGenerateOverlapEvents = false;
	SelectionIndicatorMesh->AttachToComponent(GetCapsuleComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	SelectionIndicatorMesh->SetRelativeLocation(FVector(0, 0, 0));

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ASaaya_UE4Character::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,  "Entered : " + OtherActor->GetName());

	if (OtherActor->GetName().Contains(FString("CameraViewSetArea")) && GameManagerActor != NULL)
	{
		ACameraViewSetArea* cameraViewArea = Cast<ACameraViewSetArea>(OtherActor);

		AGameManager* GameManager = Cast<AGameManager>(GameManagerActor);
		GameManager->MoveCameraToPos(cameraViewArea->CameraHandle);
	}
}

void ASaaya_UE4Character::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Exit : " + OtherActor->GetName());
}

void ASaaya_UE4Character::OnPlayerHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Hit : " + OtherActor->GetName());
}

// Called when the game starts or when spawned
void ASaaya_UE4Character::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASaaya_UE4Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
	if (!IsPlayerMovingForwardBackward)
	{
		UPlayer1AnimInstance * Animation = Cast<UPlayer1AnimInstance>(GetMesh()->GetAnimInstance());

		if (!Animation)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
		}
		else
		{
			Animation->IsInAir = GetCharacterMovement()->IsFalling();
			//Animation->WalkValue = abs(Value);
			if (abs(Value) > 0)
			{
				//Animation->WalkValue = abs(Value);
				Animation->WalkValue = 0.3f;
				IsPlayerMovingRightLeft = true;
			}
			else
			{
				Animation->WalkValue = 0;
				IsPlayerMovingRightLeft = false;
			}
		}

		if (!GetCharacterMovement()->IsFalling())
		{
			// add movement in that direction
			AddMovementInput(FVector(0.f, -1.f, 0.f), Value);
		}
	}
}

void ASaaya_UE4Character::MoveForward(float Value)
{
	if (!IsPlayerMovingRightLeft)
	{
		UPlayer1AnimInstance * Animation = Cast<UPlayer1AnimInstance>(GetMesh()->GetAnimInstance());

		if (!Animation)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
		}
		else
		{
			if (abs(Value) > 0)
			{
				//Animation->WalkValue = abs(Value);
				Animation->WalkValue = 0.3f;
				IsPlayerMovingForwardBackward = true;
			}
			else
			{
				IsPlayerMovingForwardBackward = false;
			}
		}

		if (!GetCharacterMovement()->IsFalling())
		{
			// add movement in that direction
			AddMovementInput(FVector(-1.f, 0.f, 0.f), Value);
		}
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
