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

// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.GetEventData
struct UGA_Ranged_GenericDamage_C_GetEventData_Params
{
	struct FGameplayTag                                EventTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          GameplayEventData;                                        // (Parm, OutParm)
};

// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute
struct UGA_Ranged_GenericDamage_C_K2_CommitExecute_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
