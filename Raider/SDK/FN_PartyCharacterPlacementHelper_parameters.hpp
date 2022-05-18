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

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAccept
struct APartyCharacterPlacementHelper_C_OnPartySuggestionAccept_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionChanged
struct APartyCharacterPlacementHelper_C_OnPartySuggestionChanged_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortPartySuggestion                        FortPartySuggestion;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionRemoved
struct APartyCharacterPlacementHelper_C_OnPartySuggestionRemoved_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionUpdated
struct APartyCharacterPlacementHelper_C_OnPartySuggestionUpdated_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortPartySuggestion                        FortPartySuggestion;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAdded
struct APartyCharacterPlacementHelper_C_OnPartySuggestionAdded_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortPartySuggestion                        FortPartySuggestion;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Refresh Lights
struct APartyCharacterPlacementHelper_C_Refresh_Lights_Params
{
	struct FFortTeamMemberInfo                         Team_Info;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged
struct APartyCharacterPlacementHelper_C_OnPartyDataChanged_Params
{
	struct FFortTeamMemberInfo                         MemberInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites
struct APartyCharacterPlacementHelper_C_CompletedQuestPrerequisites_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby
struct APartyCharacterPlacementHelper_C_IsInLobby_Params
{
	bool                                               IsInLobby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation
struct APartyCharacterPlacementHelper_C_PlayLobbyAnimation_Params
{
	int                                                PartyMemberIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected
struct APartyCharacterPlacementHelper_C_OnLobbyDisconnected_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets
struct APartyCharacterPlacementHelper_C_RefreshWidgets_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets
struct APartyCharacterPlacementHelper_C_InitializeWidgets_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerUnhovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged
struct APartyCharacterPlacementHelper_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved
struct APartyCharacterPlacementHelper_C_OnTeamMemberRemoved_Params
{
	int                                                TeamMemberRemovedInt;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded
struct APartyCharacterPlacementHelper_C_OnTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged
struct APartyCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted
struct APartyCharacterPlacementHelper_C_OnLobbyStarted_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI
struct APartyCharacterPlacementHelper_C_InitializePadUI_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize
struct APartyCharacterPlacementHelper_C_Initialize_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents
struct APartyCharacterPlacementHelper_C_InitializeContextEvents_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerUnselected_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerSelected_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerHovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript
struct APartyCharacterPlacementHelper_C_UserConstructionScript_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay
struct APartyCharacterPlacementHelper_C_ReceiveBeginPlay_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed
struct APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabClosed_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected
struct APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabSelected_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnHotfixApplied
struct APartyCharacterPlacementHelper_C_OnHotfixApplied_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper
struct APartyCharacterPlacementHelper_C_ExecuteUbergraph_PartyCharacterPlacementHelper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Debug_OnFriendLFGRequest__DelegateSignature
struct APartyCharacterPlacementHelper_C_Debug_OnFriendLFGRequest__DelegateSignature_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
