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

// BlueprintGeneratedClass CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C
// 0x0012 (0x039A - 0x0388)
class ACheckFrontEndDailyRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLastStateWasLoginScreen;                                 // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESubGame                                           NewVar_1;                                                 // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C");
		return ptr;
	}


	void IsFrontEndRewards_Running(bool* IsRunning);
	void Daily_Rewards_Open(bool* bRunning);
	void CompleteDailyRewardAction();
	void ShowDailyRewards();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
