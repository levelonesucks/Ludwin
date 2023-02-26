// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputsFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class STRESS_API UInputsFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	static void flushInputs(const APlayerController* PlayerController);

};
