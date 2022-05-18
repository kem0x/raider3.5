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

// BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C
// 0x0153 (0x2170 - 0x201D)
class APlayerPawn_Ninja_C : public APlayerPawn_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x201D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2020(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      ShadowStanceFaceComponent;                                // 0x2028(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ShadowStanceCharmComponent;                               // 0x2030(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ShadowStanceBackpackComponent;                            // 0x2038(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ShadowStanceHatComponent;                                 // 0x2040(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ShadowStanceHeadComponent;                                // 0x2048(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ShadowStanceBodyComponent;                                // 0x2050(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DragonSlashImpact;                                        // 0x2058(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_1E481F634B18DA79A1B2FDBCB1091D62;// 0x2060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_1E481F634B18DA79A1B2FDBCB1091D62;// 0x2064(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Animate_Ninja_ShadowStance_Dissolve__Direction_1E481F634B18DA79A1B2FDBCB1091D62;// 0x2068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2069(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Animate_Ninja_ShadowStance_Dissolve;                      // 0x2070(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          MI_ShadowStanceDissolve;                                  // 0x2078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TestMacros;                                               // 0x2080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DimMakActive;                                             // 0x2081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Shadow_Stance_Active;                                     // 0x2082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x2083(0x0005) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceDissolveArray;                            // 0x2088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          MI_Shadow_Stance_Translucent_Shader;                      // 0x2098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Body;                    // 0x20A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Head;                    // 0x20B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ShadowStanceVisibility;                                   // 0x20C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x20C4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MI_Shadow_Stance_Translucent_Shader_Enemy_View;           // 0x20C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Shadow_Stance_Material;                                   // 0x20D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DragonSlashActive;                                        // 0x20D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponsShadowStanceReversed;                              // 0x20D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x20DA(0x0006) MISSED OFFSET
	class UClass*                                      GE_AssassinationStacks;                                   // 0x20E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SplineVolumeTrail_v1b_C*                 TOTD_SplineBP;                                            // 0x20E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    NinjaStarTrail;                                           // 0x20F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               NinjaStarsPiercing;                                       // 0x20F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x20F9(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Hat;                     // 0x2100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Face;                    // 0x2110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Charm;                   // 0x2120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Backpack;                // 0x2130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MasterMIDShadowStanceTranslucentArray;                    // 0x2140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              Master_Shadow_Stance_Component_Array;                     // 0x2150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     SK_DragonSlashSword;                                      // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_EnableMantisLeap;                                      // 0x2168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C");
		return ptr;
	}


	void SetupShadowMeshAssetsAndMaterials(TEnumAsByte<EFortCustomPartType> PartType, class USkeletalMeshComponent** Shadow_Mesh_Component, TArray<class UMaterialInterface*>* Character_Body_Part_MID_Array, TArray<class UMaterialInstanceDynamic*>* Empty_Translucent_Shadow_Stance_Output_MID_Array, bool* Set);
	void CreateAndAttachDuplicateEffectSkeletalMeshes(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void GameplayCue_Abilities_Activation_Ninja_ShadowStance(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Ninja_DimMak_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon);
	void UpdateWeaponShadowStance();
	void DragonSlashActivatedOrDeactivated(bool Active_);
	void ReceiveBeginPlay();
	void Toggle_Shadow_Stance();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void SetMenuScreenClassName();
	void NinjaStarTrails_On();
	void NinjaStarTrails_Off();
	void SetPiercingForFX(bool NewPierceValue);
	void OnLanded(struct FHitResult* Hit);
	void StopEmittingNewSplines();
	void OnTeleportedClient();
	void TailOfDragonEnd();
	void TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength);
	void ExecuteUbergraph_PlayerPawn_Ninja(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
