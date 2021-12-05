// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZeroGameMode.h"
#include "ZeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroGameMode::AZeroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
