#pragma once
#include "Components/BoxComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CM_Item.generated.h"


UCLASS(ABSTRACT)
class CAMMANAGER_API ACM_Item : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere) int itemID = 0;
	UPROPERTY(VisibleAnywhere) bool isInInventory = false;
	UPROPERTY(VisibleAnywhere) UBoxComponent* box;

	virtual void BeginPlay() override;

public:	
	ACM_Item();
	virtual void Tick(float DeltaTime) override;

	//----GETTER----//
	inline int GetItemID() { return itemID; };
	inline bool IsItemIsInInventory() { return isInInventory; }

	//----SETTER----//
	inline void SetItemID(int _newID) { itemID = _newID; }
	inline void SetItemInInvenetory(bool _status) { isInInventory = _status; }


	UFUNCTION() void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
