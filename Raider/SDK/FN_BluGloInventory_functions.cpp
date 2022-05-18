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

// Function BluGloInventory.BluGloInventory_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBluGloInventory_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.Update");

	UBluGloInventory_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.HandleOnWorldItemListChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  Items_Added                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>  Items_Removed                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBluGloInventory_C::HandleOnWorldItemListChanged(TArray<class UFortWorldItem*>* Items_Added, TArray<class UFortWorldItem*>* Items_Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.HandleOnWorldItemListChanged");

	UBluGloInventory_C_HandleOnWorldItemListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items_Added != nullptr)
		*Items_Added = params.Items_Added;
	if (Items_Removed != nullptr)
		*Items_Removed = params.Items_Removed;
}


// Function BluGloInventory.BluGloInventory_C.HandleWorldItemsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBluGloInventory_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.HandleWorldItemsChanged");

	UBluGloInventory_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.HandleItemPickedUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          New_Item                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBluGloInventory_C::HandleItemPickedUp(class UFortWorldItem* New_Item, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.HandleItemPickedUp");

	UBluGloInventory_C_HandleItemPickedUp_Params params;
	params.New_Item = New_Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBluGloInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.Construct");

	UBluGloInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.ExecuteUbergraph_BluGloInventory
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBluGloInventory_C::ExecuteUbergraph_BluGloInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.ExecuteUbergraph_BluGloInventory");

	UBluGloInventory_C_ExecuteUbergraph_BluGloInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
