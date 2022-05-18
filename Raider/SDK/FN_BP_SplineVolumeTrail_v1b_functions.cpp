// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateCheapSplinesWPOVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors");

	ABP_SplineVolumeTrail_v1b_C_UpdateCheapSplinesWPOVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Socket_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationWS                     (Parm, OutParm, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::GetSocketLocationWS(const struct FName& Socket_Name, struct FVector* LocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS");

	ABP_SplineVolumeTrail_v1b_C_GetSocketLocationWS_Params params;
	params.Socket_Name = Socket_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationWS != nullptr)
		*LocationWS = params.LocationWS;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Update_All_Spline_Meshes       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes");

	ABP_SplineVolumeTrail_v1b_C_SetStartAndEndAllSplineMeshes_Params params;
	params.Update_All_Spline_Meshes = Update_All_Spline_Meshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DestroyAllSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes");

	ABP_SplineVolumeTrail_v1b_C_DestroyAllSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveLinearColor*       Curve_Linear_Color             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Pixel__X_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColorOut                 (Parm, OutParm, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int Pixel__X_, struct FLinearColor* LinearColorOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor");

	ABP_SplineVolumeTrail_v1b_C_BakeLinearColor_Params params;
	params.Curve_Linear_Color = Curve_Linear_Color;
	params.Pixel__X_ = Pixel__X_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColorOut != nullptr)
		*LinearColorOut = params.LinearColorOut;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMeshComponent*    SplineMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            IndexToRemove                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int IndexToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool");

	ABP_SplineVolumeTrail_v1b_C_ReturnSplineMeshToPool_Params params;
	params.SplineMesh = SplineMesh;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SplineUpdateOnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick");

	ABP_SplineVolumeTrail_v1b_C_SplineUpdateOnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::RedistributePointsAlongSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline");

	ABP_SplineVolumeTrail_v1b_C_RedistributePointsAlongSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveLinearColor*       Curve_Linear_Color             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColorOut                 (Parm, OutParm, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int Index, struct FLinearColor* LinearColorOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime");

	ABP_SplineVolumeTrail_v1b_C_GetLinearColorFromCurveAtTime_Params params;
	params.Curve_Linear_Color = Curve_Linear_Color;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColorOut != nullptr)
		*LinearColorOut = params.LinearColorOut;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::TickIntervalLODCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck");

	ABP_SplineVolumeTrail_v1b_C_TickIntervalLODCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SetWasRecentlyRendered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered");

	ABP_SplineVolumeTrail_v1b_C_SetWasRecentlyRendered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SplineVolumeTrail_v1b_C::AddSplineDistanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck");

	ABP_SplineVolumeTrail_v1b_C_AddSplineDistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SetNewSplinePointsBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool");

	ABP_SplineVolumeTrail_v1b_C_SetNewSplinePointsBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMeshComponent*    SplineMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_SetForwardAxisOnSplineMesh_Params params;
	params.SplineMesh = SplineMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::RollSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_RollSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateParticleSystemPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition");

	ABP_SplineVolumeTrail_v1b_C_UpdateParticleSystemPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateMID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID");

	ABP_SplineVolumeTrail_v1b_C_UpdateMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ScaleSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_ScaleSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SplineTimestampManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement");

	ABP_SplineVolumeTrail_v1b_C_SplineTimestampManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UpdateSplinePointPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition");

	ABP_SplineVolumeTrail_v1b_C_UpdateSplinePointPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::AddSplinePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint");

	ABP_SplineVolumeTrail_v1b_C_AddSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Update_Spline_Mesh             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::SetStartAndEndSplineMesh(bool Update_Spline_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_SetStartAndEndSplineMesh_Params params;
	params.Update_Spline_Mesh = Update_Spline_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::AddSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh");

	ABP_SplineVolumeTrail_v1b_C_AddSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript");

	ABP_SplineVolumeTrail_v1b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc");

	ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc");

	ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick");

	ABP_SplineVolumeTrail_v1b_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay");

	ABP_SplineVolumeTrail_v1b_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached
// (BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::SplineSystemDurationReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached");

	ABP_SplineVolumeTrail_v1b_C_SplineSystemDurationReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate
// (BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::DebugMode_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate");

	ABP_SplineVolumeTrail_v1b_C_DebugMode_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem
// (BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ManuallyStopSplineSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem");

	ABP_SplineVolumeTrail_v1b_C_ManuallyStopSplineSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check
// (BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::Tick_Interval_LOD_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check");

	ABP_SplineVolumeTrail_v1b_C_Tick_Interval_LOD_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check
// (BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check");

	ABP_SplineVolumeTrail_v1b_C_Recently_Rendered_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget
// (BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::ClearRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget");

	ABP_SplineVolumeTrail_v1b_C_ClearRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures
// (BlueprintCallable, BlueprintEvent)

void ABP_SplineVolumeTrail_v1b_C::GenerateCurveTextures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures");

	ABP_SplineVolumeTrail_v1b_C_GenerateCurveTextures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineVolumeTrail_v1b_C::ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b");

	ABP_SplineVolumeTrail_v1b_C_ExecuteUbergraph_BP_SplineVolumeTrail_v1b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
