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

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnRemove
struct AGCN_Athena_DanceStun_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnActive
struct AGCN_Athena_DanceStun_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.UserConstructionScript
struct AGCN_Athena_DanceStun_C_UserConstructionScript_Params
{
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__FinishedFunc
struct AGCN_Athena_DanceStun_C_IntroAnim__FinishedFunc_Params
{
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__UpdateFunc
struct AGCN_Athena_DanceStun_C_IntroAnim__UpdateFunc_Params
{
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__FinishedFunc
struct AGCN_Athena_DanceStun_C_OutroAnim__FinishedFunc_Params
{
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__UpdateFunc
struct AGCN_Athena_DanceStun_C_OutroAnim__UpdateFunc_Params
{
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ReceiveTick
struct AGCN_Athena_DanceStun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateIn
struct AGCN_Athena_DanceStun_C_AnimateIn_Params
{
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateOut
struct AGCN_Athena_DanceStun_C_AnimateOut_Params
{
};

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ExecuteUbergraph_GCN_Athena_DanceStun
struct AGCN_Athena_DanceStun_C_ExecuteUbergraph_GCN_Athena_DanceStun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
