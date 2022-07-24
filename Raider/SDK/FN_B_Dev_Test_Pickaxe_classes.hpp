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

// BlueprintGeneratedClass B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C
// 0x0028 (0x0C08 - 0x0BE0)
class AB_Dev_Test_Pickaxe_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE0(0x0008) (Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Kill;                                                     // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxKills;                                                 // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillGlowThreshold;                                        // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillHornThreshold;                                        // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           NewVar_1;                                                 // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_OnProgressiveCosmeticWatchedStatChanged(struct FName* StatName, int* NewValue);
	void ExecuteUbergraph_B_Dev_Test_Pickaxe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
