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

// Function B_Prj_Bullet_Athena_AR.B_Prj_Bullet_Athena_AR_C.UserConstructionScript
struct AB_Prj_Bullet_Athena_AR_C_UserConstructionScript_Params
{
};

// Function B_Prj_Bullet_Athena_AR.B_Prj_Bullet_Athena_AR_C.OnTouched
struct AB_Prj_Bullet_Athena_AR_C_OnTouched_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Bullet_Athena_AR.B_Prj_Bullet_Athena_AR_C.ExecuteUbergraph_B_Prj_Bullet_Athena_AR
struct AB_Prj_Bullet_Athena_AR_C_ExecuteUbergraph_B_Prj_Bullet_Athena_AR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
