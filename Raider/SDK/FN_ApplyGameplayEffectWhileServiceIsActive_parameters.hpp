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

// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveActivation
struct UApplyGameplayEffectWhileServiceIsActive_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveDeactivation
struct UApplyGameplayEffectWhileServiceIsActive_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveTick
struct UApplyGameplayEffectWhileServiceIsActive_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive
struct UApplyGameplayEffectWhileServiceIsActive_C_ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
