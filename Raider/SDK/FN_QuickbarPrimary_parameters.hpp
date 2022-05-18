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

// Function QuickbarPrimary.QuickbarPrimary_C.HasOneNonHarvestWeapon
struct UQuickbarPrimary_C_HasOneNonHarvestWeapon_Params
{
	bool                                               HasNonHarvestWeapon;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarPrimary.QuickbarPrimary_C.Show Primary Quickbar Rail
struct UQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarPrimary.QuickbarPrimary_C.Construct
struct UQuickbarPrimary_C_Construct_Params
{
};

// Function QuickbarPrimary.QuickbarPrimary_C.HandleInputMethodChanged
struct UQuickbarPrimary_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarPrimary.QuickbarPrimary_C.RefreshQuickbar
struct UQuickbarPrimary_C_RefreshQuickbar_Params
{
};

// Function QuickbarPrimary.QuickbarPrimary_C.Destruct
struct UQuickbarPrimary_C_Destruct_Params
{
};

// Function QuickbarPrimary.QuickbarPrimary_C.ExecuteUbergraph_QuickbarPrimary
struct UQuickbarPrimary_C_ExecuteUbergraph_QuickbarPrimary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
