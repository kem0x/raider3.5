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

// BlueprintGeneratedClass B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C
// 0x0154 (0x0FA0 - 0x0E4C)
class AB_Rifle_AMR_Athena_C : public AB_Rifle_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sm_AMR_Glass_01;                                          // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ResidualArcsSide1;                                        // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ResidualArcsTop2;                                         // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ResidualArcsTop1;                                         // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AMRFan;                                                   // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleLight;                                              // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FullCharge_AudioComponent;                                // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Ambient_Charge_AudioComponent;                            // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ElectrodeParticles;                                       // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CoreParticles;                                            // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SlowdownTimeline_LERP_FA3456884604F88A7D037EA57D2A559E;   // 0x0EA8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SlowdownTimeline__Direction_FA3456884604F88A7D037EA57D2A559E;// 0x0EAC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EAD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SlowdownTimeline;                                         // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              springVal_springValCurve_40BD27CD4D6E40F558011BAB35039509;// 0x0EB8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    springVal__Direction_40BD27CD4D6E40F558011BAB35039509;    // 0x0EBC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EBD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          springVal;                                                // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleUpParticles_SpawnRate_7A6295DF4D992FC114D1DCBF417ED9FD;// 0x0EC8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleUpParticles__Direction_7A6295DF4D992FC114D1DCBF417ED9FD;// 0x0ECC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0ECD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleUpParticles;                                         // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleDownParticles_SpawnRate_5C07019A41C7FA0F760F718DC5413D1A;// 0x0ED8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleDownParticles__Direction_5C07019A41C7FA0F760F718DC5413D1A;// 0x0EDC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0EDD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleDownParticles;                                       // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Reload_PItchChange_NewTrack_0_377ECAF246C00AC525A90D814B63399F;// 0x0EE8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Reload_PItchChange_Reload_Pitch_377ECAF246C00AC525A90D814B63399F;// 0x0EEC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Reload_PItchChange__Direction_377ECAF246C00AC525A90D814B63399F;// 0x0EF0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0EF1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Reload_PItchChange;                                       // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CoreParticlesSpawnRate_Uncharged_;                        // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoreParticlesSpawnRate_Charged_;                          // 0x0F04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ChargedBeam;                                              // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DefaultBeam;                                              // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationRate_Uncharged_;                                 // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationRate_Charged_;                                   // 0x0F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoreParticlesTimeDilation_Uncharged_;                     // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoreParticlesTimeDilation_Charged_;                       // 0x0F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoreParticlesSpinRate_Charged_;                           // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElectrodeParticlesEnergizedSpawnRate_Uncharged_;          // 0x0F2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElectrodeParticlesEnergizedSpawnRate_Charged_;            // 0x0F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reached_Min_Charge;                                       // 0x0F34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0F35(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BarrelGlowMID;                                            // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BarrelGlowColor_Uncharged_;                               // 0x0F40(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BarrelGlowColor_Charged_;                                 // 0x0F50(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlash_Uncharged_;                                   // 0x0F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlash_Charged_;                                     // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Muzzle_Flash_Light_Intensity__Charged_;                   // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Muzzle_Flash_Light_Intensity__Uncharged_;                 // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurbineSpinRate_Charged_;                                 // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurbineSpinRate_Uncharged_;                               // 0x0F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationRate_Reloading_;                                 // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargePercent;                                            // 0x0F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Delta;                                               // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Charging;                                                 // 0x0F8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OutOfAmmo_Local;                                          // 0x0F8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0F8E(0x0002) MISSED OFFSET
	float                                              CurrentPlayRate;                                          // 0x0F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCost_MinCharge;                                       // 0x0F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ChargeAudio;                                              // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C");
		return ptr;
	}


	void VFX_SetChargedParams();
	void VFX_SetUnchargedParams();
	void UserConstructionScript();
	void ScaleDownParticles__FinishedFunc();
	void ScaleDownParticles__UpdateFunc();
	void Reload_PItchChange__FinishedFunc();
	void Reload_PItchChange__UpdateFunc();
	void ScaleUpParticles__FinishedFunc();
	void ScaleUpParticles__UpdateFunc();
	void springVal__FinishedFunc();
	void springVal__UpdateFunc();
	void SlowdownTimeline__FinishedFunc();
	void SlowdownTimeline__UpdateFunc();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void OnStartCharge();
	void OnReachedMinCharge();
	void Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState>* Selection);
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage);
	void EndOfCharge();
	void OnWeaponAttached();
	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnAmmoCountChanged();
	void CameraShakeLoop();
	void OnChargeDown();
	void OnReachedMaxCharge();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_B_Rifle_AMR_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
