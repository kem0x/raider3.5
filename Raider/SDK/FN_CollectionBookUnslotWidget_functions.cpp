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

// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UCollectionBookUnslotWidget_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Close");

	UCollectionBookUnslotWidget_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookUnslotWidget_C::Init(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Init");

	UCollectionBookUnslotWidget_C_Init_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCollectionBookUnslotWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	UCollectionBookUnslotWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCollectionBookUnslotWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.OnActivated");

	UCollectionBookUnslotWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.ExecuteUbergraph_CollectionBookUnslotWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookUnslotWidget_C::ExecuteUbergraph_CollectionBookUnslotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.ExecuteUbergraph_CollectionBookUnslotWidget");

	UCollectionBookUnslotWidget_C_ExecuteUbergraph_CollectionBookUnslotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
