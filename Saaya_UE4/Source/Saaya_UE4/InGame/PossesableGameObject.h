// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Saaya_UE4.h"
#include "GameFramework/Actor.h"
#include "PossesableGameObject.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class Possesabletype : uint8
{
	Crane 		UMETA(DisplayName = "Crane"),
	Lamp 		UMETA(DisplayName = "Lamp"),
};


UCLASS()
class SAAYA_UE4_API APossesableGameObject : public AActor
{
	GENERATED_BODY()
	
private:	

	ACharacter* player2;

	bool PlayerInside;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this actor's properties
	APossesableGameObject();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Public_Variables)
	Possesabletype	CurrentPossableRType;
	
	UPROPERTY(EditAnywhere)
		USceneComponent* Root;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere)
		UBoxComponent* TriggerComp;
	
	void PossesThis();

	void PossesKeyDown();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
