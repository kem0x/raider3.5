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

// Function AthenaPickupStream.AthenaPickupStream_C.HandleMessageExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* Message_Item                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaPickupStream_C::HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupStream.AthenaPickupStream_C.HandleMessageExpired");

	UAthenaPickupStream_C_HandleMessageExpired_Params params;
	params.Message_Item = Message_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupStream.AthenaPickupStream_C.TryGetNextItem
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPickupStream_C::TryGetNextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupStream.AthenaPickupStream_C.TryGetNextItem");

	UAthenaPickupStream_C_TryGetNextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupStream.AthenaPickupStream_C.HandleItemPickUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPickupStream_C::HandleItemPickUp(class UFortWorldItem* NewItem, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupStream.AthenaPickupStream_C.HandleItemPickUp");

	UAthenaPickupStream_C_HandleItemPickUp_Params params;
	params.NewItem = NewItem;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupStream.AthenaPickupStream_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupStream_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupStream.AthenaPickupStream_C.Construct");

	UAthenaPickupStream_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupStream.AthenaPickupStream_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupStream_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupStream.AthenaPickupStream_C.Destruct");

	UAthenaPickupStream_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupStream.AthenaPickupStream_C.ExecuteUbergraph_AthenaPickupStream
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPickupStream_C::ExecuteUbergraph_AthenaPickupStream(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupStream.AthenaPickupStream_C.ExecuteUbergraph_AthenaPickupStream");

	UAthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
