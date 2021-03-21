#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CM_PlayerMouvement.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CAMMANAGER_API UCM_PlayerMouvement : public UActorComponent
{
	GENERATED_BODY()

private:	
	DECLARE_EVENT(FPlayerMovEvent, FPlayerMovementEvent);
	FPlayerMovementEvent playerMouvementEvent;


	UPROPERTY() FVector targetPos;
	
	UPROPERTY(EditAnywhere, Category = "Mouvement Settings") float minDistanceWithTarget = 1;
	//UPROPERTY(EditAnywhere, Category = "Mouvement Settings") float moveSpeed = .7f;
	UPROPERTY(EditAnywhere, Category = "Mouvement Settings") float rotateSpeed = 1.5f;

	UPROPERTY(EditAnywhere, Category = "Mouvement Clamp") bool useRotateClampX = true;
	UPROPERTY(EditAnywhere, Category = "Mouvement Clamp") float minClampXRotation = -40;
	UPROPERTY(EditAnywhere, Category = "Mouvement Clamp") float maxClampXRotation = 40;

	UPROPERTY(EditAnywhere, Category = "Debug") bool isUseGizmos = true;
	UPROPERTY(EditAnywhere, Category = "Debug") FColor debugTargetPosColor = FColor::Green;
	UPROPERTY(EditAnywhere, Category = "Debug") FColor debugLineColor = FColor::Magenta;

protected:
	virtual void BeginPlay() override;

	void Move(float _deltaTime);
	void Rotate(float _deltaTime);
	void ClampXRotation();

	void DrawGizmos();

public:	
	UCM_PlayerMouvement();
	inline FPlayerMovementEvent& OnPlayerMove() { return playerMouvementEvent; }
	inline void SetTargetPos(FVector _newTargetPos) { targetPos = _newTargetPos; }

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	bool IsTargetReached();
};
