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

// BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
// 0x0028 (0x0A80 - 0x0A58)
class UGA_Constructor_HammerHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A58(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_RequiredTags;                                          // 0x0A60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent** AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
