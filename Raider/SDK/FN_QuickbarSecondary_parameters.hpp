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

// Function QuickbarSecondary.QuickbarSecondary_C.Show Secondary Quickbar Rail
struct UQuickbarSecondary_C_Show_Secondary_Quickbar_Rail_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSecondary.QuickbarSecondary_C.Construct
struct UQuickbarSecondary_C_Construct_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.Maximize
struct UQuickbarSecondary_C_Maximize_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.Minimize
struct UQuickbarSecondary_C_Minimize_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.HandleKeybindsChanged
struct UQuickbarSecondary_C_HandleKeybindsChanged_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.HandleInputMethodChanged
struct UQuickbarSecondary_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSecondary.QuickbarSecondary_C.Destruct
struct UQuickbarSecondary_C_Destruct_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleModeChanged
struct UQuickbarSecondary_C_OnPersonalVehicleModeChanged_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleMountStarted
struct UQuickbarSecondary_C_OnPersonalVehicleMountStarted_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleMountStopped
struct UQuickbarSecondary_C_OnPersonalVehicleMountStopped_Params
{
};

// Function QuickbarSecondary.QuickbarSecondary_C.ExecuteUbergraph_QuickbarSecondary
struct UQuickbarSecondary_C_ExecuteUbergraph_QuickbarSecondary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
