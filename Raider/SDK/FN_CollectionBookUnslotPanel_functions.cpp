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

// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.CenterButtonHack
// (Public, BlueprintCallable, BlueprintEvent)

void UCollectionBookUnslotPanel_C::CenterButtonHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.CenterButtonHack");

	UCollectionBookUnslotPanel_C_CenterButtonHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.PopulateError
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCollectionBookUnslotPanel_C::PopulateError()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.PopulateError");

	UCollectionBookUnslotPanel_C_PopulateError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.PopulateCosts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasResources                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCollectionBookUnslotPanel_C::PopulateCosts(bool* bHasResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.PopulateCosts");

	UCollectionBookUnslotPanel_C_PopulateCosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasResources != nullptr)
		*bHasResources = params.bHasResources;
}


// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.SetOwningUnslotWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCollectionBookUnslotWidget_C* OwningWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCollectionBookUnslotPanel_C::SetOwningUnslotWidget(class UCollectionBookUnslotWidget_C* OwningWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.SetOwningUnslotWidget");

	UCollectionBookUnslotPanel_C_SetOwningUnslotWidget_Params params;
	params.OwningWidget = OwningWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookUnslotPanel_C::SetItem(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.SetItem");

	UCollectionBookUnslotPanel_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCollectionBookUnslotPanel_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UCollectionBookUnslotPanel_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.ExecuteUbergraph_CollectionBookUnslotPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookUnslotPanel_C::ExecuteUbergraph_CollectionBookUnslotPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotPanel.CollectionBookUnslotPanel_C.ExecuteUbergraph_CollectionBookUnslotPanel");

	UCollectionBookUnslotPanel_C_ExecuteUbergraph_CollectionBookUnslotPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
