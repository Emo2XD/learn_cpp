// Copyright Epic Games, Inc. All Rights Reserved.

#include "learn_cppGameMode.h"
#include "learn_cppCharacter.h"
#include "UObject/ConstructorHelpers.h"

Alearn_cppGameMode::Alearn_cppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
