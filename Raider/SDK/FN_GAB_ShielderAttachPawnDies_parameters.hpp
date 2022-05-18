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

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Completed_E6AA24FA40A80C2024C99E9EDD469296
struct UGAB_ShielderAttachPawnDies_C_Completed_E6AA24FA40A80C2024C99E9EDD469296_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Cancelled_E6AA24FA40A80C2024C99E9EDD469296
struct UGAB_ShielderAttachPawnDies_C_Cancelled_E6AA24FA40A80C2024C99E9EDD469296_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Triggered_E6AA24FA40A80C2024C99E9EDD469296
struct UGAB_ShielderAttachPawnDies_C_Triggered_E6AA24FA40A80C2024C99E9EDD469296_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderAttachPawnDies_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.ExecuteUbergraph_GAB_ShielderAttachPawnDies
struct UGAB_ShielderAttachPawnDies_C_ExecuteUbergraph_GAB_ShielderAttachPawnDies_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
