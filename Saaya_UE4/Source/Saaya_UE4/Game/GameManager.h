// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Saaya_UE4.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

UCLASS()
class SAAYA_UE4_API AGameManager : public AActor
{
	GENERATED_BODY()
	
private:	
	// Sets default values for this actor's properties
	AGameManager();

	bool Dead;

	int CurrentPlayerID;

	bool MoveCamera = true;

	USceneComponent* NextCameraMovePosHandle;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = Public_Variables)
		APawn* m_player1;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		APawn* m_player2;

	APawn* CurrentPlayer;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		AActor* m_gameCamera;

	UPROPERTY(EditAnywhere, Category = Public_Variables)
		float CameraSpeed;

	void Switch();

	void MoveCameraTo(USceneComponent* Pos);

};
