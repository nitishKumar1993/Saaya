// Fill out your copyright notice in the Description page of Project Settings.

#include "GameLight.h"


// Sets default values
AGameLight::AGameLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	ColliderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionArea"));
	ColliderMesh->SetupAttachment(Root);
	ColliderMesh->bVisible = false;

	LightSource = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightSource"));
	LightSource->SetupAttachment(Root);
	LightSource->SetRelativeRotation(FRotator(-90, 0, 0));
	LightSource->Intensity = 10000;
	LightSource->InnerConeAngle = 12;
	LightSource->OuterConeAngle = 30;
	LightSource->AttenuationRadius = 1200;
}

// Called when the game starts or when spawned
void AGameLight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

