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

// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.SpawnBounceFX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                HitResultRotation              (Parm, OutParm, IsPlainOldData)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::SpawnBounceFX(struct FHitResult* Hit, class AActor** HitActor, TEnumAsByte<EPhysicalSurface>* SurfaceType, struct FRotator* HitResultRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.SpawnBounceFX");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_SpawnBounceFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (HitActor != nullptr)
		*HitActor = params.HitActor;
	if (SurfaceType != nullptr)
		*SurfaceType = params.SurfaceType;
	if (HitResultRotation != nullptr)
		*HitResultRotation = params.HitResultRotation;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.UserConstructionScript");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.OnStop");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.ReceiveBeginPlay");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.FuseTimerMax
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::FuseTimerMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.FuseTimerMax");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_FuseTimerMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.OnExploded");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::OnBounce(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.OnBounce");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.DelayBeforeExplode_
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::DelayBeforeExplode_()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.DelayBeforeExplode_");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_DelayBeforeExplode__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_GrenadeLauncher_Athena_C::ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C.ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Athena");

	AB_Prj_Ranged_GrenadeLauncher_Athena_C_ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
