#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GAB_MimicMelee.GAB_MimicMelee_C.GameplayEffectContainerApplied
struct UGAB_MimicMelee_C_GameplayEffectContainerApplied_Params
{
	struct FGameplayAbilityTargetDataHandle*           Target_Data;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_MimicMelee.GAB_MimicMelee_C.ExecuteUbergraph_GAB_MimicMelee
struct UGAB_MimicMelee_C_ExecuteUbergraph_GAB_MimicMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
