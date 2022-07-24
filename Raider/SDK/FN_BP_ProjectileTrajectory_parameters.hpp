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

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
struct ABP_ProjectileTrajectory_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryFromNative
struct ABP_ProjectileTrajectory_C_SetTrajectoryFromNative_Params
{
	TArray<struct FVector>*                            SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>*                            SplineTangents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
struct ABP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
