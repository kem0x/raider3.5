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

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.KillOldStaticMesh
struct AB_Prj_SpacePistol_Laser_C_KillOldStaticMesh_Params
{
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.CalculateBeamDistance
struct AB_Prj_SpacePistol_Laser_C_CalculateBeamDistance_Params
{
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.UserConstructionScript
struct AB_Prj_SpacePistol_Laser_C_UserConstructionScript_Params
{
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveActorBeginOverlap
struct AB_Prj_SpacePistol_Laser_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.SpawnRibbonTrail
struct AB_Prj_SpacePistol_Laser_C_SpawnRibbonTrail_Params
{
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveTick
struct AB_Prj_SpacePistol_Laser_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.OnExploded
struct AB_Prj_SpacePistol_Laser_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveBeginPlay
struct AB_Prj_SpacePistol_Laser_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.OnBounce
struct AB_Prj_SpacePistol_Laser_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.SpawnHitParticles
struct AB_Prj_SpacePistol_Laser_C_SpawnHitParticles_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_SpacePistol_Laser_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ExecuteUbergraph_B_Prj_SpacePistol_Laser
struct AB_Prj_SpacePistol_Laser_C_ExecuteUbergraph_B_Prj_SpacePistol_Laser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
