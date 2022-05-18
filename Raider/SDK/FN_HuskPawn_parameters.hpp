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

// Function HuskPawn.HuskPawn_C.UserConstructionScript
struct AHuskPawn_C_UserConstructionScript_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy
struct AHuskPawn_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy
struct AHuskPawn_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy
struct AHuskPawn_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy
struct AHuskPawn_C_FlingerCan_tSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy
struct AHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn
struct AHuskPawn_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger
struct AHuskPawn_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PushDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       OwningFlinger;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyDied
struct AHuskPawn_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.MantleStart
struct AHuskPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               LowWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MidWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullWall;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WindowWall;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.MantleEnd
struct AHuskPawn_C_MantleEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.HuskEvadeStart
struct AHuskPawn_C_HuskEvadeStart_Params
{
};

// Function HuskPawn.HuskPawn_C.VerifyTakerAttack
struct AHuskPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Soul_Suck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer
struct AHuskPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack
struct AHuskPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack
struct AHuskPawn_C_EndTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior
struct AHuskPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Debug;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable
struct AHuskPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerAttackFSM
struct AHuskPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin
struct AHuskPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd
struct AHuskPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalAdd
struct AHuskPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HuskPawn.HuskPawn_C.PortalClear
struct AHuskPawn_C_PortalClear_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted
struct AHuskPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalGet
struct AHuskPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.PortalFX
struct AHuskPawn_C_PortalFX_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalCollision
struct AHuskPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature
struct AHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Reapplied
struct AHuskPawn_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Destroyed
struct AHuskPawn_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Damage.Shielded
struct AHuskPawn_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn
struct AHuskPawn_C_ExecuteUbergraph_HuskPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
