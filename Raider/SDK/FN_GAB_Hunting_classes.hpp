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

// BlueprintGeneratedClass GAB_Hunting.GAB_Hunting_C
// 0x006C (0x097C - 0x0910)
class UGAB_Hunting_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class UEnvQuery*                                   EQS_Hunting_Query;                                        // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EQS_Grid_Half_Size;                                       // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EQS_Density;                                              // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HuntingMoveTaskName;                                      // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortAIController*                           MyFortAIController;                                       // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HuntingTarget;                                            // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeStartedHunting;                                   // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HuntingRestartDelta;                                      // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     MovementTask;                                             // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      GoalDistancesOnCompleteMove;                              // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             PawnPositionsOnCompletedMove;                             // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShouldAbortHunting;                                       // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0971(0x0003) MISSED OFFSET
	float                                              MinGoalDistChange;                                        // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPawnDistChange;                                        // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	void OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void OnTargetPerceptionUpdated_Event_1(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void StartQuery();
	void Restart_Hunting();
	void StoreGoalDistance();
	void ExecuteUbergraph_GAB_Hunting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
