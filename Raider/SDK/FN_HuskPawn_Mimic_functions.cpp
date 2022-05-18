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

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.KillPawnOnceTransformedToChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::KillPawnOnceTransformedToChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.KillPawnOnceTransformedToChest");

	AHuskPawn_Mimic_C_KillPawnOnceTransformedToChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::BecomeChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChest");

	AHuskPawn_Mimic_C_BecomeChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChestIfConditionsSatisfied
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::BecomeChestIfConditionsSatisfied()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChestIfConditionsSatisfied");

	AHuskPawn_Mimic_C_BecomeChestIfConditionsSatisfied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.InitMimic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::InitMimic()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.InitMimic");

	AHuskPawn_Mimic_C_InitMimic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.UserConstructionScript");

	AHuskPawn_Mimic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHuskPawn_Mimic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceiveBeginPlay");

	AHuskPawn_Mimic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AHuskPawn_Mimic_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.OnDeathPlayEffects");

	AHuskPawn_Mimic_C_OnDeathPlayEffects_Params params;
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


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.TryToBecomeChest
// (BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::TryToBecomeChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.TryToBecomeChest");

	AHuskPawn_Mimic_C_TryToBecomeChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.Event_LastTimeDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AHuskPawn_Mimic_C::Event_LastTimeDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.Event_LastTimeDamaged");

	AHuskPawn_Mimic_C_Event_LastTimeDamaged_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReturnToSpawnAndBecomeChest
// (BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::ReturnToSpawnAndBecomeChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReturnToSpawnAndBecomeChest");

	AHuskPawn_Mimic_C_ReturnToSpawnAndBecomeChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ResetTimerForBecomingChest
// (BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::ResetTimerForBecomingChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.ResetTimerForBecomingChest");

	AHuskPawn_Mimic_C_ResetTimerForBecomingChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_Mimic_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceivePossessed");

	AHuskPawn_Mimic_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.DisableRibbons
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::DisableRibbons()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.DisableRibbons");

	AHuskPawn_Mimic_C_DisableRibbons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.EnableRibbons
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Mimic_C::EnableRibbons()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.EnableRibbons");

	AHuskPawn_Mimic_C_EnableRibbons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ExecuteUbergraph_HuskPawn_Mimic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_Mimic_C::ExecuteUbergraph_HuskPawn_Mimic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Mimic.HuskPawn_Mimic_C.ExecuteUbergraph_HuskPawn_Mimic");

	AHuskPawn_Mimic_C_ExecuteUbergraph_HuskPawn_Mimic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
