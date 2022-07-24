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

// BlueprintGeneratedClass GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C
// 0x0010 (0x0920 - 0x0910)
class UGAB_FlingerMeleeSwipe_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FName                                       MontageSectionToPlay;                                     // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C");
		return ptr;
	}


	void Completed_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_FlingerMeleeSwipe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
