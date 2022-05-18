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

// Function AthenaPickupManager.AthenaPickupManager_C.RefreshBackground
struct UAthenaPickupManager_C_RefreshBackground_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts
struct UAthenaPickupManager_C_RefreshCounts_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.Construct
struct UAthenaPickupManager_C_Construct_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged
struct UAthenaPickupManager_C_HandleWorldItemsChanged_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged
struct UAthenaPickupManager_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaPickupManager.AthenaPickupManager_C.Destruct
struct UAthenaPickupManager_C_Destruct_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleBuildingMaterialChanged
struct UAthenaPickupManager_C_HandleBuildingMaterialChanged_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickUp
struct UAthenaPickupManager_C_HandleItemPickUp_Params
{
	class UFortWorldItem*                              NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager
struct UAthenaPickupManager_C_ExecuteUbergraph_AthenaPickupManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
