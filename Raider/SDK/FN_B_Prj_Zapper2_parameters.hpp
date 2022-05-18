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

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnRep_Impact Location
struct AB_Prj_Zapper2_C_OnRep_Impact_Location_Params
{
};

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.UserConstructionScript
struct AB_Prj_Zapper2_C_UserConstructionScript_Params
{
};

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ReceiveAnyDamage
struct AB_Prj_Zapper2_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ReceiveBeginPlay
struct AB_Prj_Zapper2_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnStop
struct AB_Prj_Zapper2_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ExecuteUbergraph_B_Prj_Zapper2
struct AB_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
