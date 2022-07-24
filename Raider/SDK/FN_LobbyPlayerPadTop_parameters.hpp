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

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshChatDisabled
struct ULobbyPlayerPadTop_C_RefreshChatDisabled_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyTypeChanged
struct ULobbyPlayerPadTop_C_OnAthenaReadyTypeChanged_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAthenaPartyMemberReadyType                        ReadyType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaTimeSpentInMatchChanged
struct ULobbyPlayerPadTop_C_OnAthenaTimeSpentInMatchChanged_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaNumAliveChanged
struct ULobbyPlayerPadTop_C_OnAthenaNumAliveChanged_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                NumAlive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.UpdateMicIcon
struct ULobbyPlayerPadTop_C_UpdateMicIcon_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerStoppedTalking
struct ULobbyPlayerPadTop_C_HandlePlayerStoppedTalking_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerMutingChanged
struct ULobbyPlayerPadTop_C_HandlePlayerMutingChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerTalkingChanged
struct ULobbyPlayerPadTop_C_HandlePlayerTalkingChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshAthenaReadyState
struct ULobbyPlayerPadTop_C_RefreshAthenaReadyState_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
struct ULobbyPlayerPadTop_C_OnLobbyPlayerUnhovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
struct ULobbyPlayerPadTop_C_Initialize_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
struct ULobbyPlayerPadTop_C_InitializeContextEvents_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
struct ULobbyPlayerPadTop_C_OnLobbyPlayerHovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
struct ULobbyPlayerPadTop_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
struct ULobbyPlayerPadTop_C_Refresh_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
struct ULobbyPlayerPadTop_C_RefreshPlayerName_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
struct ULobbyPlayerPadTop_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct
struct ULobbyPlayerPadTop_C_Construct_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted
struct ULobbyPlayerPadTop_C_OnLobbyStarted_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
struct ULobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop_Params
{
	struct FUniqueNetIdRepl                            PlayerNetId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsReady;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected
struct ULobbyPlayerPadTop_C_OnLobbyDisconnected_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
struct ULobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
