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

// Function BoostsRoot.BoostsRoot_C.HandleStore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBoostsRoot_C::HandleStore(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.HandleStore");

	UBoostsRoot_C_HandleStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BoostsRoot.BoostsRoot_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoostsRoot_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.HandleCursorModeChanging");

	UBoostsRoot_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.Set Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UBoostsRoot_C::Set_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.Set Input Action Handlers");

	UBoostsRoot_C_Set_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBoostsRoot_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.HandleBack");

	UBoostsRoot_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BoostsRoot.BoostsRoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBoostsRoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.Construct");

	UBoostsRoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBoostsRoot_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.Destruct");

	UBoostsRoot_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBoostsRoot_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.OnActivated");

	UBoostsRoot_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBoostsRoot_C::BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature");

	UBoostsRoot_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoostsRoot_C::BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature");

	UBoostsRoot_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UBoostsRoot_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.OnDeactivated");

	UBoostsRoot_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.ExecuteUbergraph_BoostsRoot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoostsRoot_C::ExecuteUbergraph_BoostsRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.ExecuteUbergraph_BoostsRoot");

	UBoostsRoot_C_ExecuteUbergraph_BoostsRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
