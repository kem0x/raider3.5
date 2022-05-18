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

// Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied
struct UFlingerInterface_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger
struct UFlingerInterface_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PushDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       OwningFlinger;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn
struct UFlingerInterface_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy
struct UFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy
struct UFlingerInterface_C_FlingerCan_tSpawnAnEnemy_Params
{
};

// Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy
struct UFlingerInterface_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy
struct UFlingerInterface_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy
struct UFlingerInterface_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
