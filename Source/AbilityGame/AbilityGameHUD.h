// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AbilityGameHUD.generated.h"

UCLASS()
class AAbilityGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAbilityGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

