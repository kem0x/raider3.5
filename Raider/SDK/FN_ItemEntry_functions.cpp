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

// Function ItemEntry.ItemEntry_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UItemEntry_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.GetListItemObject");

	UItemEntry_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UItemEntry_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.BP_OnEntryReleased");

	UItemEntry_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.BP_OnItemExpansionChanged");

	UItemEntry_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.BP_OnItemSelectionChanged");

	UItemEntry_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.OnListItemObjectSet");

	UItemEntry_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.Construct");

	UItemEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.ExecuteUbergraph_ItemEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::ExecuteUbergraph_ItemEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.ExecuteUbergraph_ItemEntry");

	UItemEntry_C_ExecuteUbergraph_ItemEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.Entry Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     Items_Definition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::Entry_Selected__DelegateSignature(class UFortItemDefinition* Items_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.Entry Selected__DelegateSignature");

	UItemEntry_C_Entry_Selected__DelegateSignature_Params params;
	params.Items_Definition = Items_Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
