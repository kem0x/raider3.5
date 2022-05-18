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

// Function TabInputOptions.TabInputOptions_C.NewFunction_0_1
// (Public, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::NewFunction_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.NewFunction_0_1");

	UTabInputOptions_C_NewFunction_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabInputOptions_C::Set_Input_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Set Input Enabled");

	UTabInputOptions_C_Set_Input_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabInputOptions_C::Overlay_Key_Pressed(const struct FKey& NewKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed");

	UTabInputOptions_C_Overlay_Key_Pressed_Params params;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.CenterOnTab");

	UTabInputOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabInputOptions_C::BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature");

	UTabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType*              bNewInputType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabInputOptions_C::HandleUsingGamepadChanged(ECommonInputType* bNewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged");

	UTabInputOptions_C_HandleUsingGamepadChanged_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.UnbindClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_In_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabInputOptions_C::UnbindClicked(int Number_In_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.UnbindClicked");

	UTabInputOptions_C_UnbindClicked_Params params;
	params.Number_In_List = Number_In_List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.ClearAndConstructKeybindList
// (BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::ClearAndConstructKeybindList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.ClearAndConstructKeybindList");

	UTabInputOptions_C_ClearAndConstructKeybindList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Input Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_In_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Primary_Button              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabInputOptions_C::Input_Clicked(int Number_In_List, bool Is_Primary_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Input Clicked");

	UTabInputOptions_C_Input_Clicked_Params params;
	params.Number_In_List = Number_In_List;
	params.Is_Primary_Button = Is_Primary_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabInputOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Construct");

	UTabInputOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab");

	UTabInputOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabInputOptions_C::ExecuteUbergraph_TabInputOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions");

	UTabInputOptions_C_ExecuteUbergraph_TabInputOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad_Enabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabInputOptions_C::Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature");

	UTabInputOptions_C_Gamepad_Changed__DelegateSignature_Params params;
	params.Gamepad_Enabled = Gamepad_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature");

	UTabInputOptions_C_Disable_Overlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Overlay_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabInputOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input, const struct FText& Overlay_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature");

	UTabInputOptions_C_Enable_Overlay__DelegateSignature_Params params;
	params.Accept_Input = Accept_Input;
	params.Overlay_Text = Overlay_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
