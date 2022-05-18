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

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemQuantityPair> Pairs                          (Parm, OutParm, ZeroConstructor)

void UMiniItemCraftingIngredientsDetailWidget_C::GetRecipeItemQuantityPairs(class UFortItem* Item, TArray<struct FFortItemQuantityPair>* Pairs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs");

	UMiniItemCraftingIngredientsDetailWidget_C_GetRecipeItemQuantityPairs_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pairs != nullptr)
		*Pairs = params.Pairs;
}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UMiniItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)

void UMiniItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet");

	UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniItemCraftingIngredientsDetailWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.Construct");

	UMiniItemCraftingIngredientsDetailWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniItemCraftingIngredientsDetailWidget_C::ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget");

	UMiniItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
