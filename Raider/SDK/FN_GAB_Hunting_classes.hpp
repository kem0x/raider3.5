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

// BlueprintGeneratedClass GAB_Hunting.GAB_Hunting_C
// 0x006C (0x0B5C - 0x0AF0)
class UGAB_Hunting_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class UEnvQuery*                                   EQS_Hunting_Query;                                        // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EQS_Grid_Half_Size;                                       // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EQS_Density;                                              // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HuntingMoveTaskName;                                      // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortAIController*                           MyFortAIController;                                       // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HuntingTarget;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeStartedHunting;                                   // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HuntingRestartDelta;                                      // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     MovementTask;                                             // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      GoalDistancesOnCompleteMove;                              // 0x0B30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             PawnPositionsOnCompletedMove;                             // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShouldAbortHunting;                                       // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	float                                              MinGoalDistChange;                                        // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPawnDistChange;                                        // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Hunting.GAB_Hunting_C");
		return ptr;
	}


	void UpdatePositionData(const struct FVector& NewPosition, TArray<struct FVector>* PosArray, float* MaxDistance, bool* HasValidData);
	void UpdateDistanceData(float NewDistance, TArray<float>* DistArray, float* MinValue, float* MaxValue, bool* HasValidData);
	void OnMoveFinished_9284CD4944DA1972DB7A98BE0A9A28C1(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnCancelled_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnInterrupted_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnComplete_9284CD4944DA1972DB7A98BE0A9A28C1();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void OnQueryFinishedEvent_Event_0_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void OnTargetPerceptionUpdated_Event_0_1(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void StartQuery();
	void Restart_Hunting();
	void StoreGoalDistance();
	void ExecuteUbergraph_GAB_Hunting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
