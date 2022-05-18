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

// Function CareerScreen.CareerScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCareerScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.Construct");

	UCareerScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCareerScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.OnActivated");

	UCareerScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UCareerScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.OnDeactivated");

	UCareerScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature");

	UCareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature");

	UCareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature");

	UCareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.DisableHotFixedOffButtons
// (BlueprintCallable, BlueprintEvent)

void UCareerScreen_C::DisableHotFixedOffButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.DisableHotFixedOffButtons");

	UCareerScreen_C_DisableHotFixedOffButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCareerScreen_C::ExecuteUbergraph_CareerScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen");

	UCareerScreen_C_ExecuteUbergraph_CareerScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
