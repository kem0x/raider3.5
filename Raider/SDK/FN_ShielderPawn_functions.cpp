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

// Function ShielderPawn.ShielderPawn_C.SpawnSuperShielderBGA
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::SpawnSuperShielderBGA()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.SpawnSuperShielderBGA");

	AShielderPawn_C_SpawnSuperShielderBGA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.RemoveShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  RemoveShieldFrom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::RemoveShield(class AActor* RemoveShieldFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.RemoveShield");

	AShielderPawn_C_RemoveShield_Params params;
	params.RemoveShieldFrom = RemoveShieldFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.Orphaned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOrphaned                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AFortPawn*               AttachedPawn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.Orphaned");

	AShielderPawn_C_Orphaned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOrphaned != nullptr)
		*IsOrphaned = params.IsOrphaned;
	if (AttachedPawn != nullptr)
		*AttachedPawn = params.AttachedPawn;
}


// Function ShielderPawn.ShielderPawn_C.SetMiniMapIconStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::SetMiniMapIconStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.SetMiniMapIconStatus");

	AShielderPawn_C_SetMiniMapIconStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnRep_bShieldApplied
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::OnRep_bShieldApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnRep_bShieldApplied");

	AShielderPawn_C_OnRep_bShieldApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.UpdateShieldFXVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::UpdateShieldFXVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.UpdateShieldFXVisibility");

	AShielderPawn_C_UpdateShieldFXVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.ApplyShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::ApplyShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.ApplyShield");

	AShielderPawn_C_ApplyShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.GameTimeString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 NewParam                       (Parm, OutParm, ZeroConstructor)

