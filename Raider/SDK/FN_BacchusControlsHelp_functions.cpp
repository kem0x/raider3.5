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

// Function BacchusControlsHelp.BacchusControlsHelp_C.Handle Close
// (Public, BlueprintCallable, BlueprintEvent)

void UBacchusControlsHelp_C::Handle_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusControlsHelp.BacchusControlsHelp_C.Handle Close");

	UBacchusControlsHelp_C_Handle_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusControlsHelp.BacchusControlsHelp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBacchusControlsHelp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusControlsHelp.BacchusControlsHelp_C.Construct");

	UBacchusControlsHelp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusControlsHelp.BacchusControlsHelp_C.BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBacchusControlsHelp_C::BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusControlsHelp.BacchusControlsHelp_C.BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature");

	UBacchusControlsHelp_C_BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusControlsHelp.BacchusControlsHelp_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBacchusControlsHelp_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusControlsHelp.BacchusControlsHelp_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature");

	UBacchusControlsHelp_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusControlsHelp.BacchusControlsHelp_C.ExecuteUbergraph_BacchusControlsHelp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusControlsHelp_C::ExecuteUbergraph_BacchusControlsHelp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusControlsHelp.BacchusControlsHelp_C.ExecuteUbergraph_BacchusControlsHelp");

	UBacchusControlsHelp_C_ExecuteUbergraph_BacchusControlsHelp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
