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

// Function TabGamePadConfig.TabGamePadConfig_C.IsCustomConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PresetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTabGamePadConfig_C::IsCustomConfig(int PresetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.IsCustomConfig");

	UTabGamePadConfig_C_IsCustomConfig_Params params;
	params.PresetIndex = PresetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TabGamePadConfig.TabGamePadConfig_C.SetInputEnabled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::SetInputEnabled(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.SetInputEnabled");

	UTabGamePadConfig_C_SetInputEnabled_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.OverlayKeyPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabGamePadConfig_C::OverlayKeyPressed(const struct FKey& NewKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.OverlayKeyPressed");

	UTabGamePadConfig_C_OverlayKeyPressed_Params params;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamepadMappingInfoChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::HandleGamepadMappingInfoChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.HandleGamepadMappingInfoChange");

	UTabGamePadConfig_C_HandleGamepadMappingInfoChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::Handle_Mode_Toggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled");

	UTabGamePadConfig_C_Handle_Mode_Toggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::Update_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Update Data");

	UTabGamePadConfig_C_Update_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::Initialize_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data");

	UTabGamePadConfig_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab");

	UTabGamePadConfig_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.GamepadPlatformConfigChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::GamepadPlatformConfigChanged(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.GamepadPlatformConfigChanged");

	UTabGamePadConfig_C_GamepadPlatformConfigChanged_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::Gamepad_Config_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed");

	UTabGamePadConfig_C_Gamepad_Config_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.ClearAndConstructKeybindList
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::ClearAndConstructKeybindList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.ClearAndConstructKeybindList");

	UTabGamePadConfig_C_ClearAndConstructKeybindList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab");

	UTabGamePadConfig_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabGamePadConfig_C::BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature");

	UTabGamePadConfig_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.InputClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_In_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Primary_Button              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::InputClicked_Bind(int Number_In_List, bool Is_Primary_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.InputClicked_Bind");

	UTabGamePadConfig_C_InputClicked_Bind_Params params;
	params.Number_In_List = Number_In_List;
	params.Is_Primary_Button = Is_Primary_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::Configuration_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed");

	UTabGamePadConfig_C_Configuration_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamePadToggleMode
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::HandleGamePadToggleMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.HandleGamePadToggleMode");

	UTabGamePadConfig_C_HandleGamePadToggleMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Unclicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_In_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOptionsMenuInputOneKey_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabGamePadConfig_C::Unclicked_Bind(int Number_In_List, class UOptionsMenuInputOneKey_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Unclicked_Bind");

	UTabGamePadConfig_C_Unclicked_Bind_Params params;
	params.Number_In_List = Number_In_List;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature");

	UTabGamePadConfig_C_BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.DoResetToDefault
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::DoResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.DoResetToDefault");

	UTabGamePadConfig_C_DoResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.DoNotResetToDefault
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::DoNotResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.DoNotResetToDefault");

	UTabGamePadConfig_C_DoNotResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGamePadConfig_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Construct");

	UTabGamePadConfig_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.TrySetInputEnabled
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::TrySetInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.TrySetInputEnabled");

	UTabGamePadConfig_C_TrySetInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::ExecuteUbergraph_TabGamePadConfig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig");

	UTabGamePadConfig_C_ExecuteUbergraph_TabGamePadConfig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.ShowResetToDefaultMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::ShowResetToDefaultMessage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.ShowResetToDefaultMessage__DelegateSignature");

	UTabGamePadConfig_C_ShowResetToDefaultMessage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.GamepadMappingInfoChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::GamepadMappingInfoChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.GamepadMappingInfoChanged__DelegateSignature");

	UTabGamePadConfig_C_GamepadMappingInfoChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.EnableGamepadInputOverlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AcceptInput                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OverlayText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabGamePadConfig_C::EnableGamepadInputOverlay__DelegateSignature(bool AcceptInput, const struct FText& OverlayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.EnableGamepadInputOverlay__DelegateSignature");

	UTabGamePadConfig_C_EnableGamepadInputOverlay__DelegateSignature_Params params;
	params.AcceptInput = AcceptInput;
	params.OverlayText = OverlayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
