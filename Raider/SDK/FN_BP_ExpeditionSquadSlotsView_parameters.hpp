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

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
struct UBP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton_Params
{
	int*                                               SquadSlotIndex;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseSquadSlot*                         SquadSlotDefinition;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWidget*                                     OutSquadSlotButtonHost;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortSquadSlotSelectorButton*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
struct UBP_ExpeditionSquadSlotsView_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotOpened_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OpenSquadSlotEvent
struct UBP_ExpeditionSquadSlotsView_C_OpenSquadSlotEvent_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.Construct
struct UBP_ExpeditionSquadSlotsView_C_Construct_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.Destruct
struct UBP_ExpeditionSquadSlotsView_C_Destruct_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
struct UBP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotOpened__DelegateSignature_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
