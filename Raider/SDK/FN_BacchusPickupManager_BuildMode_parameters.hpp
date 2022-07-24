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

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.UpdateKeybinds
struct UBacchusPickupManager_BuildMode_C_UpdateKeybinds_Params
{
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.RefreshCounts
struct UBacchusPickupManager_BuildMode_C_RefreshCounts_Params
{
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.Construct
struct UBacchusPickupManager_BuildMode_C_Construct_Params
{
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleWorldItemsChanged
struct UBacchusPickupManager_BuildMode_C_HandleWorldItemsChanged_Params
{
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleWorldItemListChanged
struct UBacchusPickupManager_BuildMode_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleBuildingMaterialChanged
struct UBacchusPickupManager_BuildMode_C_HandleBuildingMaterialChanged_Params
{
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleItemPickUp
struct UBacchusPickupManager_BuildMode_C_HandleItemPickUp_Params
{
	class UFortWorldItem*                              NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.PreConstruct
struct UBacchusPickupManager_BuildMode_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.ExecuteUbergraph_BacchusPickupManager_BuildMode
struct UBacchusPickupManager_BuildMode_C_ExecuteUbergraph_BacchusPickupManager_BuildMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
