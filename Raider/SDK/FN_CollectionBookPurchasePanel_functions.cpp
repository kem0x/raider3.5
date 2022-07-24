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

// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.CenterButtonHack
// (Public, BlueprintCallable, BlueprintEvent)

void UCollectionBookPurchasePanel_C::CenterButtonHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.CenterButtonHack");

	UCollectionBookPurchasePanel_C_CenterButtonHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.PopulateError
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCollectionBookPurchasePanel_C::PopulateError()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.PopulateError");

	UCollectionBookPurchasePanel_C_PopulateError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.PopulateCosts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasRequiredResources          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPurchasePanel_C::PopulateCosts(bool* bHasRequiredResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.PopulateCosts");

	UCollectionBookPurchasePanel_C_PopulateCosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasRequiredResources != nullptr)
		*bHasRequiredResources = params.bHasRequiredResources;
}


// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.SetOwningPurchaseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCollectionBookPurchaseWidget_C* OwningPurchaseWidget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCollectionBookPurchasePanel_C::SetOwningPurchaseWidget(class UCollectionBookPurchaseWidget_C* OwningPurchaseWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.SetOwningPurchaseWidget");

	UCollectionBookPurchasePanel_C_SetOwningPurchaseWidget_Params params;
	params.OwningPurchaseWidget = OwningPurchaseWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortCollectionBookSlotData SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCollectionBookPurchasePanel_C::SetItem(class UFortItem* Item, const struct FFortCollectionBookSlotData& SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.SetItem");

	UCollectionBookPurchasePanel_C_SetItem_Params params;
	params.Item = Item;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCollectionBookPurchasePanel_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UCollectionBookPurchasePanel_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.ExecuteUbergraph_CollectionBookPurchasePanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPurchasePanel_C::ExecuteUbergraph_CollectionBookPurchasePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPurchasePanel.CollectionBookPurchasePanel_C.ExecuteUbergraph_CollectionBookPurchasePanel");

	UCollectionBookPurchasePanel_C_ExecuteUbergraph_CollectionBookPurchasePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
