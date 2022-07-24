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

// Function GA_AirStrike.GA_AirStrike_C.SetupAbility
struct UGA_AirStrike_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GA_AirStrike.GA_AirStrike_C.GetCustomAbilitySourceTransform
struct UGA_AirStrike_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_AirStrike.GA_AirStrike_C.GetAttributeValue
struct UGA_AirStrike_C_GetAttributeValue_Params
{
};

// Function GA_AirStrike.GA_AirStrike_C.Completed_48B4C8FD48399FA7A5F50D96227846DD
struct UGA_AirStrike_C_Completed_48B4C8FD48399FA7A5F50D96227846DD_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_AirStrike.GA_AirStrike_C.Cancelled_48B4C8FD48399FA7A5F50D96227846DD
struct UGA_AirStrike_C_Cancelled_48B4C8FD48399FA7A5F50D96227846DD_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_AirStrike.GA_AirStrike_C.Triggered_48B4C8FD48399FA7A5F50D96227846DD
struct UGA_AirStrike_C_Triggered_48B4C8FD48399FA7A5F50D96227846DD_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_AirStrike.GA_AirStrike_C.DidNotSpawn_6C69A64746D8F71A616C83A25170911C
struct UGA_AirStrike_C_DidNotSpawn_6C69A64746D8F71A616C83A25170911C_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_AirStrike.GA_AirStrike_C.Success_6C69A64746D8F71A616C83A25170911C
struct UGA_AirStrike_C_Success_6C69A64746D8F71A616C83A25170911C_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_AirStrike.GA_AirStrike_C.K2_ActivateAbility
struct UGA_AirStrike_C_K2_ActivateAbility_Params
{
};

// Function GA_AirStrike.GA_AirStrike_C.ExecuteUbergraph_GA_AirStrike
struct UGA_AirStrike_C_ExecuteUbergraph_GA_AirStrike_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
