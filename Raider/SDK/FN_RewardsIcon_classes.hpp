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

// WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C
// 0x0098 (0x02B0 - 0x0218)
class URewardsIcon_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            MaterializeAnimation;                                     // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            DisperseAnimation;                                        // 0x0228(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ImageIcon;                                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   ScaleBoxIconScale;                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSlideAnimationFinished;                                 // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisperseAnimationFinished;                              // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMaterializeAnimationFinished;                           // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UFortRewardNotificationData*                 Reward;                                                   // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideAnimStartTime;                                       // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideAnimStartTranslation;                                // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideAnimTargetTranslation;                               // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	struct FTimerHandle                                SlideAnimHandle;                                          // 0x0288(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    IconMaterial;                                             // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnImageClicked;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UMaterialInstanceDynamic*                    OriginalMaterial;                                         // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C");
		return ptr;
	}


	void PopulateFromGiftBoxData();
	void PopulateFromDifficultyIncreaseRewards();
	void PopulateFromMissionAlertRewards();
	void Play_Show_Animation_Sound();
	void Play_Hide_Animation_Sound();
	void PlayShowAnimation();
	struct FEventReply On_ImageIcon_MouseButtonDown_0_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void RandomizeDesignView();
	void PopulateFromRandomLootLevel(class UTexture2D** Texture);
	void PopulateFromCollectionBookRewards();
	void PopulateFromExpedition();
	void PopulateFromNewQuest();
	void PopulateFromQuestRewards();
	void PopulateFromMissionRewards();
	void GetScale(float* Scale);
	void SetScale(float Scale);
	void PopulateFromLootLevel(int LootLevel, class UTexture2D** Texture);
	void PlaySlideAnimation(float TargetTranslation);
	void TickSlideAnimation();
	void HandleSlideAnimationFinished();
	void HandleShowAnimationFinished();
	void HandleHideAnimationFinished();
	void PopulateFromReward(class UFortRewardNotificationData* InRewardItem);
	void Cleanup();
	void PlayHideAnimation();
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void whiteFadeOut(float Percent);
	void ExecuteUbergraph_RewardsIcon(int EntryPoint);
	void OnImageClicked__DelegateSignature();
	void OnMaterializeAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnDisperseAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnSlideAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
