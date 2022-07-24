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

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue
struct AAthenaSupplyDrop_C_OnSetCustomDepthStencilValue_Params
{
	TArray<class UPrimitiveComponent*>*                PrimComponents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bUseCustomDepth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StencilValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutConsume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop
struct AAthenaSupplyDrop_C_HandleProjectileMovementStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.StartNewWaveSound
struct AAthenaSupplyDrop_C_StartNewWaveSound_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding
struct AAthenaSupplyDrop_C_ForceSetLocationOnLanding_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation
struct AAthenaSupplyDrop_C_OnRep_LandingLocation_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded
struct AAthenaSupplyDrop_C_AlmostLanded_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare
struct AAthenaSupplyDrop_C_DisableFlare_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed
struct AAthenaSupplyDrop_C_InitFallHeightAndSpeed_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX
struct AAthenaSupplyDrop_C_PlayLandingFX_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall
struct AAthenaSupplyDrop_C_InitFall_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped
struct AAthenaSupplyDrop_C_OnRep_BalloonPopped_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed
struct AAthenaSupplyDrop_C_BalloonDestroyed_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation
struct AAthenaSupplyDrop_C_UpdateReticleLocation_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop
struct AAthenaSupplyDrop_C_OpenSupplyDrop_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened
struct AAthenaSupplyDrop_C_OnRep_Opened_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor
struct AAthenaSupplyDrop_C_Setup_Bind_To_Building_Actor_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString
struct AAthenaSupplyDrop_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation
struct AAthenaSupplyDrop_C_GetLootSpawnLocation_Params
{
	struct FVector                                     LootSpawnLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot
struct AAthenaSupplyDrop_C_SpawnLoot_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract
struct AAthenaSupplyDrop_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript
struct AAthenaSupplyDrop_C_UserConstructionScript_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.FallAudioTimeline__FinishedFunc
struct AAthenaSupplyDrop_C_FallAudioTimeline__FinishedFunc_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.FallAudioTimeline__UpdateFunc
struct AAthenaSupplyDrop_C_FallAudioTimeline__UpdateFunc_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay
struct AAthenaSupplyDrop_C_ReceiveBeginPlay_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged
struct AAthenaSupplyDrop_C_OnLandingLocationChanged_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall
struct AAthenaSupplyDrop_C_Multicast_ApplyGravityForFall_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
struct AAthenaSupplyDrop_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer
struct AAthenaSupplyDrop_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract
struct AAthenaSupplyDrop_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects
struct AAthenaSupplyDrop_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline
struct AAthenaSupplyDrop_C_BeginFallAudioTimeline_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline
struct AAthenaSupplyDrop_C_StopFallAudioTimeline_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnFirstSupplyDropOfWaveSpawned
struct AAthenaSupplyDrop_C_OnFirstSupplyDropOfWaveSpawned_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop
struct AAthenaSupplyDrop_C_ExecuteUbergraph_AthenaSupplyDrop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
