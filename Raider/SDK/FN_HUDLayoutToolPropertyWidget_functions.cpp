// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetPropertyType
// (Event, Protected, BlueprintEvent)
// Parameters:
// ELayoutPropertyType*           NewPropertyType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolPropertyWidget_C::SetPropertyType(ELayoutPropertyType* NewPropertyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetPropertyType");

	UHUDLayoutToolPropertyWidget_C_SetPropertyType_Params params;
	params.NewPropertyType = NewPropertyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetBoolValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bNewValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolPropertyWidget_C::SetBoolValue(bool* bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetBoolValue");

	UHUDLayoutToolPropertyWidget_C_SetBoolValue_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UHUDLayoutToolPropertyWidget_C::BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature");

	UHUDLayoutToolPropertyWidget_C_BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.ExecuteUbergraph_HUDLayoutToolPropertyWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolPropertyWidget_C::ExecuteUbergraph_HUDLayoutToolPropertyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.ExecuteUbergraph_HUDLayoutToolPropertyWidget");

	UHUDLayoutToolPropertyWidget_C_ExecuteUbergraph_HUDLayoutToolPropertyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
