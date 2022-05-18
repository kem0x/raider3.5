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

// Function GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderAttachPawnEvents_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C.ExecuteUbergraph_GAB_ShielderAttachPawnEvents
struct UGAB_ShielderAttachPawnEvents_C_ExecuteUbergraph_GAB_ShielderAttachPawnEvents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
