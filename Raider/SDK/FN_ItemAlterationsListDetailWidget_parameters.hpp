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

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.SetState
struct UItemAlterationsListDetailWidget_C_SetState_Params
{
	EFortAlterationWidgetState                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget
struct UItemAlterationsListDetailWidget_C_ExecuteUbergraph_ItemAlterationsListDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
