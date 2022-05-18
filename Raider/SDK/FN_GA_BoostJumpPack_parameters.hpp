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

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SavePlayerPawn
struct UGA_BoostJumpPack_C_SavePlayerPawn_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnAbilityCanceled
struct UGA_BoostJumpPack_C_OnAbilityCanceled_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Cheat DBNO When Player Hits Exectute on Controller
struct UGA_BoostJumpPack_C_Cheat_DBNO_When_Player_Hits_Exectute_on_Controller_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsEmpty
struct UGA_BoostJumpPack_C_OnFuelIsEmpty_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsFull
struct UGA_BoostJumpPack_C_OnFuelIsFull_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reset Toggle Input State
struct UGA_BoostJumpPack_C_Reset_Toggle_Input_State_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessTriggerData
struct UGA_BoostJumpPack_C_ProcessTriggerData_Params
{
	struct FGameplayTag                                TagOne;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Push Jetpack Input Component
struct UGA_BoostJumpPack_C_Push_Jetpack_Input_Component_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Pop Jetpack Input Component
struct UGA_BoostJumpPack_C_Pop_Jetpack_Input_Component_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Stop Regen Effect
struct UGA_BoostJumpPack_C_Stop_Regen_Effect_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Start Regen Effect
struct UGA_BoostJumpPack_C_Start_Regen_Effect_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Stopping Regen Effect
struct UGA_BoostJumpPack_C_Consider_Stopping_Regen_Effect_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Starting Regen Effect
struct UGA_BoostJumpPack_C_Consider_Starting_Regen_Effect_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsBoostAllowed
struct UGA_BoostJumpPack_C_IsBoostAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_OnEndAbility
struct UGA_BoostJumpPack_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ShouldAbilityRespondToEvent
struct UGA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData*                         Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetMaxFuel
struct UGA_BoostJumpPack_C_GetMaxFuel_Params
{
	float                                              MaxFuel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetFuel
struct UGA_BoostJumpPack_C_GetFuel_Params
{
	float                                              Fuel;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup PlayerPawn
struct UGA_BoostJumpPack_C_Setup_PlayerPawn_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsUsingJetpackEffectActive
struct UGA_BoostJumpPack_C_IsUsingJetpackEffectActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleCurrentBoostStateChanged
struct UGA_BoostJumpPack_C_HandleCurrentBoostStateChanged_Params
{
	EJumpBoostPackState                                PreviousState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EJumpBoostPackState                                CurrentState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetCurrentBoostState
struct UGA_BoostJumpPack_C_SetCurrentBoostState_Params
{
	EJumpBoostPackState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.PotentiallyEndHovering
struct UGA_BoostJumpPack_C_PotentiallyEndHovering_Params
{
	bool                                               bForceEndHovering;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup Notify at Apex
struct UGA_BoostJumpPack_C_Setup_Notify_at_Apex_Params
{
	bool                                               bNotifyApex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleIdle
struct UGA_BoostJumpPack_C_HandleIdle_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleFalling
struct UGA_BoostJumpPack_C_HandleFalling_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleHovering
struct UGA_BoostJumpPack_C_HandleHovering_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ResetTransitionVariables
struct UGA_BoostJumpPack_C_ResetTransitionVariables_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromFalling
struct UGA_BoostJumpPack_C_TransitionFromFalling_Params
{
	TEnumAsByte<Enum_BoostJumpStates>                  TargetBoostState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromHovering
struct UGA_BoostJumpPack_C_TransitionFromHovering_Params
{
	TEnumAsByte<Enum_BoostJumpStates>                  TargetBoostState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromBoost
struct UGA_BoostJumpPack_C_TransitionFromBoost_Params
{
	TEnumAsByte<Enum_BoostJumpStates>                  TargetBoostState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromIdle
struct UGA_BoostJumpPack_C_TransitionFromIdle_Params
{
	TEnumAsByte<Enum_BoostJumpStates>                  TargetBoostState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessAbilityStateMachine
struct UGA_BoostJumpPack_C_ProcessAbilityStateMachine_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.DetermineStateToTransitionTo
struct UGA_BoostJumpPack_C_DetermineStateToTransitionTo_Params
{
	TEnumAsByte<Enum_BoostJumpStates>                  BoostState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetupTransitionVariables
struct UGA_BoostJumpPack_C_SetupTransitionVariables_Params
{
	struct FGameplayTag                                Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleBoostJump
struct UGA_BoostJumpPack_C_HandleBoostJump_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetJumpHeight
struct UGA_BoostJumpPack_C_SetJumpHeight_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             Pawn_Out;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Jump_Height;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.On Reached Jump Apex
struct UGA_BoostJumpPack_C_On_Reached_Jump_Apex_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnPawnLanded
struct UGA_BoostJumpPack_C_OnPawnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ActivateAbilityFromEvent
struct UGA_BoostJumpPack_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnCurrentStateChanged
struct UGA_BoostJumpPack_C_OnCurrentStateChanged_Params
{
	EJumpBoostPackState*                               InPreviousState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EJumpBoostPackState*                               InCurrentState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Delay_ProcessAbilityStateMachine
struct UGA_BoostJumpPack_C_Delay_ProcessAbilityStateMachine_Params
{
};

// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ExecuteUbergraph_GA_BoostJumpPack
struct UGA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
