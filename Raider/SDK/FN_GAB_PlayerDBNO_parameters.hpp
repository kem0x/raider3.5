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

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
struct UGAB_PlayerDBNO_C_InitializeDeathHitDirection_Params
{
	struct FGameplayEventData                          EventHitData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Completed_F61877974D2CED083195EF8A8CDA60C2
struct UGAB_PlayerDBNO_C_Completed_F61877974D2CED083195EF8A8CDA60C2_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Cancelled_F61877974D2CED083195EF8A8CDA60C2
struct UGAB_PlayerDBNO_C_Cancelled_F61877974D2CED083195EF8A8CDA60C2_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Triggered_F61877974D2CED083195EF8A8CDA60C2
struct UGAB_PlayerDBNO_C_Triggered_F61877974D2CED083195EF8A8CDA60C2_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
struct UGAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
struct UGAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
