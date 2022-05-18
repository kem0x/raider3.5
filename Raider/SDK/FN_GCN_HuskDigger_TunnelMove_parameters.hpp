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

// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.UserConstructionScript
struct AGCN_HuskDigger_TunnelMove_C_UserConstructionScript_Params
{
};

// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.K2_HandleGameplayCue
struct AGCN_HuskDigger_TunnelMove_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.Trail
struct AGCN_HuskDigger_TunnelMove_C_Trail_Params
{
};

// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.ExecuteUbergraph_GCN_HuskDigger_TunnelMove
struct AGCN_HuskDigger_TunnelMove_C_ExecuteUbergraph_GCN_HuskDigger_TunnelMove_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
