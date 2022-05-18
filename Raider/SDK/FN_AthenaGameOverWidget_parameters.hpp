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

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_CancelMatchmaking
struct UAthenaGameOverWidget_C_Handle_CancelMatchmaking_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_Matchmake
struct UAthenaGameOverWidget_C_Handle_Matchmake_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ToggleMap
struct UAthenaGameOverWidget_C_Handle_ToggleMap_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InGameMatchmakingComplete
struct UAthenaGameOverWidget_C_InGameMatchmakingComplete_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetViewModel
struct UAthenaGameOverWidget_C_SetViewModel_Params
{
	class UAthenaPlayerViewModel*                      ViewModel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.CanFollowNextOrPreviousTeammate
struct UAthenaGameOverWidget_C_CanFollowNextOrPreviousTeammate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetKillersName
struct UAthenaGameOverWidget_C_SetKillersName_Params
{
	struct FFortPlayerDeathReport                      FortPlayerDeathReport;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlayerOrTeamWon
struct UAthenaGameOverWidget_C_OnPlayerOrTeamWon_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ViewMatchStats
struct UAthenaGameOverWidget_C_Handle_ViewMatchStats_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReportPlayer
struct UAthenaGameOverWidget_C_Handle_ReportPlayer_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputSetup
struct UAthenaGameOverWidget_C_InputSetup_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowPreviousTeammate
struct UAthenaGameOverWidget_C_Handle_FollowPreviousTeammate_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowNextTeammate
struct UAthenaGameOverWidget_C_Handle_FollowNextTeammate_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputRefresh
struct UAthenaGameOverWidget_C_InputRefresh_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReturnToLobby
struct UAthenaGameOverWidget_C_Handle_ReturnToLobby_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.HighlightCountChanged
struct UAthenaGameOverWidget_C_HighlightCountChanged_Params
{
	int                                                HighlightCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnWinnerAnnounced
struct UAthenaGameOverWidget_C_OnWinnerAnnounced_Params
{
	struct FString                                     Winner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.HideExtraStuffForSpectating
struct UAthenaGameOverWidget_C_HideExtraStuffForSpectating_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnViewTargetChanged
struct UAthenaGameOverWidget_C_OnViewTargetChanged_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlaceChanged
struct UAthenaGameOverWidget_C_OnPlaceChanged_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPawnDied
struct UAthenaGameOverWidget_C_OnPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnActivated
struct UAthenaGameOverWidget_C_OnActivated_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Construct
struct UAthenaGameOverWidget_C_Construct_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.On Kill Feed Updated
struct UAthenaGameOverWidget_C_On_Kill_Feed_Updated_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature
struct UAthenaGameOverWidget_C_BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnDeactivated
struct UAthenaGameOverWidget_C_OnDeactivated_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Destruct
struct UAthenaGameOverWidget_C_Destruct_Params
{
};

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.ExecuteUbergraph_AthenaGameOverWidget
struct UAthenaGameOverWidget_C_ExecuteUbergraph_AthenaGameOverWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
