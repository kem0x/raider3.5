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

// Function CollectionBookWidget.CollectionBookWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBookWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.Construct");

	UCollectionBookWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.SlotItemComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*        ItemSlotted                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookWidget_C::SlotItemComplete(class UFortAccountItem* ItemSlotted, const struct FName& SlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.SlotItemComplete");

	UCollectionBookWidget_C_SlotItemComplete_Params params;
	params.ItemSlotted = ItemSlotted;
	params.SlotId = SlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBookWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.Destruct");

	UCollectionBookWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCollectionBookWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.OnActivated");

	UCollectionBookWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookWidget.CollectionBookWidget_C.ExecuteUbergraph_CollectionBookWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookWidget_C::ExecuteUbergraph_CollectionBookWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookWidget.CollectionBookWidget_C.ExecuteUbergraph_CollectionBookWidget");

	UCollectionBookWidget_C_ExecuteUbergraph_CollectionBookWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
