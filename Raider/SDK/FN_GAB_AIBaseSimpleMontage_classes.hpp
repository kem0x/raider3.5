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

// BlueprintGeneratedClass GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C
// 0x0008 (0x0918 - 0x0910)
class UGAB_AIBaseSimpleMontage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C");
		return ptr;
	}


	void Completed_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_AIBaseSimpleMontage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
