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

// Function PickupManager.PickupManager_C.UpdateKeybinds
struct UPickupManager_C_UpdateKeybinds_Params
{
};

// Function PickupManager.PickupManager_C.RefreshCounts
struct UPickupManager_C_RefreshCounts_Params
{
};

// Function PickupManager.PickupManager_C.HandleItemPickedUp
struct UPickupManager_C_HandleItemPickedUp_Params
{
	class UFortWorldItem*                              NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupManager.PickupManager_C.HandleMessageExpired
struct UPickupManager_C_HandleMessageExpired_Params
{
	class UFortUIMessageItemWidget*                    Message_Item;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PickupManager.PickupManager_C.TryGetNextItem
struct UPickupManager_C_TryGetNextItem_Params
{
};

// Function PickupManager.PickupManager_C.Construct
struct UPickupManager_C_Construct_Params
{
};

// Function PickupManager.PickupManager_C.HandleWorldItemsChanged
struct UPickupManager_C_HandleWorldItemsChanged_Params
{
};

// Function PickupManager.PickupManager_C.HandleWorldItemListChanged
struct UPickupManager_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickupManager.PickupManager_C.Destruct
struct UPickupManager_C_Destruct_Params
{
};

// Function PickupManager.PickupManager_C.HandleBuildingMaterialChanged
struct UPickupManager_C_HandleBuildingMaterialChanged_Params
{
};

// Function PickupManager.PickupManager_C.ExecuteUbergraph_PickupManager
struct UPickupManager_C_ExecuteUbergraph_PickupManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
