#pragma once
#include "ConsomableInfo.h"

#include "CoreMinimal.h"
#include "CM_Item.h"
#include "CM_Potion.generated.h"


UCLASS()
class CAMMANAGER_API ACM_Potion : public ACM_Item
{
	GENERATED_BODY()

protected:

#pragma region Fields

	UPROPERTY(EditAnywhere) FConsomableInfo consomableInfo;

#pragma endregion

public:
	inline FConsomableInfo GetConsomableInfo() { return consomableInfo; }
};
