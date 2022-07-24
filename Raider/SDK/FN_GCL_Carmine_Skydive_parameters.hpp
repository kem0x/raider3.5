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

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.OnWhileActiveParticleSystemDeactivate
struct AGCL_Carmine_Skydive_C_OnWhileActiveParticleSystemDeactivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.OnWhileActiveParticleSystemActivate
struct AGCL_Carmine_Skydive_C_OnWhileActiveParticleSystemActivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.UserConstructionScript
struct AGCL_Carmine_Skydive_C_UserConstructionScript_Params
{
};

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.ReceiveBeginPlay
struct AGCL_Carmine_Skydive_C_ReceiveBeginPlay_Params
{
};

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.ReceiveEndPlay
struct AGCL_Carmine_Skydive_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.ReceiveTick
struct AGCL_Carmine_Skydive_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.K2_HandleGameplayCue
struct AGCL_Carmine_Skydive_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Skydive.GCL_Carmine_Skydive_C.ExecuteUbergraph_GCL_Carmine_Skydive
struct AGCL_Carmine_Skydive_C_ExecuteUbergraph_GCL_Carmine_Skydive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
