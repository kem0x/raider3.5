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

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateHotfixableBonusEventTitle
struct ULobbyPlayerPadBottom_C_UpdateHotfixableBonusEventTitle_Params
{
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBonusXPValue
struct ULobbyPlayerPadBottom_C_GetBonusXPValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateIsFriendAndLocal
struct ULobbyPlayerPadBottom_C_UpdateIsFriendAndLocal_Params
{
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBattlePassInfo
struct ULobbyPlayerPadBottom_C_GetBattlePassInfo_Params
{
	int                                                BattlePassSelfXpBoost;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                BattlePassFriendXpBoost;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasBattlePass;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Refresh
struct ULobbyPlayerPadBottom_C_Refresh_Params
{
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Set Team Member Info
struct ULobbyPlayerPadBottom_C_Set_Team_Member_Info_Params
{
	struct FFortTeamMemberInfo                         New_Team_Member_Info;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Construct
struct ULobbyPlayerPadBottom_C_Construct_Params
{
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Destruct
struct ULobbyPlayerPadBottom_C_Destruct_Params
{
};

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.ExecuteUbergraph_LobbyPlayerPadBottom
struct ULobbyPlayerPadBottom_C_ExecuteUbergraph_LobbyPlayerPadBottom_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