void AShielderPawn_C::GameTimeString(struct FString* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.GameTimeString");

	AShielderPawn_C_GameTimeString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderSpringArm
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::OnRep_ShielderSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnRep_ShielderSpringArm");

	AShielderPawn_C_OnRep_ShielderSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.DebugLineAndSphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Line                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Sphere                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SphereColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          VisibilityOffset               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::DebugLineAndSphere(bool Line, const struct FLinearColor& LineColor, bool Sphere, const struct FLinearColor& SphereColor, float VisibilityOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.DebugLineAndSphere");

	AShielderPawn_C_DebugLineAndSphere_Params params;
	params.Line = Line;
	params.LineColor = LineColor;
	params.Sphere = Sphere;
	params.SphereColor = SphereColor;
	params.VisibilityOffset = VisibilityOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderVisible
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::OnRep_ShielderVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnRep_ShielderVisible");

	AShielderPawn_C_OnRep_ShielderVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.AttachShielderToSpringArm
// (Public, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::AttachShielderToSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.AttachShielderToSpringArm");

	AShielderPawn_C_AttachShielderToSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.AttachSpringArmToAttachPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::AttachSpringArmToAttachPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.AttachSpringArmToAttachPawn");

	AShielderPawn_C_AttachSpringArmToAttachPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnRep_SpringArmTargetRotation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::OnRep_SpringArmTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnRep_SpringArmTargetRotation");

	AShielderPawn_C_OnRep_SpringArmTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.UserConstructionScript");

	AShielderPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__FinishedFunc
// (BlueprintEvent)

void AShielderPawn_C::InterpShielderToNewLocation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__FinishedFunc");

	AShielderPawn_C_InterpShielderToNewLocation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__UpdateFunc
// (BlueprintEvent)

void AShielderPawn_C::InterpShielderToNewLocation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__UpdateFunc");

	AShielderPawn_C_InterpShielderToNewLocation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.RotateShielder__FinishedFunc
// (BlueprintEvent)

void AShielderPawn_C::RotateShielder__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.RotateShielder__FinishedFunc");

	AShielderPawn_C_RotateShielder__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.RotateShielder__UpdateFunc
// (BlueprintEvent)

void AShielderPawn_C::RotateShielder__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.RotateShielder__UpdateFunc");

	AShielderPawn_C_RotateShielder__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnStunned
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::OnStunned()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnStunned");

	AShielderPawn_C_OnStunned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AShielderPawn_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnDamageServer");

	AShielderPawn_C_OnDamageServer_Params params;
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


// Function ShielderPawn.ShielderPawn_C.OnKnockedback
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::OnKnockedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnKnockedback");

	AShielderPawn_C_OnKnockedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShielderPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.ReceiveBeginPlay");

	AShielderPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AShielderPawn_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnDeathServer");

	AShielderPawn_C_OnDeathServer_Params params;
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


// Function ShielderPawn.ShielderPawn_C.ShielderAttachComplete
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::ShielderAttachComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.ShielderAttachComplete");

	AShielderPawn_C_ShielderAttachComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnEncounterEnemySpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*    Encounter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortAIPawn*             SpawnedEnemy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnEncounterEnemySpawned");

	AShielderPawn_C_OnEncounterEnemySpawned_Params params;
	params.Encounter = Encounter;
	params.SpawnedEnemy = SpawnedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.SetShielderOrphanStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Orphaned                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GiveZVelocityOnDetach          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AShielderPawn_C::SetShielderOrphanStatus(bool Orphaned, bool GiveZVelocityOnDetach, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.SetShielderOrphanStatus");

	AShielderPawn_C_SetShielderOrphanStatus_Params params;
	params.Orphaned = Orphaned;
	params.GiveZVelocityOnDetach = GiveZVelocityOnDetach;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnComponentBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShielderPawn_C::OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnComponentBeginOverlap");

	AShielderPawn_C_OnComponentBeginOverlap_Params params;
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


// Function ShielderPawn.ShielderPawn_C.VerifyPotentialAttachPawnIsValidAndAttachToIt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialAttachPawn            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HiddenAttach                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::VerifyPotentialAttachPawnIsValidAndAttachToIt(class AFortPawn* PotentialAttachPawn, bool HiddenAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.VerifyPotentialAttachPawnIsValidAndAttachToIt");

	AShielderPawn_C_VerifyPotentialAttachPawnIsValidAndAttachToIt_Params params;
	params.PotentialAttachPawn = PotentialAttachPawn;
	params.HiddenAttach = HiddenAttach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.GrabRandomPotentialAttachPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HiddenAttach                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::GrabRandomPotentialAttachPawn(bool HiddenAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.GrabRandomPotentialAttachPawn");

	AShielderPawn_C_GrabRandomPotentialAttachPawn_Params params;
	params.HiddenAttach = HiddenAttach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.AttachShielderToPotentialAttachPawn
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::AttachShielderToPotentialAttachPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.AttachShielderToPotentialAttachPawn");

	AShielderPawn_C_AttachShielderToPotentialAttachPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.BindEncounterSpawn
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::BindEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.BindEncounterSpawn");

	AShielderPawn_C_BindEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.ReApplyShield
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::ReApplyShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.ReApplyShield");

	AShielderPawn_C_ReApplyShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.UnBindEncounterSpawn
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::UnBindEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.UnBindEncounterSpawn");

	AShielderPawn_C_UnBindEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OnComponentEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OnComponentEndOverlap");

	AShielderPawn_C_OnComponentEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.ShielderShieldBroken
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::ShielderShieldBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.ShielderShieldBroken");

	AShielderPawn_C_ShielderShieldBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.AnimateSpringArm
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::AnimateSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.AnimateSpringArm");

	AShielderPawn_C_AnimateSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.AttachPawnDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Despawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::AttachPawnDead(bool Despawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.AttachPawnDead");

	AShielderPawn_C_AttachPawnDead_Params params;
	params.Despawn = Despawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.OrphanForceKillTimer
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::OrphanForceKillTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.OrphanForceKillTimer");

	AShielderPawn_C_OrphanForceKillTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.BindProxOverlap
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::BindProxOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.BindProxOverlap");

	AShielderPawn_C_BindProxOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.UnBindProxOverlap
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::UnBindProxOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.UnBindProxOverlap");

	AShielderPawn_C_UnBindProxOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.InterpShielderToSpringArm
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::InterpShielderToSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.InterpShielderToSpringArm");

	AShielderPawn_C_InterpShielderToSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.RotateShielderForward
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::RotateShielderForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.RotateShielderForward");

	AShielderPawn_C_RotateShielderForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::AdditiveHitReactDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.AdditiveHitReactDelay");

	AShielderPawn_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.InvisibleOrphanTick
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::InvisibleOrphanTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.InvisibleOrphanTick");

	AShielderPawn_C_InvisibleOrphanTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.ReceiveEndPlay");

	AShielderPawn_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.PostSpawnIn
// (BlueprintCallable, BlueprintEvent)

void AShielderPawn_C::PostSpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.PostSpawnIn");

	AShielderPawn_C_PostSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderPawn.ShielderPawn_C.ExecuteUbergraph_ShielderPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderPawn_C::ExecuteUbergraph_ShielderPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderPawn.ShielderPawn_C.ExecuteUbergraph_ShielderPawn");

	AShielderPawn_C_ExecuteUbergraph_ShielderPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
