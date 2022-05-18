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

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.Clear Stats
struct UItemCalledOutAttributesDetailWidget_C_Clear_Stats_Params
{
};

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats
struct UItemCalledOutAttributesDetailWidget_C_UpdateStats_Params
{
};

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut
struct UItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut_Params
{
	TArray<struct FFortDisplayAttribute>               Attributes;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemCalledOutAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandleItemToDetailChangedBP
struct UItemCalledOutAttributesDetailWidget_C_HandleItemToDetailChangedBP_Params
{
};

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget
struct UItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
