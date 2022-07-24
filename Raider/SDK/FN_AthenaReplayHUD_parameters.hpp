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

// Function AthenaReplayHUD.AthenaReplayHUD_C.TogglePlayerListVisibility
struct UAthenaReplayHUD_C_TogglePlayerListVisibility_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.ShowCameraControls
struct UAthenaReplayHUD_C_ShowCameraControls_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HideCameraControlsOnTimeout
struct UAthenaReplayHUD_C_HideCameraControlsOnTimeout_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleInputModeChanged
struct UAthenaReplayHUD_C_HandleInputModeChanged_Params
{
	bool                                               Passthrough;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleCameraChange
struct UAthenaReplayHUD_C_HandleCameraChange_Params
{
	class AFortPlayerControllerSpectating*             PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESpectatorCameraType                               CameraType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleViewSettingsVisibility
struct UAthenaReplayHUD_C_ToggleViewSettingsVisibility_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnLevelStreamingChanged
struct UAthenaReplayHUD_C_OnLevelStreamingChanged_Params
{
	bool                                               bStreaming;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.Get Display Time in Minutes And Seconds
struct UAthenaReplayHUD_C_Get_Display_Time_in_Minutes_And_Seconds_Params
{
	float                                              TimeInSeconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.Bind Replay UI Events
struct UAthenaReplayHUD_C_Bind_Replay_UI_Events_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HudVisibilityChangedFromNative
struct UAthenaReplayHUD_C_HudVisibilityChangedFromNative_Params
{
	EHudVisibilityState                                NewVisibilty;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.TimelineRangeChangedFromNative
struct UAthenaReplayHUD_C_TimelineRangeChangedFromNative_Params
{
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.CurrentTimeChangedFromNative
struct UAthenaReplayHUD_C_CurrentTimeChangedFromNative_Params
{
	float                                              NowTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.SetupCameraMode
struct UAthenaReplayHUD_C_SetupCameraMode_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.CheckHUDElementVisibility
struct UAthenaReplayHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     HUDElement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.PopContentWidgetInternal
struct UAthenaReplayHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.ShowPicker
struct UAthenaReplayHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleFocusChat
struct UAthenaReplayHUD_C_HandleFocusChat_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleTopLevelMenu
struct UAthenaReplayHUD_C_ToggleTopLevelMenu_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleChat
struct UAthenaReplayHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.SetPersistentHUDContentVisibility
struct UAthenaReplayHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleIndicatorModeChanged
struct UAthenaReplayHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnPlayerTargetingChanged
struct UAthenaReplayHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleKeybindsChanged
struct UAthenaReplayHUD_C_HandleKeybindsChanged_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnHandleAction
struct UAthenaReplayHUD_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleCursorModeChanged
struct UAthenaReplayHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnDeclined_F4025B1648844D78621B81BCC3CE4EE5
struct UAthenaReplayHUD_C_OnDeclined_F4025B1648844D78621B81BCC3CE4EE5_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnConfirmed_F4025B1648844D78621B81BCC3CE4EE5
struct UAthenaReplayHUD_C_OnConfirmed_F4025B1648844D78621B81BCC3CE4EE5_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnEnterState
struct UAthenaReplayHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.Construct
struct UAthenaReplayHUD_C_Construct_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.QuestsCompleted
struct UAthenaReplayHUD_C_QuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.Destruct
struct UAthenaReplayHUD_C_Destruct_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UAthenaReplayHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UAthenaReplayHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnUnableToPerformAction
struct UAthenaReplayHUD_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       FailureText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.Prepare Game Over
struct UAthenaReplayHUD_C_Prepare_Game_Over_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.On Player Died
struct UAthenaReplayHUD_C_On_Player_Died_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.PrepareToShowEndGameUI
struct UAthenaReplayHUD_C_PrepareToShowEndGameUI_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.On Player Won
struct UAthenaReplayHUD_C_On_Player_Won_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnRevived
struct UAthenaReplayHUD_C_OnRevived_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleRevived
struct UAthenaReplayHUD_C_HandleRevived_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.On Team Won
struct UAthenaReplayHUD_C_On_Team_Won_Params
{
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.PushContentWidgetInternal
struct UAthenaReplayHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.ViewModelChanged
struct UAthenaReplayHUD_C_ViewModelChanged_Params
{
	class UAthenaPlayerViewModel**                     ViewModel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.SetFullScreenMapVisibility
struct UAthenaReplayHUD_C_SetFullScreenMapVisibility_Params
{
	bool*                                              bIsVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
struct UAthenaReplayHUD_C_BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.HUDVisibilitySound
struct UAthenaReplayHUD_C_HUDVisibilitySound_Params
{
	EHudVisibilityState                                HUDVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.OnHUDScaleChanged
struct UAthenaReplayHUD_C_OnHUDScaleChanged_Params
{
	float*                                             HUDScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayHUD.AthenaReplayHUD_C.ExecuteUbergraph_AthenaReplayHUD
struct UAthenaReplayHUD_C_ExecuteUbergraph_AthenaReplayHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
