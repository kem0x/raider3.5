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

// WidgetBlueprintGeneratedClass FrontEndRewards_Queue.FrontEndRewards_Queue_C
// 0x0058 (0x0270 - 0x0218)
class UFrontEndRewards_Queue_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UOverlay*                                    OverlayMain;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class URewardsIcon_C*>                      IconList;                                                 // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              IconPadding;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IconScale;                                                // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        SlideIndexList;                                           // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                IconSlideHandle;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              IconSlideStaggerTime;                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IconInitStaggerTime;                                      // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                IconInitHandle;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                InitIndex;                                                // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseIconOffset;                                           // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndRewards_Queue.FrontEndRewards_Queue_C");
		return ptr;
	}


	void TickIconInit();
	void StartInitAnimation();
	void SlideIcon(class URewardsIcon_C* Icon);
	void StartDequeueAnimation();
	void TickIconSlide();
	void HandleIconHideAnimationFinished(class URewardsIcon_C* Icon);
	void PopIcon(class URewardsIcon_C** OutIcon);
	void RandomizeDesignView();
	void CloneIconList(TArray<class URewardsIcon_C*>* IconListClone);
	void ClearQueue();
	void DequeueReward(class UFortRewardNotificationData** OutReward);
	void QueueReward(class UFortRewardNotificationData* RewardItem, bool IsDesignTime, class URewardsIcon_C** OutIcon);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_FrontEndRewards_Queue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
