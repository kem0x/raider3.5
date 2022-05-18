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

// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.OnWhileActiveParticleSystemActivate
struct AGC_Ninja_Assassination_ActiveFX_C_OnWhileActiveParticleSystemActivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.WhileActive
struct AGC_Ninja_Assassination_ActiveFX_C_WhileActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.UserConstructionScript
struct AGC_Ninja_Assassination_ActiveFX_C_UserConstructionScript_Params
{
};

// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.K2_HandleGameplayCue
struct AGC_Ninja_Assassination_ActiveFX_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX
struct AGC_Ninja_Assassination_ActiveFX_C_ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
