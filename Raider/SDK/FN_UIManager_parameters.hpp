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

// Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors
struct UUIManager_C_IsShowingModalsConfirmationsErrors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIManager.UIManager_C.SafeTriggerCursorMode
struct UUIManager_C_SafeTriggerCursorMode_Params
{
};

// Function UIManager.UIManager_C.SafeTriggerCameraMode
struct UUIManager_C_SafeTriggerCameraMode_Params
{
};

// Function UIManager.UIManager_C.ClearConfirmationLayer
struct UUIManager_C_ClearConfirmationLayer_Params
{
};

// Function UIManager.UIManager_C.RemoveModalPanel
struct UUIManager_C_RemoveModalPanel_Params
{
	class UCommonActivatablePanel*                     Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.PopModalPanel
struct UUIManager_C_PopModalPanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.HandleStateContentUpdated
struct UUIManager_C_HandleStateContentUpdated_Params
{
	class UFortUIStateWidget_NUI*                      NewStateWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.HandleControllerConnectionChanged
struct UUIManager_C_HandleControllerConnectionChanged_Params
{
	bool                                               bConnected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog
struct UUIManager_C_OnEndLatentWaitForConfirmationDialog_Params
{
	struct FFortDialogExternalLatentActionHandle       WaitingDialogHandle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UIManager.UIManager_C.IsConsole
struct UUIManager_C_IsConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIManager.UIManager_C.DismissWebPurchase
struct UUIManager_C_DismissWebPurchase_Params
{
};

// Function UIManager.UIManager_C.DisplayWebPurchase
struct UUIManager_C_DisplayWebPurchase_Params
{
	class UWidget*                                     WebWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OfferId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UIManager.UIManager_C.HandleDeactivatedErrorWindow
struct UUIManager_C_HandleDeactivatedErrorWindow_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.ShowErrorInErrorWindow
struct UUIManager_C_ShowErrorInErrorWindow_Params
{
	struct FFortErrorInfo                              ErrorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer
struct UUIManager_C_HandleDeactivatedPanelModalLayer_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.AddActivatablePanelToModalLayer
struct UUIManager_C_AddActivatablePanelToModalLayer_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.Initialize
struct UUIManager_C_Initialize_Params
{
};

// Function UIManager.UIManager_C.QueueConfirmation
struct UUIManager_C_QueueConfirmation_Params
{
	struct FFortDialogDescription_NUI                  ConfirmationDescription;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UIManager.UIManager_C.ShowNextConfirmation
struct UUIManager_C_ShowNextConfirmation_Params
{
};

// Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer
struct UUIManager_C_HandleDeactivatedPanelConfirmationLayer_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.HandleModalContentCleared
struct UUIManager_C_HandleModalContentCleared_Params
{
};

// Function UIManager.UIManager_C.IsStateContentChildShowing
struct UUIManager_C_IsStateContentChildShowing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIManager.UIManager_C.BindDelegates
struct UUIManager_C_BindDelegates_Params
{
};

// Function UIManager.UIManager_C.ShowNextModalWidget
struct UUIManager_C_ShowNextModalWidget_Params
{
};

// Function UIManager.UIManager_C.QueueModalPanel
struct UUIManager_C_QueueModalPanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.PopCurrentModal
struct UUIManager_C_PopCurrentModal_Params
{
};

// Function UIManager.UIManager_C.ClearLayers
struct UUIManager_C_ClearLayers_Params
{
};

// Function UIManager.UIManager_C.DialogResult_A5F073FB438FB0A3BEBB84BE5DB2FBA2
struct UUIManager_C_DialogResult_A5F073FB438FB0A3BEBB84BE5DB2FBA2_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIManager.UIManager_C.DisplayStateContent
struct UUIManager_C_DisplayStateContent_Params
{
	bool*                                              bDisplay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIManager.UIManager_C.OnStateStarted
struct UUIManager_C_OnStateStarted_Params
{
};

// Function UIManager.UIManager_C.Destruct
struct UUIManager_C_Destruct_Params
{
};

// Function UIManager.UIManager_C.DisplayErrorDialog
struct UUIManager_C_DisplayErrorDialog_Params
{
	struct FFortErrorInfo*                             Info;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UIManager.UIManager_C.OnShowConfirmation_NUI
struct UUIManager_C_OnShowConfirmation_NUI_Params
{
	struct FFortDialogDescription_NUI*                 Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UIManager.UIManager_C.KillConfirmation
struct UUIManager_C_KillConfirmation_Params
{
};

// Function UIManager.UIManager_C.UpdateStateWidgetContent
struct UUIManager_C_UpdateStateWidgetContent_Params
{
	class UFortUIStateWidget_NUI**                     StateWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer
struct UUIManager_C_QueueActivatablePanelIntoModalLayer_Params
{
	class UCommonActivatablePanel**                    Panel;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.OnStateEnded
struct UUIManager_C_OnStateEnded_Params
{
};

// Function UIManager.UIManager_C.PopActivatablePanelInModalLayer
struct UUIManager_C_PopActivatablePanelInModalLayer_Params
{
	class UCommonActivatablePanel**                    Panel;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIManager.UIManager_C.CloseConfirmationWindow
struct UUIManager_C_CloseConfirmationWindow_Params
{
};

// Function UIManager.UIManager_C.CloseErrorWindow
struct UUIManager_C_CloseErrorWindow_Params
{
};

// Function UIManager.UIManager_C.Construct
struct UUIManager_C_Construct_Params
{
};

// Function UIManager.UIManager_C.OnGameWindowCloseButtonClicked
struct UUIManager_C_OnGameWindowCloseButtonClicked_Params
{
};

// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
struct UUIManager_C_ExecuteUbergraph_UIManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
