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

// Function Car_Copper.Car_Copper_C.toggle light visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACar_Copper_C::toggle_light_visibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.toggle light visibility");

	ACar_Copper_C_toggle_light_visibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Randomize the target brightness levels
// (Public, BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::Randomize_the_target_brightness_levels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Randomize the target brightness levels");

	ACar_Copper_C_Randomize_the_target_brightness_levels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Set Light Brightness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          _0_1_Intensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Include_Second_Emissive_Channel (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACar_Copper_C::Set_Light_Brightness(float _0_1_Intensity, bool Include_Second_Emissive_Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Set Light Brightness");

	ACar_Copper_C_Set_Light_Brightness_Params params;
	params._0_1_Intensity = _0_1_Intensity;
	params.Include_Second_Emissive_Channel = Include_Second_Emissive_Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.MaterialEditorSine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Look_up_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Period                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACar_Copper_C::MaterialEditorSine(float Look_up_value, float Period)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.MaterialEditorSine");

	ACar_Copper_C_MaterialEditorSine_Params params;
	params.Look_up_value = Look_up_value;
	params.Period = Period;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Car_Copper.Car_Copper_C.SetCarAlarmEnabledBasedOnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACar_Copper_C::SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.SetCarAlarmEnabledBasedOnLocation");

	ACar_Copper_C_SetCarAlarmEnabledBasedOnLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

	return params.ReturnValue;
}


// Function Car_Copper.Car_Copper_C.setcanmakebouncingnoisetrue
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::setcanmakebouncingnoisetrue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.setcanmakebouncingnoisetrue");

	ACar_Copper_C_setcanmakebouncingnoisetrue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.StopCarAlarmFromPlaying
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::StopCarAlarmFromPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.StopCarAlarmFromPlaying");

	ACar_Copper_C_StopCarAlarmFromPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.UserConstructionScript");

	ACar_Copper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACar_Copper_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_0__FinishedFunc");

	ACar_Copper_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACar_Copper_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_0__UpdateFunc");

	ACar_Copper_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.BounceCar__FinishedFunc
// (BlueprintEvent)

void ACar_Copper_C::BounceCar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.BounceCar__FinishedFunc");

	ACar_Copper_C_BounceCar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.BounceCar__UpdateFunc
// (BlueprintEvent)

void ACar_Copper_C::BounceCar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.BounceCar__UpdateFunc");

	ACar_Copper_C_BounceCar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ACar_Copper_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_2__FinishedFunc");

	ACar_Copper_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ACar_Copper_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_2__UpdateFunc");

	ACar_Copper_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Timeline_2__FireOffNoise__EventFunc
// (BlueprintEvent)

void ACar_Copper_C::Timeline_2__FireOffNoise__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Timeline_2__FireOffNoise__EventFunc");

	ACar_Copper_C_Timeline_2__FireOffNoise__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACar_Copper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ReceiveBeginPlay");

	ACar_Copper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACar_Copper_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ReceiveHit");

	ACar_Copper_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.StartSirenLight
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::StartSirenLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.StartSirenLight");

	ACar_Copper_C_StartSirenLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.FadeSirenLight
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::FadeSirenLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.FadeSirenLight");

	ACar_Copper_C_FadeSirenLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.TriggerLowHealthParticleEffect
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::TriggerLowHealthParticleEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.TriggerLowHealthParticleEffect");

	ACar_Copper_C_TriggerLowHealthParticleEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_Copper_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnDeathPlayEffects");

	ACar_Copper_C_OnDeathPlayEffects_Params params;
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


// Function Car_Copper.Car_Copper_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_Copper_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnDamagePlayEffects");

	ACar_Copper_C_OnDamagePlayEffects_Params params;
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


// Function Car_Copper.Car_Copper_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACar_Copper_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ReceiveEndPlay");

	ACar_Copper_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_Copper_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnDamageServer");

	ACar_Copper_C_OnDamageServer_Params params;
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


// Function Car_Copper.Car_Copper_C.FireOffCarAlarm
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::FireOffCarAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.FireOffCarAlarm");

	ACar_Copper_C_FireOffCarAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.OnBounceAnimationUpdate
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortBounceData*        Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_Copper_C::OnBounceAnimationUpdate(struct FFortBounceData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.OnBounceAnimationUpdate");

	ACar_Copper_C_OnBounceAnimationUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Hit Bounce Finished
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::Hit_Bounce_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Hit Bounce Finished");

	ACar_Copper_C_Hit_Bounce_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.Player jump based bounce 
// (BlueprintCallable, BlueprintEvent)

void ACar_Copper_C::Player_jump_based_bounce_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.Player jump based bounce ");

	ACar_Copper_C_Player_jump_based_bounce__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Copper.Car_Copper_C.ExecuteUbergraph_Car_Copper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACar_Copper_C::ExecuteUbergraph_Car_Copper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Copper.Car_Copper_C.ExecuteUbergraph_Car_Copper");

	ACar_Copper_C_ExecuteUbergraph_Car_Copper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
