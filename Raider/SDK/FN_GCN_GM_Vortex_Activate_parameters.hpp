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

// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.OnExecute
struct AGCN_GM_Vortex_Activate_C_OnExecute_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.UserConstructionScript
struct AGCN_GM_Vortex_Activate_C_UserConstructionScript_Params
{
};

// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__FinishedFunc
struct AGCN_GM_Vortex_Activate_C_Timeline_0__FinishedFunc_Params
{
};

// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__UpdateFunc
struct AGCN_GM_Vortex_Activate_C_Timeline_0__UpdateFunc_Params
{
};

// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.K2_HandleGameplayCue
struct AGCN_GM_Vortex_Activate_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.ExecuteUbergraph_GCN_GM_Vortex_Activate
struct AGCN_GM_Vortex_Activate_C_ExecuteUbergraph_GCN_GM_Vortex_Activate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
