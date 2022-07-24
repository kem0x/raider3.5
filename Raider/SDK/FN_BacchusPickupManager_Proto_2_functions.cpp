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

// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UBacchusPickupManager_Proto_1_C::UpdateKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.UpdateKeybinds");

	UBacchusPickupManager_Proto_1_C_UpdateKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.RefreshCounts
// (Public, BlueprintCallable, BlueprintEvent)

void UBacchusPickupManager_Proto_1_C::RefreshCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.RefreshCounts");

	UBacchusPickupManager_Proto_1_C_RefreshCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBacchusPickupManager_Proto_1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.Construct");

	UBacchusPickupManager_Proto_1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)

void UBacchusPickupManager_Proto_1_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleWorldItemsChanged");

	UBacchusPickupManager_Proto_1_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleWorldItemListChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBacchusPickupManager_Proto_1_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleWorldItemListChanged");

	UBacchusPickupManager_Proto_1_C_HandleWorldItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleBuildingMaterialChanged
// (BlueprintCallable, BlueprintEvent)

void UBacchusPickupManager_Proto_1_C::HandleBuildingMaterialChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleBuildingMaterialChanged");

	UBacchusPickupManager_Proto_1_C_HandleBuildingMaterialChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleItemPickUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusPickupManager_Proto_1_C::HandleItemPickUp(class UFortWorldItem* NewItem, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.HandleItemPickUp");

	UBacchusPickupManager_Proto_1_C_HandleItemPickUp_Params params;
	params.NewItem = NewItem;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.ExecuteUbergraph_BacchusPickupManager_Proto_2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusPickupManager_Proto_1_C::ExecuteUbergraph_BacchusPickupManager_Proto_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusPickupManager_Proto_2.BacchusPickupManager_Proto_1_C.ExecuteUbergraph_BacchusPickupManager_Proto_2");

	UBacchusPickupManager_Proto_1_C_ExecuteUbergraph_BacchusPickupManager_Proto_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
