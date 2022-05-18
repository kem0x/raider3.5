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

// Function B_Prj_Mimic.B_Prj_Mimic_C.UserConstructionScript
struct AB_Prj_Mimic_C_UserConstructionScript_Params
{
};

// Function B_Prj_Mimic.B_Prj_Mimic_C.ReceiveBeginPlay
struct AB_Prj_Mimic_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Mimic.B_Prj_Mimic_C.OnBounce
struct AB_Prj_Mimic_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Mimic.B_Prj_Mimic_C.OnExploded
struct AB_Prj_Mimic_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Mimic.B_Prj_Mimic_C.ExecuteUbergraph_B_Prj_Mimic
struct AB_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
