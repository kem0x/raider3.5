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

// BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
// 0x0048 (0x0370 - 0x0328)
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Target;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxMeshCount;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                     // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    SplineMID;                                                // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineFadeDistance;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineFadeStartDistance;                                  // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C");
		return ptr;
	}


	void SetTrajectorySpline(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetTrajectoryFromNative(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
