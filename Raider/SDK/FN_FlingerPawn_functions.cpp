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

// Function FlingerPawn.FlingerPawn_C.IsReadyToReceiveNewSpawnGroup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFlingerPawn_C::IsReadyToReceiveNewSpawnGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.IsReadyToReceiveNewSpawnGroup");

	AFlingerPawn_C_IsReadyToReceiveNewSpawnGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FlingerPawn.FlingerPawn_C.OnReceiveSpawnGroup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFlingerPawn_C::OnReceiveSpawnGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnReceiveSpawnGroup");

	AFlingerPawn_C_OnReceiveSpawnGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FlingerPawn.FlingerPawn_C.StopMaterialTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::StopMaterialTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.StopMaterialTimeline");

	AFlingerPawn_C_StopMaterialTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.StopDeathFX
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::StopDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.StopDeathFX");

	AFlingerPawn_C_StopDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.UserConstructionScript");

	AFlingerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AFlingerPawn_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Timeline_0__FinishedFunc");

	AFlingerPawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AFlingerPawn_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Timeline_0__UpdateFunc");

	AFlingerPawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__Spawn__EventFunc
// (BlueprintEvent)

void AFlingerPawn_C::Timeline_0__Spawn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Timeline_0__Spawn__EventFunc");

	AFlingerPawn_C_Timeline_0__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.UpdateMaterialParamsTL__FinishedFunc
// (BlueprintEvent)

void AFlingerPawn_C::UpdateMaterialParamsTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.UpdateMaterialParamsTL__FinishedFunc");

	AFlingerPawn_C_UpdateMaterialParamsTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.UpdateMaterialParamsTL__UpdateFunc
// (BlueprintEvent)

void AFlingerPawn_C::UpdateMaterialParamsTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.UpdateMaterialParamsTL__UpdateFunc");

	AFlingerPawn_C_UpdateMaterialParamsTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             EnemySpawned                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     ProjectileThatSpawnedThisEnemy (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerSpawnedAnEnemy");

	AFlingerPawn_C_FlingerSpawnedAnEnemy_Params params;
	params.EnemySpawned = EnemySpawned;
	params.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorWhoAsked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.CanFlingerSpawnAnEnemy");

	AFlingerPawn_C_CanFlingerSpawnAnEnemy_Params params;
	params.ActorWhoAsked = ActorWhoAsked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::FlingerCanSpawnAnEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerCanSpawnAnEnemy");

	AFlingerPawn_C_FlingerCanSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::FlingerCan_tSpawnAnEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerCan'tSpawnAnEnemy");

	AFlingerPawn_C_FlingerCan_tSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerThrewAProjectileContainingAnEnemy");

	AFlingerPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     FailedProjectile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerEnemyFailedToSpawn");

	AFlingerPawn_C_FlingerEnemyFailedToSpawn_Params params;
	params.FailedProjectile = FailedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PushMomentum                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PushDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   OwningFlinger                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.AlertEnemySpawnedByFlinger");

	AFlingerPawn_C_AlertEnemySpawnedByFlinger_Params params;
	params.PushMomentum = PushMomentum;
	params.PushDuration = PushDuration;
	params.OwningFlinger = OwningFlinger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnThatDied                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerEnemyDied");

	AFlingerPawn_C_FlingerEnemyDied_Params params;
	params.PawnThatDied = PawnThatDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 MidPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           LowWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MidWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullWall                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WindowWall                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.MantleStart");

	AFlingerPawn_C_MantleStart_Params params;
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


// Function FlingerPawn.FlingerPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::MantleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.MantleEnd");

	AFlingerPawn_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::HuskEvadeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.HuskEvadeStart");

	AFlingerPawn_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Soul_Suck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.VerifyTakerAttack");

	AFlingerPawn_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SoulSuckMelee                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.ResetTakerSpecialAttackTimer");

	AFlingerPawn_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::BeginTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.BeginTakerSwoopAttack");

	AFlingerPawn_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::EndTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.EndTakerSwoopAttack");

	AFlingerPawn_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTTask_BlueprintBase*   Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredMoveLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerWallPortalBehavior");

	AFlingerPawn_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.IsTakerWallPortalAvailable");

	AFlingerPawn_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerAttackFSM");

	AFlingerPawn_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundBegin");

	AFlingerPawn_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::TakerSoulSuckSoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundEnd");

	AFlingerPawn_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AFlingerPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalAdd");

	AFlingerPawn_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function FlingerPawn.FlingerPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::PortalClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalClear");

	AFlingerPawn_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::TakerSoulSuckInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerSoulSuckInterrupted");

	AFlingerPawn_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalGet");

	AFlingerPawn_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function FlingerPawn.FlingerPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::PortalFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalFX");

	AFlingerPawn_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::PortalCollision(bool Collide_)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalCollision");

	AFlingerPawn_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnDamagePlayEffects");

	AFlingerPawn_C_OnDamagePlayEffects_Params params;
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


// Function FlingerPawn.FlingerPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::AdditiveHitReactDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.AdditiveHitReactDelay");

	AFlingerPawn_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFlingerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.ReceiveBeginPlay");

	AFlingerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnDeathServer");

	AFlingerPawn_C_OnDeathServer_Params params;
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


// Function FlingerPawn.FlingerPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.Impact.Physical.Creature");

	AFlingerPawn_C_GameplayCue_Impact_Physical_Creature_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnDeathPlayEffects");

	AFlingerPawn_C_OnDeathPlayEffects_Params params;
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


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Grab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_NPC_Ranged_Grab(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Grab");

	AFlingerPawn_C_GameplayCue_NPC_Ranged_Grab_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Throw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_NPC_Ranged_Throw(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Throw");

	AFlingerPawn_C_GameplayCue_NPC_Ranged_Throw_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Flinger.Ranged.Grab.NPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_NPC_Flinger_Ranged_Grab_NPC(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Flinger.Ranged.Grab.NPC");

	AFlingerPawn_C_GameplayCue_NPC_Flinger_Ranged_Grab_NPC_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.SpawnDeathFX
// (BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::SpawnDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.SpawnDeathFX");

	AFlingerPawn_C_SpawnDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFlingerPawn_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AFlingerPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function FlingerPawn.FlingerPawn_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AFlingerPawn_C::OnStartedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnStartedEncounterSpawn");

	AFlingerPawn_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AFlingerPawn_C::OnFinishedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnFinishedEncounterSpawn");

	AFlingerPawn_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_GameplayModifiers_OnLowHealth_Enrage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage");

	AFlingerPawn_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.Shield.Reapplied");

	AFlingerPawn_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.Shield.Destroyed");

	AFlingerPawn_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AFlingerPawn_C::GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.Damage.Shielded");

	AFlingerPawn_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerPawn.FlingerPawn_C.ExecuteUbergraph_FlingerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlingerPawn_C::ExecuteUbergraph_FlingerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.ExecuteUbergraph_FlingerPawn");

	AFlingerPawn_C_ExecuteUbergraph_FlingerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
