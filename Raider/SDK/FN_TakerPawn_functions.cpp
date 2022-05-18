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

// Function TakerPawn.TakerPawn_C.StopMaterialTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::StopMaterialTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.StopMaterialTimeline");

	ATakerPawn_C_StopMaterialTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.StopDeathFX
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::StopDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.StopDeathFX");

	ATakerPawn_C_StopDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerAirborneTest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ImpactPointOrTraceEndBelowTaker (Parm, OutParm, IsPlainOldData)
// bool                           Airborne                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::TakerAirborneTest(struct FVector* ImpactPointOrTraceEndBelowTaker, bool* Airborne)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerAirborneTest");

	ATakerPawn_C_TakerAirborneTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactPointOrTraceEndBelowTaker != nullptr)
		*ImpactPointOrTraceEndBelowTaker = params.ImpactPointOrTraceEndBelowTaker;
	if (Airborne != nullptr)
		*Airborne = params.Airborne;
}


// Function TakerPawn.TakerPawn_C.SetTakerRotationRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          YawRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::SetTakerRotationRate(float YawRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.SetTakerRotationRate");

	ATakerPawn_C_SetTakerRotationRate_Params params;
	params.YawRate = YawRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.ResetTakerRotationRateToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::ResetTakerRotationRateToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.ResetTakerRotationRateToDefault");

	ATakerPawn_C_ResetTakerRotationRateToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckMontageSection
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::OnRep_SoulSuckMontageSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnRep_SoulSuckMontageSection");

	ATakerPawn_C_OnRep_SoulSuckMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.MarkForDeath
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::MarkForDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.MarkForDeath");

	ATakerPawn_C_MarkForDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckEffectActivated
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::OnRep_SoulSuckEffectActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnRep_SoulSuckEffectActivated");

	ATakerPawn_C_OnRep_SoulSuckEffectActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.ApplyPortalEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Portal_Out_Direction           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATakerPawn_C::ApplyPortalEffect(class ABuildingActor* BuildingActor, const struct FVector& Portal_Out_Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.ApplyPortalEffect");

	ATakerPawn_C_ApplyPortalEffect_Params params;
	params.BuildingActor = BuildingActor;
	params.Portal_Out_Direction = Portal_Out_Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.UserConstructionScript");

	ATakerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ATakerPawn_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.Timeline_0__FinishedFunc");

	ATakerPawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ATakerPawn_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.Timeline_0__UpdateFunc");

	ATakerPawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.Timeline_0__Spawn__EventFunc
// (BlueprintEvent)

void ATakerPawn_C::Timeline_0__Spawn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.Timeline_0__Spawn__EventFunc");

	ATakerPawn_C_Timeline_0__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__FinishedFunc
// (BlueprintEvent)

void ATakerPawn_C::UpdateMaterialParamsTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__FinishedFunc");

	ATakerPawn_C_UpdateMaterialParamsTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__UpdateFunc
// (BlueprintEvent)

void ATakerPawn_C::UpdateMaterialParamsTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__UpdateFunc");

	ATakerPawn_C_UpdateMaterialParamsTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 MidPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           LowWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MidWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullWall                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WindowWall                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.MantleStart");

	ATakerPawn_C_MantleStart_Params params;
	params.StartPos = StartPos;
	params.MidPos = MidPos;
	params.EndPos = EndPos;
	params.LowWall = LowWall;
	params.MidWall = MidWall;
	params.FullWall = FullWall;
	params.WindowWall = WindowWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::MantleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.MantleEnd");

	ATakerPawn_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::HuskEvadeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.HuskEvadeStart");

	ATakerPawn_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Soul_Suck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.VerifyTakerAttack");

	ATakerPawn_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SoulSuckMelee                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.ResetTakerSpecialAttackTimer");

	ATakerPawn_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTTask_BlueprintBase*   Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredMoveLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerWallPortalBehavior");

	ATakerPawn_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.IsTakerWallPortalAvailable");

	ATakerPawn_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerAttackFSM");

	ATakerPawn_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATakerPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.PortalAdd");

	ATakerPawn_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function TakerPawn.TakerPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::PortalClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.PortalClear");

	ATakerPawn_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::TakerSoulSuckInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerSoulSuckInterrupted");

	ATakerPawn_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.PortalGet");

	ATakerPawn_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function TakerPawn.TakerPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::PortalFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.PortalFX");

	ATakerPawn_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::PortalCollision(bool Collide_)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.PortalCollision");

	ATakerPawn_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATakerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.ReceiveBeginPlay");

	ATakerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::BeginTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.BeginTakerSwoopAttack");

	ATakerPawn_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::EndTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.EndTakerSwoopAttack");

	ATakerPawn_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundBegin");

	ATakerPawn_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::TakerSoulSuckSoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundEnd");

	ATakerPawn_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.DoPortal
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PortalOutDirection             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATakerPawn_C::DoPortal(class ABuildingActor* BuildingActor, const struct FVector& PortalOutDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.DoPortal");

	ATakerPawn_C_DoPortal_Params params;
	params.BuildingActor = BuildingActor;
	params.PortalOutDirection = PortalOutDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOn
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::TakerSoulSuckEffectOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOn");

	ATakerPawn_C_TakerSoulSuckEffectOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOff
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::TakerSoulSuckEffectOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOff");

	ATakerPawn_C_TakerSoulSuckEffectOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnDeathPlayEffects");

	ATakerPawn_C_OnDeathPlayEffects_Params params;
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


// Function TakerPawn.TakerPawn_C.BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature(class AFortPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature");

	ATakerPawn_C_BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.GameplayCue.Impact.Physical.Creature");

	ATakerPawn_C_GameplayCue_Impact_Physical_Creature_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.ModifySwoopOverlap
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::ModifySwoopOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.ModifySwoopOverlap");

	ATakerPawn_C_ModifySwoopOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.StartOverlapBox
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::StartOverlapBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.StartOverlapBox");

	ATakerPawn_C_StartOverlapBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.StopOverlapBox
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::StopOverlapBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.StopOverlapBox");

	ATakerPawn_C_StopOverlapBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnDamagePlayEffects");

	ATakerPawn_C_OnDamagePlayEffects_Params params;
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


// Function TakerPawn.TakerPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::AdditiveHitReactDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.AdditiveHitReactDelay");

	ATakerPawn_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.SpawnDeathFX
// (BlueprintCallable, BlueprintEvent)

void ATakerPawn_C::SpawnDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.SpawnDeathFX");

	ATakerPawn_C_SpawnDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.DoPortalFailsafe
// (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingSMActor*> ModifiedBuildings              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 PortalOutDirection             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATakerPawn_C::DoPortalFailsafe(class ABuildingActor* BuildingActor, TArray<class ABuildingSMActor*> ModifiedBuildings, const struct FVector& PortalOutDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.DoPortalFailsafe");

	ATakerPawn_C_DoPortalFailsafe_Params params;
	params.BuildingActor = BuildingActor;
	params.ModifiedBuildings = ModifiedBuildings;
	params.PortalOutDirection = PortalOutDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.OnBeginSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATakerPawn_C::OnBeginSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnBeginSleepEffects");

	ATakerPawn_C_OnBeginSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.OnEndSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATakerPawn_C::OnEndSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnEndSleepEffects");

	ATakerPawn_C_OnEndSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATakerPawn_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ATakerPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function TakerPawn.TakerPawn_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATakerPawn_C::OnStartedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnStartedEncounterSpawn");

	ATakerPawn_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATakerPawn_C::OnFinishedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.OnFinishedEncounterSpawn");

	ATakerPawn_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::GameplayCue_GameplayModifiers_OnLowHealth_Enrage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage");

	ATakerPawn_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Reapplied");

	ATakerPawn_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Destroyed");

	ATakerPawn_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.GameplayCue.Damage.Shielded");

	ATakerPawn_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.ReceivePossessed");

	ATakerPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TakerPawn.TakerPawn_C.ExecuteUbergraph_TakerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATakerPawn_C::ExecuteUbergraph_TakerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TakerPawn.TakerPawn_C.ExecuteUbergraph_TakerPawn");

	ATakerPawn_C_ExecuteUbergraph_TakerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
