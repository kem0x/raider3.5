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

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnRemove
struct AGCL_Carmine_Beam_Loop_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnWhileActiveParticleSystemDeactivate
struct AGCL_Carmine_Beam_Loop_C_OnWhileActiveParticleSystemDeactivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.WhileActive
struct AGCL_Carmine_Beam_Loop_C_WhileActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnStopParticleSystemSpawned
struct AGCL_Carmine_Beam_Loop_C_OnStopParticleSystemSpawned_Params
{
	class UParticleSystemComponent**                   SpawnedParticleSysComponent;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnWhileActiveParticleSystemActivate
struct AGCL_Carmine_Beam_Loop_C_OnWhileActiveParticleSystemActivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.UserConstructionScript
struct AGCL_Carmine_Beam_Loop_C_UserConstructionScript_Params
{
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ReceiveBeginPlay
struct AGCL_Carmine_Beam_Loop_C_ReceiveBeginPlay_Params
{
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ReceiveEndPlay
struct AGCL_Carmine_Beam_Loop_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.K2_HandleGameplayCue
struct AGCL_Carmine_Beam_Loop_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ExecuteUbergraph_GCL_Carmine_Beam_Loop
struct AGCL_Carmine_Beam_Loop_C_ExecuteUbergraph_GCL_Carmine_Beam_Loop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
