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

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.UserConstructionScript
struct AGCN_UG_Vortex_C_UserConstructionScript_Params
{
};

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__FinishedFunc
struct AGCN_UG_Vortex_C_Timeline_0__FinishedFunc_Params
{
};

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__UpdateFunc
struct AGCN_UG_Vortex_C_Timeline_0__UpdateFunc_Params
{
};

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.K2_HandleGameplayCue
struct AGCN_UG_Vortex_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.ExecuteUbergraph_GCN_UG_Vortex
struct AGCN_UG_Vortex_C_ExecuteUbergraph_GCN_UG_Vortex_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
