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

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.Construct
struct USquadSlotItemPicker_C_Construct_Params
{
};

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleChangeSort
struct USquadSlotItemPicker_C_HandleChangeSort_Params
{
};

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
struct USquadSlotItemPicker_C_HandleSortChanged_Params
{
	ESquadSlotSortType                                 CurrentSortType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESquadSlotType                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
struct USquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
