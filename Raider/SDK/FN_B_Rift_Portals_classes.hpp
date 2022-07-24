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

// BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C
// 0x01E8 (0x0878 - 0x0690)
class AB_Rift_Portals_C : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Wind_Vector_Explosion;                                    // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WindVectorVortex;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Storm_Small_Vortex_Cue;                                   // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Rift_RandomLightning_01;                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RiftVortex;                                               // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Rift_Active;                                            // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9;    // 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9;// 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleLightOnOff;                                          // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D;         // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D;   // 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BoostLight;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnCloud;                                               // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SwipeMaterial;                                            // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Plasma_Particles;                                         // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Lightning_Strike_Particles;                               // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Decal_Material;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x0728(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class UDecalComponent*                             Decal;                                                    // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UVectorFieldComponent*                       Impact_Vector_Field;                                      // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FFortWindImpulseHandle                      Wind_Impulse;                                             // 0x0748(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Wind_Impulse_Default_Strength;                            // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Wind_location;                                            // 0x0750(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Wind_Radius;                                              // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              Overlapping_Actors;                                       // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACar_Copper_C*>                       ArrayOfNearbyCars;                                        // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                                Light_Color_Idle;                                         // 0x0780(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Light_Color_Active;                                       // 0x0790(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Intensity_Idle;                                     // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Intensity_Active;                                   // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Radius_Idle;                                        // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Radius_Active;                                      // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ParticlesBaseMID;                                         // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightEnabled;                                             // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	float                                              Light_Fade_In_Time;                                       // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Fade_Out_Time;                                      // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnImpactParticles;                                     // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	float                                              ManualDeactivateDelayBeforeDestory;                       // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiftLightningDuration;                                    // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VortexSize;                                               // 0x07D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VortexSizeMin;                                            // 0x07DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VortexSizeMax;                                            // 0x07E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Twist_Amount_Min;                                         // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Twist_Amount_Max;                                         // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Strength_Min;                                      // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Strength_Max;                                      // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RiftVortexMID;                                            // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Twist_Amount;                                             // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Strength;                                          // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WPO_Strength;                                             // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Model_Height;                                             // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   UV_Tile_Multiplier_Min;                                   // 0x0820(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   UV_Tile_Multiplier_Max;                                   // 0x0828(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Frequency_Min;                                     // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Frequency_Max;                                     // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Wiggle_Speed_Min;                                         // 0x0838(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Wiggle_Speed_Max;                                         // 0x0840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_Spawn_Loc;                                      // 0x0848(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_Bloat;                                          // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiftVortexFadeInTime;                                     // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiftVortexFadeOutTime;                                    // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Water_Scene_Capture_Activated;                            // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Wind_Vortex_MID;                                          // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Explosion_Wind_Vector_Mesh_MID;                           // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C");
		return ptr;
	}


	void UserConstructionScript();
	void BoostLight__FinishedFunc();
	void BoostLight__UpdateFunc();
	void ScaleLightOnOff__FinishedFunc();
	void ScaleLightOnOff__UpdateFunc();
	void OnPlaced();
	void OnRemoved();
	void OnSpawnAI();
	void Lightning_Impact_Event();
	void OnActivated();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void FadeLightIn();
	void FadeLightOut();
	void ManuallyActivateRift();
	void ManuallyDeactivateRift();
	void PatrolEnemySuckIn(float Delay, float RiftLightningDuration, bool SpawnImpactParticles);
	void OnDeactivated();
	void ResetGate();
	void ExecuteUbergraph_B_Rift_Portals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
