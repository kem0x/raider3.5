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

// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Set_Default_Call_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out");

	UTabBrightnessOptions_C_Set_Default_Call_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Initialize_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data");

	UTabBrightnessOptions_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Update_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Update Data");

	UTabBrightnessOptions_C_Update_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabBrightnessOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Construct");

	UTabBrightnessOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab");

	UTabBrightnessOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab");

	UTabBrightnessOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabBrightnessOptions_C::BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature");

	UTabBrightnessOptions_C_BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabBrightnessOptions_C::ExecuteUbergraph_TabBrightnessOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions");

	UTabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
