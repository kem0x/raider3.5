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

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.SetState
struct UItemPerksListDetailWidget_C_SetState_Params
{
	EFortPerksWidgetState                              InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortHero*                                   InEvolutionOption;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemPerksListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget
struct UItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
