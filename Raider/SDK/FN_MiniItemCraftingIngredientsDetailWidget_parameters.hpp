#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs
struct UMiniItemCraftingIngredientsDetailWidget_C_GetRecipeItemQuantityPairs_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               Pairs;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.Construct
struct UMiniItemCraftingIngredientsDetailWidget_C_Construct_Params
{
};

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget
struct UMiniItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
