#pragma once
#include "ConsomableInfo.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CM_TargetStatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CAMMANAGER_API UCM_TargetStatsComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

#pragma region Event

	DECLARE_EVENT(FStatsUpdate, FStatChangeEvent);
	FStatChangeEvent lifeEqualOrUnderZeroEvent;
	FStatChangeEvent lifeChangeEvent;
	FStatChangeEvent lifeMaxEvent;

	FStatChangeEvent manaEqualOrUnderZeroEvent;
	FStatChangeEvent manaChangeEvent;
	FStatChangeEvent manaMaxEvent;

#pragma endregion

#pragma region Fields

	UPROPERTY(EditAnywhere, Category = "Player Stats") float currentLife;
	UPROPERTY(EditAnywhere, Category = "Player Stats") float maxLife;

	UPROPERTY(EditAnywhere, Category = "Player Stats") float currentMana;
	UPROPERTY(EditAnywhere, Category = "Player Stats") float maxMana;

#pragma endregion

	virtual void BeginPlay() override;

public:	
	UCM_TargetStatsComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

#pragma region Getter / Setter

	//----GETTER----//
	inline float GetMaxLife() { return maxLife; }
	inline float GetMaxMana() { return maxMana; }
	inline float GetCurrentLife() { return currentLife; }
	inline float GetCurrentMana() { return currentMana; }

	inline FStatChangeEvent& OnLifeUnderOrEqualsZero() { return lifeEqualOrUnderZeroEvent; }
	inline FStatChangeEvent& OnLifeChange() { return lifeChangeEvent; }
	inline FStatChangeEvent& OnMaxLife() { return lifeMaxEvent; }
	inline FStatChangeEvent& OnManaUnderOrEqualsZero() { return manaEqualOrUnderZeroEvent; }
	inline FStatChangeEvent& OnManaChange() { return manaChangeEvent; }
	inline FStatChangeEvent& OnManaMax() { return manaMaxEvent; }

	//----Setter----//
	void IncreaseLife(float _lifeToAdd);
	void TakeDamage(float _damageToTake);
	void IncreaseMana(float _manaToAdd);
	void ReduceMana(float _manaToReduce);

#pragma endregion

	void UseConsomable(FConsomableInfo _consomableInfo);

};
