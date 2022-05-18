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

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets
struct UItemAttributesDetailWidget_C_UpdateItemsForWidgets_Params
{
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UItemAttributesDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged
struct UItemAttributesDetailWidget_C_HandleShouldPreviewUpgradingItemChanged_Params
{
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToDetailSet
struct UItemAttributesDetailWidget_C_HandlePreDifferentItemToDetailSet_Params
{
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToCompareWithSet
struct UItemAttributesDetailWidget_C_HandlePreDifferentItemToCompareWithSet_Params
{
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChanged
struct UItemAttributesDetailWidget_C_HandleItemToDetailChanged_Params
{
	bool                                               bItemChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChanged
struct UItemAttributesDetailWidget_C_HandleItemToCompareWithChanged_Params
{
	bool                                               bItemChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget
struct UItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
