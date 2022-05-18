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

// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActive
struct AGCN_Hoverboard_Strait_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.UserConstructionScript
struct AGCN_Hoverboard_Strait_C_UserConstructionScript_Params
{
};

// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActivate
struct AGCN_Hoverboard_Strait_C_OnActivate_Params
{
};

// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.ExecuteUbergraph_GCN_Hoverboard_Strait
struct AGCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
