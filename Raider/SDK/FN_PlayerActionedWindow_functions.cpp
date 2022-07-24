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

// Function PlayerActionedWindow.PlayerActionedWindow_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPlayerActionedWindow_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow.PlayerActionedWindow_C.OnActivated");

	UPlayerActionedWindow_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionedWindow.PlayerActionedWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerActionedWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow.PlayerActionedWindow_C.Construct");

	UPlayerActionedWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionedWindow.PlayerActionedWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerActionedWindow_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow.PlayerActionedWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UPlayerActionedWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionedWindow.PlayerActionedWindow_C.ExecuteUbergraph_PlayerActionedWindow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionedWindow_C::ExecuteUbergraph_PlayerActionedWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow.PlayerActionedWindow_C.ExecuteUbergraph_PlayerActionedWindow");

	UPlayerActionedWindow_C_ExecuteUbergraph_PlayerActionedWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
