// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyTeamProject423HUD.generated.h"

UCLASS()
class AMyTeamProject423HUD : public AHUD
{
	GENERATED_BODY()

public:
	AMyTeamProject423HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

