// Copyright Epic Games, Inc. All Rights Reserved.

#include "fps415GGEGameMode.h"
#include "fps415GGECharacter.h"
#include "UObject/ConstructorHelpers.h"

Afps415GGEGameMode::Afps415GGEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
