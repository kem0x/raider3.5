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

// Function Survivor.Survivor_C.IsAppearanceApplied
struct ASurvivor_C_IsAppearanceApplied_Params
{
	bool                                               IsApplied;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.OnRep_InteractionBangEnabled
struct ASurvivor_C_OnRep_InteractionBangEnabled_Params
{
};

// Function Survivor.Survivor_C.InteractionBangVisibility
struct ASurvivor_C_InteractionBangVisibility_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.OnRep_TeleportEffectModeReplicated
struct ASurvivor_C_OnRep_TeleportEffectModeReplicated_Params
{
};

// Function Survivor.Survivor_C.InitializeMIDs
struct ASurvivor_C_InitializeMIDs_Params
{
};

// Function Survivor.Survivor_C.SetLastHitInfoOnBlackboard
struct ASurvivor_C_SetLastHitInfoOnBlackboard_Params
{
	TEnumAsByte<ESurvivorHitInfoType>                  SurvivorHitInfoType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.Set Interact Channel Response
struct ASurvivor_C_Set_Interact_Channel_Response_Params
{
	bool                                               ShouldInteractChannelBeActive;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.OnRep_bToggleInteractChannel
struct ASurvivor_C_OnRep_bToggleInteractChannel_Params
{
};

// Function Survivor.Survivor_C.UserConstructionScript
struct ASurvivor_C_UserConstructionScript_Params
{
};

// Function Survivor.Survivor_C.OnDamagePlayEffects
struct ASurvivor_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Survivor.Survivor_C.OnDamageServer
struct ASurvivor_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Survivor.Survivor_C.StopCowering
struct ASurvivor_C_StopCowering_Params
{
};

// Function Survivor.Survivor_C.StartCowering
struct ASurvivor_C_StartCowering_Params
{
};

// Function Survivor.Survivor_C.SurvivorSetLockedInPlace
struct ASurvivor_C_SurvivorSetLockedInPlace_Params
{
	bool                                               LockedInPlace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.Lock
struct ASurvivor_C_Lock_Params
{
};

// Function Survivor.Survivor_C.Unlock
struct ASurvivor_C_Unlock_Params
{
};

// Function Survivor.Survivor_C.OnDisplaySentence
struct ASurvivor_C_OnDisplaySentence_Params
{
	struct FText*                                      SpeechText;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Survivor.Survivor_C.OnClearSentence
struct ASurvivor_C_OnClearSentence_Params
{
};

// Function Survivor.Survivor_C.ReceiveBeginPlay
struct ASurvivor_C_ReceiveBeginPlay_Params
{
};

// Function Survivor.Survivor_C.OnSurvivorDowned
struct ASurvivor_C_OnSurvivorDowned_Params
{
	class AFortAIPawn*                                 DownedAI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 DownedInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.ReceiveEndPlay
struct ASurvivor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.AdditiveHitReactDelay
struct ASurvivor_C_AdditiveHitReactDelay_Params
{
};

// Function Survivor.Survivor_C.MIDsInitialized
struct ASurvivor_C_MIDsInitialized_Params
{
};

// Function Survivor.Survivor_C.OnAppearanceOverridden
struct ASurvivor_C_OnAppearanceOverridden_Params
{
};

// Function Survivor.Survivor_C.PlayTeleportOut
struct ASurvivor_C_PlayTeleportOut_Params
{
};

// Function Survivor.Survivor_C.PlayTeleportIn
struct ASurvivor_C_PlayTeleportIn_Params
{
};

// Function Survivor.Survivor_C.GameplayCue.Teleport.In
struct ASurvivor_C_GameplayCue_Teleport_In_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Survivor.Survivor_C.GameplayCue.Teleport.Out
struct ASurvivor_C_GameplayCue_Teleport_Out_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Survivor.Survivor_C.ShowInteractionBang
struct ASurvivor_C_ShowInteractionBang_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Survivor.Survivor_C.ExecuteUbergraph_Survivor
struct ASurvivor_C_ExecuteUbergraph_Survivor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
