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

// BlueprintGeneratedClass ShielderSpringArm.ShielderSpringArm_C
// 0x0178 (0x04A0 - 0x0328)
class AShielderSpringArm_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_ShielderBeam_Conjure;                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_ShielderBeamRelease;                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ShielderAttachArrow;                                      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_ShielderSphere;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SphereOffset;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SpringArmProbeSizeDebugSphere;                            // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             SpringArmRotationArrow;                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Conjure_BuildUp_LERP_Control_D12A3FA14BD8925FB490428AECE0CC59;// 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Conjure_BuildUp__Direction_D12A3FA14BD8925FB490428AECE0CC59;// 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Conjure_BuildUp;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BuildUp_Glow_880F290041EA80F7DABCA9A9D1E7D4D3;            // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildUp_SizeScale_880F290041EA80F7DABCA9A9D1E7D4D3;       // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BuildUp__Direction_880F290041EA80F7DABCA9A9D1E7D4D3;      // 0x0390(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BuildUp;                                                  // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PulseRelease_Glow_81C0A31243317F0572A5D6ADB92BF32D;       // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PulseRelease_SizeScale_81C0A31243317F0572A5D6ADB92BF32D;  // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PulseRelease_Pulse_Control_81C0A31243317F0572A5D6ADB92BF32D;// 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PulseRelease__Direction_81C0A31243317F0572A5D6ADB92BF32D; // 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PulseRelease;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Opacity_Control_96AC1ECB4A1F2D3473D191B196E7F98F;// 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_96AC1ECB4A1F2D3473D191B196E7F98F;   // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Debug;                                                    // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              ShielderInterpSpeedToNewSpringArmLocation;                // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   AttachPawn;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     ShieldScaleFactor;                                        // 0x03D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class AShielderPawn_C*                             Shielder;                                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ShieldMID;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Super_Shielder;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Beam_Emitter;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Shield_MID;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Beam_MID;                                                 // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Sphere_Mesh_Scale_Adjustment;                             // 0x0418(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0424(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0430(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_Mesh;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Conjure_Count;                                            // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Tru_Mid_Point;                                            // 0x046C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        SuperShield_Mesh;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     TailAimTargetLocation;                                    // 0x0488(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class USoundBase*                                  SND_SuperShielderRelease;                                 // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShielderSpringArm.ShielderSpringArm_C");
		return ptr;
	}


	void Spline_Points();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PulseRelease__FinishedFunc();
	void PulseRelease__UpdateFunc();
	void BuildUp__FinishedFunc();
	void BuildUp__UpdateFunc();
	void Conjure_BuildUp__FinishedFunc();
	void Conjure_BuildUp__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void Beam_Removal();
	void Beam_Spawn(class AActor* Origin);
	void FadeOut();
	void FadeIn();
	void Pulse_Shielder_Release();
	void ShieldMeshSetup();
	void PulseBuildUp();
	void Hit_Flash_FX();
	void Conjure();
	void ExecuteUbergraph_ShielderSpringArm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
