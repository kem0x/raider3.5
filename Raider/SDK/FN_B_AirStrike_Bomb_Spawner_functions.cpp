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

// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_AirStrike_Bomb_Spawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.UserConstructionScript");

	AB_AirStrike_Bomb_Spawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.InitBombSpawn
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InFortPlayerPawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         InSpawnLocations               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FFortGameplayEffectContainerSpec InEffectOnExplode              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform              InBombInitTransform            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_AirStrike_Bomb_Spawner_C::InitBombSpawn(class AFortPlayerPawn* InFortPlayerPawn, TArray<struct FVector> InSpawnLocations, const struct FFortGameplayEffectContainerSpec& InEffectOnExplode, const struct FTransform& InBombInitTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.InitBombSpawn");

	AB_AirStrike_Bomb_Spawner_C_InitBombSpawn_Params params;
	params.InFortPlayerPawn = InFortPlayerPawn;
	params.InSpawnLocations = InSpawnLocations;
	params.InEffectOnExplode = InEffectOnExplode;
	params.InBombInitTransform = InBombInitTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.BombSpawnLoop
// (BlueprintCallable, BlueprintEvent)

void AB_AirStrike_Bomb_Spawner_C::BombSpawnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.BombSpawnLoop");

	AB_AirStrike_Bomb_Spawner_C_BombSpawnLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.ExecuteUbergraph_B_AirStrike_Bomb_Spawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_AirStrike_Bomb_Spawner_C::ExecuteUbergraph_B_AirStrike_Bomb_Spawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.ExecuteUbergraph_B_AirStrike_Bomb_Spawner");

	AB_AirStrike_Bomb_Spawner_C_ExecuteUbergraph_B_AirStrike_Bomb_Spawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
