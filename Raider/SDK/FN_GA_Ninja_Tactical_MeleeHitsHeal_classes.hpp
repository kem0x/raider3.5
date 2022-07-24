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

// BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
// 0x007E (0x0A58 - 0x09DA)
class UGA_Ninja_Tactical_MeleeHitsHeal_C : public UGAT_GenericTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x09DA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x09E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NinjaAbility;                                          // 0x09F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Ninja_Tactical_MeleeHitsHeal;                          // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Melee;                                                 // 0x0A20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MeleeCount;                                               // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHitSwingTime;                                         // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseHealValue;                                            // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalHealValue;                                           // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DataRowName;                                              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
