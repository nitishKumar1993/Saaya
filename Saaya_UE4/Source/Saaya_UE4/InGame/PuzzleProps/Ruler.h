// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Saaya_UE4.h"
#include "GameFramework/Actor.h"
#include "Game/GameManager.h"
#include "Ruler.generated.h"

UCLASS()
class SAAYA_UE4_API ARuler : public AActor
{
	GENERATED_BODY()
	
private:
	

public:	
	// Sets default values for this actor's properties
	ARuler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		AActor* GameManagerActor;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		AMatineeActor* MatineeToPlay;

	UFUNCTION()
		void OnCollision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};
