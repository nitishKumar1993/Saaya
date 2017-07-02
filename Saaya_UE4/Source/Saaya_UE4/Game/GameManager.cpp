// Fill out your copyright notice in the Description page of Project Settings.

#include "GameManager.h"
#include "Players/Saaya_UE4Character.h"
#include "Game/CameraViewSetArea.h"


// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentPlayerID = 1;

	MoveCamera = false;
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

	if (MoveCamera)
	{
		FVector tempLocation1 = m_gameCamera->GetActorLocation();
		FVector tempLocation2 = NextCameraMovePosHandle->GetComponentLocation();
		float Alpha1 = 0.15f;
		FVector finalLocation = FMath::Lerp(tempLocation1, tempLocation2, Alpha1);

		m_gameCamera->SetActorLocation(finalLocation);

		if (FVector::Distance(tempLocation1, tempLocation2) <= 5)
		{
			MoveCamera = false;
		}

		FRotator tempRotation1 = m_gameCamera->GetActorRotation();
		FRotator tempRotation2 = NextCameraMovePosHandle->GetComponentRotation();
		float Alpha2 = 0.15f;
		FRotator finalRotation = FMath::Lerp(tempRotation1, tempRotation2, Alpha2);

		m_gameCamera->SetActorRotation(finalRotation, ETeleportType::TeleportPhysics);
	}
}

void AGameManager::MoveCameraTo(USceneComponent* handleComp)
{
	NextCameraMovePosHandle = handleComp;
	MoveCamera = true;
}


void AGameManager::Switch()
{
	APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	controller->UnPossess();

	ASaaya_UE4Character* CurrentCharacter;

	if (CurrentPlayer)
	{
		ASaaya_UE4Character* CurrentCharacter = Cast<ASaaya_UE4Character>(CurrentPlayer);
		CurrentCharacter->GetMesh()->SetRenderCustomDepth(false);
	}

	CurrentPlayer = (CurrentPlayerID == 1 ? m_player1 : m_player2);

	CurrentCharacter = Cast<ASaaya_UE4Character>(CurrentPlayer);
	if(CurrentCharacter)
		CurrentCharacter->GetMesh()->SetRenderCustomDepth(true);

	controller->Possess(CurrentPlayer);
	CurrentPlayerID = (CurrentPlayerID == 1 ? 2 : 1);

	controller->SetViewTarget(m_gameCamera);

	TArray<AActor*> tempActorsArray;
	CurrentPlayer->GetOverlappingActors(tempActorsArray, TSubclassOf<ACameraViewSetArea>());

	ACameraViewSetArea* tempCameraArea = Cast<ACameraViewSetArea>(tempActorsArray[0]);


	for (int32 b = 0; b < tempActorsArray.Num(); b++)
	{
		ACameraViewSetArea* tempCameraArea = Cast<ACameraViewSetArea>(tempActorsArray[b]);

		if (tempCameraArea)
		{
			AGameManager::MoveCameraTo(tempCameraArea->CameraHandle);
			break;
		}
	}
}


