#pragma once
#include "CM_InventorySlot.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CM_InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CAMMANAGER_API UCM_InventoryComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere) TMap<int, UCM_InventorySlot*> allSlots;

protected:
	virtual void BeginPlay() override;

	void AddSlots(int _id);
	void RemoveSlots(int _id);

public:	
	UCM_InventoryComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void TakeOBJ(ACM_Item* _toAdd);
	void MakeItemAction(int _id);
	void DropOBJ(ACM_Item* _toDrop);
};
