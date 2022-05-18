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

// Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnThatDied                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlingerInterface_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied");

	UFlingerInterface_C_FlingerEnemyDied_Params params;
	params.PawnThatDied = PawnThatDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PushMomentum                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PushDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   OwningFlinger                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlingerInterface_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger");

	UFlingerInterface_C_AlertEnemySpawnedByFlinger_Params params;
	params.PushMomentum = PushMomentum;
	params.PushDuration = PushDuration;
	params.OwningFlinger = OwningFlinger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     FailedProjectile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlingerInterface_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn");

	UFlingerInterface_C_FlingerEnemyFailedToSpawn_Params params;
	params.FailedProjectile = FailedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlingerInterface_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy");

	UFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void UFlingerInterface_C::FlingerCan_tSpawnAnEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy");

	UFlingerInterface_C_FlingerCan_tSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void UFlingerInterface_C::FlingerCanSpawnAnEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy");

	UFlingerInterface_C_FlingerCanSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorWhoAsked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlingerInterface_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy");

	UFlingerInterface_C_CanFlingerSpawnAnEnemy_Params params;
	params.ActorWhoAsked = ActorWhoAsked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             EnemySpawned                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     ProjectileThatSpawnedThisEnemy (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlingerInterface_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy");

	UFlingerInterface_C_FlingerSpawnedAnEnemy_Params params;
	params.EnemySpawned = EnemySpawned;
	params.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
