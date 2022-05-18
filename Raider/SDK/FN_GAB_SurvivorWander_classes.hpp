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

// BlueprintGeneratedClass GAB_SurvivorWander.GAB_SurvivorWander_C
// 0x0058 (0x0B48 - 0x0AF0)
class UGAB_SurvivorWander_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityEnding;                                            // 0x0AF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0AFA(0x0006) MISSED OFFSET
	class UEnvQuery*                                   EQS_AnchorWander;                                         // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASurvivor_C*                                 SurvivorPawn;                                             // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WanderLocation;                                           // 0x0B10(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitTimeAfterWanderMin;                                   // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitTimeAfterWanderMax;                                   // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	TArray<struct FVector>                             EQSResults;                                               // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SetFocalPointToAbilityTargetWhileMoving;                  // 0x0B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSurvivorInsideOfAnchorBounds;                           // 0x0B39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0B3A(0x0006) MISSED OFFSET
	class UFortAbilityTask_MoveAI*                     WanderMove;                                               // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorWander.GAB_SurvivorWander_C");
		return ptr;
	}


	void OnFinish_46520BF64782D787A829259B1AEBC2F9();
	void OnMoveFinished_823C4D1641576DFB48835EA7477D7A9D(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_823C4D1641576DFB48835EA7477D7A9D();
	void OnCancelled_823C4D1641576DFB48835EA7477D7A9D();
	void OnInterrupted_823C4D1641576DFB48835EA7477D7A9D();
	void OnComplete_823C4D1641576DFB48835EA7477D7A9D();
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SurvivorWander(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
