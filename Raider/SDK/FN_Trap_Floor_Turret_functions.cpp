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

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SpawnImpactEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATrap_Floor_Turret_C::SpawnImpactEffects(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.SpawnImpactEffects");

	ATrap_Floor_Turret_C_SpawnImpactEffects_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ShouldFire
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldFire                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::ShouldFire(bool* ShouldFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.ShouldFire");

	ATrap_Floor_Turret_C_ShouldFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFire != nullptr)
		*ShouldFire = params.ShouldFire;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SpawnTracer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATrap_Floor_Turret_C::SpawnTracer(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.SpawnTracer");

	ATrap_Floor_Turret_C_SpawnTracer_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.AttemptFire
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::AttemptFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.AttemptFire");

	ATrap_Floor_Turret_C_AttemptFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnPotentialTargetUntouched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               UntouchedPotentialTarget       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnPotentialTargetUntouched");

	ATrap_Floor_Turret_C_OnPotentialTargetUntouched_Params params;
	params.UntouchedPotentialTarget = UntouchedPotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnNewPotentialTargetTouched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTargetPawn            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnNewPotentialTargetTouched");

	ATrap_Floor_Turret_C_OnNewPotentialTargetTouched_Params params;
	params.PotentialTargetPawn = PotentialTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnRep_IsDeployed
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::OnRep_IsDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnRep_IsDeployed");

	ATrap_Floor_Turret_C_OnRep_IsDeployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetTargetAcquisitionTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::SetTargetAcquisitionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetTargetAcquisitionTimer");

	ATrap_Floor_Turret_C_SetTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsPawnInsidePitchLimits
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInsideYawLimits               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::IsPawnInsidePitchLimits(class AFortPawn* Pawn, bool* bInsideYawLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsPawnInsidePitchLimits");

	ATrap_Floor_Turret_C_IsPawnInsidePitchLimits_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInsideYawLimits != nullptr)
		*bInsideYawLimits = params.bInsideYawLimits;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsPawnInsideYawLimits
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInsideYawLimits               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::IsPawnInsideYawLimits(class AFortPawn* Pawn, bool* bInsideYawLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsPawnInsideYawLimits");

	ATrap_Floor_Turret_C_IsPawnInsideYawLimits_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInsideYawLimits != nullptr)
		*bInsideYawLimits = params.bInsideYawLimits;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsValidTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludeSimpleRangeCheck        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludeObstructionCheck        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValidTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::IsValidTarget(class AFortPawn* PotentialTarget, bool IncludeSimpleRangeCheck, bool IncludeObstructionCheck, bool* bValidTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsValidTarget");

	ATrap_Floor_Turret_C_IsValidTarget_Params params;
	params.PotentialTarget = PotentialTarget;
	params.IncludeSimpleRangeCheck = IncludeSimpleRangeCheck;
	params.IncludeObstructionCheck = IncludeObstructionCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidTarget != nullptr)
		*bValidTarget = params.bValidTarget;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.AttemptAcquireTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::AttemptAcquireTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.AttemptAcquireTarget");

	ATrap_Floor_Turret_C_AttemptAcquireTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetFiringTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::SetFiringTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetFiringTimer");

	ATrap_Floor_Turret_C_SetFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ClearFiringTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::ClearFiringTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.ClearFiringTimer");

	ATrap_Floor_Turret_C_ClearFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ClearTargetAcquisitionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::ClearTargetAcquisitionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.ClearTargetAcquisitionTimer");

	ATrap_Floor_Turret_C_ClearTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetTrackingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PawnToTrack                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::SetTrackingTarget(class AFortPawn* PawnToTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetTrackingTarget");

	ATrap_Floor_Turret_C_SetTrackingTarget_Params params;
	params.PawnToTrack = PawnToTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.CalcDesiredAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialRelativeAngle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentRelativeAngle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleClamp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DesiredAngle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::CalcDesiredAngle(float InitialRelativeAngle, float CurrentRelativeAngle, float AngleOffset, float AngleClamp, float* DesiredAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.CalcDesiredAngle");

	ATrap_Floor_Turret_C_CalcDesiredAngle_Params params;
	params.InitialRelativeAngle = InitialRelativeAngle;
	params.CurrentRelativeAngle = CurrentRelativeAngle;
	params.AngleOffset = AngleOffset;
	params.AngleClamp = AngleClamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredAngle != nullptr)
		*DesiredAngle = params.DesiredAngle;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.PerformGunRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LookAtActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::PerformGunRotation(class AActor* LookAtActor, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.PerformGunRotation");

	ATrap_Floor_Turret_C_PerformGunRotation_Params params;
	params.LookAtActor = LookAtActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.UserConstructionScript");

	ATrap_Floor_Turret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Turret_C::OnReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnReloadEnd");

	ATrap_Floor_Turret_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Turret_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnPlaced");

	ATrap_Floor_Turret_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Turret_C::OnFinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnFinishedBuilding");

	ATrap_Floor_Turret_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Turret_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	ATrap_Floor_Turret_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Turret_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Turret_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Turret_C::OnOutOfDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnOutOfDurability");

	ATrap_Floor_Turret_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.TriggerLaunchEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.TriggerLaunchEffects");

	ATrap_Floor_Turret_C_TriggerLaunchEffects_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATrap_Floor_Turret_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ATrap_Floor_Turret_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ATrap_Floor_Turret_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.RotationTimer
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Turret_C::RotationTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.RotationTimer");

	ATrap_Floor_Turret_C_RotationTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Generic.SentryGun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Turret_C::GameplayCue_Abilities_Activation_Generic_SentryGun(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Generic.SentryGun");

	ATrap_Floor_Turret_C_GameplayCue_Abilities_Activation_Generic_SentryGun_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Impact.Physical
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Turret_C::GameplayCue_Impact_Physical(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Impact.Physical");

	ATrap_Floor_Turret_C_GameplayCue_Impact_Physical_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ExecuteUbergraph_Trap_Floor_Turret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Turret_C::ExecuteUbergraph_Trap_Floor_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Turret.Trap_Floor_Turret_C.ExecuteUbergraph_Trap_Floor_Turret");

	ATrap_Floor_Turret_C_ExecuteUbergraph_Trap_Floor_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
