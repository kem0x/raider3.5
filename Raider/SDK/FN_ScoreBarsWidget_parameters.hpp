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

// Function ScoreBarsWidget.ScoreBarsWidget_C.UnregisterForScoreStreamEvents
struct UScoreBarsWidget_C_UnregisterForScoreStreamEvents_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreNumberChanged
struct UScoreBarsWidget_C_HandleScoreNumberChanged_Params
{
	EStatCategory                                      ScoreCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMessageDisplayed
struct UScoreBarsWidget_C_HandleMessageDisplayed_Params
{
	class UFortUIMessageItemWidget*                    ItemWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HideScoreMessageSlots
struct UScoreBarsWidget_C_HideScoreMessageSlots_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.RegisterForScoreStreamEvents
struct UScoreBarsWidget_C_RegisterForScoreStreamEvents_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreMessageExpired
struct UScoreBarsWidget_C_HandleScoreMessageExpired_Params
{
	class UFortUIMessageItemWidget*                    Expired_Message;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.TryGetNextScoreMessage
struct UScoreBarsWidget_C_TryGetNextScoreMessage_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreStatChanged
struct UScoreBarsWidget_C_HandleScoreStatChanged_Params
{
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFortReplicatedStat>                   StatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EStatCategory                                      StatCategory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeIcons
struct UScoreBarsWidget_C_InitializeIcons_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreBars
struct UScoreBarsWidget_C_UpdateScoreBars_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleUpdateUI
struct UScoreBarsWidget_C_HandleUpdateUI_Params
{
	class AFortMissionState*                           Mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreTotals
struct UScoreBarsWidget_C_UpdateScoreTotals_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HasValidBadgeInfos
struct UScoreBarsWidget_C_HasValidBadgeInfos_Params
{
	bool                                               bHasValidBadgeInfos;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeScoreBars
struct UScoreBarsWidget_C_InitializeScoreBars_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMissionsUpdated
struct UScoreBarsWidget_C_HandleMissionsUpdated_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.Construct
struct UScoreBarsWidget_C_Construct_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.Destruct
struct UScoreBarsWidget_C_Destruct_Params
{
};

// Function ScoreBarsWidget.ScoreBarsWidget_C.ExecuteUbergraph_ScoreBarsWidget
struct UScoreBarsWidget_C_ExecuteUbergraph_ScoreBarsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
