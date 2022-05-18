#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InterfaceAIStates.InterfaceAIStates_C
// 0x0000 (0x0028 - 0x0028)
class UInterfaceAIStates_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InterfaceAIStates.InterfaceAIStates_C");
		return ptr;
	}


	void PortalCollision(bool Collide_);
	void PortalFX();
	void PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList);
	void TakerSoulSuckInterrupted();
	void PortalClear();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList);
	void TakerSoulSuckSoundEnd();
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerAttackFSM(bool SuccessfulHit);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void EndTakerSwoopAttack();
	void BeginTakerSwoopAttack();
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void HuskEvadeStart();
	void MantleEnd();
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
