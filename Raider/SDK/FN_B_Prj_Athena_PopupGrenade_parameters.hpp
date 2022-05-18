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

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.GetGridActors
struct AB_Prj_Athena_PopupGrenade_C_GetGridActors_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<class ABuildingSMActor*>                    GridActors1;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.CreateBase
struct AB_Prj_Athena_PopupGrenade_C_CreateBase_Params
{
	struct FVector                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.SetBaseDestination
struct AB_Prj_Athena_PopupGrenade_C_SetBaseDestination_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.UserConstructionScript
struct AB_Prj_Athena_PopupGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.OnStop
struct AB_Prj_Athena_PopupGrenade_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.OnExploded
struct AB_Prj_Athena_PopupGrenade_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.ReceiveHit
struct AB_Prj_Athena_PopupGrenade_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.ExecuteUbergraph_B_Prj_Athena_PopupGrenade
struct AB_Prj_Athena_PopupGrenade_C_ExecuteUbergraph_B_Prj_Athena_PopupGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
