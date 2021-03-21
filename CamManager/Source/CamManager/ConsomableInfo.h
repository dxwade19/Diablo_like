#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConsomableInfo.generated.h"


UENUM(BlueprintType)
enum class EConsomableEffect : uint8
{
	Additive,
	Substractive,
};


USTRUCT(BlueprintType)
struct CAMMANAGER_API FConsomableInfo
{
	GENERATED_BODY()
	
private:

	UPROPERTY(EditAnywhere, Category = "Value") int numberOfUse;
	UPROPERTY(EditAnywhere, Category = "Value") EConsomableEffect lifeConsombleType;
	UPROPERTY(EditAnywhere, Category = "Value") float lifeValue;
	UPROPERTY(EditAnywhere, Category = "Value") EConsomableEffect manaConsombleType;
	UPROPERTY(EditAnywhere, Category = "Value") float manaValue;
	

public:

	//----GETTER----//
	inline float GetLifeToAdd() { return lifeValue; }
	inline float GetManaRoAdd() { return manaValue; }
	inline int GetNumberOfUse() { return numberOfUse; }
	inline EConsomableEffect GetLifeEffect() { return lifeConsombleType; }
	inline EConsomableEffect GetManaEffect() { return manaConsombleType; }
	
	inline void SetNumberOfUse(int _newNumber) { numberOfUse = _newNumber; }
};
