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

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove
struct AGCN_Athena_LowGravity_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated
struct AGCN_Athena_LowGravity_C_Activated_Params
{
	class AActor*                                      PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive
struct AGCN_Athena_LowGravity_C_WhileActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.UserConstructionScript
struct AGCN_Athena_LowGravity_C_UserConstructionScript_Params
{
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveTick
struct AGCN_Athena_LowGravity_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue
struct AGCN_Athena_LowGravity_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay
struct AGCN_Athena_LowGravity_C_ReceiveBeginPlay_Params
{
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell
struct AGCN_Athena_LowGravity_C_ExpireTell_Params
{
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell
struct AGCN_Athena_LowGravity_C_ClearExpireTell_Params
{
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound
struct AGCN_Athena_LowGravity_C_PlayExpirationSound_Params
{
};

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity
struct AGCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
