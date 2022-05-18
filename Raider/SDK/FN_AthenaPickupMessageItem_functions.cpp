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

// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Picked_Up_Item                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPickupMessageItem_C::Setup(class UFortItem* Picked_Up_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup");

	UAthenaPickupMessageItem_C_Setup_Params params;
	params.Picked_Up_Item = Picked_Up_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Refresh Count
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPickupMessageItem_C::Refresh_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Refresh Count");

	UAthenaPickupMessageItem_C_Refresh_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           OldStackSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPickupMessageItem_C::OnStackSizeChanged(int* OldStackSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnStackSizeChanged");

	UAthenaPickupMessageItem_C_OnStackSizeChanged_Params params;
	params.OldStackSize = OldStackSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)

void UAthenaPickupMessageItem_C::OnBeginRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnBeginRemove");

	UAthenaPickupMessageItem_C_OnBeginRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.ExecuteUbergraph_AthenaPickupMessageItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPickupMessageItem_C::ExecuteUbergraph_AthenaPickupMessageItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.ExecuteUbergraph_AthenaPickupMessageItem");

	UAthenaPickupMessageItem_C_ExecuteUbergraph_AthenaPickupMessageItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
