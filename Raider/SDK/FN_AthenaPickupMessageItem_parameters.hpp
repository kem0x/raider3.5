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

// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup
struct UAthenaPickupMessageItem_C_Setup_Params
{
	class UFortItem*                                   Picked_Up_Item;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Refresh Count
struct UAthenaPickupMessageItem_C_Refresh_Count_Params
{
};

// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnStackSizeChanged
struct UAthenaPickupMessageItem_C_OnStackSizeChanged_Params
{
	int*                                               OldStackSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnBeginRemove
struct UAthenaPickupMessageItem_C_OnBeginRemove_Params
{
};

// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.ExecuteUbergraph_AthenaPickupMessageItem
struct UAthenaPickupMessageItem_C_ExecuteUbergraph_AthenaPickupMessageItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
