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

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory
struct UItemManagementMulchModeBox_C_HandleLeaveInventory_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging
struct UItemManagementMulchModeBox_C_HandleCursorModeChanging_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged
struct UItemManagementMulchModeBox_C_HandleMulchListChanged_Params
{
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo
struct UItemManagementMulchModeBox_C_HandleInfo_Params
{
	bool                                               Pass_Through;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack
struct UItemManagementMulchModeBox_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP
struct UItemManagementMulchModeBox_C_HandleDifferentItemToDetailSetBP_Params
{
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct
struct UItemManagementMulchModeBox_C_Construct_Params
{
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated
struct UItemManagementMulchModeBox_C_OnActivated_Params
{
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct
struct UItemManagementMulchModeBox_C_Destruct_Params
{
};

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox
struct UItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
