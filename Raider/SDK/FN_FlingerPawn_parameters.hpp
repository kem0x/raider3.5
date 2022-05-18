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

// Function FlingerPawn.FlingerPawn_C.IsReadyToReceiveNewSpawnGroup
struct AFlingerPawn_C_IsReadyToReceiveNewSpawnGroup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.OnReceiveSpawnGroup
struct AFlingerPawn_C_OnReceiveSpawnGroup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.StopMaterialTimeline
struct AFlingerPawn_C_StopMaterialTimeline_Params
{
};

// Function FlingerPawn.FlingerPawn_C.StopDeathFX
struct AFlingerPawn_C_StopDeathFX_Params
{
};

// Function FlingerPawn.FlingerPawn_C.UserConstructionScript
struct AFlingerPawn_C_UserConstructionScript_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Timeline_0__FinishedFunc
struct AFlingerPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Timeline_0__UpdateFunc
struct AFlingerPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Timeline_0__Spawn__EventFunc
struct AFlingerPawn_C_Timeline_0__Spawn__EventFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.UpdateMaterialParamsTL__FinishedFunc
struct AFlingerPawn_C_UpdateMaterialParamsTL__FinishedFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.UpdateMaterialParamsTL__UpdateFunc
struct AFlingerPawn_C_UpdateMaterialParamsTL__UpdateFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.FlingerSpawnedAnEnemy
struct AFlingerPawn_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.CanFlingerSpawnAnEnemy
struct AFlingerPawn_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.FlingerCanSpawnAnEnemy
struct AFlingerPawn_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function FlingerPawn.FlingerPawn_C.FlingerCan'tSpawnAnEnemy
struct AFlingerPawn_C_FlingerCan_tSpawnAnEnemy_Params
{
};

// Function FlingerPawn.FlingerPawn_C.FlingerThrewAProjectileContainingAnEnemy
struct AFlingerPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.FlingerEnemyFailedToSpawn
struct AFlingerPawn_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.AlertEnemySpawnedByFlinger
struct AFlingerPawn_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PushDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       OwningFlinger;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.FlingerEnemyDied
struct AFlingerPawn_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.MantleStart
struct AFlingerPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               LowWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MidWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullWall;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WindowWall;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.MantleEnd
struct AFlingerPawn_C_MantleEnd_Params
{
};

// Function FlingerPawn.FlingerPawn_C.HuskEvadeStart
struct AFlingerPawn_C_HuskEvadeStart_Params
{
};

// Function FlingerPawn.FlingerPawn_C.VerifyTakerAttack
struct AFlingerPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Soul_Suck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.ResetTakerSpecialAttackTimer
struct AFlingerPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.BeginTakerSwoopAttack
struct AFlingerPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function FlingerPawn.FlingerPawn_C.EndTakerSwoopAttack
struct AFlingerPawn_C_EndTakerSwoopAttack_Params
{
};

// Function FlingerPawn.FlingerPawn_C.TakerWallPortalBehavior
struct AFlingerPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Debug;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.IsTakerWallPortalAvailable
struct AFlingerPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.TakerAttackFSM
struct AFlingerPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundBegin
struct AFlingerPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundEnd
struct AFlingerPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function FlingerPawn.FlingerPawn_C.PortalAdd
struct AFlingerPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FlingerPawn.FlingerPawn_C.PortalClear
struct AFlingerPawn_C_PortalClear_Params
{
};

// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckInterrupted
struct AFlingerPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function FlingerPawn.FlingerPawn_C.PortalGet
struct AFlingerPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.PortalFX
struct AFlingerPawn_C_PortalFX_Params
{
};

// Function FlingerPawn.FlingerPawn_C.PortalCollision
struct AFlingerPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.OnDamagePlayEffects
struct AFlingerPawn_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.AdditiveHitReactDelay
struct AFlingerPawn_C_AdditiveHitReactDelay_Params
{
};

// Function FlingerPawn.FlingerPawn_C.ReceiveBeginPlay
struct AFlingerPawn_C_ReceiveBeginPlay_Params
{
};

// Function FlingerPawn.FlingerPawn_C.OnDeathServer
struct AFlingerPawn_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.Impact.Physical.Creature
struct AFlingerPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.OnDeathPlayEffects
struct AFlingerPawn_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Grab
struct AFlingerPawn_C_GameplayCue_NPC_Ranged_Grab_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Throw
struct AFlingerPawn_C_GameplayCue_NPC_Ranged_Throw_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Flinger.Ranged.Grab.NPC
struct AFlingerPawn_C_GameplayCue_NPC_Flinger_Ranged_Grab_NPC_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.SpawnDeathFX
struct AFlingerPawn_C_SpawnDeathFX_Params
{
};

// Function FlingerPawn.FlingerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AFlingerPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FlingerPawn.FlingerPawn_C.OnStartedEncounterSpawn
struct AFlingerPawn_C_OnStartedEncounterSpawn_Params
{
};

// Function FlingerPawn.FlingerPawn_C.OnFinishedEncounterSpawn
struct AFlingerPawn_C_OnFinishedEncounterSpawn_Params
{
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
struct AFlingerPawn_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.Shield.Reapplied
struct AFlingerPawn_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.Shield.Destroyed
struct AFlingerPawn_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.Damage.Shielded
struct AFlingerPawn_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlingerPawn.FlingerPawn_C.ExecuteUbergraph_FlingerPawn
struct AFlingerPawn_C_ExecuteUbergraph_FlingerPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
