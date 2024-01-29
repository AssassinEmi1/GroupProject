// Copyright Epic Games, Inc. All Rights Reserved.

#include "GroupProjectGameMode.h"
#include "GroupProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroupProjectGameMode::AGroupProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
