// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerJam1CGameMode.h"
#include "TimerJam1CPlayerController.h"
#include "TimerJam1CCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimerJam1CGameMode::ATimerJam1CGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATimerJam1CPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}