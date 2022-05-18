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

// Function ItemCountOverCost.ItemCountOverCost_C.Calculate Total Item Def in Inventory
struct UItemCountOverCost_C_Calculate_Total_Item_Def_in_Inventory_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCountOverCost.ItemCountOverCost_C.Update
struct UItemCountOverCost_C_Update_Params
{
};

// Function ItemCountOverCost.ItemCountOverCost_C.Get Meets Criteria Color
struct UItemCountOverCost_C_Get_Meets_Criteria_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ItemCountOverCost.ItemCountOverCost_C.Construct
struct UItemCountOverCost_C_Construct_Params
{
};

// Function ItemCountOverCost.ItemCountOverCost_C.PreConstruct
struct UItemCountOverCost_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCountOverCost.ItemCountOverCost_C.ExecuteUbergraph_ItemCountOverCost
struct UItemCountOverCost_C_ExecuteUbergraph_ItemCountOverCost_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
