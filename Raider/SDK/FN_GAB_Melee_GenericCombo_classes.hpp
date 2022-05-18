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

// BlueprintGeneratedClass GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C
// 0x0010 (0x0B14 - 0x0B04)
class UGAB_Melee_GenericCombo_C : public UGAB_Melee_Generic_EventGraph_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B08(0x0008) (Transient, DuplicateTransient)
	float                                              OriginalMontagePlayRate;                                  // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C");
		return ptr;
	}


	void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_Melee_GenericCombo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
