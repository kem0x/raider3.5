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

// Function HUD.HUD_C.InitializeTagVisibilityWidgets
struct UHUD_C_InitializeTagVisibilityWidgets_Params
{
};

// Function HUD.HUD_C.PrepareMgmtMenu
struct UHUD_C_PrepareMgmtMenu_Params
{
};

// Function HUD.HUD_C.OpenSocialMenu
struct UHUD_C_OpenSocialMenu_Params
{
};

// Function HUD.HUD_C.CheckHUDElementVisibility
struct UHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     HUDElement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function HUD.HUD_C.OnHUDElementVisibilityChanged
struct UHUD_C_OnHUDElementVisibilityChanged_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD.HUD_C.OnManagementTabSelected
struct UHUD_C_OnManagementTabSelected_Params
{
	struct FName                                       TabName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.PopContentWidgetInternal
struct UHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.CreateInterestIndicatorWidget
struct UHUD_C_CreateInterestIndicatorWidget_Params
{
};

// Function HUD.HUD_C.HandleOnPointOfInterestRemoved
struct UHUD_C_HandleOnPointOfInterestRemoved_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleOnPointOfInterestAdded
struct UHUD_C_HandleOnPointOfInterestAdded_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  DisplayImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ShowPicker
struct UHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished
struct UHUD_C_OnHordeTierCompleteWidgetFinished_Params
{
};

// Function HUD.HUD_C.HandleHordeTierComplete
struct UHUD_C_HandleHordeTierComplete_Params
{
	EFortCompletionResult                              Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleFocusChat
struct UHUD_C_HandleFocusChat_Params
{
};

// Function HUD.HUD_C.ToggleTopLevelMenu
struct UHUD_C_ToggleTopLevelMenu_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ToggleChat
struct UHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetPersistentHUDContentVisibility
struct UHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleIndicatorModeChanged
struct UHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetCursorModeContent
struct UHUD_C_SetCursorModeContent_Params
{
	class UUserWidget*                                 CustomWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HUD.HUD_C.SetGameMode
struct UHUD_C_SetGameMode_Params
{
};

// Function HUD.HUD_C.OnPlayerTargetingChanged
struct UHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleKeybindsChanged
struct UHUD_C_HandleKeybindsChanged_Params
{
};

// Function HUD.HUD_C.HandleZoneCompleted
struct UHUD_C_HandleZoneCompleted_Params
{
};

// Function HUD.HUD_C.OnHandleAction
struct UHUD_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetQuickbarSizes
struct UHUD_C_SetQuickbarSizes_Params
{
};

// Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged
struct UHUD_C_HandleQuickbarSlotFocusSlotChanged_Params
{
	EFortQuickBars                                     Quickbar_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleCursorModeChanged
struct UHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A
struct UHUD_C_OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params
{
};

// Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A
struct UHUD_C_OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params
{
};

// Function HUD.HUD_C.OnEnterState
struct UHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.QuestsCompleted
struct UHUD_C_QuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HUD.HUD_C.LoadingScreenChanged
struct UHUD_C_LoadingScreenChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.Construct
struct UHUD_C_Construct_Params
{
};

// Function HUD.HUD_C.EndOfDayRecapStarted
struct UHUD_C_EndOfDayRecapStarted_Params
{
	struct FEndOfDayRecap                              EndOfDayRecap;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD.HUD_C.EndOfDayRecapEnded
struct UHUD_C_EndOfDayRecapEnded_Params
{
};

// Function HUD.HUD_C.PushContentWidgetInternal
struct UHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD.HUD_C.Destruct
struct UHUD_C_Destruct_Params
{
};

// Function HUD.HUD_C.HandleInputMethodChanged
struct UHUD_C_HandleInputMethodChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
};

// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
};

// Function HUD.HUD_C.RequestOpenSocialMenu
struct UHUD_C_RequestOpenSocialMenu_Params
{
};

// Function HUD.HUD_C.PersonalVehicleModeChanged
struct UHUD_C_PersonalVehicleModeChanged_Params
{
	bool                                               bEnteredVehicle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.InputActionHoldStarted
struct UHUD_C_InputActionHoldStarted_Params
{
	struct FName                                       InputActionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.InputActionHoldStopped
struct UHUD_C_InputActionHoldStopped_Params
{
	struct FName                                       InputActionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompletedSuccessfully;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ShowPersonalVehicleMounting
struct UHUD_C_ShowPersonalVehicleMounting_Params
{
};

// Function HUD.HUD_C.ExecuteUbergraph_HUD
struct UHUD_C_ExecuteUbergraph_HUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
