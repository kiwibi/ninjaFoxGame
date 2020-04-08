// Fill out your copyright notice in the Description page of Project Settings.


#include "SplitScreenController.h"

void USplitScreenController::DisableSplitScreen(AActor* Context, bool Disable)
{
	if (Context)
	{
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(Disable);
	}
}
