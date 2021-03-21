#pragma once
#include "CM_Camera.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CM_CameraManager.generated.h"

UCLASS()
class CAMMANAGER_API ACM_CameraManager : public AActor
{
	GENERATED_BODY()

private:
	DECLARE_EVENT(FCamManagerEvent, FCamManagerUpdate);
	FCamManagerUpdate camManagerEvent;

	UPROPERTY() TMap<int, ACM_Camera*> handler;

protected:
	virtual void BeginPlay() override;

public:	
	ACM_CameraManager();
	FCamManagerUpdate& OnCameraManagerUpdate() { return camManagerEvent; }

	virtual void Tick(float DeltaTime) override;
	
	void AddItem(ACM_Camera* _itemToAdd);
	void RemoveItem(ACM_Camera* _itemToRemove);
	void RemoveItem(int _itemID);

	ACM_Camera* Get(int _itemID);
	inline bool IsExist(int _itemID) { return handler.Contains(_itemID); }
};
