#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemInfoWidget.ItemInfoWidget_C.Update Text
struct UItemInfoWidget_C_Update_Text_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItem
struct UItemInfoWidget_C_PopulateUsingItem_Params
{
	class UFortItem**                                  NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItemDefinition
struct UItemInfoWidget_C_PopulateUsingItemDefinition_Params
{
	class UFortItemDefinition**                        NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.Populate_Internal
struct UItemInfoWidget_C_Populate_Internal_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget
struct UItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
