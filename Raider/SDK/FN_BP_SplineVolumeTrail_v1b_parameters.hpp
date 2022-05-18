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

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors
struct ABP_SplineVolumeTrail_v1b_C_UpdateCheapSplinesWPOVectors_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS
struct ABP_SplineVolumeTrail_v1b_C_GetSocketLocationWS_Params
{
	struct FName                                       Socket_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationWS;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes
struct ABP_SplineVolumeTrail_v1b_C_SetStartAndEndAllSplineMeshes_Params
{
	bool                                               Update_All_Spline_Meshes;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes
struct ABP_SplineVolumeTrail_v1b_C_DestroyAllSplineMeshes_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor
struct ABP_SplineVolumeTrail_v1b_C_BakeLinearColor_Params
{
	class UCurveLinearColor*                           Curve_Linear_Color;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Pixel__X_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColorOut;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool
struct ABP_SplineVolumeTrail_v1b_C_ReturnSplineMeshToPool_Params
{
	class USplineMeshComponent*                        SplineMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                IndexToRemove;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick
struct ABP_SplineVolumeTrail_v1b_C_SplineUpdateOnTick_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline
struct ABP_SplineVolumeTrail_v1b_C_RedistributePointsAlongSpline_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime
struct ABP_SplineVolumeTrail_v1b_C_GetLinearColorFromCurveAtTime_Params
{
	class UCurveLinearColor*                           Curve_Linear_Color;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColorOut;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck
struct ABP_SplineVolumeTrail_v1b_C_TickIntervalLODCheck_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered
struct ABP_SplineVolumeTrail_v1b_C_SetWasRecentlyRendered_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck
struct ABP_SplineVolumeTrail_v1b_C_AddSplineDistanceCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool
struct ABP_SplineVolumeTrail_v1b_C_SetNewSplinePointsBool_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh
struct ABP_SplineVolumeTrail_v1b_C_SetForwardAxisOnSplineMesh_Params
{
	class USplineMeshComponent*                        SplineMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh
struct ABP_SplineVolumeTrail_v1b_C_RollSplineMesh_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition
struct ABP_SplineVolumeTrail_v1b_C_UpdateParticleSystemPosition_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID
struct ABP_SplineVolumeTrail_v1b_C_UpdateMID_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh
struct ABP_SplineVolumeTrail_v1b_C_ScaleSplineMesh_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement
struct ABP_SplineVolumeTrail_v1b_C_SplineTimestampManagement_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition
struct ABP_SplineVolumeTrail_v1b_C_UpdateSplinePointPosition_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint
struct ABP_SplineVolumeTrail_v1b_C_AddSplinePoint_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh
struct ABP_SplineVolumeTrail_v1b_C_SetStartAndEndSplineMesh_Params
{
	bool                                               Update_Spline_Mesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh
struct ABP_SplineVolumeTrail_v1b_C_AddSplineMesh_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript
struct ABP_SplineVolumeTrail_v1b_C_UserConstructionScript_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc
struct ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__FinishedFunc_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc
struct ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__UpdateFunc_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick
struct ABP_SplineVolumeTrail_v1b_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay
struct ABP_SplineVolumeTrail_v1b_C_ReceiveBeginPlay_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached
struct ABP_SplineVolumeTrail_v1b_C_SplineSystemDurationReached_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate
struct ABP_SplineVolumeTrail_v1b_C_DebugMode_Rotate_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem
struct ABP_SplineVolumeTrail_v1b_C_ManuallyStopSplineSystem_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check
struct ABP_SplineVolumeTrail_v1b_C_Tick_Interval_LOD_Check_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check
struct ABP_SplineVolumeTrail_v1b_C_Recently_Rendered_Check_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget
struct ABP_SplineVolumeTrail_v1b_C_ClearRenderTarget_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures
struct ABP_SplineVolumeTrail_v1b_C_GenerateCurveTextures_Params
{
};

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b
struct ABP_SplineVolumeTrail_v1b_C_ExecuteUbergraph_BP_SplineVolumeTrail_v1b_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
