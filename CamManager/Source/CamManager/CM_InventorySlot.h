#pragma once
#include "CM_Potion.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CM_InventorySlot.generated.h"



UCLASS()
class CAMMANAGER_API UCM_InventorySlot : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere) TArray<ACM_Item*> allObjectsInside;
	UPROPERTY(VisibleAnywhere) FConsomableInfo consomableInfo;
	UPROPERTY() bool isConsumable = false;

public:

	void AddObj(ACM_Item* _toAdd);
	void RemoveObj();

	void MakeItemAction(AActor* _owner);
	void InitObj(ACM_Item* _toInit);

	int GetNumberOfItemInSlots() { return allObjectsInside.Num(); }
};
