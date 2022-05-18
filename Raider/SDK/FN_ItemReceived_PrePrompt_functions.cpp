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

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Obj                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_PrePrompt_C::LargeImageLoaded(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded");

	UItemReceived_PrePrompt_C_LargeImageLoaded_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemReceived_PrePrompt_C::UpdateFromGiftBoxItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem");

	UItemReceived_PrePrompt_C_UpdateFromGiftBoxItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_PrePrompt_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");

	UItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemReceived_PrePrompt_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated");

	UItemReceived_PrePrompt_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet
// (Event, Public, BlueprintEvent)

void UItemReceived_PrePrompt_C::OnGiftBoxItemSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet");

	UItemReceived_PrePrompt_C_OnGiftBoxItemSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_0_1
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_PrePrompt_C::CustomEvent_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_0_1");

	UItemReceived_PrePrompt_C_CustomEvent_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_PrePrompt_C::ExecuteUbergraph_ItemReceived_PrePrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt");

	UItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.PreTest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemReceived_PrePrompt_C::PreTest__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.PreTest__DelegateSignature");

	UItemReceived_PrePrompt_C_PreTest__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
