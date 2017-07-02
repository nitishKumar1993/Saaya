// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Saaya_UE4.h"
#include "GameFramework/Actor.h"
#include "MovableGameObject.generated.h"


enum PushDirection
{
	ForwardDirection ,
	BackwardDirection,
	RightDirection,
	LeftDirection
};


UCLASS()
class SAAYA_UE4_API AMovableGameObject : public AActor
{
	GENERATED_BODY()
	
private:	
	// Sets default values for this actor's properties
	AMovableGameObject();

	bool bStartMove;
	bool bKeyReady;

	PushDirection CurrentPushDirection;
	
	FTimerHandle PushResetTimer;

	ACharacter* player1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		USceneComponent* Root;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere)
		UBoxComponent* TriggerComp;

	UPROPERTY(EditAnywhere, Category = Public_Variable)
		float PushSpeed;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void PushKeyDown();

	void PushKeyUp();
};
