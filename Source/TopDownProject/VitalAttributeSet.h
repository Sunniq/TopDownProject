// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "VitalAttributeSet.generated.h"

/**
 * 
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName)           \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)               \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)               \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class TOPDOWNPROJECT_API UVitalAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, Category = "Health", meta = (ClampMin = 0.f))
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHealth)

        UPROPERTY(BlueprintReadOnly, Category = "Health", meta = (ClampMin = 0.f))
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health)

        UPROPERTY(BlueprintReadOnly, Category = "Mana", meta = (ClampMin = 0.f))
    FGameplayAttributeData MaxMana;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxMana)

        UPROPERTY(BlueprintReadOnly, Category = "Mana", meta = (ClampMin = 0.f))
    FGameplayAttributeData Mana;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Mana)
};
