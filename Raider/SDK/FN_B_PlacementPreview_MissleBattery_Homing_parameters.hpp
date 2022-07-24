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

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetAimLocFromPlacementPreview
struct AB_PlacementPreview_MissleBattery_Homing_C_GetAimLocFromPlacementPreview_Params
{
	struct FVector                                     AimLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.UpdateAim
struct AB_PlacementPreview_MissleBattery_Homing_C_UpdateAim_Params
{
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetPlayerController
struct AB_PlacementPreview_MissleBattery_Homing_C_GetPlayerController_Params
{
	class AFortPlayerControllerZone*                   Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetGadgetItem
struct AB_PlacementPreview_MissleBattery_Homing_C_GetGadgetItem_Params
{
	class UFortItem*                                   Gadget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.UserConstructionScript
struct AB_PlacementPreview_MissleBattery_Homing_C_UserConstructionScript_Params
{
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.PawnSetHere
struct AB_PlacementPreview_MissleBattery_Homing_C_PawnSetHere_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ReceiveEndPlay
struct AB_PlacementPreview_MissleBattery_Homing_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.OnUpdateVisuals
struct AB_PlacementPreview_MissleBattery_Homing_C_OnUpdateVisuals_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSafeToPlace;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ReceiveTick
struct AB_PlacementPreview_MissleBattery_Homing_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing
struct AB_PlacementPreview_MissleBattery_Homing_C_ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
