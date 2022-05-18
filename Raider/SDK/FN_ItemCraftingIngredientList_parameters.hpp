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

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleCraftItemFailed
struct UItemCraftingIngredientList_C_HandleCraftItemFailed_Params
{
	EFortCraftFailCause                                FailCause;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.GetIngredients
struct UItemCraftingIngredientList_C_GetIngredients_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               ReturnIngredients;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToCompare
struct UItemCraftingIngredientList_C_SetItemToCompare_Params
{
	class UFortItem*                                   ItemToCompare;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking
struct UItemCraftingIngredientList_C_ItemNeedsInventoryTracking_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeedsTracking;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged
struct UItemCraftingIngredientList_C_HandleItemChanged_Params
{
	bool                                               ItemChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AmmoChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IngredientsChanged;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking
struct UItemCraftingIngredientList_C_RefreshInventoryTracking_Params
{
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged
struct UItemCraftingIngredientList_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh
struct UItemCraftingIngredientList_C_Refresh_Params
{
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent
struct UItemCraftingIngredientList_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry
struct UItemCraftingIngredientList_C_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase**             ListEntry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList
struct UItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
