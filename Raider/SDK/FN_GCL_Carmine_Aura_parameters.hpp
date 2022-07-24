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

// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.UserConstructionScript
struct AGCL_Carmine_Aura_C_UserConstructionScript_Params
{
};

// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ReceiveBeginPlay
struct AGCL_Carmine_Aura_C_ReceiveBeginPlay_Params
{
};

// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ReceiveEndPlay
struct AGCL_Carmine_Aura_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.K2_HandleGameplayCue
struct AGCL_Carmine_Aura_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.JimLanded
struct AGCL_Carmine_Aura_C_JimLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ExecuteUbergraph_GCL_Carmine_Aura
struct AGCL_Carmine_Aura_C_ExecuteUbergraph_GCL_Carmine_Aura_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
