// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AbilityTypes.h"
#include "GameplayAbilityBase.generated.h"

/**
 * 
 */
UCLASS()
class ABILITYGAME_API UGameplayAbilityBase : public UGameplayAbility
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
	UMaterialInstance* UIMaterial;
	
	UFUNCTION(BlueprintCallable, Category = "Ability")
	FGameplayAbilityInfo GetAbilityInfo();


};
