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

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RestoreCollisionSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_C*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskThrownByFlinger_C::RestoreCollisionSettings(class AHuskPawn_C* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RestoreCollisionSettings");

	UGAB_HuskThrownByFlinger_C_RestoreCollisionSettings_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.SaveCollisionSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_C*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskThrownByFlinger_C::SaveCollisionSettings(class AHuskPawn_C* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.SaveCollisionSettings");

	UGAB_HuskThrownByFlinger_C_SaveCollisionSettings_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_405AED2944EC7B63E07F8CBC114C4467
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskThrownByFlinger_C::Completed_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_405AED2944EC7B63E07F8CBC114C4467");

	UGAB_HuskThrownByFlinger_C_Completed_405AED2944EC7B63E07F8CBC114C4467_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_405AED2944EC7B63E07F8CBC114C4467
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskThrownByFlinger_C::Cancelled_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_405AED2944EC7B63E07F8CBC114C4467");

	UGAB_HuskThrownByFlinger_C_Cancelled_405AED2944EC7B63E07F8CBC114C4467_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_405AED2944EC7B63E07F8CBC114C4467
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskThrownByFlinger_C::Triggered_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_405AED2944EC7B63E07F8CBC114C4467");

	UGAB_HuskThrownByFlinger_C_Triggered_405AED2944EC7B63E07F8CBC114C4467_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_E287620540AA42D086331C807CAC562F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskThrownByFlinger_C::Completed_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_E287620540AA42D086331C807CAC562F");

	UGAB_HuskThrownByFlinger_C_Completed_E287620540AA42D086331C807CAC562F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_E287620540AA42D086331C807CAC562F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskThrownByFlinger_C::Cancelled_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_E287620540AA42D086331C807CAC562F");

	UGAB_HuskThrownByFlinger_C_Cancelled_E287620540AA42D086331C807CAC562F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_E287620540AA42D086331C807CAC562F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskThrownByFlinger_C::Triggered_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_E287620540AA42D086331C807CAC562F");

	UGAB_HuskThrownByFlinger_C_Triggered_E287620540AA42D086331C807CAC562F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_HuskThrownByFlinger_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_ActivateAbilityFromEvent");

	UGAB_HuskThrownByFlinger_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskDamaged
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

void UGAB_HuskThrownByFlinger_C::HuskDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskDamaged");

	UGAB_HuskThrownByFlinger_C_HuskDamaged_Params params;
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


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskThrownByFlinger_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_OnEndAbility");

	UGAB_HuskThrownByFlinger_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskDamaged
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::BindHuskDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskDamaged");

	UGAB_HuskThrownByFlinger_C_BindHuskDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskLanded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGAB_HuskThrownByFlinger_C::HuskLanded(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskLanded");

	UGAB_HuskThrownByFlinger_C_HuskLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskHit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGAB_HuskThrownByFlinger_C::HuskHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskHit");

	UGAB_HuskThrownByFlinger_C_HuskHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskDamaged
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::UnBindHuskDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskDamaged");

	UGAB_HuskThrownByFlinger_C_UnBindHuskDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskLanded
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::BindHuskLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskLanded");

	UGAB_HuskThrownByFlinger_C_BindHuskLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskLanded
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::UnBindHuskLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskLanded");

	UGAB_HuskThrownByFlinger_C_UnBindHuskLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RotationCheck
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::RotationCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RotationCheck");

	UGAB_HuskThrownByFlinger_C_RotationCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardON
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::HuskFaceForwardON()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardON");

	UGAB_HuskThrownByFlinger_C_HuskFaceForwardON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardOFF
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::HuskFaceForwardOFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardOFF");

	UGAB_HuskThrownByFlinger_C_HuskFaceForwardOFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ResetGravityScale
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskThrownByFlinger_C::ResetGravityScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ResetGravityScale");

	UGAB_HuskThrownByFlinger_C_ResetGravityScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ExecuteUbergraph_GAB_HuskThrownByFlinger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskThrownByFlinger_C::ExecuteUbergraph_GAB_HuskThrownByFlinger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ExecuteUbergraph_GAB_HuskThrownByFlinger");

	UGAB_HuskThrownByFlinger_C_ExecuteUbergraph_GAB_HuskThrownByFlinger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
