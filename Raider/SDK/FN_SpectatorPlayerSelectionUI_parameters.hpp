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

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.SetFollowedPlayerButton
struct USpectatorPlayerSelectionUI_C_SetFollowedPlayerButton_Params
{
	class UButton*                                     NewButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.FindPlayerWithPressedButton
struct USpectatorPlayerSelectionUI_C_FindPlayerWithPressedButton_Params
{
	class AFortPlayerState*                            Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.AddPlayerElement
struct USpectatorPlayerSelectionUI_C_AddPlayerElement_Params
{
	class AFortPlayerStateAthena*                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.Construct
struct USpectatorPlayerSelectionUI_C_Construct_Params
{
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnPlayerButtonPressed
struct USpectatorPlayerSelectionUI_C_OnPlayerButtonPressed_Params
{
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnFollowedPlayerChanged
struct USpectatorPlayerSelectionUI_C_OnFollowedPlayerChanged_Params
{
	class AFortPlayerControllerSpectating*             SpectatorPC;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerState*                            NewFollowedPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameRelevant
struct USpectatorPlayerSelectionUI_C_PlayerBecameRelevant_Params
{
	class AFortPlayerState*                            NewlyRelevantPlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameIrrelevant
struct USpectatorPlayerSelectionUI_C_PlayerBecameIrrelevant_Params
{
	class AFortPlayerState*                            NewlyRelevantPlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.ExecuteUbergraph_SpectatorPlayerSelectionUI
struct USpectatorPlayerSelectionUI_C_ExecuteUbergraph_SpectatorPlayerSelectionUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
