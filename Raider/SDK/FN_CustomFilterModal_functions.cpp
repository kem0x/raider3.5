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

// Function CustomFilterModal.CustomFilterModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomFilterModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterModal.CustomFilterModal_C.Construct");

	UCustomFilterModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterModal.CustomFilterModal_C.HandleFilterToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortInventoryCustomFilter     Filter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomFilterModal_C::HandleFilterToggled(EFortInventoryCustomFilter Filter, bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterModal.CustomFilterModal_C.HandleFilterToggled");

	UCustomFilterModal_C_HandleFilterToggled_Params params;
	params.Filter = Filter;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterModal.CustomFilterModal_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomFilterModal_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterModal.CustomFilterModal_C.Destruct");

	UCustomFilterModal_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterModal.CustomFilterModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomFilterModal_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterModal.CustomFilterModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature");

	UCustomFilterModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterModal.CustomFilterModal_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomFilterModal_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterModal.CustomFilterModal_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UCustomFilterModal_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterModal.CustomFilterModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCustomFilterModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterModal.CustomFilterModal_C.OnActivated");

	UCustomFilterModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomFilterModal.CustomFilterModal_C.ExecuteUbergraph_CustomFilterModal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomFilterModal_C::ExecuteUbergraph_CustomFilterModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomFilterModal.CustomFilterModal_C.ExecuteUbergraph_CustomFilterModal");

	UCustomFilterModal_C_ExecuteUbergraph_CustomFilterModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
