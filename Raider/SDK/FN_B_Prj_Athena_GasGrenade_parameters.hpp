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

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.UserConstructionScript
struct AB_Prj_Athena_GasGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Athena_GasGrenade_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.DamageTick
struct AB_Prj_Athena_GasGrenade_C_DamageTick_Params
{
};

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.Stop_Rotation
struct AB_Prj_Athena_GasGrenade_C_Stop_Rotation_Params
{
};

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.OnBounce
struct AB_Prj_Athena_GasGrenade_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.OnStop
struct AB_Prj_Athena_GasGrenade_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.ExecuteUbergraph_B_Prj_Athena_GasGrenade
struct AB_Prj_Athena_GasGrenade_C_ExecuteUbergraph_B_Prj_Athena_GasGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
