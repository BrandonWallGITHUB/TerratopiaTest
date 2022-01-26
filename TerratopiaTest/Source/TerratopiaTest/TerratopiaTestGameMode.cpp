// Copyright Epic Games, Inc. All Rights Reserved.

#include "TerratopiaTestGameMode.h"
#include "TerratopiaTestHUD.h"
#include "TerratopiaTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATerratopiaTestGameMode::ATerratopiaTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATerratopiaTestHUD::StaticClass();
}
