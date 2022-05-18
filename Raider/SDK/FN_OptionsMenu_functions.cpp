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

// Function OptionsMenu.OptionsMenu_C.DoResetKBMToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::DoResetKBMToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DoResetKBMToDefault");

	UOptionsMenu_C_DoResetKBMToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleResetCustomGamepadToDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleResetCustomGamepadToDefault(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleResetCustomGamepadToDefault");

	UOptionsMenu_C_HandleResetCustomGamepadToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.UpdateAllOptionsTabs
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::UpdateAllOptionsTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.UpdateAllOptionsTabs");

	UOptionsMenu_C_UpdateAllOptionsTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabAccessibilityOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabAccessibilityOptionsActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabAccessibilityOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabAccessibilityOptionsActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ResetActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableBack                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::ResetActionHandlerStates(bool DisableBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ResetActionHandlerStates");

	UOptionsMenu_C_ResetActionHandlerStates_Params params;
	params.DisableBack = DisableBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.UpdateBasedOnActiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldCenterOnTab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.UpdateBasedOnActiveWidget");

	UOptionsMenu_C_UpdateBasedOnActiveWidget_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ShouldCenterOnTab = ShouldCenterOnTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ApplySettings
// (Private, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ApplySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ApplySettings");

	UOptionsMenu_C_ApplySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::DoResetHUDOptionsToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault");

	UOptionsMenu_C_DoResetHUDOptionsToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::DoResetGameOptionsToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault");

	UOptionsMenu_C_DoResetGameOptionsToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabGameOptionsActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabGameOptionsActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabAccountLinkageActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabAccountLinkageActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabAccountLinkageActionHandlerStates");

	UOptionsMenu_C_HandleTabAccountLinkageActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabGamepadConfigActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates");

	UOptionsMenu_C_HandleTabGamepadConfigActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabFortAudioOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabFortAudioOptionsActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabFortAudioOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabFortAudioOptionsActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabVideoOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabVideoOptionsActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabVideoOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabVideoOptionsActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabBrightnessOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::HandleTabBrightnessOptionsActionHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabBrightnessOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabBrightnessOptionsActionHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTabInputOptions_C*      TabInputOptionsActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates");

	UOptionsMenu_C_HandleTabInputOptionsActionHandlerStates_Params params;
	params.TabInputOptionsActor = TabInputOptionsActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsResetActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleTabGameOptionsResetActionHandlerStates(int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsResetActionHandlerStates");

	UOptionsMenu_C_HandleTabGameOptionsResetActionHandlerStates_Params params;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleResetGameOptionsToDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleResetGameOptionsToDefault(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleResetGameOptionsToDefault");

	UOptionsMenu_C_HandleResetGameOptionsToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::CenterOnActiveTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab");

	UOptionsMenu_C_CenterOnActiveTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Handle Reset HUD Default
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Handle_Reset_HUD_Default(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Reset HUD Default");

	UOptionsMenu_C_Handle_Reset_HUD_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.SetBackground
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::SetBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.SetBackground");

	UOptionsMenu_C_SetBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.AddTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   NameId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::AddTab(class UClass* WidgetClass, const struct FText& DisplayName, const struct FName& NameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.AddTab");

	UOptionsMenu_C_AddTab_Params params;
	params.WidgetClass = WidgetClass;
	params.DisplayName = DisplayName;
	params.NameId = NameId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging");

	UOptionsMenu_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Handle_Toggle_Mode(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode");

	UOptionsMenu_C_Handle_Toggle_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Set_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers");

	UOptionsMenu_C_Set_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleBack");

	UOptionsMenu_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.Handle Reset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Handle_Reset(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Reset");

	UOptionsMenu_C_Handle_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.HandleResetKBMToDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::HandleResetKBMToDefault(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleResetKBMToDefault");

	UOptionsMenu_C_HandleResetKBMToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.Handle Apply
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Handle_Apply(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Handle Apply");

	UOptionsMenu_C_Handle_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenu_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown");

	UOptionsMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenu_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnMouseWheel");

	UOptionsMenu_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenu_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown");

	UOptionsMenu_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenu.OptionsMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Initialize");

	UOptionsMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F");

	UOptionsMenu_C_DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426");

	UOptionsMenu_C_OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_56F757014AB176CE2140009FB54D0D23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_56F757014AB176CE2140009FB54D0D23");

	UOptionsMenu_C_OnLoaded_56F757014AB176CE2140009FB54D0D23_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_488EE90943BFF7AA4DB2049A7D72238C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_488EE90943BFF7AA4DB2049A7D72238C");

	UOptionsMenu_C_OnLoaded_488EE90943BFF7AA4DB2049A7D72238C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_598823E641B8288CD371F0B50BE07C91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_598823E641B8288CD371F0B50BE07C91");

	UOptionsMenu_C_OnLoaded_598823E641B8288CD371F0B50BE07C91_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD");

	UOptionsMenu_C_OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_EF0A182C49925D83A3E55080FA222F7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnLoaded_EF0A182C49925D83A3E55080FA222F7D");

	UOptionsMenu_C_OnLoaded_EF0A182C49925D83A3E55080FA222F7D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Destruct");

	UOptionsMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Tab Setting Changed
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Tab_Setting_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Tab Setting Changed");

	UOptionsMenu_C_Tab_Setting_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnActivated");

	UOptionsMenu_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay Input
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Disable_Overlay_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Disable Overlay Input");

	UOptionsMenu_C_Disable_Overlay_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Gamepad Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad_Enabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Gamepad_Changed(bool Gamepad_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Gamepad Changed");

	UOptionsMenu_C_Gamepad_Changed_Params params;
	params.Gamepad_Enabled = Gamepad_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature");

	UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::HandleBenchmarkComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete");

	UOptionsMenu_C_HandleBenchmarkComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::HandleSettingsErrorMessageClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed");

	UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnHandleBack
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::OnHandleBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnHandleBack");

	UOptionsMenu_C_OnHandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::Disable_Overlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Disable Overlay");

	UOptionsMenu_C_Disable_Overlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::Enable_Overlay_Video(bool Accept_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Enable Overlay Video");

	UOptionsMenu_C_Enable_Overlay_Video_Params params;
	params.Accept_Input = Accept_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Overlay_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMenu_C::Enable_Overlay_Input(bool Accept_Input, const struct FText& Overlay_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Enable Overlay Input");

	UOptionsMenu_C_Enable_Overlay_Input_Params params;
	params.Accept_Input = Accept_Input;
	params.Overlay_Text = Overlay_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind");

	UOptionsMenu_C_TabGameOptions_OnActiveWidgetChanged_Bind_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ShowResetGameOptionsToDefaultMessage
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ShowResetGameOptionsToDefaultMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ShowResetGameOptionsToDefaultMessage");

	UOptionsMenu_C_ShowResetGameOptionsToDefaultMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ShowResetHUDOptionToDefaultMessage
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ShowResetHUDOptionToDefaultMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ShowResetHUDOptionToDefaultMessage");

	UOptionsMenu_C_ShowResetHUDOptionToDefaultMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::HandleSettingsSaveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete");

	UOptionsMenu_C_HandleSettingsSaveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.OnDeactivated");

	UOptionsMenu_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.LoadTabClasses
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::LoadTabClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.LoadTabClasses");

	UOptionsMenu_C_LoadTabClasses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ResetVideoOptionsTimerDelegate
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ResetVideoOptionsTimerDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ResetVideoOptionsTimerDelegate");

	UOptionsMenu_C_ResetVideoOptionsTimerDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature");

	UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ShowResetCustomGamepadToDefaultMessage
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ShowResetCustomGamepadToDefaultMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ShowResetCustomGamepadToDefaultMessage");

	UOptionsMenu_C_ShowResetCustomGamepadToDefaultMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetCustomGamepadToDefaultYes_K2Node_ComponentBoundEvent_202_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetCustomGamepadToDefaultYes_K2Node_ComponentBoundEvent_202_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetCustomGamepadToDefaultYes_K2Node_ComponentBoundEvent_202_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetCustomGamepadToDefaultYes_K2Node_ComponentBoundEvent_202_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetCustomGamepadToDefaultNo_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetCustomGamepadToDefaultNo_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetCustomGamepadToDefaultNo_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetCustomGamepadToDefaultNo_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Construct");

	UOptionsMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetKBMToDefaultYes_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetKBMToDefaultYes_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetKBMToDefaultYes_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetKBMToDefaultYes_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetKBMToDefaultNo_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenu_C::BndEvt__ResetKBMToDefaultNo_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ResetKBMToDefaultNo_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature");

	UOptionsMenu_C_BndEvt__ResetKBMToDefaultNo_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ShowResetKBMToDefaultMessage
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_C::ShowResetKBMToDefaultMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ShowResetKBMToDefaultMessage");

	UOptionsMenu_C_ShowResetKBMToDefaultMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu");

	UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
