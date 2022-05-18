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

// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// 0x0008 (0x0B38 - 0x0B30)
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                                GT_EventWeaponFire;                                       // 0x0B30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

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
