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

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Completed_B576F3AF456E16FEAB9BCCB307590576
struct UGAB_ShielderTeleportIn_C_Completed_B576F3AF456E16FEAB9BCCB307590576_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Cancelled_B576F3AF456E16FEAB9BCCB307590576
struct UGAB_ShielderTeleportIn_C_Cancelled_B576F3AF456E16FEAB9BCCB307590576_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Triggered_B576F3AF456E16FEAB9BCCB307590576
struct UGAB_ShielderTeleportIn_C_Triggered_B576F3AF456E16FEAB9BCCB307590576_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderTeleportIn_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.ExecuteUbergraph_GAB_ShielderTeleportIn
struct UGAB_ShielderTeleportIn_C_ExecuteUbergraph_GAB_ShielderTeleportIn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
