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

// Function B_Prj_Explosive_Crossbow_Athena.B_Prj_Explosive_Crossbow_Athena_C.UserConstructionScript
struct AB_Prj_Explosive_Crossbow_Athena_C_UserConstructionScript_Params
{
};

// Function B_Prj_Explosive_Crossbow_Athena.B_Prj_Explosive_Crossbow_Athena_C.OnTouched
struct AB_Prj_Explosive_Crossbow_Athena_C_OnTouched_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Explosive_Crossbow_Athena.B_Prj_Explosive_Crossbow_Athena_C.OnExploded
struct AB_Prj_Explosive_Crossbow_Athena_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Explosive_Crossbow_Athena.B_Prj_Explosive_Crossbow_Athena_C.ExecuteUbergraph_B_Prj_Explosive_Crossbow_Athena
struct AB_Prj_Explosive_Crossbow_Athena_C_ExecuteUbergraph_B_Prj_Explosive_Crossbow_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
