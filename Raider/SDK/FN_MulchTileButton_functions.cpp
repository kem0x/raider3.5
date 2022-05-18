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

// Function MulchTileButton.MulchTileButton_C.UpdateInputActionWrapperVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMulchTileButton_C::UpdateInputActionWrapperVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchTileButton.MulchTileButton_C.UpdateInputActionWrapperVisibility");

	UMulchTileButton_C_UpdateInputActionWrapperVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchTileButton.MulchTileButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchTileButton_C::BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchTileButton.MulchTileButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	UMulchTileButton_C_BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchTileButton.MulchTileButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMulchTileButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchTileButton.MulchTileButton_C.Construct");

	UMulchTileButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchTileButton.MulchTileButton_C.HandleItemChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem**              NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchTileButton_C::HandleItemChanged_BP(class UFortItem** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchTileButton.MulchTileButton_C.HandleItemChanged_BP");

	UMulchTileButton_C_HandleItemChanged_BP_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchTileButton.MulchTileButton_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchTileButton_C::BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchTileButton.MulchTileButton_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature");

	UMulchTileButton_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchTileButton.MulchTileButton_C.ExecuteUbergraph_MulchTileButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchTileButton_C::ExecuteUbergraph_MulchTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchTileButton.MulchTileButton_C.ExecuteUbergraph_MulchTileButton");

	UMulchTileButton_C_ExecuteUbergraph_MulchTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
