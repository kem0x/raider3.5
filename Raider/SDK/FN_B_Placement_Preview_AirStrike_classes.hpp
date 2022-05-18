#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C
// 0x019C (0x065C - 0x04C0)
class AB_Placement_Preview_AirStrike_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             airstrike_incoming_place_audiocomponent;                  // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GridDecal_Mesh;                                           // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_SupplyDrop_TargetRay_01;                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             GridDecal;                                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Spawn_Arrow_NewTrack_0_D8CAB91943322A93E0FF2CA94190A798;  // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Spawn_Arrow__Direction_D8CAB91943322A93E0FF2CA94190A798;  // 0x04F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Spawn_Arrow;                                              // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReticuleRestartDelay;                                     // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticuleIntermittentDelay;                                // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BombsDelay;                                               // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can_212_x1_Repeat_;                                       // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can_212_x2_Repeat_;                                       // 0x050D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x050E(0x0002) MISSED OFFSET
	float                                              DecalRotation;                                            // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Dotted_Lines_Amount;                                      // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Dotted_Lines_Spacing_in_Z;                                // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                Dotted_Lines_Spacing;                                     // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    _3dline_MID;                                              // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ArrowheadStartLocation;                                   // 0x0538(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ArrowheadEndLocation;                                     // 0x0544(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Bomb_Init_Transform;                                      // 0x0550(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Bomb_Start_Location;                                      // 0x0580(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ForLoopCounter;                                           // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAirStrikesPatterns                         StrikePatternType;                                        // 0x0590(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EStrikePatternEnum>                    Current_Air_Strike_Pattern;                               // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	float                                              SpacingBetweenObjects;                                    // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Current_Particle_Array;                                   // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Position_Array_Cleaned_of_duplicates;                     // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Duplicate_Positions;                                      // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Double_Entries;                                           // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             One_Hit_Particle_Indicator;                               // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Two_Hit_Particle_Indicator;                               // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             Position_Array_With_duplicates;                           // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MultiGateIndex;                                           // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x060C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             TargetEmitterLocations;                                   // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TargetEmitterNewMovementStartTimes;                       // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            DefaultPositonParticles;                                  // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Default_Location_Template;                                // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Line_MID;                                                 // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Placement_is_Valid;                                       // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Placement_is_Valid_Previously;                            // 0x0651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Valid_state_changed;                                      // 0x0652(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Valid_State_Changed_Override;                             // 0x0653(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reinit_Particles;                                         // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewVar_0_1;                                               // 0x0655(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Recreate_particles_if_valid;                              // 0x0656(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0657(0x0001) MISSED OFFSET
	float                                              Delay_Between_Particle_Spawns;                            // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C");
		return ptr;
	}


	void Kill_Emitters_and_Start_Times();
	void UserConstructionScript();
	void Spawn_Arrow__FinishedFunc();
	void Spawn_Arrow__UpdateFunc();
	void OnBounceMotionUpdate(float* VectorScale);
	void OnInitializeDecoPreview(class ABuildingActor** NewBuildingActor, class UFortDecoItemDefinition** NewDecoItemDefinition);
	void OnUpdateScale(float* Scale, struct FVector* InWorldSpacePivot);
	void OnUpdateVisuals(float* DeltaSeconds, bool* bSafeToPlace);
	void SetScalarParameterValueOnAllPreviewMIDs(struct FName* ParamName, float* ParamValue);
	void SetVectorParameterValueOnAllPreviewMIDs(struct FName* ParamName, struct FLinearColor* ParamValue);
	void SwitchType(TArray<struct FVector> Positions_With_Duplicates, TArray<struct FVector> Cleaned_Positions, TArray<int> Duplicated_Entries);
	void ReceiveBeginPlay();
	void RestartLineReticule();
	void ToggleAirStrikeParticles(bool bInToggle);
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_Placement_Preview_AirStrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
