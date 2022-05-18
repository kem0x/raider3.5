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

// Function PickupMessageItem.PickupMessageItem_C.Setup
struct UPickupMessageItem_C_Setup_Params
{
	class UFortItem*                                   Picked_Up_Item;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupMessageItem.PickupMessageItem_C.Refresh Count
struct UPickupMessageItem_C_Refresh_Count_Params
{
};

// Function PickupMessageItem.PickupMessageItem_C.OnStackSizeChanged
struct UPickupMessageItem_C_OnStackSizeChanged_Params
{
	int*                                               OldStackSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupMessageItem.PickupMessageItem_C.OnBeginRemove
struct UPickupMessageItem_C_OnBeginRemove_Params
{
};

// Function PickupMessageItem.PickupMessageItem_C.OnReturnedToPool
struct UPickupMessageItem_C_OnReturnedToPool_Params
{
};

// Function PickupMessageItem.PickupMessageItem_C.ExecuteUbergraph_PickupMessageItem
struct UPickupMessageItem_C_ExecuteUbergraph_PickupMessageItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
