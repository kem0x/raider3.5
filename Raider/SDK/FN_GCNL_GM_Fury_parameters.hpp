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

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.DisableFuryPS
struct AGCNL_GM_Fury_C_DisableFuryPS_Params
{
};

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnActive
struct AGCNL_GM_Fury_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.UserConstructionScript
struct AGCNL_GM_Fury_C_UserConstructionScript_Params
{
};

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.BindOnDied
struct AGCNL_GM_Fury_C_BindOnDied_Params
{
	class AEnemyPawn_Parent_C*                         EnemyPawnParentReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnEnemyDeath
struct AGCNL_GM_Fury_C_OnEnemyDeath_Params
{
	class AActor*                                      DeadActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.ExecuteUbergraph_GCNL_GM_Fury
struct AGCNL_GM_Fury_C_ExecuteUbergraph_GCNL_GM_Fury_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
