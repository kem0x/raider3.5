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

// BlueprintGeneratedClass B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C
// 0x010C (0x0434 - 0x0328)
class AB_AirStrike_Bomb_Spawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SpawnLoopCounter;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FTimerHandle                                SpawnBombsTimer;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeBetweenBombs;                                         // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class UClass*                                      BombPrj;                                                  // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             SpawnLocations;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EffectOnExplode;                                          // 0x0370(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    BombSpawnDirection;                                       // 0x03F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BombPrjGravity;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  BombInitTransform;                                        // 0x0400(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightToSpawnBombs;                                       // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C");
		return ptr;
	}


	void UserConstructionScript();
	void InitBombSpawn(class AFortPlayerPawn* InFortPlayerPawn, TArray<struct FVector> InSpawnLocations, const struct FFortGameplayEffectContainerSpec& InEffectOnExplode, const struct FTransform& InBombInitTransform);
	void BombSpawnLoop();
	void ExecuteUbergraph_B_AirStrike_Bomb_Spawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
