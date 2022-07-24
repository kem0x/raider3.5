// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ProjectileTrajectory_C::SetTrajectorySpline(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline");

	ABP_ProjectileTrajectory_C_SetTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
	if (SplineTangents != nullptr)
		*SplineTangents = params.SplineTangents;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript");

	ABP_ProjectileTrajectory_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryFromNative
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>*        SplinePoints                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>*        SplineTangents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ProjectileTrajectory_C::SetTrajectoryFromNative(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryFromNative");

	ABP_ProjectileTrajectory_C_SetTrajectoryFromNative_Params params;
	params.SplinePoints = SplinePoints;
	params.SplineTangents = SplineTangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_C::ExecuteUbergraph_BP_ProjectileTrajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory");

	ABP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
