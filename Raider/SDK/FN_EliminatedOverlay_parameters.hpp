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

// Function EliminatedOverlay.EliminatedOverlay_C.GetMultiwinnerIndex
struct UEliminatedOverlay_C_GetMultiwinnerIndex_Params
{
	int                                                RequestedPosition;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ValidatedPosition;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EliminatedOverlay.EliminatedOverlay_C.UpdateMultiwinner
struct UEliminatedOverlay_C_UpdateMultiwinner_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.UpdatePlayerLost
struct UEliminatedOverlay_C_UpdatePlayerLost_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.OnPlayerLost
struct UEliminatedOverlay_C_OnPlayerLost_Params
{
	EEndOfMatchReason                                  LostReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EliminatedOverlay.EliminatedOverlay_C.Winning Score Determined
struct UEliminatedOverlay_C_Winning_Score_Determined_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EliminatedOverlay.EliminatedOverlay_C.StreamingLoadingChanged
struct UEliminatedOverlay_C_StreamingLoadingChanged_Params
{
	bool                                               bLoading;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EliminatedOverlay.EliminatedOverlay_C.SetBannerForKiller
struct UEliminatedOverlay_C_SetBannerForKiller_Params
{
	struct FFortPlayerDeathReport                      FortPlayerDeathReport;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function EliminatedOverlay.EliminatedOverlay_C.ProcessDeathReport
struct UEliminatedOverlay_C_ProcessDeathReport_Params
{
	struct FFortPlayerDeathReport                      FortPlayerDeathReport;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               DidPlayerKillThemselves;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KillerName;                                               // (Parm, OutParm)
};

// Function EliminatedOverlay.EliminatedOverlay_C.OnKillFeedUpdated
struct UEliminatedOverlay_C_OnKillFeedUpdated_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.UpdateYouPlacedBoxVisibility
struct UEliminatedOverlay_C_UpdateYouPlacedBoxVisibility_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.Winner Announced
struct UEliminatedOverlay_C_Winner_Announced_Params
{
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function EliminatedOverlay.EliminatedOverlay_C.HideExtraStuffForSpectating
struct UEliminatedOverlay_C_HideExtraStuffForSpectating_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.UpdateViewTarget
struct UEliminatedOverlay_C_UpdateViewTarget_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.UpdatePlace
struct UEliminatedOverlay_C_UpdatePlace_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.OnPawnDied
struct UEliminatedOverlay_C_OnPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function EliminatedOverlay.EliminatedOverlay_C.Tick
struct UEliminatedOverlay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EliminatedOverlay.EliminatedOverlay_C.Construct
struct UEliminatedOverlay_C_Construct_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.EventUpdateMultiWinner
struct UEliminatedOverlay_C_EventUpdateMultiWinner_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.WinnerSwapComplete
struct UEliminatedOverlay_C_WinnerSwapComplete_Params
{
};

// Function EliminatedOverlay.EliminatedOverlay_C.ExecuteUbergraph_EliminatedOverlay
struct UEliminatedOverlay_C_ExecuteUbergraph_EliminatedOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
