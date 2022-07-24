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

// BlueprintGeneratedClass GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C
// 0x0008 (0x0918 - 0x0910)
class UGAB_ShielderTeleportOut_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C");
		return ptr;
	}


	void Completed_04B647A04AB380AFDCCBD9B139883995(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_04B647A04AB380AFDCCBD9B139883995(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_04B647A04AB380AFDCCBD9B139883995(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_ShielderTeleportOut(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
