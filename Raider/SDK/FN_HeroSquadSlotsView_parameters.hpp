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

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.UndarkenAllSlots
struct UHeroSquadSlotsView_C_UndarkenAllSlots_Params
{
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HighlightSlotByIndex
struct UHeroSquadSlotsView_C_HighlightSlotByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HandleSquadNavigation
struct UHeroSquadSlotsView_C_HandleSquadNavigation_Params
{
	struct FName                                       SquadId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.CreateAndAddSquadSlotButton
struct UHeroSquadSlotsView_C_CreateAndAddSquadSlotButton_Params
{
	int*                                               SquadSlotIndex;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseSquadSlot*                         SquadSlotDefinition;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWidget*                                     OutSquadSlotButtonHost;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortSquadSlotSelectorButton*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.Construct
struct UHeroSquadSlotsView_C_Construct_Params
{
};

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.ExecuteUbergraph_HeroSquadSlotsView
struct UHeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
