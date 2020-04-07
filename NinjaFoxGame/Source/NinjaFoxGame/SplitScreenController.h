// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SplitScreenController.generated.h"

/**
 * 
 */
UCLASS()
class NINJAFOXGAME_API USplitScreenController : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


		UFUNCTION(BlueprintCallable, Category = "Viewport")
		static void DisableSplitScreen(AActor* Context, bool Disable);
};
