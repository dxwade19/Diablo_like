#include "CM_TargetStatsComponent.h"


#pragma region Constructor

UCM_TargetStatsComponent::UCM_TargetStatsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

#pragma endregion

#pragma region UE_Methods

void UCM_TargetStatsComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UCM_TargetStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

#pragma endregion


#pragma region Setter

void UCM_TargetStatsComponent::IncreaseLife(float _lifeToAdd)
{
	currentLife += _lifeToAdd;
	lifeChangeEvent.Broadcast();

	if (currentLife >= maxLife)
	{
		currentLife = maxLife;
		lifeMaxEvent.Broadcast();
	}
		
}

void UCM_TargetStatsComponent::TakeDamage(float _damageToTake)
{
	currentLife -= _damageToTake;
	lifeChangeEvent.Broadcast();

	if (currentLife <= 0)
		lifeEqualOrUnderZeroEvent.Broadcast();
}


void UCM_TargetStatsComponent::IncreaseMana(float _manaToAdd)
{
	currentMana += _manaToAdd;
	manaChangeEvent.Broadcast();

	if (currentMana >= maxMana)
	{
		currentMana = maxMana;
		manaMaxEvent.Broadcast();
	}
}

void UCM_TargetStatsComponent::ReduceMana(float _manaToReduce)
{
	currentMana -= _manaToReduce;
	manaChangeEvent.Broadcast();

	if (currentMana <= 0)
		manaEqualOrUnderZeroEvent.Broadcast();
}

#pragma endregion

#pragma region Consomable

void UCM_TargetStatsComponent::UseConsomable(FConsomableInfo _consomableInfo)
{
	if (_consomableInfo.GetLifeEffect() == EConsomableEffect::Additive)
		IncreaseLife(_consomableInfo.GetLifeToAdd());
	else TakeDamage(_consomableInfo.GetLifeToAdd());

	if (_consomableInfo.GetManaEffect() == EConsomableEffect::Additive)
		IncreaseMana(_consomableInfo.GetManaRoAdd());
	else ReduceMana(_consomableInfo.GetManaRoAdd());
}

#pragma endregion
