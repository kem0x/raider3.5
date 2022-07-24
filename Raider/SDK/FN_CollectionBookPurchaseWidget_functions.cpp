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

// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UCollectionBookPurchaseWidget_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.Close");

	UCollectionBookPurchaseWidget_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortCollectionBookSlotData SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCollectionBookPurchaseWidget_C::SetItem(class UFortItem* Item, const struct FFortCollectionBookSlotData& SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.SetItem");

	UCollectionBookPurchaseWidget_C_SetItem_Params params;
	params.Item = Item;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCollectionBookPurchaseWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	UCollectionBookPurchaseWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCollectionBookPurchaseWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.OnActivated");

	UCollectionBookPurchaseWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.ExecuteUbergraph_CollectionBookPurchaseWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPurchaseWidget_C::ExecuteUbergraph_CollectionBookPurchaseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.ExecuteUbergraph_CollectionBookPurchaseWidget");

	UCollectionBookPurchaseWidget_C_ExecuteUbergraph_CollectionBookPurchaseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
