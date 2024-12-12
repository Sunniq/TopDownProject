// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "DamageAttributeSet.generated.h"

/**
 * 
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName)           \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)               \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)               \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class TOPDOWNPROJECT_API UDamageAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
    UPROPERTY(BlueprintReadOnly, meta = (ClampMin = 0.f))
    FGameplayAttributeData Damage;
    ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Damage)

        UPROPERTY(BlueprintReadOnly, meta = (ClampMin = 0.f))
    FGameplayAttributeData Resistance;
    ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Resistance)

        UPROPERTY(BlueprintReadOnly, meta = (ClampMin = 0.f))
    FGameplayAttributeData MagicPower;
    ATTRIBUTE_ACCESSORS(UDamageAttributeSet, MagicPower)
};
