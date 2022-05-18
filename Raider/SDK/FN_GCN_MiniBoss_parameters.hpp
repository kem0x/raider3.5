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

// Function GCN_MiniBoss.GCN_MiniBoss_C.OverwriteElementalParticles
struct AGCN_MiniBoss_C_OverwriteElementalParticles_Params
{
	class AEnemyPawn_Parent_C*                         Enemy_Pawn_Parent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_MiniBoss.GCN_MiniBoss_C.OnActive
struct AGCN_MiniBoss_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_MiniBoss.GCN_MiniBoss_C.OnRemove
struct AGCN_MiniBoss_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_MiniBoss.GCN_MiniBoss_C.HideMiniBossGCN
struct AGCN_MiniBoss_C_HideMiniBossGCN_Params
{
};

// Function GCN_MiniBoss.GCN_MiniBoss_C.SetMiniBossGCNColors
struct AGCN_MiniBoss_C_SetMiniBossGCNColors_Params
{
};

// Function GCN_MiniBoss.GCN_MiniBoss_C.UserConstructionScript
struct AGCN_MiniBoss_C_UserConstructionScript_Params
{
};

// Function GCN_MiniBoss.GCN_MiniBoss_C.ReceiveBeginPlay
struct AGCN_MiniBoss_C_ReceiveBeginPlay_Params
{
};

// Function GCN_MiniBoss.GCN_MiniBoss_C.ExecuteUbergraph_GCN_MiniBoss
struct AGCN_MiniBoss_C_ExecuteUbergraph_GCN_MiniBoss_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
