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

// Function HuskPawn.HuskPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.UserConstructionScript");

	AHuskPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             EnemySpawned                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     ProjectileThatSpawnedThisEnemy (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy");

	AHuskPawn_C_FlingerSpawnedAnEnemy_Params params;
	params.EnemySpawned = EnemySpawned;
	params.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorWhoAsked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy");

	AHuskPawn_C_CanFlingerSpawnAnEnemy_Params params;
	params.ActorWhoAsked = ActorWhoAsked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::FlingerCanSpawnAnEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy");

	AHuskPawn_C_FlingerCanSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::FlingerCan_tSpawnAnEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy");

	AHuskPawn_C_FlingerCan_tSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy");

	AHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     FailedProjectile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn");

	AHuskPawn_C_FlingerEnemyFailedToSpawn_Params params;
	params.FailedProjectile = FailedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PushMomentum                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PushDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   OwningFlinger                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger");

	AHuskPawn_C_AlertEnemySpawnedByFlinger_Params params;
	params.PushMomentum = PushMomentum;
	params.PushDuration = PushDuration;
	params.OwningFlinger = OwningFlinger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnThatDied                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerEnemyDied");

	AHuskPawn_C_FlingerEnemyDied_Params params;
	params.PawnThatDied = PawnThatDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 MidPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           LowWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MidWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullWall                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WindowWall                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.MantleStart");

	AHuskPawn_C_MantleStart_Params params;
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


// Function HuskPawn.HuskPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::MantleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.MantleEnd");

	AHuskPawn_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::HuskEvadeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.HuskEvadeStart");

	AHuskPawn_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Soul_Suck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.VerifyTakerAttack");

	AHuskPawn_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SoulSuckMelee                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer");

	AHuskPawn_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::BeginTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack");

	AHuskPawn_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::EndTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack");

	AHuskPawn_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTTask_BlueprintBase*   Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredMoveLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior");

	AHuskPawn_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable");

	AHuskPawn_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerAttackFSM");

	AHuskPawn_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin");

	AHuskPawn_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::TakerSoulSuckSoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd");

	AHuskPawn_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AHuskPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalAdd");

	AHuskPawn_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function HuskPawn.HuskPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::PortalClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalClear");

	AHuskPawn_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::TakerSoulSuckInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted");

	AHuskPawn_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalGet");

	AHuskPawn_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;
}


// Function HuskPawn.HuskPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_C::PortalFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalFX");

	AHuskPawn_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::PortalCollision(bool Collide_)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalCollision");

	AHuskPawn_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AHuskPawn_C::GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature");

	AHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AHuskPawn_C::GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Reapplied");

	AHuskPawn_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AHuskPawn_C::GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Destroyed");

	AHuskPawn_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AHuskPawn_C::GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.GameplayCue.Damage.Shielded");

	AHuskPawn_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHuskPawn_C::ExecuteUbergraph_HuskPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn");

	AHuskPawn_C_ExecuteUbergraph_HuskPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
