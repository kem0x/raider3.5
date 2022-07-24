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

// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
// 0x01E9 (0x0561 - 0x0378)
class AB_Pickups_Parent_C : public AFortPickupEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Root;                                                     // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7;// 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7;// 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7;// 0x0390(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UTimelineComponent*                          MobileSelectedTL;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Pivot_Offset;                                             // 0x03A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation_Bias;                                            // 0x03AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup;                                       // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup;                                     // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsSkeletalMesh;                                           // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_a_Backpack;                                            // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	class UPrimitiveComponent*                         SkeletalOrStaticMeshAssetPrimitive;                       // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                CurrentElementIndex;                                      // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            midArray;                                                 // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  CurrentMaterial;                                          // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  CurrentParentMaterial;                                    // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Tossed;                                                   // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Activate_Rarity_Particle_Systems;                         // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	struct FLinearColor                                Rarity_Color;                                             // 0x0414(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Rarity_Level;                                             // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sweep_Brightness;                                         // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Sweep_Speed;                                              // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Component_Radius__Scaled_;                                // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Component_Radius_Multiplier;                              // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        Outline_Rarity_Colors;                                    // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Component_Radius;                                         // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Delay_Before_Glow;                              // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_In_Time;                                   // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Hold_Time;                                      // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_Out_Time;                                  // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Sweep_Speed;                                    // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBluglo;                                                 // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class UParticleSystem*                             Picked_Up_Trail_PS;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Picked_Up_;                           // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Lifetime__Picked_Up_;                                     // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsLootGiftForOthers;                                      // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UForceFeedbackEffect*                        PickupForceFeedback;                                      // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Violentium;                                            // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	TArray<int>                                        MIDsNeedingRelease;                                       // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Names_of_Materials_And_Parents_Exempt_from_Repartening;   // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Max_Draw_Distance_Save_the_World;                         // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Draw_Distance_Athena;                                 // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Draw_Distance_Bacchus;                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasUniqueMaterialIds;                                     // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	TArray<float>                                      Sweep_Brightness_Test;                                    // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    BackgroundParticleSystem;                                 // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FLinearColor>                        BackgroundRarityColors;                                   // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ViewDistance;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Random_Rotation;                                          // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MobileSelectedOffset;                                     // 0x0520(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MobileSelectedScale;                                      // 0x052C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        MobileInteractIcon;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     MobileInteractIconLocation;                               // 0x0540(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MobileInteractIconScale;                                  // 0x054C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MobileInteractionMaterial;                                // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PickedUp;                                                 // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C");
		return ptr;
	}


	void Initial_Parenting_Setup();
	void Mobile_Interation_Icon_Setup();
	void Randomize_Mesh_Rotation_for_BR();
	void Set_Draw_Distance();
	void SetVisibleMobileInteractIcon(bool Visible);
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset);
	void SetInitialHologramParams(class UMaterialInstanceDynamic* Mid);
	void Unique_Material_MIDs();
	void SetupStretchMIDs();
	void SetupBaseMIDs();
	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void DestroyBackgroundVisualComponents();
	void ReleaseStretchMIDs();
	void ScaleHologramTimingsForPvP();
	void SetHologramPickedUpParams(bool Tier_0);
	void SpawnPickedUpTrailPS();
	void SetRarityColor();
	void UserConstructionScript();
	void MobileSelectedTL__FinishedFunc();
	void MobileSelectedTL__UpdateFunc();
	void ReceiveBeginPlay();
	void OnPickedUp();
	void OnAboutToEnterBackpack(class AFortPawn** PickupTarget);
	void ReceiveTick(float* DeltaSeconds);
	void OnTossed();
	void ReceiveDestroyed();
	void EnableBacchusHighlight();
	void DisableBacchusHighlight();
	void ExecuteUbergraph_B_Pickups_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
