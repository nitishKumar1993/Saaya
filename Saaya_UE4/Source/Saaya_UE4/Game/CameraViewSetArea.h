// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Saaya_UE4.h"
#include "GameFramework/Actor.h"
#include "CameraViewSetArea.generated.h"

UCLASS()
class SAAYA_UE4_API ACameraViewSetArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraViewSetArea();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FRotator DefaultCameraRotation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		USceneComponent* Root;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		UBoxComponent* ViewTrigger;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		USceneComponent* CameraHandle;

	UPROPERTY(BlueprintReadOnly, Category = Public_Variables)
		USceneComponent* CameraDirection;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		float TransitionTime;

	/** Returns Camera handle subobject **/
	FORCEINLINE class USceneComponent* GetCameraHandle() const { return CameraHandle; }

	/** Returns Camera handle subobject **/
	FORCEINLINE class USceneComponent* GetRootComp() const { return Root; }

	/** Returns SideViewCameraComponent subobject **/
	FRotator GetDefaultCameraRotation() { return DefaultCameraRotation; }

};
