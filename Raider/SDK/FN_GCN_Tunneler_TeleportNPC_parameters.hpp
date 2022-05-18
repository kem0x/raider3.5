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

// Function GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C.UserConstructionScript
struct AGCN_Tunneler_TeleportNPC_C_UserConstructionScript_Params
{
};

// Function GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C.K2_HandleGameplayCue
struct AGCN_Tunneler_TeleportNPC_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C.ExecuteUbergraph_GCN_Tunneler_TeleportNPC
struct AGCN_Tunneler_TeleportNPC_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
