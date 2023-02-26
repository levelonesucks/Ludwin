// Fill out your copyright notice in the Description page of Project Settings.


#include "InputsFunctionLibrary.h"
#include "GameFramework/PlayerInput.h"

void UInputsFunctionLibrary::flushInputs(const APlayerController* PlayerController)
{
    PlayerController->PlayerInput->FlushPressedKeys();
}
