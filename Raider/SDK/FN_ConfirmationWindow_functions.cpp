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

// Function ConfirmationWindow.ConfirmationWindow_C.TapToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UConfirmationWindow_C::TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.TapToClose");

	UConfirmationWindow_C_TapToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.CenterFirstButton
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::CenterFirstButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.CenterFirstButton");

	UConfirmationWindow_C_CenterFirstButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.CloseConfirmation
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::CloseConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.CloseConfirmation");

	UConfirmationWindow_C_CloseConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupAdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::SetupAdditionalContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupAdditionalContent");

	UConfirmationWindow_C_SetupAdditionalContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeftAdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::SetupLeftAdditionalContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupLeftAdditionalContent");

	UConfirmationWindow_C_SetupLeftAdditionalContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::SetupNonInteractiveContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent");

	UConfirmationWindow_C_SetupNonInteractiveContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ClickButtonIfBot
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::ClickButtonIfBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ClickButtonIfBot");

	UConfirmationWindow_C_ClickButtonIfBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnWaitForExternalLatentAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogExternalLatentActionHandle LatentActionHandle             (BlueprintVisible, BlueprintReadOnly, Parm)

void UConfirmationWindow_C::OnWaitForExternalLatentAction(const struct FFortDialogExternalLatentActionHandle& LatentActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnWaitForExternalLatentAction");

	UConfirmationWindow_C_OnWaitForExternalLatentAction_Params params;
	params.LatentActionHandle = LatentActionHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.StopWaitingForLatentAction
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::StopWaitingForLatentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.StopWaitingForLatentAction");

	UConfirmationWindow_C_StopWaitingForLatentAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.GetLatentActionWaitHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortDialogExternalLatentActionHandle LatentActionHandle             (Parm, OutParm)

void UConfirmationWindow_C::GetLatentActionWaitHandle(struct FFortDialogExternalLatentActionHandle* LatentActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.GetLatentActionWaitHandle");

	UConfirmationWindow_C_GetLatentActionWaitHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LatentActionHandle != nullptr)
		*LatentActionHandle = params.LatentActionHandle;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Set Hover Description
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button_to_Hover                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConfirmationWindow_C::Set_Hover_Description(class UCommonButton* Button_to_Hover)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Set Hover Description");

	UConfirmationWindow_C_Set_Hover_Description_Params params;
	params.Button_to_Hover = Button_to_Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::SetupLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupLeft");

	UConfirmationWindow_C_SetupLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupTitleAndDescription
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::SetupTitleAndDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupTitleAndDescription");

	UConfirmationWindow_C_SetupTitleAndDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupMainIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::SetupMainIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupMainIcon");

	UConfirmationWindow_C_SetupMainIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Deinitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::Deinitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Deinitialize");

	UConfirmationWindow_C_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.KillCurrentConfirmation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::KillCurrentConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.KillCurrentConfirmation");

	UConfirmationWindow_C_KillCurrentConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.GetResultName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UIconTextButton_C*       ConfirmButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ResultName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConfirmationWindow_C::GetResultName(class UIconTextButton_C* ConfirmButton, struct FName* ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.GetResultName");

	UConfirmationWindow_C_GetResultName_Params params;
	params.ConfirmButton = ConfirmButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultName != nullptr)
		*ResultName = params.ResultName;
}


// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseInputAction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDataTableRowHandle UConfirmationWindow_C::GetInputAction(const struct FName& RowName, bool UseInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction");

	UConfirmationWindow_C_GetInputAction_Params params;
	params.RowName = RowName;
	params.UseInputAction = UseInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.AddSingleConfirmButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfirmationDialogAction ConfirmDialogAction            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           UseInputAction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationWindow_C::AddSingleConfirmButton(const struct FConfirmationDialogAction& ConfirmDialogAction, bool UseInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.AddSingleConfirmButton");

	UConfirmationWindow_C_AddSingleConfirmButton_Params params;
	params.ConfirmDialogAction = ConfirmDialogAction;
	params.UseInputAction = UseInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.HasAnyConfirmAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConfirmationWindow_C::HasAnyConfirmAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HasAnyConfirmAction");

	UConfirmationWindow_C_HasAnyConfirmAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ConfirmActionClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConfirmationWindow_C::ConfirmActionClicked(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ConfirmActionClicked");

	UConfirmationWindow_C_ConfirmActionClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.IsSimpleConfirmAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConfirmationWindow_C::IsSimpleConfirmAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.IsSimpleConfirmAction");

	UConfirmationWindow_C_IsSimpleConfirmAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.DeclineActionClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConfirmationWindow_C::DeclineActionClicked(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.DeclineActionClicked");

	UConfirmationWindow_C_DeclineActionClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.AddDeclineButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::AddDeclineButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.AddDeclineButton");

	UConfirmationWindow_C_AddDeclineButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.AddConfirmButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::AddConfirmButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.AddConfirmButtons");

	UConfirmationWindow_C_AddConfirmButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Initialize");

	UConfirmationWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI NewDescription                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UConfirmationWindow_C::SetDescription(const struct FFortDialogDescription_NUI& NewDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetDescription");

	UConfirmationWindow_C_SetDescription_Params params;
	params.NewDescription = NewDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfirmationWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Construct");

	UConfirmationWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::HandleIntroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HandleIntroEnded");

	UConfirmationWindow_C_HandleIntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::HandleOutroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HandleOutroEnded");

	UConfirmationWindow_C_HandleOutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UConfirmationWindow_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnBeginIntro");

	UConfirmationWindow_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UConfirmationWindow_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro");

	UConfirmationWindow_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationWindow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct");

	UConfirmationWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UConfirmationWindow_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnActivated");

	UConfirmationWindow_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationWindow_C::ExecuteUbergraph_ConfirmationWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow");

	UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
