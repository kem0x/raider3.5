// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnRep_DestroyBalloon
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::OnRep_DestroyBalloon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnRep_DestroyBalloon");

	ABP_DamageBalloon_Athena_C_OnRep_DestroyBalloon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DamageBalloon_Athena_C::ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ShouldDie");

	ABP_DamageBalloon_Athena_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.UserConstructionScript");

	ABP_DamageBalloon_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DamageBalloon_Athena_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnDamageServer");

	ABP_DamageBalloon_Athena_C_OnDamageServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.CrateIsGone
// (BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::CrateIsGone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.CrateIsGone");

	ABP_DamageBalloon_Athena_C_CrateIsGone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ReceiveBeginPlay");

	ABP_DamageBalloon_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ExecuteUbergraph_BP_DamageBalloon_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageBalloon_Athena_C::ExecuteUbergraph_BP_DamageBalloon_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ExecuteUbergraph_BP_DamageBalloon_Athena");

	ABP_DamageBalloon_Athena_C_ExecuteUbergraph_BP_DamageBalloon_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnBalloonDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::OnBalloonDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnBalloonDestroyed__DelegateSignature");

	ABP_DamageBalloon_Athena_C_OnBalloonDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
