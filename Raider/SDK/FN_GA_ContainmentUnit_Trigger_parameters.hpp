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

// Function GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C.K2_ActivateAbilityFromEvent
struct UGA_ContainmentUnit_Trigger_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C.ExecuteUbergraph_GA_ContainmentUnit_Trigger
struct UGA_ContainmentUnit_Trigger_C_ExecuteUbergraph_GA_ContainmentUnit_Trigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
