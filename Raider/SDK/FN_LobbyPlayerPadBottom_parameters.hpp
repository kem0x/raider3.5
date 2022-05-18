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

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Refresh
struct ULobbyPlayerPadBottom_C_Refresh_Params
{
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Set Team Member Info
struct ULobbyPlayerPadBottom_C_Set_Team_Member_Info_Params
{
	struct FFortTeamMemberInfo                         New_Team_Member_Info;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
