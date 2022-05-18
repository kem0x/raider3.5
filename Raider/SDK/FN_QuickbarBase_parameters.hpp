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

// Function QuickbarBase.QuickbarBase_C.HandleQuickbarContentChanged
struct UQuickbarBase_C_HandleQuickbarContentChanged_Params
{
	EFortQuickBars                                     QuickBarType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ChangedSlots;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function QuickbarBase.QuickbarBase_C.UpdateCurrentFocusedQuickbar
struct UQuickbarBase_C_UpdateCurrentFocusedQuickbar_Params
{
	EFortQuickBars                                     PreviousFocusedQuickbar;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EFortQuickBars                                     CurrentFocusedQuickbar;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.ShouldRefreshQuickbarItem
struct UQuickbarBase_C_ShouldRefreshQuickbarItem_Params
{
	int                                                RequestedSlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.RefreshQuickbar
struct UQuickbarBase_C_RefreshQuickbar_Params
{
};

// Function QuickbarBase.QuickbarBase_C.HandleKeybindsChanged
struct UQuickbarBase_C_HandleKeybindsChanged_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Minimize
struct UQuickbarBase_C_Minimize_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Maximize
struct UQuickbarBase_C_Maximize_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Is Valid Slot
struct UQuickbarBase_C_Is_Valid_Slot_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Valid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.Construct
struct UQuickbarBase_C_Construct_Params
{
};

// Function QuickbarBase.QuickbarBase_C.OnWorldItemListChanged
struct UQuickbarBase_C_OnWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarSlotFocusChanged
struct UQuickbarBase_C_OnQuickbarSlotFocusChanged_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarContentsChanged
struct UQuickbarBase_C_OnQuickbarContentsChanged_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ChangedSlots;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarForceFullUpdate
struct UQuickbarBase_C_OnQuickbarForceFullUpdate_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.OnQuickbarSecondarySlotFocusChanged_Event_0_1
struct UQuickbarBase_C_OnQuickbarSecondarySlotFocusChanged_Event_0_1_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerDied
struct UQuickbarBase_C_OnLocalPlayerDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerRevived
struct UQuickbarBase_C_OnLocalPlayerRevived_Params
{
};

// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerSpawned
struct UQuickbarBase_C_OnLocalPlayerSpawned_Params
{
};

// Function QuickbarBase.QuickbarBase_C.Destruct
struct UQuickbarBase_C_Destruct_Params
{
};

// Function QuickbarBase.QuickbarBase_C.ExecuteUbergraph_QuickbarBase
struct UQuickbarBase_C_ExecuteUbergraph_QuickbarBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
