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

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.SpawnTires
struct AB_Prj_Athena_TowerGrenade_C_SpawnTires_Params
{
	struct FVector                                     ReferenceLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.ClearAndBuild
struct AB_Prj_Athena_TowerGrenade_C_ClearAndBuild_Params
{
	TArray<struct FVector>                             ClearedGridCells;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              BGAClassArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             BGALocationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRotator>                            BGARotationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.DestroyActorsInGridCell
struct AB_Prj_Athena_TowerGrenade_C_DestroyActorsInGridCell_Params
{
	struct FVector                                     CellLocation;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.CreateBaseSection
struct AB_Prj_Athena_TowerGrenade_C_CreateBaseSection_Params
{
	struct FVector                                     ReferenceLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<class UClass*>                              BGAClassArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             BGALocationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRotator>                            BGARotationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.SetBaseDestination
struct AB_Prj_Athena_TowerGrenade_C_SetBaseDestination_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.UserConstructionScript
struct AB_Prj_Athena_TowerGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.OnStop
struct AB_Prj_Athena_TowerGrenade_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.OnExploded
struct AB_Prj_Athena_TowerGrenade_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.ReceiveHit
struct AB_Prj_Athena_TowerGrenade_C_ReceiveHit_Params
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

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_TowerGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.Handle Bounce
struct AB_Prj_Athena_TowerGrenade_C_Handle_Bounce_Params
{
	struct FVector                                     Hit_Location;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.Delete another actor
struct AB_Prj_Athena_TowerGrenade_C_Delete_another_actor_Params
{
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.ReceiveEndPlay
struct AB_Prj_Athena_TowerGrenade_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C.ExecuteUbergraph_B_Prj_Athena_TowerGrenade
struct AB_Prj_Athena_TowerGrenade_C_ExecuteUbergraph_B_Prj_Athena_TowerGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
