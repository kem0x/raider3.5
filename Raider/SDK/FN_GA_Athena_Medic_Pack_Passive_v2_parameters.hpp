#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72
struct UGA_Athena_Medic_Pack_Passive_v2_C_Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72
struct UGA_Athena_Medic_Pack_Passive_v2_C_Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.K2_ActivateAbility
struct UGA_Athena_Medic_Pack_Passive_v2_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.K2_OnEndAbility
struct UGA_Athena_Medic_Pack_Passive_v2_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.GetTarget
struct UGA_Athena_Medic_Pack_Passive_v2_C_GetTarget_Params
{
};

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.ClientUpdate
struct UGA_Athena_Medic_Pack_Passive_v2_C_ClientUpdate_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.UpdateBoth
struct UGA_Athena_Medic_Pack_Passive_v2_C_UpdateBoth_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2
struct UGA_Athena_Medic_Pack_Passive_v2_C_ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
