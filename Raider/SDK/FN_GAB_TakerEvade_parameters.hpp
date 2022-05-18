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

// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_CanActivateAbility
struct UGAB_TakerEvade_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.Completed_5F3AF706421290A95C9D1A948B671F8E
struct UGAB_TakerEvade_C_Completed_5F3AF706421290A95C9D1A948B671F8E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.Cancelled_5F3AF706421290A95C9D1A948B671F8E
struct UGAB_TakerEvade_C_Cancelled_5F3AF706421290A95C9D1A948B671F8E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.Triggered_5F3AF706421290A95C9D1A948B671F8E
struct UGAB_TakerEvade_C_Triggered_5F3AF706421290A95C9D1A948B671F8E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_ActivateAbility
struct UGAB_TakerEvade_C_K2_ActivateAbility_Params
{
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_OnEndAbility
struct UGAB_TakerEvade_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.OnQueryFinishedEvent
struct UGAB_TakerEvade_C_OnQueryFinishedEvent_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.ExecuteUbergraph_GAB_TakerEvade
struct UGAB_TakerEvade_C_ExecuteUbergraph_GAB_TakerEvade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
