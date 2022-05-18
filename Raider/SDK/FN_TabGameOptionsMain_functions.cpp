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

// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGameOptionsMain_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.Construct");

	UTabGameOptionsMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
// (Event, Public, BlueprintEvent)

void UTabGameOptionsMain_C::UpdatePossibleLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages");

	UTabGameOptionsMain_C_UpdatePossibleLanguages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptionsMain_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab");

	UTabGameOptionsMain_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptionsMain_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab");

	UTabGameOptionsMain_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGameOptionsMain_C::Setting_Value_Changed(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.Setting Value Changed");

	UTabGameOptionsMain_C_Setting_Value_Changed_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature_Params params;
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabGameOptionsMain_C::ExecuteUbergraph_TabGameOptionsMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain");

	UTabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
