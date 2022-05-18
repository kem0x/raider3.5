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

// Function SmasherPawn.SmasherPawn_C.GetCollisionPredictionComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         Collision_Prediction_Shape_Component (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ASmasherPawn_C::GetCollisionPredictionComponent(class UShapeComponent** Collision_Prediction_Shape_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.GetCollisionPredictionComponent");

	ASmasherPawn_C_GetCollisionPredictionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Collision_Prediction_Shape_Component != nullptr)
		*Collision_Prediction_Shape_Component = params.Collision_Prediction_Shape_Component;
}


// Function SmasherPawn.SmasherPawn_C.SetSmasherRotationRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          YawRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmasherPawn_C::SetSmasherRotationRate(float YawRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.SetSmasherRotationRate");

	ASmasherPawn_C_SetSmasherRotationRate_Params params;
	params.YawRate = YawRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.ResetSmasherRotationRateToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void ASmasherPawn_C::ResetSmasherRotationRateToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.ResetSmasherRotationRateToDefault");

	ASmasherPawn_C_ResetSmasherRotationRateToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.HandleHitEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASmasherPawn_C::HandleHitEffects(float Damage, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.HandleHitEffects");

	ASmasherPawn_C_HandleHitEffects_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function SmasherPawn.SmasherPawn_C.PaceHitSoundsAndVocalizations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDamageZone>   Damage_Zone                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmasherPawn_C::PaceHitSoundsAndVocalizations(TEnumAsByte<EFortDamageZone> Damage_Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.PaceHitSoundsAndVocalizations");

	ASmasherPawn_C_PaceHitSoundsAndVocalizations_Params params;
	params.Damage_Zone = Damage_Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.CalculateBumpMomentum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YawAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPawn*               BumpedPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BumpMomentum                   (Parm, OutParm, IsPlainOldData)

void ASmasherPawn_C::CalculateBumpMomentum(float Velocity, float YawAngle, class AFortPawn* BumpedPawn, struct FVector* BumpMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.CalculateBumpMomentum");

	ASmasherPawn_C_CalculateBumpMomentum_Params params;
	params.Velocity = Velocity;
	params.YawAngle = YawAngle;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BumpMomentum != nullptr)
		*BumpMomentum = params.BumpMomentum;
}


// Function SmasherPawn.SmasherPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASmasherPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.UserConstructionScript");

	ASmasherPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ASmasherPawn_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.Timeline_3__FinishedFunc");

	ASmasherPawn_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ASmasherPawn_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.Timeline_3__UpdateFunc");

	ASmasherPawn_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.Timeline_3__Spawn__EventFunc
// (BlueprintEvent)

void ASmasherPawn_C::Timeline_3__Spawn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.Timeline_3__Spawn__EventFunc");

	ASmasherPawn_C_Timeline_3__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.InitializeCrushing
// (BlueprintCallable, BlueprintEvent)

void ASmasherPawn_C::InitializeCrushing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.InitializeCrushing");

	ASmasherPawn_C_InitializeCrushing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.OnCrushBoxBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASmasherPawn_C::OnCrushBoxBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.OnCrushBoxBeginOverlap");

	ASmasherPawn_C_OnCrushBoxBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.HitSoundTimeout
// (BlueprintCallable, BlueprintEvent)

void ASmasherPawn_C::HitSoundTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.HitSoundTimeout");

	ASmasherPawn_C_HitSoundTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.HitSoundVocalTimeout
// (BlueprintCallable, BlueprintEvent)

void ASmasherPawn_C::HitSoundVocalTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.HitSoundVocalTimeout");

	ASmasherPawn_C_HitSoundVocalTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASmasherPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.ReceiveBeginPlay");

	ASmasherPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.Trigger_Death_Effect
// (Public, BlueprintCallable, BlueprintEvent)

void ASmasherPawn_C::Trigger_Death_Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.Trigger_Death_Effect");

	ASmasherPawn_C_Trigger_Death_Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmasherPawn_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.OnDeathPlayEffects");

	ASmasherPawn_C_OnDeathPlayEffects_Params params;
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


// Function SmasherPawn.SmasherPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmasherPawn_C::GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.GameplayCue.Impact.Physical.Creature");

	ASmasherPawn_C_GameplayCue_Impact_Physical_Creature_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmasherPawn_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.OnDamagePlayEffects");

	ASmasherPawn_C_OnDamagePlayEffects_Params params;
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


// Function SmasherPawn.SmasherPawn_C.GameplayCue.NPC.Smasher.Charge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmasherPawn_C::GameplayCue_NPC_Smasher_Charge(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.GameplayCue.NPC.Smasher.Charge");

	ASmasherPawn_C_GameplayCue_NPC_Smasher_Charge_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ASmasherPawn_C::OnStartedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.OnStartedEncounterSpawn");

	ASmasherPawn_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ASmasherPawn_C::OnFinishedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.OnFinishedEncounterSpawn");

	ASmasherPawn_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmasherPawn_C::GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.GameplayCue.Shield.Reapplied");

	ASmasherPawn_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmasherPawn_C::GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.GameplayCue.Shield.Destroyed");

	ASmasherPawn_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmasherPawn_C::GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.GameplayCue.Damage.Shielded");

	ASmasherPawn_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.OnPushCapsuleBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASmasherPawn_C::OnPushCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.OnPushCapsuleBeginOverlap");

	ASmasherPawn_C_OnPushCapsuleBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmasherPawn.SmasherPawn_C.ExecuteUbergraph_SmasherPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmasherPawn_C::ExecuteUbergraph_SmasherPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmasherPawn.SmasherPawn_C.ExecuteUbergraph_SmasherPawn");

	ASmasherPawn_C_ExecuteUbergraph_SmasherPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
