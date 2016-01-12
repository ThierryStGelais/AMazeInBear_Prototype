// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "aMazeInBear_prot.h"
#include "aMazeInBear_protGameMode.h"
#include "aMazeInBear_protCharacter.h"

AaMazeInBear_protGameMode::AaMazeInBear_protGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
