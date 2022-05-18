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

// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility
struct UGAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
