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

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.UpdateQuickBarCaching
struct UAthenaQuickbarPrimary_C_UpdateQuickBarCaching_Params
{
	bool                                               DesireCaching;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail
struct UAthenaQuickbarPrimary_C_HandleShowHideWeaponRail_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
struct UAthenaQuickbarPrimary_C_HasOneNonHarvestWeapon_Params
{
	bool                                               HasNonHarvestWeapon;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
struct UAthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged
struct UAthenaQuickbarPrimary_C_HandleKeybindsChanged_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind
struct UAthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct
struct UAthenaQuickbarPrimary_C_Destruct_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind
struct UAthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize
struct UAthenaQuickbarPrimary_C_Maximize_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize
struct UAthenaQuickbarPrimary_C_Minimize_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged
struct UAthenaQuickbarPrimary_C_OnQuickbarContentsChanged_Params
{
	EFortQuickBars*                                    QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       ChangedSlots;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct
struct UAthenaQuickbarPrimary_C_Construct_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.AnimationFinished
struct UAthenaQuickbarPrimary_C_AnimationFinished_Params
{
};

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
struct UAthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
