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

// Function B_Constructor_BASE.B_Constructor_BASE_C.UpdateAudioCrossfade
struct AB_Constructor_BASE_C_UpdateAudioCrossfade_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.GetFeelTheBaseTraceLocation
struct AB_Constructor_BASE_C_GetFeelTheBaseTraceLocation_Params
{
	struct FTransform                                  TraceLocation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceWithAmount
struct AB_Constructor_BASE_C_SpawnResourceWithAmount_Params
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountToSpawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetHealingMultiplier
struct AB_Constructor_BASE_C_SetHealingMultiplier_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupTrapEffects
struct AB_Constructor_BASE_C_SetupTrapEffects_Params
{
	class UAbilitySystemComponent*                     AbilityComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.GetTrapGEFromTag
struct AB_Constructor_BASE_C_GetTrapGEFromTag_Params
{
	struct FGameplayTagContainer                       InTag;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                      OutGE;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_InitialStaticMeshAnimationIsComplete
struct AB_Constructor_BASE_C_OnRep_InitialStaticMeshAnimationIsComplete_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
struct AB_Constructor_BASE_C_BaseSelfApplyGameplaySpec_Params
{
	struct FGameplayEffectSpecHandle                   GE_Spec;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
struct AB_Constructor_BASE_C_SetBaseVisualGlow_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
struct AB_Constructor_BASE_C_SetDamageMultiplier_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
struct AB_Constructor_BASE_C_OnRep_CollectResources_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
struct AB_Constructor_BASE_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
struct AB_Constructor_BASE_C_AddResourceToStack_Params
{
	struct FStructRecyclingResource                    RecyclingResource;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortWorldItemDefinition*                    Stored_Resource;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountToSpawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStructRecyclingResource                    SetValue;                                                 // (Parm, OutParm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
struct AB_Constructor_BASE_C_SpawnResourceForRecycling_Params
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountToSpawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
struct AB_Constructor_BASE_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
struct AB_Constructor_BASE_C_OnRep_BaseIsPlaced_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
struct AB_Constructor_BASE_C_RecycleResources_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
struct AB_Constructor_BASE_C_SetupHostileEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 HostileEffects;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
struct AB_Constructor_BASE_C_SetupFriendlyEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 FriendlyEffects;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
struct AB_Constructor_BASE_C_SetupBuildingEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 BuildingEffects;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
struct AB_Constructor_BASE_C_Setup_Base_Effect_Array_Params
{
	class UAbilitySystemComponent*                     Instigator_Ability_System;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 BASEBuildingEffects;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FBASEGameplayEffect>                 BASEFriendlyEffects;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FBASEGameplayEffect>                 BASEHostileEffects;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
struct AB_Constructor_BASE_C_SetupBaseDefaultValues_Params
{
	class UAbilitySystemComponent*                     Ability_System_Component;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NodesToAffect;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript
struct AB_Constructor_BASE_C_UserConstructionScript_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
struct AB_Constructor_BASE_C_OnPlaced_Params
{
	class UAbilitySystemComponent**                    InstigatorAbilitySystemComponent;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling
struct AB_Constructor_BASE_C_Recycling_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
struct AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
struct AB_Constructor_BASE_C_AnimateLegs_Params
{
	bool                                               LegsUp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
struct AB_Constructor_BASE_C_StartBuildingActorVisuals_Params
{
	class ABuildingSMActor**                           BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent**                       EffectMeshComp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
struct AB_Constructor_BASE_C_StopBuildingActorVisuals_Params
{
	class ABuildingSMActor**                           BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent**                       EffectMeshComp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
struct AB_Constructor_BASE_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
struct AB_Constructor_BASE_C_GetDamageAmp_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
struct AB_Constructor_BASE_C_ResourcesCreated_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCollected
struct AB_Constructor_BASE_C_ResourcesCollected_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseIsReadyToAnimate
struct AB_Constructor_BASE_C_BaseIsReadyToAnimate_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ShowHiddenMeshes
struct AB_Constructor_BASE_C_ShowHiddenMeshes_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ApplyTrapEffects
struct AB_Constructor_BASE_C_ApplyTrapEffects_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SaveOwner
struct AB_Constructor_BASE_C_SaveOwner_Params
{
	class APlayerPawn_Constructor_C*                   ConstructorPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.FeelTheBaseGlow
struct AB_Constructor_BASE_C_FeelTheBaseGlow_Params
{
	bool                                               Stack1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stack2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stack3;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ResetFeelTheBaseGlow
struct AB_Constructor_BASE_C_ResetFeelTheBaseGlow_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
struct AB_Constructor_BASE_C_BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
struct AB_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
