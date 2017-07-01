// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Game/CameraViewSetArea.h"
#include "Saaya_UE4Character.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class PlayerType : uint8
{
	Player1 	UMETA(DisplayName = "Player1"),
	Player2 	UMETA(DisplayName = "Player2"),
};

UCLASS(config=Game)
class ASaaya_UE4Character : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Called for side to side input */
	void MoveForward(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	FVector NewCameraPos;
	FRotator CurrentCameraRot;

	FRotator LastPlayerDirection;

	ACameraViewSetArea* CurrentViewArea;

	virtual void Jump() override;

	//UVictoryAnimInstance* CurrentAnimIn

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ASaaya_UE4Character();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Public_Variable)
		PlayerType CurrentPlayerType;

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
