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

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetPlayerLeanValuePercent
struct AGCN_Hoverboard_Running_C_GetPlayerLeanValuePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetHoverboardSkeletal
struct AGCN_Hoverboard_Running_C_GetHoverboardSkeletal_Params
{
	class USkeletalMeshComponent*                      SK_HoverboardComponent;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ClearSounds
struct AGCN_Hoverboard_Running_C_ClearSounds_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnActive
struct AGCN_Hoverboard_Running_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnRemove
struct AGCN_Hoverboard_Running_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsAccelerating
struct AGCN_Hoverboard_Running_C_PlayerIsAccelerating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsDecelerating
struct AGCN_Hoverboard_Running_C_PlayerIsDecelerating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.IsPlayerJumping
struct AGCN_Hoverboard_Running_C_IsPlayerJumping_Params
{
	struct FVector                                     InVec;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.UserConstructionScript
struct AGCN_Hoverboard_Running_C_UserConstructionScript_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__FinishedFunc
struct AGCN_Hoverboard_Running_C_Spawnin__FinishedFunc_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__UpdateFunc
struct AGCN_Hoverboard_Running_C_Spawnin__UpdateFunc_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ReceiveTick
struct AGCN_Hoverboard_Running_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.K2_OnReset
struct AGCN_Hoverboard_Running_C_K2_OnReset_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnJump
struct AGCN_Hoverboard_Running_C_OnJump_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Idle
struct AGCN_Hoverboard_Running_C_Idle_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Moving
struct AGCN_Hoverboard_Running_C_Moving_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnSpawnedIn
struct AGCN_Hoverboard_Running_C_OnSpawnedIn_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnDespawned
struct AGCN_Hoverboard_Running_C_OnDespawned_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ResetSpawnIn
struct AGCN_Hoverboard_Running_C_ResetSpawnIn_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.BindSetup
struct AGCN_Hoverboard_Running_C_BindSetup_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Setup
struct AGCN_Hoverboard_Running_C_Setup_Params
{
};

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ExecuteUbergraph_GCN_Hoverboard_Running
struct AGCN_Hoverboard_Running_C_ExecuteUbergraph_GCN_Hoverboard_Running_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
