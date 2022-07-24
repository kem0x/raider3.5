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

// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.UserConstructionScript
struct AB_AirStrike_Bomb_Spawner_C_UserConstructionScript_Params
{
};

// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.InitBombSpawn
struct AB_AirStrike_Bomb_Spawner_C_InitBombSpawn_Params
{
	class AFortPlayerPawn*                             InFortPlayerPawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InSpawnLocations;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FFortGameplayEffectContainerSpec            InEffectOnExplode;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTransform                                  InBombInitTransform;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.BombSpawnLoop
struct AB_AirStrike_Bomb_Spawner_C_BombSpawnLoop_Params
{
};

// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.ExecuteUbergraph_B_AirStrike_Bomb_Spawner
struct AB_AirStrike_Bomb_Spawner_C_ExecuteUbergraph_B_AirStrike_Bomb_Spawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
