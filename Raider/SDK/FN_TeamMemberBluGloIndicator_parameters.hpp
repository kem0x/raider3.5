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

// Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.OnPlayerAccumulatedItemsUpdated
struct UTeamMemberBluGloIndicator_C_OnPlayerAccumulatedItemsUpdated_Params
{
};

// Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.SetPlayer
struct UTeamMemberBluGloIndicator_C_SetPlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerNetId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
