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

// Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_Athena_SnapToGrid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.UserConstructionScript");

	ABP_ProjectileTrajectory_Athena_SnapToGrid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.SetTrajectorySpline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ProjectileTrajectory_Athena_SnapToGrid_C::SetTrajectorySpline(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.SetTrajectorySpline");

	ABP_ProjectileTrajectory_Athena_SnapToGrid_C_SetTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
	if (SplineTangents != nullptr)
		*SplineTangents = params.SplineTangents;
}


// Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGrid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_Athena_SnapToGrid_C::ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGrid");

	ABP_ProjectileTrajectory_Athena_SnapToGrid_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
