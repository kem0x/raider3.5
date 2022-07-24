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

// BlueprintGeneratedClass GA_AirStrike.GA_AirStrike_C
// 0x0196 (0x0B88 - 0x09F2)
class UGA_AirStrike_C : public UGAT_GenericActiveAbilityNoCommit_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x09F2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F8(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventComplete;                                            // 0x0A00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                          // 0x0A08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortAbilityDecoTool*                        DecoTool;                                                 // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Prj_Bomb;                                                 // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Prj_SpawnDirection;                                       // 0x0A20(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Prj_Gravity;                                              // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenBombs;                                        // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightToSpawnBombs;                                       // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A3C(0x0004) MISSED OFFSET
	struct FTransform                                  BombInitTransform;                                        // 0x0A40(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                AbilityMultiplier;                                        // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	struct FGameplayTag                                EC_Explode;                                               // 0x0A78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ExplodeReturn;                                         // 0x0A80(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             CurrentUnprocessedPositionsArray;                         // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ForLoopCounter;                                           // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0B14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B15(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BombCountUpgrade_01;                                   // 0x0B18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombCountUpgrade_02;                                   // 0x0B38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombCountUpgrade_03;                                   // 0x0B58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BaseBombCount;                                            // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B7C(0x0004) MISSED OFFSET
	class UAnimMontage*                                ActivateMontage;                                          // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_AirStrike.GA_AirStrike_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponent);
	struct FTransform GetCustomAbilitySourceTransform();
	void GetAttributeValue();
	void Completed_48B4C8FD48399FA7A5F50D96227846DD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_48B4C8FD48399FA7A5F50D96227846DD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_48B4C8FD48399FA7A5F50D96227846DD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void DidNotSpawn_6C69A64746D8F71A616C83A25170911C(class AActor* SpawnedActor);
	void Success_6C69A64746D8F71A616C83A25170911C(class AActor* SpawnedActor);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_AirStrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
