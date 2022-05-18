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

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnRep_bExploded
struct AB_Prj_CeilingTrap_Falling_C_OnRep_bExploded_Params
{
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.RandomDirection
struct AB_Prj_CeilingTrap_Falling_C_RandomDirection_Params
{
	struct FVector                                     InVec;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.UserConstructionScript
struct AB_Prj_CeilingTrap_Falling_C_UserConstructionScript_Params
{
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnBounce
struct AB_Prj_CeilingTrap_Falling_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.Overlap
struct AB_Prj_CeilingTrap_Falling_C_Overlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.BindOverlap
struct AB_Prj_CeilingTrap_Falling_C_BindOverlap_Params
{
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ReceiveBeginPlay
struct AB_Prj_CeilingTrap_Falling_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.CheckTireDestruction
struct AB_Prj_CeilingTrap_Falling_C_CheckTireDestruction_Params
{
	struct FVector                                     CurrentVelocity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.DestroyTire
struct AB_Prj_CeilingTrap_Falling_C_DestroyTire_Params
{
};

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ExecuteUbergraph_B_Prj_CeilingTrap_Falling
struct AB_Prj_CeilingTrap_Falling_C_ExecuteUbergraph_B_Prj_CeilingTrap_Falling_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
