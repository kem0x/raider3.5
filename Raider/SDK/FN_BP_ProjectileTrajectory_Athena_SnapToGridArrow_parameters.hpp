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

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.HandleGridSnapSound
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_HandleGridSnapSound_Params
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
