// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEWeaponSystemDemoGameMode.h"
#include "UEWeaponSystemDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEWeaponSystemDemoGameMode::AUEWeaponSystemDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacterNGNew"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
