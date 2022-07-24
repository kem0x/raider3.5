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

// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C
// 0x00F0 (0x0460 - 0x0370)
class ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C : public ABP_ProjectileTrajectory_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_BuildingPreview;                                       // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Building;                                                 // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              GridSizeXY;                                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeZ;                                                // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridYOffset;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastPointDist;                                            // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridZOffset;                                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    YawOffset;                                                // 0x039C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastYawOffset;                                            // 0x03A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridSnapPosition;                                         // 0x03B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastGridSnapPosition;                                     // 0x03C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class USoundBase*                                  GridSnapSound;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationDoortraceOffsets;                              // 0x03E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     DoorTraceOffsetHigh;                                      // 0x0430(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DoorTraceOffsetLow;                                       // 0x043C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_HitTerrain;                                             // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UStaticMesh*                                 BuildingPreviewMesh;                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 BuildingPreviewMeshUnderground;                           // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C");
		return ptr;
	}


	void HandleGridSnapUpdates(const struct FVector& NewLocation);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetTrajectorySpline(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
