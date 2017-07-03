// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Saaya_UE4.h"
#include "InGame/PossesableGameObject.h"
#include "InGame/GameLight.h"
#include "Lamp.generated.h"

/**
 * 
 */
UCLASS()
class SAAYA_UE4_API ALamp : public APossesableGameObject
{
	GENERATED_BODY()

protected:
	
	void Init();

public:
	ALamp();

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		USceneComponent* Light;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		UStaticMeshComponent* LightColliderMesh;
	
	UPROPERTY(EditAnywhere, Category = Public_Variables)
		USpotLightComponent* LightSource;

	Possesabletype CurrentType;

	void Toggle();

	UFUNCTION()
		void OnOverlapBegin1(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd1(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
};
