// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Saaya_UE4GameMode.h"
#include "Saaya_UE4Character.h"
#include "UObject/ConstructorHelpers.h"

ASaaya_UE4GameMode::ASaaya_UE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
