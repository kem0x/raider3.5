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

// WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C
// 0x0038 (0x0250 - 0x0218)
class URewardsListWidget_C : public UFortUserWidget
{
public:
	class UVerticalBox*                                RewardsVerticalBox;                                       // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UFrontEndRewardWrapperWidget_C*>      RewardsArray;                                             // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Index;                                                    // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RewardCount;                                              // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoNotAnimate;                                             // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaySound;                                               // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
	TArray<class UFrontEndRewardWrapperWidget_C*>      SelectableRewardsArray;                                   // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C");
		return ptr;
	}


	void PresentAllRewards();
	void CreateRewardWrapper(class UHomeScreenQuestRewardItem_C* Item, const struct FText& DisplayName, class UFrontEndRewardWrapperWidget_C** OutputPin);
	void CreateReward(bool Selectable, struct FFortItemInstanceQuantityPair* FortItemInstanceQuantityPair);
	void PresentNextReward();
	void PopulateRewards(TArray<struct FFortItemInstanceQuantityPair>* Rewards, TArray<struct FFortItemInstanceQuantityPair>* SelectableRewards);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
