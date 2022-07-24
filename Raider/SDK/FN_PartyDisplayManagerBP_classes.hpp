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

// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
// 0x0488 (0x08C8 - 0x0440)
class APartyDisplayManagerBP_C : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        PrefabActorComp;                                          // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ScalePivot;                                               // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PivotHolder;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CelebratoryFX;                                            // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8;// 0x0484(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HoloMatColorPulse;                                        // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC;// 0x0494(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleAnimEvolve;                                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43;  // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43;// 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleAnimLevel;                                           // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Rotation;                                                 // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UFortItem*                                   ItemToRepresent;                                          // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviewRotation;                                          // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RotationAnimation;                                        // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LevelUpFX;                                                // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EvolveUpFX;                                               // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXTargetLocation;                                         // 0x04E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCharacter;                                              // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEvolve;                                                 // 0x04F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x04F6(0x0002) MISSED OFFSET
	class UParticleSystem*                             CharLevelUpFX;                                            // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CharEvolveUpFX;                                           // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UIoverrideMID;                                            // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasResetVisuals;                                          // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             CharSwapTransitionFX;                                     // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCharacterVisible;                                       // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             HeroPawn;                                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SanityChecker;                                            // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	struct FFrontEnd_VFXStorage                        VFX_StorageContainer;                                     // 0x0548(0x0320) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    MID_HoloMaterial;                                         // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_2;                                            // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VertexRange;                                              // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_3;                                            // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_4;                                            // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_5;                                            // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_6;                                            // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_7;                                            // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_8;                                            // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_9;                                            // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_10;                                           // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_11;                                           // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C");
		return ptr;
	}


	void RestoreTeleportMIDsInProgress(class AFortPlayerPawn* Pawn);
	void HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn* Pawn);
	void PartyMemberInProgressCheck(class AFortPlayerPawn* Pawn);
	class AActor* GetPrefabActorForCurrentDisplayedItem();
	void PostSetupPrefabVisuals();
	void ResetTeslaHackParticles();
	void GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh);
	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, EFortRarity Rarity);
	struct FTransform GetWeaponPlacementTransform();
	void UpdatePreviewMeshTransforms();
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition);
	struct FTransform GetPreviewMeshWorldTransform();
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh);
	void ResetVisuals();
	void UserConstructionScript();
	void ScaleAnimLevel__FinishedFunc();
	void ScaleAnimLevel__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void ScaleAnimEvolve__UpdateFunc();
	void HoloMatColorPulse__FinishedFunc();
	void HoloMatColorPulse__UpdateFunc();
	void Completed_01D864884864692DBB7035B0996A5437(class UFortItem* Item, const struct FGuid& RequestId);
	void ShowLoading();
	void HideLoading();
	void ShowItem(class UFortItem** ItemToView, struct FGuid* RequestId);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void CelebrateWithFX();
	void PerformScaleMeshFX();
	void HandleLoadingAssetsForItemCompleted(class UFortItem** ItemWhoseAssetsWereLoaded, TArray<class UObject*>* LoadedAssets, struct FGuid* RequestId);
	void ReceiveTick(float* DeltaSeconds);
	void Set_Character_Parts_Visibility(bool NewVisible);
	void CharacterCustomizationFinished(class AFortPlayerPawn** Pawn);
	void ReceiveBeginPlay();
	void OnPlayerPawnAddedToLobby(class AFortPlayerPawn** Pawn);
	void ResOutPawnFromLobby(class AFortPlayerPawn** Pawn, int* PartyIndex);
	void SetupPrefabVisuals();
	void ExecuteUbergraph_PartyDisplayManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
