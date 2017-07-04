// Fill out your copyright notice in the Description page of Project Settings.

#include "Ruler.h"
#include "Game/GameManager.h"
#include "Matinee/MatineeActor.h"

// Sets default values
ARuler::ARuler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComp->SetupAttachment(RootComp);
	MeshComp->bGenerateOverlapEvents = true;
	MeshComp->OnComponentHit.AddDynamic(this,&ARuler::OnCollision);
}

// Called when the game starts or when spawned
void ARuler::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARuler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARuler::OnCollision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (GameManagerActor)
	{
		AGameManager* gameManager = Cast<AGameManager>(GameManagerActor);
		if (gameManager->CurrentPlayer == OtherActor)
		{
		//	MatineeToPlay->Play();
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "GameManager Missing");
	}
}

