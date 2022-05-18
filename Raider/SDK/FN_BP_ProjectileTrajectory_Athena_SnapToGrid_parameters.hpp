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

// Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.UserConstructionScript
struct ABP_ProjectileTrajectory_Athena_SnapToGrid_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_Athena_SnapToGrid_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGrid
struct ABP_ProjectileTrajectory_Athena_SnapToGrid_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGrid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
