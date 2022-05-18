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

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C
// 0x0020 (0x0B90 - 0x0B70)
class AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B70(0x0008) (Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    MeshMID;                                                  // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Kills;                                                    // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B84(0x0004) MISSED OFFSET
	class UParticleSystem*                             JingleTimeFX;                                             // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C");
		return ptr;
	}


	void TurnOnLights(float Kills);
	void UserConstructionScript();
	void UpdateBasedOnKills();
	void K2_OnProgressiveCosmeticWatchedStatChanged(struct FName* StatName, int* NewValue);
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
