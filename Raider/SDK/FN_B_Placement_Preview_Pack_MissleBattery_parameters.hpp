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

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetPlayerController
struct AB_Placement_Preview_Pack_MissleBattery_C_GetPlayerController_Params
{
	class AFortPlayerControllerZone*                   Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetGadgetItem
struct AB_Placement_Preview_Pack_MissleBattery_C_GetGadgetItem_Params
{
	class UFortItem*                                   Gadget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.CalcRocketSpeedFromPitch
struct AB_Placement_Preview_Pack_MissleBattery_C_CalcRocketSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RocketSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SpawnLocationAndRotation
struct AB_Placement_Preview_Pack_MissleBattery_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UpdateTrajectorySpline
struct AB_Placement_Preview_Pack_MissleBattery_C_UpdateTrajectorySpline_Params
{
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SetupDummyProjectile
struct AB_Placement_Preview_Pack_MissleBattery_C_SetupDummyProjectile_Params
{
	class AFortPawn*                                   PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UserConstructionScript
struct AB_Placement_Preview_Pack_MissleBattery_C_UserConstructionScript_Params
{
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.OnUpdateVisuals
struct AB_Placement_Preview_Pack_MissleBattery_C_OnUpdateVisuals_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSafeToPlace;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.PawnSetHere
struct AB_Placement_Preview_Pack_MissleBattery_C_PawnSetHere_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ReceiveEndPlay
struct AB_Placement_Preview_Pack_MissleBattery_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery
struct AB_Placement_Preview_Pack_MissleBattery_C_ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
