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

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_SuperShielder_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.UserConstructionScript");

	ABGA_SuperShielder_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.Opacity Control__FinishedFunc
// (BlueprintEvent)

void ABGA_SuperShielder_Shield_C::Opacity_Control__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.Opacity Control__FinishedFunc");

	ABGA_SuperShielder_Shield_C_Opacity_Control__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.Opacity Control__UpdateFunc
// (BlueprintEvent)

void ABGA_SuperShielder_Shield_C::Opacity_Control__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.Opacity Control__UpdateFunc");

	ABGA_SuperShielder_Shield_C_Opacity_Control__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_SuperShielder_Shield_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDamagePlayEffects");

	ABGA_SuperShielder_Shield_C_OnDamagePlayEffects_Params params;
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


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_SuperShielder_Shield_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDamageServer");

	ABGA_SuperShielder_Shield_C_OnDamageServer_Params params;
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


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_SuperShielder_Shield_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDeathServer");

	ABGA_SuperShielder_Shield_C_OnDeathServer_Params params;
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


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_SuperShielder_Shield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.ReceiveBeginPlay");

	ABGA_SuperShielder_Shield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.SuperShielderDied
// (BlueprintCallable, BlueprintEvent)

void ABGA_SuperShielder_Shield_C::SuperShielderDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.SuperShielderDied");

	ABGA_SuperShielder_Shield_C_SuperShielderDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void ABGA_SuperShielder_Shield_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.FadeIn");

	ABGA_SuperShielder_Shield_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void ABGA_SuperShielder_Shield_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.FadeOut");

	ABGA_SuperShielder_Shield_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.ExecuteUbergraph_BGA_SuperShielder_Shield
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_SuperShielder_Shield_C::ExecuteUbergraph_BGA_SuperShielder_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.ExecuteUbergraph_BGA_SuperShielder_Shield");

	ABGA_SuperShielder_Shield_C_ExecuteUbergraph_BGA_SuperShielder_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
