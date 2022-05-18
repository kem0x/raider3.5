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

// Function PickupMessageItem.PickupMessageItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Picked_Up_Item                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupMessageItem_C::Setup(class UFortItem* Picked_Up_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMessageItem.PickupMessageItem_C.Setup");

	UPickupMessageItem_C_Setup_Params params;
	params.Picked_Up_Item = Picked_Up_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.Refresh Count
// (Public, BlueprintCallable, BlueprintEvent)

void UPickupMessageItem_C::Refresh_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMessageItem.PickupMessageItem_C.Refresh Count");

	UPickupMessageItem_C_Refresh_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           OldStackSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupMessageItem_C::OnStackSizeChanged(int* OldStackSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMessageItem.PickupMessageItem_C.OnStackSizeChanged");

	UPickupMessageItem_C_OnStackSizeChanged_Params params;
	params.OldStackSize = OldStackSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)

void UPickupMessageItem_C::OnBeginRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMessageItem.PickupMessageItem_C.OnBeginRemove");

	UPickupMessageItem_C_OnBeginRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.OnReturnedToPool
// (Event, Protected, BlueprintEvent)

void UPickupMessageItem_C::OnReturnedToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMessageItem.PickupMessageItem_C.OnReturnedToPool");

	UPickupMessageItem_C_OnReturnedToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.ExecuteUbergraph_PickupMessageItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupMessageItem_C::ExecuteUbergraph_PickupMessageItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMessageItem.PickupMessageItem_C.ExecuteUbergraph_PickupMessageItem");

	UPickupMessageItem_C_ExecuteUbergraph_PickupMessageItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
