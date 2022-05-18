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

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.RefreshReplayFolderState
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::RefreshReplayFolderState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.RefreshReplayFolderState");

	UAthenaReplayBrowserTab_C_RefreshReplayFolderState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DoesSupportReplayFolder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSupported                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DoesSupportReplayFolder(bool* IsSupported)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DoesSupportReplayFolder");

	UAthenaReplayBrowserTab_C_DoesSupportReplayFolder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSupported != nullptr)
		*IsSupported = params.IsSupported;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnShowLoadingThrobber
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnShowLoadingThrobber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnShowLoadingThrobber");

	UAthenaReplayBrowserTab_C_OnShowLoadingThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnEnumerationStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnumerationInProgress          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnEnumerationStateChanged(bool EnumerationInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnEnumerationStateChanged");

	UAthenaReplayBrowserTab_C_OnEnumerationStateChanged_Params params;
	params.EnumerationInProgress = EnumerationInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputBack
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnInputBack(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputBack");

	UAthenaReplayBrowserTab_C_OnInputBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SetupInputActionHandlers
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::SetupInputActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SetupInputActionHandlers");

	UAthenaReplayBrowserTab_C_SetupInputActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.CloseRenameDialog
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::CloseRenameDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.CloseRenameDialog");

	UAthenaReplayBrowserTab_C_CloseRenameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnConfirmRename
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance* RowProxy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   NewName                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaReplayBrowserTab_C::OnConfirmRename(class UAthenaReplayBrowserRowProxyInstance* RowProxy, const struct FText& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnConfirmRename");

	UAthenaReplayBrowserTab_C_OnConfirmRename_Params params;
	params.RowProxy = RowProxy;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputPlay
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnInputPlay(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputPlay");

	UAthenaReplayBrowserTab_C_OnInputPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.InitializeInput
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.InitializeInput");

	UAthenaReplayBrowserTab_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.FocusList
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::FocusList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.FocusList");

	UAthenaReplayBrowserTab_C_FocusList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SelectReplay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ReplayInfoObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::SelectReplay(class UObject* ReplayInfoObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SelectReplay");

	UAthenaReplayBrowserTab_C_SelectReplay_Params params;
	params.ReplayInfoObject = ReplayInfoObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputRename
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnInputRename(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputRename");

	UAthenaReplayBrowserTab_C_OnInputRename_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputDelete
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnInputDelete(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputDelete");

	UAthenaReplayBrowserTab_C_OnInputDelete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserTab_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Refresh");

	UAthenaReplayBrowserTab_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77");

	UAthenaReplayBrowserTab_C_DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_12ECDF8D47346477E6D96B927F5223CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_12ECDF8D47346477E6D96B927F5223CE(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_12ECDF8D47346477E6D96B927F5223CE");

	UAthenaReplayBrowserTab_C_DialogResult_12ECDF8D47346477E6D96B927F5223CE_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_E89869AF460753E34CA097BC86722E95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_E89869AF460753E34CA097BC86722E95(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_E89869AF460753E34CA097BC86722E95");

	UAthenaReplayBrowserTab_C_DialogResult_E89869AF460753E34CA097BC86722E95_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_00986FB1494FF7EA41F1769EAFB70E83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_00986FB1494FF7EA41F1769EAFB70E83(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_00986FB1494FF7EA41F1769EAFB70E83");

	UAthenaReplayBrowserTab_C_DialogResult_00986FB1494FF7EA41F1769EAFB70E83_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_961693C14B8B2A8E26E2AFB69251D5F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_961693C14B8B2A8E26E2AFB69251D5F8(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_961693C14B8B2A8E26E2AFB69251D5F8");

	UAthenaReplayBrowserTab_C_DialogResult_961693C14B8B2A8E26E2AFB69251D5F8_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_C4C0E9C14BA061EBBA451D839890A4A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_C4C0E9C14BA061EBBA451D839890A4A7(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_C4C0E9C14BA061EBBA451D839890A4A7");

	UAthenaReplayBrowserTab_C_DialogResult_C4C0E9C14BA061EBBA451D839890A4A7_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_79A680104EAA90FF10D265808FD512BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DialogResult_79A680104EAA90FF10D265808FD512BC(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_79A680104EAA90FF10D265808FD512BC");

	UAthenaReplayBrowserTab_C_DialogResult_79A680104EAA90FF10D265808FD512BC_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature");

	UAthenaReplayBrowserTab_C_BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReplayBrowserTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Construct");

	UAthenaReplayBrowserTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.PlayReplay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance** RowProxy                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::PlayReplay(class UAthenaReplayBrowserRowProxyInstance** RowProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.PlayReplay");

	UAthenaReplayBrowserTab_C_PlayReplay_Params params;
	params.RowProxy = RowProxy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::OnInputModeChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputModeChanged");

	UAthenaReplayBrowserTab_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature");

	UAthenaReplayBrowserTab_C_BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DeleteReplay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance** RowProxy                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::DeleteReplay(class UAthenaReplayBrowserRowProxyInstance** RowProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DeleteReplay");

	UAthenaReplayBrowserTab_C_DeleteReplay_Params params;
	params.RowProxy = RowProxy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActivated");

	UAthenaReplayBrowserTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnDeleteFailed(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteFailed");

	UAthenaReplayBrowserTab_C_OnDeleteFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnRenameFailed(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameFailed");

	UAthenaReplayBrowserTab_C_OnRenameFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnSaveFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnSaveFailed(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnSaveFailed");

	UAthenaReplayBrowserTab_C_OnSaveFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRowsUpdated
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnRowsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRowsUpdated");

	UAthenaReplayBrowserTab_C_OnRowsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnCorruptReplayFound
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Info                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnCorruptReplayFound(struct FText* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnCorruptReplayFound");

	UAthenaReplayBrowserTab_C_OnCorruptReplayFound_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature");

	UAthenaReplayBrowserTab_C_BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayFailed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnPlayFailed(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayFailed");

	UAthenaReplayBrowserTab_C_OnPlayFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnReplayEnumerationStart
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnReplayEnumerationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnReplayEnumerationStart");

	UAthenaReplayBrowserTab_C_OnReplayEnumerationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnReplayEnumerationFinish
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserTab_C::OnReplayEnumerationFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnReplayEnumerationFinish");

	UAthenaReplayBrowserTab_C_OnReplayEnumerationFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaReplayBrowserTab_C::BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");

	UAthenaReplayBrowserTab_C_BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserTab_C::ExecuteUbergraph_AthenaReplayBrowserTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab");

	UAthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
