// Copyright Epic Games, Inc. All Rights Reserved.

#include "niceGameGameMode.h"
#include "niceGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AniceGameGameMode::AniceGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
