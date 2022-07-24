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

// BlueprintGeneratedClass B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C
// 0x0348 (0x0A10 - 0x06C8)
class AB_Prj_Athena_TowerGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BaseDestination;                                          // 0x06E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BGAClasses_1;                                             // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_1;                                           // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_1;                                           // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             P_BuildBuilding;                                          // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridExplosionOffset;                                      // 0x0740(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeXY;                                               // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeZ;                                                // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridYOffset;                                              // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridZOffset;                                              // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x075C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, float>       OrientationYawOffsets;                                    // 0x0760(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationLocationOffsets;                               // 0x07B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_1;                                           // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     LastBounceLocation;                                       // 0x0810(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceDistance;                                        // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBounceTime;                                           // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenBounces;                                    // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuildDelay;                                               // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BGAClasses_2;                                             // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              BGAClasses_3;                                             // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              BGAClasses_4;                                             // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_2;                                           // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_3;                                           // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_4;                                           // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_2;                                           // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_3;                                           // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_4;                                           // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_2;                                           // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_3;                                           // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_4;                                           // 0x08E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_Underground;                                 // 0x08F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              BGAClasses_Underground;                                   // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_Underground;                                 // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_Underground;                                 // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              BGAClasses_Tires;                                         // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_Tires;                                       // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_Tires;                                       // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationDoortraceOffsets;                              // 0x0968(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     DoorTraceOffsetHigh;                                      // 0x09B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DoorTraceOffsetLow;                                       // 0x09C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_HitTerrain;                                             // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09D1(0x0007) MISSED OFFSET
	class USoundBase*                                  InAirLoopSound;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InAirLoopComponent;                                       // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BounceTimeout;                                            // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDebug;                                                  // 0x09EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09ED(0x0003) MISSED OFFSET
	TArray<class AActor*>                              ActorsToDestroy;                                          // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C");
		return ptr;
	}


	void CalculateCardinalDirection();
	void HandleProps(TArray<class AActor*>* Array);
	void SpawnTires(const struct FVector& ReferenceLocation);
	void ClearAndBuild(TArray<class UClass*> BGAClassArray, bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray);
	void DestroyActorsInGridCell(const struct FVector& CellLocation, bool DestroyFloorsQuickly);
	void CreateBaseSection(const struct FVector& ReferenceLocation, TArray<class UClass*> BGAClassArray, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray);
	void SetBaseDestination(const struct FHitResult& Hit);
	void UserConstructionScript();
	void OnStop(struct FHitResult* Hit);
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void Handle_Bounce(const struct FVector& Hit_Location);
	void Delete_another_actor();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_B_Prj_Athena_TowerGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
