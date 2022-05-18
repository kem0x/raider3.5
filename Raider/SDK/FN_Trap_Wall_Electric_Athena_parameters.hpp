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

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.PlayActivationSoundAndFX
struct ATrap_Wall_Electric_Athena_C_PlayActivationSoundAndFX_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.UserConstructionScript
struct ATrap_Wall_Electric_Athena_C_UserConstructionScript_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.FadeLight__FinishedFunc
struct ATrap_Wall_Electric_Athena_C_FadeLight__FinishedFunc_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.FadeLight__UpdateFunc
struct ATrap_Wall_Electric_Athena_C_FadeLight__UpdateFunc_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnPlaced
struct ATrap_Wall_Electric_Athena_C_OnPlaced_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnFinishedBuilding
struct ATrap_Wall_Electric_Athena_C_OnFinishedBuilding_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnReloadEnd
struct ATrap_Wall_Electric_Athena_C_OnReloadEnd_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnOutOfDurability
struct ATrap_Wall_Electric_Athena_C_OnOutOfDurability_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnWorldReady
struct ATrap_Wall_Electric_Athena_C_OnWorldReady_Params
{
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ATrap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.ExecuteUbergraph_Trap_Wall_Electric_Athena
struct ATrap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
