#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FlingerInterface.FlingerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UFlingerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlingerInterface.FlingerInterface_C");
		return ptr;
	}


	void FlingerEnemyDied(class APawn* PawnThatDied);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerCan_tSpawnAnEnemy();
	void FlingerCanSpawnAnEnemy();
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
