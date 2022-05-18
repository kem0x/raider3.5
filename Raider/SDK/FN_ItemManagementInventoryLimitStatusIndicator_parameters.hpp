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

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshStorageInventoryStatus
struct UItemManagementInventoryLimitStatusIndicator_C_RefreshStorageInventoryStatus_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackStorageInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackStorageInventory_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
struct UItemManagementInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackAccountInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackAccountInventory_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackWorldInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackWorldInventory_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleVaultItemLimitStateChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleVaultItemLimitStateChanged_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Construct
struct UItemManagementInventoryLimitStatusIndicator_C_Construct_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Destruct
struct UItemManagementInventoryLimitStatusIndicator_C_Destruct_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleOutpostItemListChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleOutpostItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleDeployableBaseInventoryChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleDeployableBaseInventoryChanged_Params
{
	class ADeployableBasePlot*                         Plot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleMcpWorldItemsChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleMcpWorldItemsChanged_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleMcpOutpostItemsChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleMcpOutpostItemsChanged_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator
struct UItemManagementInventoryLimitStatusIndicator_C_ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
