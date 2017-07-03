// Fill out your copyright notice in the Description page of Project Settings.

#include "Lamp.h"



ALamp::ALamp()
{
	Light = CreateDefaultSubobject<USceneComponent>(TEXT("Light"));
	Light->SetupAttachment(Root);

	LightColliderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionArea"));
	LightColliderMesh->bGenerateOverlapEvents = true;
	LightColliderMesh->OnComponentBeginOverlap.AddDynamic(this, &ALamp::OnOverlapBegin1);
	LightColliderMesh->SetupAttachment(Light);
	LightColliderMesh->bVisible = false;

	LightSource = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightSource"));
	LightSource->SetupAttachment(Light);
	LightSource->SetRelativeRotation(FRotator(-90, 0, 0));
	LightSource->Intensity = 10000;
	LightSource->InnerConeAngle = 12;
	LightSource->OuterConeAngle = 30;
	LightSource->AttenuationRadius = 1200;
}

void ALamp::OnOverlapBegin1(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Entered : " + OtherActor->GetName());
}

void ALamp::OnOverlapEnd1(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Entered : " + OtherActor->GetName());
}

void ALamp::Toggle()
{

}
