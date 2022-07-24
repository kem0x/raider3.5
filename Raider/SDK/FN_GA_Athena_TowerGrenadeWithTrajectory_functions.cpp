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

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SetupDummyProjectileRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::SetupDummyProjectileRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SetupDummyProjectileRed");

	UGA_Athena_TowerGrenadeWithTrajectory_C_SetupDummyProjectileRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_TowerGrenadeWithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_TowerGrenadeWithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Athena_TowerGrenadeWithTrajectory_C::Server_SpawnProjectile(struct FVector* Location, struct FRotator* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_TowerGrenadeWithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_TowerGrenadeWithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_TowerGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory");

	UGA_Athena_TowerGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
