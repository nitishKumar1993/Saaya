﻿// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

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
#include "Animation/Player2AnimInstance.h"
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

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

}

void ASaaya_UE4Character::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,  "Entered : " + OtherActor->GetName());

	ASaaya_UE4Character* activeCharacter = Cast<ASaaya_UE4Character>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if ((OtherActor->GetName().Contains(FString("CameraViewSetArea")) && GameManagerActor != NULL) )
	{
		ACameraViewSetArea* cameraViewArea = Cast<ACameraViewSetArea>(OtherActor);

		if (CurrentGameManager)
		{
			if (this == CurrentGameManager->CurrentPlayer)
				CurrentGameManager->MoveCameraTo(cameraViewArea->CameraHandle);
		}
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

	bIsInLight = false;

	bCheckLightingCondition = true;

	CurrentGameManager = Cast<AGameManager>(GameManagerActor);
}

// Called every frame
void ASaaya_UE4Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentGameManager)
	{
		if(CurrentGameManager->CurrentPlayer == this && !CurrentGameManager->GameOver)
			ASaaya_UE4Character::HandleLightDetection();
	}
	else
	{
		CurrentGameManager = Cast<AGameManager>(GameManagerActor);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASaaya_UE4Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings'
	if(CurrentPlayerType == PlayerType::Player1)
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
	if (CurrentPlayerType == PlayerType::Player1)
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
			if (abs((long)Value) > 0)
			{
				//Animation->WalkValue = abs(Value);
				Animation->WalkValue = 0.3f;
			}
			else
			{
				Animation->WalkValue = 0;
			}
		}
	}
	else
	{
		UPlayer2AnimInstance * Animation = Cast<UPlayer2AnimInstance>(GetMesh()->GetAnimInstance());

		if (!Animation)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
		}
		else
		{
			Animation->IsInAir = GetCharacterMovement()->IsFalling();
			//Animation->WalkValue = abs(Value);
			if (abs((long)Value) > 0)
			{
				//Animation->WalkValue = abs(Value);
				Animation->WalkValue = 0.3f;
			}
			else
			{
				Animation->WalkValue = 0;
			}
		}

	}

	FVector moveDir = FVector(0.f, -1.f, 0.f);

	if (!GetCharacterMovement()->IsFalling() && abs(Value) > 0)
	{
		// add movement in that direction
		if (CurrentGameManager != NULL)
		{
			float currentYaw = CurrentGameManager->m_gameCamera->GetActorRotation().Yaw > 0 ? CurrentGameManager->m_gameCamera->GetActorRotation().Yaw : (360 - CurrentGameManager->m_gameCamera->GetActorRotation().Yaw);

			if (currentYaw >= 45 && currentYaw <= 135)
			{
				moveDir = FVector(-1.f, 0.f, 0.f);
			}
			else if (currentYaw >= 135 && currentYaw <= 225)
			{
				moveDir = FVector(0.f, -1.f, 0.f);
			}
			else if (currentYaw >= 225 && currentYaw <= 315)
			{
				moveDir = FVector(1.f, 0.f, 0.f);
			}
			else if ((currentYaw >= 315 && currentYaw <= 360) || (currentYaw >= 0 && currentYaw < 45))
			{
				moveDir = FVector(0.f, 1.f, 0.f);
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Couldnt find GameManager...casting problem may be....");
		}

		AddMovementInput(moveDir, Value);
	}
}

void ASaaya_UE4Character::MoveForward(float Value)
{
	if (CurrentPlayerType == PlayerType::Player1)
	{
		UPlayer1AnimInstance * Animation = Cast<UPlayer1AnimInstance>(GetMesh()->GetAnimInstance());

		if (!Animation)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
		}
		else
		{
			if (abs((long)Value) > 0)
			{
				//Animation->WalkValue = abs(Value);
				Animation->WalkValue = 0.3f;
			}
		}
	}
	else
	{
		UPlayer2AnimInstance * Animation = Cast<UPlayer2AnimInstance>(GetMesh()->GetAnimInstance());

		if (!Animation)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ERROR: Anim Instance not loaded.");
		}
		else
		{
			if (abs((long)Value) > 0)
			{
				//Animation->WalkValue = abs(Value);
				Animation->WalkValue = 0.3f;
			}
		}
	}

	FVector moveDir = FVector(-1.f, 0.f, 0.f);

	if (!GetCharacterMovement()->IsFalling() && abs(Value)  > 0)
	{
		// add movement in that direction
		if (CurrentGameManager != NULL)
		{
			float currentYaw = CurrentGameManager->m_gameCamera->GetActorRotation().Yaw > 0 ? CurrentGameManager->m_gameCamera->GetActorRotation().Yaw : (360 - CurrentGameManager->m_gameCamera->GetActorRotation().Yaw);

			if (currentYaw >= 45 && currentYaw <= 135)
			{
				moveDir = FVector(0.f, 1.f, 0.f);
			}
			else if (currentYaw >= 135 && currentYaw <= 225)
			{
				moveDir = FVector(-1.f, 0.f, 0.f);
			}
			else if (currentYaw >= 225 && currentYaw <= 315)
			{
				moveDir = FVector(0.f, -1.f, 0.f);
			}
			else if ((currentYaw >= 315 && currentYaw <= 360) || (currentYaw >= 0 && currentYaw <= 45))
			{
				moveDir = FVector(1.f, 0.f, 0.f);
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Couldnt find GameManager...casting problem may be....");
		}

		// add movement in that direction
		AddMovementInput(moveDir, Value);
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

void ASaaya_UE4Character::HandleLightDetection()
{
	// If "CheckLightingCondition" is true,
	if (bCheckLightingCondition)
	{
		// Write "bIsInLight" to the screen as a message,
		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, FString::FromInt(bIsInLight));

		// Create a bool that will tell if any light is actually affecting the player or if the player is in any of the lights,
		bool lit = false;

		// [THANKS TO RAMA FOR THE ARTICLE ABOUT THIS! :D] For every light component,
		for (TObjectIterator<ULightComponent> Itr; Itr; ++Itr)
		{
			// THANKS TO N00854180T FOR MAKING THE CODE SO MUCH NEATER 😀 //

			// If this light is enabled (or visible),
			if (!Itr->IsVisible())
				continue;

			// If the light type is not directional,
			if (Itr->GetLightType() == LightType_Directional)
				continue;

			// If the light affects this character's capsule component,
			if (!Itr->AffectsPrimitive(GetCapsuleComponent()))
				continue;

			// If the light is bhidden in the game
			if (Itr->GetAttachmentRoot()->bHiddenInGame)
				continue;

			// If a line trace test from the light's position to the character's position does not hit any actor,
			if (GetWorld()->LineTraceTestByChannel(Itr->GetComponentLocation(), GetActorLocation(), ECC_Visibility, FCollisionQueryParams(true)))
				continue;

			// Draw a Debug Line to show how the light is hitting the player,
			DrawDebugLine(GetWorld(), Itr->GetComponentLocation(), GetActorLocation(), FColor::Yellow);

			// The player is in light, so set "lit" to true.
			lit = true;
		}

		// If "lit",
		if (lit)
		{
			if (CurrentPlayerType == PlayerType::Player2)
			{
				CurrentGameManager->GameOver = true;
			}

			// Set "bIsInLight" to true,
			bIsInLight = true;

			// And prevent "bIsInLight" from being set to false by returning.
			return;
		}

		if (CurrentPlayerType == PlayerType::Player1)
		{
			CurrentGameManager->GameOver = true;
		}

		// Only set to false if "lit" is not equal to true.
		bIsInLight = false;
	}
}
