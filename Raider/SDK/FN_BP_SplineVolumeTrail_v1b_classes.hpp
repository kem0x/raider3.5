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

// BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
// 0x0230 (0x0558 - 0x0328)
class ABP_SplineVolumeTrail_v1b_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             DebugArrow;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9;// 0x0340(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DebugRotateTimeline;                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                            // 0x0358(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Socket_Attach_Point;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 SplineMeshTemplate;                                       // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SplineMeshMaterialOverride;                               // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particles;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime_Buffer;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineSystemDuration;                                     // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifetimeAfterCompletion;                                  // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeepTickEnabledWhenCompleting;                            // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	int                                                NumberOfSplineMeshesToUpdate;                             // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Initial_Size;                                             // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SplineDistanceThreshold;                                  // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineDistanceThresholdEmpty;                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshesHidden;                                       // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      SplineTimestamps;                                         // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ArrayIndex;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SplineSystemActive;                                       // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              CompletionTimestamp;                                      // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifetimeAdjusted;                                         // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           SizeOverLife;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MIDs_1;                                                   // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveLinearColor*                           ColorAndAlphaOverLife;                                    // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticlesComponent;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                SplineID;                                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class USplineMeshComponent*                        Current_Spline_Mesh;                                      // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Initial_Rotation__Roll_;                                  // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RotationOverLife;                                         // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	struct FVector                                     DebugPositionOffset;                                      // 0x0434(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    DebugRotationRate;                                        // 0x0440(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DebugTickDelta;                                           // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugPreviousTickTimestamp;                               // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FTimerHandle                                Spline_System_Duration_Event_Handle;                      // 0x0458(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Use_Tick_Interval_LODs;                                   // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	struct FTimerHandle                                Tick_Interval_Event_Handle;                               // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Tick_Interval_LOD_Check_Rate;                             // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	TArray<int>                                        Tick_Interval_LOD_Distances;                              // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      Tick_Actor_Intervals;                                     // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LOD_Array_Index;                                          // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Recently_Rendered_LOD;                                // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	float                                              Recently_Rendered_Check_Rate;                             // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	struct FTimerHandle                                Recently_Rendered_Event_Handle;                           // 0x04A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RecentlyRendered;                                         // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	float                                              Recently_Rendered_Tolerance;                              // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SplineDefaultUpVector;                                    // 0x04B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               SplineDefaultUpVectorInWorldSpace;                        // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<En_SplineForwardAxes_01>               SplineMeshForwardAxis;                                    // 0x04C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CeaseAndDetachSplineUponCompletion;                       // 0x04C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanNewSplinePointsBeCreated;                              // 0x04C7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LinearColorOverLengthOfSpline;                            // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	TArray<int>                                        IndiciesToDelete;                                         // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RedistributePointsAlongSplineWhenCreated;                 // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CurveBakeMID;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RenderTextureResolution;                                  // 0x04F8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UCurveLinearColor*>                   LinearColorCurvesToBake;                                  // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               WriteBakedCurveDataToDisk;                                // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	struct FString                                     File_Path;                                                // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     File_Name;                                                // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        LinearColorArray;                                         // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UseCheapSplines;                                          // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	class UTexture*                                    LinearColorTexture;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C");
		return ptr;
	}


	void UpdateCheapSplinesWPOVectors();
	void GetSocketLocationWS(const struct FName& Socket_Name, struct FVector* Location_WS);
	void SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes);
	void DestroyAllSplineMeshes();
	void BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int Pixel__X_, struct FLinearColor* LinearColorOut);
	void ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int IndexToRemove);
	void SplineUpdateOnTick();
	void RedistributePointsAlongSpline();
	void GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int Index, struct FLinearColor* LinearColorOut);
	void TickIntervalLODCheck();
	void SetWasRecentlyRendered();
	bool AddSplineDistanceCheck();
	void SetNewSplinePointsBool();
	void SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh);
	void RollSplineMesh();
	void UpdateParticleSystemPosition();
	void UpdateMID();
	void ScaleSplineMesh();
	void SplineTimestampManagement();
	void UpdateSplinePointPosition();
	void AddSplinePoint();
	void SetStartAndEndSplineMesh(bool Update_Spline_Mesh);
	void AddSplineMesh();
	void UserConstructionScript();
	void DebugRotateTimeline__FinishedFunc();
	void DebugRotateTimeline__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void SplineSystemDurationReached();
	void DebugMode_Rotate();
	void ManuallyStopSplineSystem();
	void Tick_Interval_LOD_Check();
	void Recently_Rendered_Check();
	void ClearRenderTarget();
	void GenerateCurveTextures();
	void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
