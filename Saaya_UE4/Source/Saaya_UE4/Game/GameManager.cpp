// Fill out your copyright notice in the Description page of Project Settings.

#include "GameManager.h"
#include "Players/Saaya_UE4Character.h"


// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentPlayerID = 1;
}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World) {
		World->GetFirstPlayerController()->InputComponent->BindAction("Switch", IE_Pressed, this, &AGameManager::Switch);
	}

	AGameManager::Switch();
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameManager::MoveCameraToPos(USceneComponent* rootObj)
{
	m_gameCamera->SetActorLocation(rootObj->GetComponentLocation());
	m_gameCamera->SetActorRotation(rootObj->GetComponentRotation());
}

void AGameManager::Switch()
{
	APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	controller->UnPossess();
	ASaaya_UE4Character* CurrentCharacter = case<ASaaya_UE4Character>(CurrentPlayer);
	CurrentPlayer = (CurrentPlayerID == 1 ? m_player1 : m_player2);
	controller->Possess(currentPlayer);
	CurrentPlayerID = (CurrentPlayerID == 1 ? 2 : 1);

	controller->SetViewTarget(m_gameCamera);
}


