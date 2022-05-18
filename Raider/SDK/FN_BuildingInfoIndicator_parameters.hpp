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

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.RefreshBuildingInfo
struct UBuildingInfoIndicator_C_RefreshBuildingInfo_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleQuickbarFocusChanged
struct UBuildingInfoIndicator_C_HandleQuickbarFocusChanged_Params
{
	EFortQuickBars                                     QuickBar;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuickBarSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleAttachedTrapChanged
struct UBuildingInfoIndicator_C_HandleAttachedTrapChanged_Params
{
	class ABuildingTrap*                               BuildingTrap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo_InteractionWidgets
struct UBuildingInfoIndicator_C_UpdateBuildingInfo_InteractionWidgets_Params
{
	bool                                               Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBePlayerEdited;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAnyTrapAttached;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTrapAttachedFacingPlayer;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPreviewTrapAttached;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortBuildingInteraction                           InteractionType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InteractionCost;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     BuildingMaterial;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.IsCurrentBuildingBeingRepaired
struct UBuildingInfoIndicator_C_IsCurrentBuildingBeingRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingRepairCost
struct UBuildingInfoIndicator_C_UpdateBuildingRepairCost_Params
{
	int                                                NewInteractionCost;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandlePlayerTargetingChanged
struct UBuildingInfoIndicator_C_HandlePlayerTargetingChanged_Params
{
	bool                                               bIsTargeting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HideHealth
struct UBuildingInfoIndicator_C_HideHealth_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Update Keybinds
struct UBuildingInfoIndicator_C_Update_Keybinds_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleTrapDurabilityChanged
struct UBuildingInfoIndicator_C_HandleTrapDurabilityChanged_Params
{
	float                                              CurrentDurability;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDurability;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingHealthChanged
struct UBuildingInfoIndicator_C_HandleBuildingHealthChanged_Params
{
	float                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingFocused
struct UBuildingInfoIndicator_C_HandleBuildingFocused_Params
{
	class ABuildingActor*                              FocusedBuilding;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo
struct UBuildingInfoIndicator_C_UpdateBuildingInfo_Params
{
	struct FFortFocusedBuildingInfo                    NewBuildingInfo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Construct
struct UBuildingInfoIndicator_C_Construct_Params
{
};

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.ExecuteUbergraph_BuildingInfoIndicator
struct UBuildingInfoIndicator_C_ExecuteUbergraph_BuildingInfoIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
