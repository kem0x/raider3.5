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

// BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C
// 0x017F (0x0F0C - 0x0D8D)
class ATODM_Disabled_C : public AMASTER_TODM_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D8D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D90(0x0008) (Transient, DuplicateTransient)
	float                                              WindSpeed_1;                                              // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomWeatherWaitTime_1;                                  // 0x0D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAmountOfRandomWeatherTimeLeft_1;                   // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWeatherLerpAmount_1;                                   // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindStrength_1;                                           // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FutureWindStrength_1;                                     // 0x0DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FutureWindSpeed_1;                                        // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickNewWindConditions_1;                                 // 0x0DB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DB5(0x0003) MISSED OFFSET
	float                                              LightningStrength_1;                                      // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThreatCloudStormAmount_1;                                 // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRainWithStorms_1;                                      // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Play_a_Particle_Effect_Near_the_players_Feet_1;           // 0x0DC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WindEffects_Should_be_Active_1;                           // 0x0DC2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0DC3(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    Storm_Foot_Particle_Outdoor_1;                            // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_on_Terrain_1;                   // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Storm_Foot_Particle_Indoor_1;                             // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_NOT_on_Terrain_1;               // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Storm_Wind_Strength_1;                                    // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Generate_Foliage_Wind_Gusts_1;                            // 0x0DEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0DED(0x0003) MISSED OFFSET
	struct FTimerHandle                                LightningStrikeTimerHandle_1;                             // 0x0DF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                PreviousDirectionalLightColor_1;                          // 0x0DF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Lightning_Flash_Color_1;                                  // 0x0E08(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Min_1;                           // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Max_1;                           // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ShootingStarParticleSystem_1;                             // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Spawn_Shooting_Stars_1;                                   // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E29(0x0003) MISSED OFFSET
	struct FLinearColor                                SkyboxFogMorningColor_1;                                  // 0x0E2C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogMorningLitColor_1;                               // 0x0E3C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningDistance_1;                               // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningDiffuseAmount_1;                          // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningEmissiveAmount_1;                         // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitLength_1;                              // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitRotation_1;                            // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitOffset_1;                              // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayColor_1;                                      // 0x0E64(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayLitColor_1;                                   // 0x0E74(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayDistance_1;                                   // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayDiffuseAmount_1;                              // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayEmissiveAmount_1;                             // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitLength_1;                                  // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitRotation_1;                                // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitOffset_1;                                  // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningColor_1;                                  // 0x0E9C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningLitColor_1;                               // 0x0EAC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningDistance_1;                               // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningDiffuseAmount_1;                          // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningEmissiveAmount_1;                         // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitLength_1;                              // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitRotation_1;                            // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitOffset_1;                              // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightColor_1;                                    // 0x0ED4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightLitColor_1;                                 // 0x0EE4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightDistance_1;                                 // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightDiffuseAmount_1;                            // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightEmissiveAmount_1;                           // 0x0EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitLength_1;                                // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitRotation_1;                              // 0x0F04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitOffset_1;                                // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C");
		return ptr;
	}


	void UserConstructionScript();
	void DisableLightAndFog(bool* Enable);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TODM_Disabled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
