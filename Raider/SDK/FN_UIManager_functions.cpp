// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIManager_C::IsShowingModalsConfirmationsErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors");

	UUIManager_C_IsShowingModalsConfirmationsErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIManager.UIManager_C.SafeTriggerCursorMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::SafeTriggerCursorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.SafeTriggerCursorMode");

	UUIManager_C_SafeTriggerCursorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.SafeTriggerCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::SafeTriggerCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.SafeTriggerCameraMode");

	UUIManager_C_SafeTriggerCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ClearConfirmationLayer
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ClearConfirmationLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ClearConfirmationLayer");

	UUIManager_C_ClearConfirmationLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.RemoveModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::RemoveModalPanel(class UCommonActivatablePanel* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.RemoveModalPanel");

	UUIManager_C_RemoveModalPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::PopModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.PopModalPanel");

	UUIManager_C_PopModalPanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleStateContentUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI*  NewStateWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::HandleStateContentUpdated(class UFortUIStateWidget_NUI* NewStateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleStateContentUpdated");

	UUIManager_C_HandleStateContentUpdated_Params params;
	params.NewStateWidget = NewStateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleControllerConnectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConnected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIManager_C::HandleControllerConnectionChanged(bool bConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleControllerConnectionChanged");

	UUIManager_C_HandleControllerConnectionChanged_Params params;
	params.bConnected = bConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIManager_C::OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog");

	UUIManager_C_OnEndLatentWaitForConfirmationDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitingDialogHandle != nullptr)
		*WaitingDialogHandle = params.WaitingDialogHandle;
}


// Function UIManager.UIManager_C.IsConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIManager_C::IsConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.IsConsole");

	UUIManager_C_IsConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIManager.UIManager_C.DismissWebPurchase
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::DismissWebPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DismissWebPurchase");

	UUIManager_C_DismissWebPurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayWebPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WebWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OfferId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUIManager_C::DisplayWebPurchase(class UWidget* WebWidget, const struct FString& OfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayWebPurchase");

	UUIManager_C_DisplayWebPurchase_Params params;
	params.WebWidget = WebWidget;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::HandleDeactivatedErrorWindow(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleDeactivatedErrorWindow");

	UUIManager_C_HandleDeactivatedErrorWindow_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowErrorInErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          ErrorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUIManager_C::ShowErrorInErrorWindow(const struct FFortErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowErrorInErrorWindow");

	UUIManager_C_ShowErrorInErrorWindow_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::HandleDeactivatedPanelModalLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer");

	UUIManager_C_HandleDeactivatedPanelModalLayer_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.AddActivatablePanelToModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::AddActivatablePanelToModalLayer(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.AddActivatablePanelToModalLayer");

	UUIManager_C_AddActivatablePanelToModalLayer_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIManager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Initialize");

	UUIManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueConfirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI ConfirmationDescription        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUIManager_C::QueueConfirmation(const struct FFortDialogDescription_NUI& ConfirmationDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.QueueConfirmation");

	UUIManager_C_QueueConfirmation_Params params;
	params.ConfirmationDescription = ConfirmationDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowNextConfirmation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ShowNextConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowNextConfirmation");

	UUIManager_C_ShowNextConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::HandleDeactivatedPanelConfirmationLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer");

	UUIManager_C_HandleDeactivatedPanelConfirmationLayer_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleModalContentCleared
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::HandleModalContentCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleModalContentCleared");

	UUIManager_C_HandleModalContentCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.IsStateContentChildShowing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIManager_C::IsStateContentChildShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.IsStateContentChildShowing");

	UUIManager_C_IsStateContentChildShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIManager.UIManager_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.BindDelegates");

	UUIManager_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowNextModalWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ShowNextModalWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowNextModalWidget");

	UUIManager_C_ShowNextModalWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::QueueModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.QueueModalPanel");

	UUIManager_C_QueueModalPanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopCurrentModal
// (Private, BlueprintCallable, BlueprintEvent)

void UUIManager_C::PopCurrentModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.PopCurrentModal");

	UUIManager_C_PopCurrentModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ClearLayers
// (Private, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ClearLayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ClearLayers");

	UUIManager_C_ClearLayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DialogResult_A5F073FB438FB0A3BEBB84BE5DB2FBA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIManager_C::DialogResult_A5F073FB438FB0A3BEBB84BE5DB2FBA2(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DialogResult_A5F073FB438FB0A3BEBB84BE5DB2FBA2");

	UUIManager_C_DialogResult_A5F073FB438FB0A3BEBB84BE5DB2FBA2_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayStateContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bDisplay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIManager_C::DisplayStateContent(bool* bDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayStateContent");

	UUIManager_C_DisplayStateContent_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnStateStarted
// (Event, Public, BlueprintEvent)

void UUIManager_C::OnStateStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnStateStarted");

	UUIManager_C_OnStateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIManager_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Destruct");

	UUIManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayErrorDialog
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo*         Info                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIManager_C::DisplayErrorDialog(struct FFortErrorInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayErrorDialog");

	UUIManager_C_DisplayErrorDialog_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnShowConfirmation_NUI
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI* Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIManager_C::OnShowConfirmation_NUI(struct FFortDialogDescription_NUI* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnShowConfirmation_NUI");

	UUIManager_C_OnShowConfirmation_NUI_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.KillConfirmation
// (Event, Public, BlueprintEvent)

void UUIManager_C::KillConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.KillConfirmation");

	UUIManager_C_KillConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.UpdateStateWidgetContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI** StateWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::UpdateStateWidgetContent(class UFortUIStateWidget_NUI** StateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.UpdateStateWidgetContent");

	UUIManager_C_UpdateStateWidgetContent_Params params;
	params.StateWidget = StateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel** Panel                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer");

	UUIManager_C_QueueActivatablePanelIntoModalLayer_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnStateEnded
// (Event, Public, BlueprintEvent)

void UUIManager_C::OnStateEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnStateEnded");

	UUIManager_C_OnStateEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopActivatablePanelInModalLayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel** Panel                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIManager_C::PopActivatablePanelInModalLayer(class UCommonActivatablePanel** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.PopActivatablePanelInModalLayer");

	UUIManager_C_PopActivatablePanelInModalLayer_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.CloseConfirmationWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::CloseConfirmationWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.CloseConfirmationWindow");

	UUIManager_C_CloseConfirmationWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.CloseErrorWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::CloseErrorWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.CloseErrorWindow");

	UUIManager_C_CloseErrorWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Construct");

	UUIManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnGameWindowCloseButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UUIManager_C::OnGameWindowCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnGameWindowCloseButtonClicked");

	UUIManager_C_OnGameWindowCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIManager_C::ExecuteUbergraph_UIManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ExecuteUbergraph_UIManager");

	UUIManager_C_ExecuteUbergraph_UIManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
