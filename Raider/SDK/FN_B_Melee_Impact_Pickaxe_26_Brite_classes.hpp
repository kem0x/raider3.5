#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C
// 0x0034 (0x0C14 - 0x0BE0)
class AB_Melee_Impact_Pickaxe_26_Brite_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        eye_l;                                                    // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        eye_r;                                                    // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillCount;                                                // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowKillThresholdMin;                                     // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowKillThresholdMax;                                     // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HornScaleKillThresholdMin;                                // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HornScaleKillThresholdMax;                                // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_OnProgressiveCosmeticWatchedStatChanged(struct FName* StatName, int* NewValue);
	void UpdateBasedOnKills();
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
