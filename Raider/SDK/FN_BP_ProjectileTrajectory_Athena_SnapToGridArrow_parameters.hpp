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

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.HandleGridSnapUpdates
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_HandleGridSnapUpdates_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.UserConstructionScript
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
