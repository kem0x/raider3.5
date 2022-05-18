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

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Get_ItemCountWidget_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UMiniCraftingIngredientListEntry_C::Get_ItemCountWidget_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Get_ItemCountWidget_ToolTipWidget");

	UMiniCraftingIngredientListEntry_C_Get_ItemCountWidget_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::RefreshBeingPreviewed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed");

	UMiniCraftingIngredientListEntry_C_RefreshBeingPreviewed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh");

	UMiniCraftingIngredientListEntry_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsBeingReset                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniCraftingIngredientListEntry_C::HandleDifferentItemOrQuantitySetBP(bool* IsBeingReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP");

	UMiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP_Params params;
	params.IsBeingReset = IsBeingReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewStarted
// (Event, Protected, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::PreviewStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewStarted");

	UMiniCraftingIngredientListEntry_C_PreviewStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewEnded
// (Event, Protected, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::PreviewEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewEnded");

	UMiniCraftingIngredientListEntry_C_PreviewEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniCraftingIngredientListEntry_C::ExecuteUbergraph_MiniCraftingIngredientListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry");

	UMiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
