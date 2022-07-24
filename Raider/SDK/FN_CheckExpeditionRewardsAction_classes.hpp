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

// BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C
// 0x0080 (0x0408 - 0x0388)
class ACheckExpeditionRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFrontEndRewards_Definition                 RewardsDefinition;                                        // 0x0398(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShowRewardsWidget;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	class UFrontEndRewards_Widget_C*                   Claimed_Reward_Widget;                                    // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C");
		return ptr;
	}


	void Find_First_Valid_Player_Controller(class AFortPlayerController** FoundPC1);
	void Is_FrontEndRewards_Running(bool* bRunning);
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Clear();
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget);
	void PopulateExpeditionRewards();
	void PopulateRewards();
	void OpenFrontEndRewards();
	void PopulateCompletedQuests();
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests);
	void CompleteRewardsAction();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void Handle_Rewards_Running();
	void ExecuteUbergraph_CheckExpeditionRewardsAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
