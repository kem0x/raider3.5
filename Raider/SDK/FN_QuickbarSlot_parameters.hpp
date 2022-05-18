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

// Function QuickbarSlot.QuickbarSlot_C.InitializeInvalidation
struct UQuickbarSlot_C_InitializeInvalidation_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
struct UQuickbarSlot_C_UpdateItemBoxSize_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
struct UQuickbarSlot_C_OnCooldownStopped_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
struct UQuickbarSlot_C_OnCooldownStarted_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
struct UQuickbarSlot_C_InitializeCooldowns_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.Maximize
struct UQuickbarSlot_C_Maximize_Params
{
	bool                                               ShouldSkipAnimation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.Minimize
struct UQuickbarSlot_C_Minimize_Params
{
	bool                                               ShouldSkipAnimation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.SetSelected
struct UQuickbarSlot_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
struct UQuickbarSlot_C_HandleMaximizeStarted_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
struct UQuickbarSlot_C_HandleMinimizeFinished_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
struct UQuickbarSlot_C_HandleMaximizeFinished_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
struct UQuickbarSlot_C_HandleMinimizeStarted_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.Construct
struct UQuickbarSlot_C_Construct_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
struct UQuickbarSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
struct UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params
{
	float                                              AnimatedBoxScaleFactor;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
struct UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
