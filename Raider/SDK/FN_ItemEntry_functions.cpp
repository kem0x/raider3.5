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

// Function ItemEntry.ItemEntry_C.DoesItemHaveChildren
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemEntry_C::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.DoesItemHaveChildren");

	UItemEntry_C_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.GetIndentLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemEntry_C::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.GetIndentLevel");

	UItemEntry_C_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.IsItemExpanded
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemEntry_C::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.IsItemExpanded");

	UItemEntry_C_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.GetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UItemEntry_C::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.GetData");

	UItemEntry_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)

void UItemEntry_C::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.OnAcquireFromPool");

	UItemEntry_C_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)

void UItemEntry_C::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.OnReleaseToPool");

	UItemEntry_C_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemEntry_C::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.Private_OnExpanderArrowShiftClicked");

	UItemEntry_C_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.RegisterOnClicked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemEntry_C::RegisterOnClicked(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.RegisterOnClicked");

	UItemEntry_C_RegisterOnClicked_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExpanded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::SetExpanded(bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.SetExpanded");

	UItemEntry_C_SetExpanded_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::SetIndexInList(int InIndexInList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.SetIndexInList");

	UItemEntry_C_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemEntry_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.SetSelected");

	UItemEntry_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemEntry_C::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.ToggleExpansion");

	UItemEntry_C_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemEntry_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.Reset");

	UItemEntry_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEntry.ItemEntry_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonListView*         OwningList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemEntry_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEntry.ItemEntry_C.SetData");

	UItemEntry_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

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
