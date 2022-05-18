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

// Function AthenaHUD.AthenaHUD_C.HasClientBeenNotifiedOfWin
struct UAthenaHUD_C_HasClientBeenNotifiedOfWin_Params
{
	bool                                               bClientWon;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamWon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_RCPawnVisibilityUpdates
struct UAthenaHUD_C_HandlePawnSet_RCPawnVisibilityUpdates_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_VisibilityUpdates
struct UAthenaHUD_C_HandlePawnSet_VisibilityUpdates_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandlePawnSet
struct UAthenaHUD_C_HandlePawnSet_Params
{
};

// Function AthenaHUD.AthenaHUD_C.BindDelegates
struct UAthenaHUD_C_BindDelegates_Params
{
};

// Function AthenaHUD.AthenaHUD_C.SetupCameraMode
struct UAthenaHUD_C_SetupCameraMode_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged
struct UAthenaHUD_C_HandleAircraftModeChanged_Params
{
};

// Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility
struct UAthenaHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     HUDElement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal
struct UAthenaHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.ShowPicker
struct UAthenaHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleFocusChat
struct UAthenaHUD_C_HandleFocusChat_Params
{
};

// Function AthenaHUD.AthenaHUD_C.ToggleChat
struct UAthenaHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility
struct UAthenaHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged
struct UAthenaHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged
struct UAthenaHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged
struct UAthenaHUD_C_HandleKeybindsChanged_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnHandleAction
struct UAthenaHUD_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes
struct UAthenaHUD_C_SetQuickbarSizes_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged
struct UAthenaHUD_C_HandleQuickbarSlotFocusSlotChanged_Params
{
	EFortQuickBars                                     Quickbar_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged
struct UAthenaHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED
struct UAthenaHUD_C_OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED
struct UAthenaHUD_C_OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnEnterState
struct UAthenaHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.QuestsCompleted
struct UAthenaHUD_C_QuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaHUD.AthenaHUD_C.Construct
struct UAthenaHUD_C_Construct_Params
{
};

// Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal
struct UAthenaHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaHUD.AthenaHUD_C.Destruct
struct UAthenaHUD_C_Destruct_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged
struct UAthenaHUD_C_HandleInputMethodChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction
struct UAthenaHUD_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       FailureText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaHUD.AthenaHUD_C.Prepare Game Over
struct UAthenaHUD_C_Prepare_Game_Over_Params
{
};

// Function AthenaHUD.AthenaHUD_C.On Player Died
struct UAthenaHUD_C_On_Player_Died_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI
struct UAthenaHUD_C_PrepareToShowEndGameUI_Params
{
};

// Function AthenaHUD.AthenaHUD_C.On Player Won
struct UAthenaHUD_C_On_Player_Won_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnRevived
struct UAthenaHUD_C_OnRevived_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleRevived
struct UAthenaHUD_C_HandleRevived_Params
{
};

// Function AthenaHUD.AthenaHUD_C.On Team Won
struct UAthenaHUD_C_On_Team_Won_Params
{
};

// Function AthenaHUD.AthenaHUD_C.ViewModelChanged
struct UAthenaHUD_C_ViewModelChanged_Params
{
	class UAthenaPlayerViewModel**                     ViewModel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.OnHUDScaleChanged
struct UAthenaHUD_C_OnHUDScaleChanged_Params
{
	float*                                             HUDScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.SetFullScreenMapVisibility
struct UAthenaHUD_C_SetFullScreenMapVisibility_Params
{
	bool*                                              bIsVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD
struct UAthenaHUD_C_ExecuteUbergraph_AthenaHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
