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

// Function QuickbarSlot.QuickbarSlot_C.MaximizeSlot
struct UQuickbarSlot_C_MaximizeSlot_Params
{
	bool*                                              bShouldSkipAnimation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.MinimizeSlot
struct UQuickbarSlot_C_MinimizeSlot_Params
{
	bool*                                              bShouldSkipAnimation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.SetSlotSelected
struct UQuickbarSlot_C_SetSlotSelected_Params
{
	bool*                                              bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
