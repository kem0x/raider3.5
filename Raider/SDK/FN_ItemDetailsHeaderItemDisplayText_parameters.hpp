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

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.GetDisplayName
struct UItemDetailsHeaderItemDisplayText_C_GetDisplayName_Params
{
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
};

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.ExecuteUbergraph_ItemDetailsHeaderItemDisplayText
struct UItemDetailsHeaderItemDisplayText_C_ExecuteUbergraph_ItemDetailsHeaderItemDisplayText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
