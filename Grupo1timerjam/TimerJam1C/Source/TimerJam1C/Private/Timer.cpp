// Fill out your copyright notice in the Description page of Project Settings.


#include "Timer.h"


// Sets default values for this component's properties
UTimer::UTimer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTimer::BeginPlay()
{
	Super::BeginPlay();

	FTimerManager& TimerManager = GetWorld()->GetTimerManager();
	FTimerHandle TimerHandle;
	TimerManager.SetTimer(TimerHandle, this, &UTimer::CountDown, 1.f, true, 0);

	// ...
	
}


// Called every frame
void UTimer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTimer::CountDown()
{
	if (Seconds != 0)
	{
		Seconds = Seconds - 1;

	}
	else
	{
		if (Minutes == 0)
		{
			//do some stuff when the timer has finished
		}

		else
		{
			Minutes = Minutes - 1;
			Seconds = 59;
		}
	}
}

