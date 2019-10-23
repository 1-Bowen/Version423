// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyTeamProject423GameMode.h"
#include "MyTeamProject423HUD.h"
#include "MyTeamProject423Character.h"
#include "UObject/ConstructorHelpers.h"

AMyTeamProject423GameMode::AMyTeamProject423GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyTeamProject423HUD::StaticClass();
}
