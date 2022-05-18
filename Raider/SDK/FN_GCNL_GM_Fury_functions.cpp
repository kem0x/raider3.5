// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.DisableFuryPS
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_GM_Fury_C::DisableFuryPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_Fury.GCNL_GM_Fury_C.DisableFuryPS");

	AGCNL_GM_Fury_C_DisableFuryPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_GM_Fury_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnActive");

	AGCNL_GM_Fury_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_GM_Fury_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_Fury.GCNL_GM_Fury_C.UserConstructionScript");

	AGCNL_GM_Fury_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.BindOnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyPawn_Parent_C*     EnemyPawnParentReference       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_GM_Fury_C::BindOnDied(class AEnemyPawn_Parent_C* EnemyPawnParentReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_Fury.GCNL_GM_Fury_C.BindOnDied");

	AGCNL_GM_Fury_C_BindOnDied_Params params;
	params.EnemyPawnParentReference = EnemyPawnParentReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnEnemyDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DeadActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_GM_Fury_C::OnEnemyDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnEnemyDeath");

	AGCNL_GM_Fury_C_OnEnemyDeath_Params params;
	params.DeadActor = DeadActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.ExecuteUbergraph_GCNL_GM_Fury
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_GM_Fury_C::ExecuteUbergraph_GCNL_GM_Fury(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_Fury.GCNL_GM_Fury_C.ExecuteUbergraph_GCNL_GM_Fury");

	AGCNL_GM_Fury_C_ExecuteUbergraph_GCNL_GM_Fury_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
