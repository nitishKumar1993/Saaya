// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraViewSetArea.h"


// Sets default values
ACameraViewSetArea::ACameraViewSetArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	RootComponent = Root;

	ViewTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ViewTriggerArea"));
	ViewTrigger->SetWorldScale3D(FVector(1, 1, 1));
	ViewTrigger->AttachToComponent(Root,FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	ViewTrigger->SetRelativeScale3D(FVector(0.2f, 1, 1));
	
	CameraHandle = CreateDefaultSubobject<USceneComponent>(TEXT("CameraHandle"));
	CameraHandle->AttachToComponent(Root, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	CameraHandle->SetRelativeLocation(FVector(50, 0, 30));
	CameraHandle->SetRelativeRotation(FRotator(180, -30, 180));

	CameraDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("CameraDirection"));
	CameraDirection->AttachToComponent(CameraHandle, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	CameraDirection->SetRelativeLocation(FVector(0, 0, 0));

}

// Called when the game starts or when spawned
void ACameraViewSetArea::BeginPlay()
{
	Super::BeginPlay();

	DefaultCameraRotation = CameraHandle->GetComponentRotation();
}

// Called every frame
void ACameraViewSetArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

