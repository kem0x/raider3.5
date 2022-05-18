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

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.Handle Pawn Detach RC
struct AB_Prj_Athena_KnockGrenade_C_Handle_Pawn_Detach_RC_Params
{
};

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.UserConstructionScript
struct AB_Prj_Athena_KnockGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_KnockGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.OnStop
struct AB_Prj_Athena_KnockGrenade_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.Stop_Rotation
struct AB_Prj_Athena_KnockGrenade_C_Stop_Rotation_Params
{
};

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.OnExploded
struct AB_Prj_Athena_KnockGrenade_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Athena_KnockGrenade_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C.ExecuteUbergraph_B_Prj_Athena_KnockGrenade
struct AB_Prj_Athena_KnockGrenade_C_ExecuteUbergraph_B_Prj_Athena_KnockGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
