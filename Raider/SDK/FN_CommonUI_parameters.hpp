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

// Function CommonUI.CommonActionWidget.SetInputAction
struct UCommonActionWidget_SetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function CommonUI.CommonActionWidget.SetIconRimBrush
struct UCommonActionWidget_SetIconRimBrush_Params
{
	struct FSlateBrush                                 InIconRimBrush;                                           // (Parm)
};

// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActionWidget.IsHeldAction
struct UCommonActionWidget_IsHeldAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActionWidget.GetIcon
struct UCommonActionWidget_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonActionWidget.GetDisplayText
struct UCommonActionWidget_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct UCommonUserWidget_SetConsumePointerInput_Params
{
	bool                                               bInConsumePointerInput;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
struct UCommonActivatablePanel_SetInputActionHandlerWithProgress_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	struct FScriptDelegate                             CommitedEvent;                                            // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ProgressEvent;                                            // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandler
struct UCommonActivatablePanel_SetInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	struct FScriptDelegate                             CommitedEvent;                                            // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateWithDisabledCommitEvent_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             DisabledCommitEvent;                                      // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             DisabledCommitEvent;                                      // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
struct UCommonActivatablePanel_SetActionHandlerStateFromHandle_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerState
struct UCommonActivatablePanel_SetActionHandlerState_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler
struct UCommonActivatablePanel_RemoveInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
struct UCommonActivatablePanel_RemoveAllInputActionHandlers_Params
{
};

// Function CommonUI.CommonActivatablePanel.PopPanel
struct UCommonActivatablePanel_PopPanel_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnInputModeChanged
struct UCommonActivatablePanel_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.OnDeactivated
struct UCommonActivatablePanel_OnDeactivated_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnBeginOutro
struct UCommonActivatablePanel_OnBeginOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnBeginIntro
struct UCommonActivatablePanel_OnBeginIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnActivated
struct UCommonActivatablePanel_OnActivated_Params
{
};

// Function CommonUI.CommonActivatablePanel.IsIntroed
struct UCommonActivatablePanel_IsIntroed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.IsActivated
struct UCommonActivatablePanel_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.HasInputActionHandler
struct UCommonActivatablePanel_HasInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.GetInputActions
struct UCommonActivatablePanel_GetInputActions_Params
{
	TArray<struct FCommonInputActionHandlerData>       InputActionDataRows;                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.EndOutro
struct UCommonActivatablePanel_EndOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.EndIntro
struct UCommonActivatablePanel_EndIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.BeginOutro
struct UCommonActivatablePanel_BeginOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.BeginIntro
struct UCommonActivatablePanel_BeginIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler
struct UCommonActivatablePanel_AddInputActionNoHandler_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
struct UCommonActivatablePanel_AddInputActionHandlerWithProgress_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             CommitedEvent;                                            // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ProgressEvent;                                            // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandler
struct UCommonActivatablePanel_AddInputActionHandler_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             CommitedEvent;                                            // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonBorder.SetStyle
struct UCommonBorder_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct UCommonButtonStyle_GetSelectedTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct UCommonButtonStyle_GetSelectedPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct UCommonButtonStyle_GetSelectedBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct UCommonButtonStyle_GetNormalTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct UCommonButtonStyle_GetNormalPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct UCommonButtonStyle_GetNormalHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct UCommonButtonStyle_GetNormalBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct UCommonButtonStyle_GetMaterialBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct UCommonButtonStyle_GetDisabledTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct UCommonButtonStyle_GetDisabledBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetCustomPadding
struct UCommonButtonStyle_GetCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetButtonPadding
struct UCommonButtonStyle_GetButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetTriggeredInputAction
struct UCommonButton_SetTriggeredInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UCommonActivatablePanel*                     OldPanel;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetStyle
struct UCommonButton_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
struct UCommonButton_SetShouldSelectUponReceivingFocus_Params
{
	bool                                               bInShouldSelectUponReceivingFocus;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetSelectedInternal
struct UCommonButton_SetSelectedInternal_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBroadcast;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetMinDimensions
struct UCommonButton_SetMinDimensions_Params
{
	int                                                InMinWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMinHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsToggleable
struct UCommonButton_SetIsToggleable_Params
{
	bool                                               bInIsToggleable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsSelected
struct UCommonButton_SetIsSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGiveClickFeedback;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsSelectable
struct UCommonButton_SetIsSelectable_Params
{
	bool                                               bInIsSelectable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsInteractionEnabled
struct UCommonButton_SetIsInteractionEnabled_Params
{
	bool                                               bInIsInteractionEnabled;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetInputActionProgressMaterial
struct UCommonButton_SetInputActionProgressMaterial_Params
{
	struct FSlateBrush                                 InProgressMaterialBrush;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       InProgressMaterialParam;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetClickMethod
struct UCommonButton_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.OnUnhovered
struct UCommonButton_OnUnhovered_Params
{
};

// Function CommonUI.CommonButton.OnTriggeredInputActionChanged
struct UCommonButton_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle                         NewTriggeredAction;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButton.OnSelected
struct UCommonButton_OnSelected_Params
{
};

// Function CommonUI.CommonButton.OnInputMethodChanged
struct UCommonButton_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.OnHovered
struct UCommonButton_OnHovered_Params
{
};

// Function CommonUI.CommonButton.OnEnabled
struct UCommonButton_OnEnabled_Params
{
};

// Function CommonUI.CommonButton.OnDoubleClicked
struct UCommonButton_OnDoubleClicked_Params
{
};

// Function CommonUI.CommonButton.OnDisabled
struct UCommonButton_OnDisabled_Params
{
};

// Function CommonUI.CommonButton.OnDeselected
struct UCommonButton_OnDeselected_Params
{
};

// Function CommonUI.CommonButton.OnCurrentTextStyleChanged
struct UCommonButton_OnCurrentTextStyleChanged_Params
{
};

// Function CommonUI.CommonButton.OnClicked
struct UCommonButton_OnClicked_Params
{
};

// Function CommonUI.CommonButton.OnActionProgress
struct UCommonButton_OnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.OnActionComplete
struct UCommonButton_OnActionComplete_Params
{
};

// Function CommonUI.CommonButton.NativeOnActionProgress
struct UCommonButton_NativeOnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.NativeOnActionComplete
struct UCommonButton_NativeOnActionComplete_Params
{
};

// Function CommonUI.CommonButton.IsPressed
struct UCommonButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.IsInteractionEnabled
struct UCommonButton_IsInteractionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.IsHovered
struct UCommonButton_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.HandleTriggeringActionCommited
struct UCommonButton_HandleTriggeringActionCommited_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.HandleFocusReceived
struct UCommonButton_HandleFocusReceived_Params
{
};

// Function CommonUI.CommonButton.HandleButtonReleased
struct UCommonButton_HandleButtonReleased_Params
{
};

// Function CommonUI.CommonButton.HandleButtonPressed
struct UCommonButton_HandleButtonPressed_Params
{
};

// Function CommonUI.CommonButton.HandleButtonDoubleClicked
struct UCommonButton_HandleButtonDoubleClicked_Params
{
};

// Function CommonUI.CommonButton.HandleButtonClicked
struct UCommonButton_HandleButtonClicked_Params
{
};

// Function CommonUI.CommonButton.GetStyle
struct UCommonButton_GetStyle_Params
{
	class UCommonButtonStyle*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetSingleMaterialStyleMID
struct UCommonButton_GetSingleMaterialStyleMID_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
struct UCommonButton_GetShouldSelectUponReceivingFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetSelected
struct UCommonButton_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetInputAction
struct UCommonButton_GetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentTextStyleClass
struct UCommonButton_GetCurrentTextStyleClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentTextStyle
struct UCommonButton_GetCurrentTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentCustomPadding
struct UCommonButton_GetCurrentCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentButtonPadding
struct UCommonButton_GetCurrentButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.DisableButtonWithReason
struct UCommonButton_DisableButtonWithReason_Params
{
	struct FText                                       DisabledReason;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButton.ClearSelection
struct UCommonButton_ClearSelection_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetGroupBase.RemoveAll
struct UCommonWidgetGroupBase_RemoveAll_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SetSelectionRequired
struct UCommonButtonGroup_SetSelectionRequired_Params
{
	bool                                               bRequireSelection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SelectPreviousButton
struct UCommonButtonGroup_SelectPreviousButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SelectNextButton
struct UCommonButtonGroup_SelectNextButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SelectButtonAtIndex
struct UCommonButtonGroup_SelectButtonAtIndex_Params
{
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnSelectionStateChanged
struct UCommonButtonGroup_OnSelectionStateChanged_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
struct UCommonButtonGroup_OnHandleButtonDoubleClicked_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnHandleButtonClicked
struct UCommonButtonGroup_OnHandleButtonClicked_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnButtonUnhovered
struct UCommonButtonGroup_OnButtonUnhovered_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnButtonHovered
struct UCommonButtonGroup_OnButtonHovered_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.HasAnyButtons
struct UCommonButtonGroup_HasAnyButtons_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex
struct UCommonButtonGroup_GetSelectedButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.GetButtonAtIndex
struct UCommonButtonGroup_GetButtonAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.FindButtonIndex
struct UCommonButtonGroup_FindButtonIndex_Params
{
	class UCommonButton*                               ButtonToFind;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.DeselectAll
struct UCommonButtonGroup_DeselectAll_Params
{
};

// Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct UCommonTextBlock_SetWrapTextWidth_Params
{
	int                                                InWrapTextAt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.SetStyle
struct UCommonTextBlock_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.SetScrollStyle
struct UCommonTextBlock_SetScrollStyle_Params
{
	class UClass*                                      InScrollStyle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.SetProperties
struct UCommonTextBlock_SetProperties_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InScrollStyle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.ResetScrollState
struct UCommonTextBlock_ResetScrollState_Params
{
};

// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
	struct FTimespan                                   InTimespan;                                               // (ConstParm, Parm)
};

// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
	struct FDateTime                                   InDateTime;                                               // (ConstParm, Parm)
	bool                                               bShowAsCountdown;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
struct UCommonDateTimeTextBlock_SetCountDownCompletionText_Params
{
	struct FText                                       InCompletionText;                                         // (ConstParm, Parm)
};

// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonDynamicEntryBox.SetEntrySpacing
struct UCommonDynamicEntryBox_SetEntrySpacing_Params
{
	struct FVector2D                                   InEntrySpacing;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CommonUI.CommonDynamicEntryBox.Reset
struct UCommonDynamicEntryBox_Reset_Params
{
	bool                                               bDeleteWidgets;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonDynamicEntryBox.RemoveEntry
struct UCommonDynamicEntryBox_RemoveEntry_Params
{
	class UUserWidget*                                 EntryWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonDynamicEntryBox.GetNumEntries
struct UCommonDynamicEntryBox_GetNumEntries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonDynamicEntryBox.GetAllEntries
struct UCommonDynamicEntryBox_GetAllEntries_Params
{
	TArray<class UUserWidget*>                         ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function CommonUI.CommonInputManager.SuspendStartingOperationProcessing
struct UCommonInputManager_SuspendStartingOperationProcessing_Params
{
};

// Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction
struct UCommonInputManager_StopListeningForExistingHeldAction_Params
{
	struct FDataTableRowHandle                         InputActionDataRow;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             CompleteEvent;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             ProgressEvent;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction
struct UCommonInputManager_StartListeningForExistingHeldAction_Params
{
	struct FDataTableRowHandle                         InputActionDataRow;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             CompleteEvent;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             ProgressEvent;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Params
{
	int                                                InFilterPriority;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.ResumeStartingOperationProcessing
struct UCommonInputManager_ResumeStartingOperationProcessing_Params
{
};

// Function CommonUI.CommonInputManager.PushActivatablePanel
struct UCommonInputManager_PushActivatablePanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIntroPanel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutroPanelBelow;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.PopActivatablePanel
struct UCommonInputManager_PopActivatablePanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.IsPanelOnStack
struct UCommonInputManager_IsPanelOnStack_Params
{
	class UCommonActivatablePanel*                     InPanel;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.IsInputSuspended
struct UCommonInputManager_IsInputSuspended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.GetAvailableInputActions
struct UCommonInputManager_GetAvailableInputActions_Params
{
	TArray<struct FCommonInputActionHandlerData>       AvailableInputActions;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputReflector.OnButtonAdded
struct UCommonInputReflector_OnButtonAdded_Params
{
	class UCommonButton*                               AddedButton;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCommonInputActionHandlerData               Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonLazyImage.ShowDefaultImage
struct UCommonLazyImage_ShowDefaultImage_Params
{
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct UCommonLazyImage_SetBrushFromLazyTexture_Params
{
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
{
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
{
	bool                                               bMatchTextureSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.IsLoading
struct UCommonLazyImage_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.ForwardLoadingStateChanged
struct UCommonLazyImage_ForwardLoadingStateChanged_Params
{
	bool                                               bIsLoading;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
struct UCommonPoolableWidgetInterface_OnReleaseToPool_Params
{
};

// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
struct UCommonPoolableWidgetInterface_OnAcquireFromPool_Params
{
};

// Function CommonUI.CommonListItem.ToggleExpansion
struct UCommonListItem_ToggleExpansion_Params
{
};

// Function CommonUI.CommonListItem.SetSelected
struct UCommonListItem_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListItem.SetIndexInList
struct UCommonListItem_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListItem.SetExpanded
struct UCommonListItem_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListItem.RegisterOnClicked
struct UCommonListItem_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked
struct UCommonListItem_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function CommonUI.CommonListItem.IsItemExpanded
struct UCommonListItem_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListItem.GetIndentLevel
struct UCommonListItem_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListItem.DoesItemHaveChildren
struct UCommonListItem_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetSimulateDoubleClickOnSelectedItemClick
struct UCommonListView_SetSimulateDoubleClickOnSelectedItemClick_Params
{
	bool                                               bInSimulateDoubleClick;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetSelectionMode
struct UCommonListView_SetSelectionMode_Params
{
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetSelectedItem
struct UCommonListView_SetSelectedItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitIfPendingRefresh;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetSelectedIndex
struct UCommonListView_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetItemSelection
struct UCommonListView_SetItemSelection_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetItemHeight
struct UCommonListView_SetItemHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetDesiredItemPadding
struct UCommonListView_SetDesiredItemPadding_Params
{
	struct FMargin                                     DesiredPadding;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetDataProvider
struct UCommonListView_SetDataProvider_Params
{
	TArray<class UObject*>                             InDataProvider;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CommonUI.CommonListView.ScrollIntoView
struct UCommonListView_ScrollIntoView_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NavigateOnScrollIntoView;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonListView.IsRefreshPending
struct UCommonListView_IsRefreshPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.IsItemVisible
struct UCommonListView_IsItemVisible_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.GetSelectionModeBP
struct UCommonListView_GetSelectionModeBP_Params
{
	TEnumAsByte<ESelectionMode>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.GetSelectedItems
struct UCommonListView_GetSelectedItems_Params
{
	TArray<class UObject*>                             Items;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.GetSelectedItem
struct UCommonListView_GetSelectedItem_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.GetNumItemsSelected
struct UCommonListView_GetNumItemsSelected_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.GetNumItems
struct UCommonListView_GetNumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.GetItemAt
struct UCommonListView_GetItemAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.GetIndexForItem
struct UCommonListView_GetIndexForItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonListView.DynamicHandleItemUnhoveredCommonButton
struct UCommonListView_DynamicHandleItemUnhoveredCommonButton_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonListView.DynamicHandleItemHoveredCommonButton
struct UCommonListView_DynamicHandleItemHoveredCommonButton_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonListView.DynamicHandleItemDoubleClickedCommonButton
struct UCommonListView_DynamicHandleItemDoubleClickedCommonButton_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonListView.DynamicHandleItemClickedUserWidget
struct UCommonListView_DynamicHandleItemClickedUserWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonListView.DynamicHandleItemClickedCommonButton
struct UCommonListView_DynamicHandleItemClickedCommonButton_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonListView.ClearSelection
struct UCommonListView_ClearSelection_Params
{
};

// Function CommonUI.CommonListView.Clear
struct UCommonListView_Clear_Params
{
};

// Function CommonUI.CommonListView.CancelScrollIntoView
struct UCommonListView_CancelScrollIntoView_Params
{
};

// Function CommonUI.CommonListView.AddItem
struct UCommonListView_AddItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.SetLoadingText
struct UCommonLoadGuard_SetLoadingText_Params
{
	struct FText                                       InLoadingText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonLoadGuard.SetIsLoading
struct UCommonLoadGuard_SetIsLoading_Params
{
	bool                                               bInIsLoading;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.IsLoading
struct UCommonLoadGuard_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
{
	struct FScriptDelegate                             OnAssetLoaded;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct UCommonNumericTextBlock_SetCurrentValue_Params
{
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HadCompleted;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct UCommonNumericTextBlock_InterpolateToValue_Params
{
	float                                              TargetValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumInterpolationDuration;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumChangeRate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutroOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct UCommonNumericTextBlock_GetTargetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonObjectListItem.SetData
struct UCommonObjectListItem_SetData_Params
{
	class UObject*                                     InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonObjectListItem.Reset
struct UCommonObjectListItem_Reset_Params
{
};

// Function CommonUI.CommonObjectListItem.GetData
struct UCommonObjectListItem_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.SetOwningMenuAnchor
struct UCommonPopupMenu_SetOwningMenuAnchor_Params
{
	class UMenuAnchor*                                 MenuAnchor;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.SetContextProvider
struct UCommonPopupMenu_SetContextProvider_Params
{
	class UObject*                                     ContextProvidingObject;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.RequestClose
struct UCommonPopupMenu_RequestClose_Params
{
};

// Function CommonUI.CommonPopupMenu.OnIsOpenChanged
struct UCommonPopupMenu_OnIsOpenChanged_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.HandlePreDifferentContextProviderSet
struct UCommonPopupMenu_HandlePreDifferentContextProviderSet_Params
{
};

// Function CommonUI.CommonPopupMenu.HandlePostDifferentContextProviderSet
struct UCommonPopupMenu_HandlePostDifferentContextProviderSet_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextRight
struct UCommonRotator_ShiftTextRight_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextLeft
struct UCommonRotator_ShiftTextLeft_Params
{
};

// Function CommonUI.CommonRotator.SetSelectedItem
struct UCommonRotator_SetSelectedItem_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonRotator.PopulateTextLabels
struct UCommonRotator_PopulateTextLabels_Params
{
	TArray<struct FText>                               Labels;                                                   // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonRotator.GetSelectedText
struct UCommonRotator_GetSelectedText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonRotator.GetSelectedIndex
struct UCommonRotator_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetTabVisibility
struct UCommonTabListWidget_SetTabVisibility_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetTabInteractionEnabled
struct UCommonTabListWidget_SetTabInteractionEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetTabEnabled
struct UCommonTabListWidget_SetTabEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetListeningForInput
struct UCommonTabListWidget_SetListeningForInput_Params
{
	bool                                               bShouldListen;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetLinkedSwitcher
struct UCommonTabListWidget_SetLinkedSwitcher_Params
{
	class UCommonWidgetSwitcher*                       CommonSwitcher;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SelectTabByID
struct UCommonTabListWidget_SelectTabByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressClickFeedback;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.RemoveTab
struct UCommonTabListWidget_RemoveTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.RemoveAllTabs
struct UCommonTabListWidget_RemoveAllTabs_Params
{
};

// Function CommonUI.CommonTabListWidget.RegisterTab
struct UCommonTabListWidget_RegisterTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ButtonWidgetType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ContentWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
struct UCommonTabListWidget_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
struct UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
struct UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandleTabRemoved
struct UCommonTabListWidget_HandleTabRemoved_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandleTabCreated
struct UCommonTabListWidget_HandleTabCreated_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandleTabButtonSelected
struct UCommonTabListWidget_HandleTabButtonSelected_Params
{
	class UCommonButton*                               SelectedTabButton;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
struct UCommonTabListWidget_HandlePreviousTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidget.HandleNextTabInputAction
struct UCommonTabListWidget_HandleNextTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetTabIdAtIndex
struct UCommonTabListWidget_GetTabIdAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetTabCount
struct UCommonTabListWidget_GetTabCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetTabButtonByID
struct UCommonTabListWidget_GetTabButtonByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetSelectedTabId
struct UCommonTabListWidget_GetSelectedTabId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetLinkedSwitcher
struct UCommonTabListWidget_GetLinkedSwitcher_Params
{
	class UCommonWidgetSwitcher*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetActiveTab
struct UCommonTabListWidget_GetActiveTab_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.DisableTabWithReason
struct UCommonTabListWidget_DisableTabWithReason_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonTextStyle.GetShadowOffset
struct UCommonTextStyle_GetShadowOffset_Params
{
	struct FVector2D                                   OutShadowOffset;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetShadowColor
struct UCommonTextStyle_GetShadowColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetMargin
struct UCommonTextStyle_GetMargin_Params
{
	struct FMargin                                     OutMargin;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct UCommonTextStyle_GetLineHeightPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetFont
struct UCommonTextStyle_GetFont_Params
{
	struct FSlateFontInfo                              OutFont;                                                  // (Parm, OutParm)
};

// Function CommonUI.CommonTextStyle.GetColor
struct UCommonTextStyle_GetColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function CommonUI.CommonTileView.SetItemWidth
struct UCommonTileView_SetItemWidth_Params
{
	float                                              NewWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTreeView.SetSelection
struct UCommonTreeView_SetSelection_Params
{
	class UObject*                                     InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScrollFromTop;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTreeView.SetItemExpansion
struct UCommonTreeView_SetItemExpansion_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InShouldExpandItem;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTreeView.SetAllExpansion
struct UCommonTreeView_SetAllExpansion_Params
{
	bool                                               InShouldExpandItem;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTreeView.RequestRefresh
struct UCommonTreeView_RequestRefresh_Params
{
};

// Function CommonUI.CommonTreeView.DynamicHandleItemClickedCommonButton
struct UCommonTreeView_DynamicHandleItemClickedCommonButton_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonUIContext.IsUsingTouch
struct UCommonUIContext_IsUsingTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonUIContext.IsUsingGamepad
struct UCommonUIContext_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonUIContext.InputSuspensionChanged__DelegateSignature
struct UCommonUIContext_InputSuspensionChanged__DelegateSignature_Params
{
	bool                                               bInputSuspended;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonUIContext.InputMethodChangedDelegate__DelegateSignature
struct UCommonUIContext_InputMethodChangedDelegate__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonUIContext.GetInputManager
struct UCommonUIContext_GetInputManager_Params
{
	class UCommonInputManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonUIContext.GetInputActionButtonIcon
struct UCommonUIContext_GetInputActionButtonIcon_Params
{
	struct FDataTableRowHandle                         InputActionRowHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	ECommonInputType                                   InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ECommonGamepadType                                 GamepadType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
	class UWidget*                                     StartingWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct UCommonWidgetCarousel_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.PreviousPage
struct UCommonWidgetCarousel_PreviousPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.NextPage
struct UCommonWidgetCarousel_NextPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
struct UCommonWidgetCarousel_EndAutoScrolling_Params
{
};

// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct UCommonWidgetCarousel_BeginAutoScrolling_Params
{
	float                                              ScrollInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.SetTransitionParams
struct UCommonWidgetSwitcher_SetTransitionParams_Params
{
	ECommonSwitcherTransition                          NewTransitionType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	ETransitionCurve                                   NewTransitionCurveType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewTransitionDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
struct UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttemptActivationChange;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
struct UCommonWidgetSwitcher_SetActiveWidget_Advanced_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AttemptActivationChange;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.HasWidgets
struct UCommonWidgetSwitcher_HasWidgets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
struct UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.DeactivateWidget
struct UCommonWidgetSwitcher_DeactivateWidget_Params
{
};

// Function CommonUI.CommonWidgetSwitcher.ActivateWidget
struct UCommonWidgetSwitcher_ActivateWidget_Params
{
};

// Function CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget
struct UCommonWidgetSwitcher_ActivatePreviousWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.ActivateNextWidget
struct UCommonWidgetSwitcher_ActivateNextWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetStack.PushWidget
struct UCommonWidgetStack_PushWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetStack.PopWigdet
struct UCommonWidgetStack_PopWigdet_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetStack.DeactivateWidget
struct UCommonWidgetStack_DeactivateWidget_Params
{
};

// Function CommonUI.CommonWidgetStack.ActivateWidget
struct UCommonWidgetStack_ActivateWidget_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
