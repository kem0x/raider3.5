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

// BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C
// 0x010B (0x2078 - 0x1F6D)
class APlayerPawn_Constructor_C : public APlayerPawn_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x1F6D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1F70(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ServerShieldMesh;                                         // 0x1F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ShieldCollider;                                           // 0x1F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldMesh;                                               // 0x1F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IFFShield_Light;                                          // 0x1F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BullRushPoke;                                             // 0x1F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TakeDamageTimeline_LineBrightness_E993138E4A26ED909055A89FDA7BCA47;// 0x1FA0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TakeDamageTimeline_DamageFlash_E993138E4A26ED909055A89FDA7BCA47;// 0x1FA4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TakeDamageTimeline__Direction_E993138E4A26ED909055A89FDA7BCA47;// 0x1FA8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1FA9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TakeDamageTimeline;                                       // 0x1FB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_Activate;                                               // 0x1FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ShieldPlayerMesh;                                         // 0x1FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_IFF_ShieldFlicker;                                    // 0x1FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFlash;                                              // 0x1FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LineBrightness;                                           // 0x1FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_TIABExplosion;                                          // 0x1FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_TIAB;                                               // 0x1FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Kinetic_Overload;                                   // 0x1FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Start;                                       // 0x1FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Stop;                                        // 0x2000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Impact_1;                                    // 0x2008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Finalized_IFF_BackPack_Offset;                            // 0x2010(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_Without_Backpack;                        // 0x201C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_With_Back_Pack;                          // 0x2028(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2034(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayArmAnim;                                              // 0x2038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UPrimitiveComponent*>                 AllIFFMeshes;                                             // 0x2048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          IFFMaterialParent;                                        // 0x2058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FIFFBoneConfig>                      IFFBoneConfigs;                                           // 0x2060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Constructor_BASE_C*                       SavedBase;                                                // 0x2070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C");
		return ptr;
	}


	void OnRep_SavedBase();
	void SetIFFMeshesEnabled(bool IsEnabled);
	void UserConstructionScript();
	void TakeDamageTimeline__FinishedFunc();
	void TakeDamageTimeline__UpdateFunc();
	void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Constructor_KineticOverload_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Constructor_PlasmaPulse_IFFCoding(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void testIFF();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void PlayArm();
	void testEndIFF();
	void SetMenuScreenClassName();
	void MultiToggleShield(bool Toggle);
	void ToggleShield(bool Toggle);
	void SetBase(class AB_Constructor_BASE_C* SavedBase);
	void ExecuteUbergraph_PlayerPawn_Constructor(int EntryPoint);
	void PlayArmAnim__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
