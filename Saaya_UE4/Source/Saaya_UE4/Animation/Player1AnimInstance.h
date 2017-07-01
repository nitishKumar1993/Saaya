// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Player1AnimInstance.generated.h"

/**
 * 
 */
UCLASS(transient, Blueprintable, HideCategories = AnimInstance, BlueprintType)
class SAAYA_UE4_API UPlayer1AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	/** Is Moving */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
		bool IsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
		float WalkValue;

	//init and tick
public:

	APawn * OwningPawn;

	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaTimeX) override;
};
