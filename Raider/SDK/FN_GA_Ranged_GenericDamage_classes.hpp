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

// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// 0x0008 (0x0950 - 0x0948)
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                                GT_EventWeaponFire;                                       // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C");
		return ptr;
	}


	void GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData);
	void K2_CommitExecute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
