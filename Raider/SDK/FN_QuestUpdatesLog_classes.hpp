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

// WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C
// 0x008C (0x02CC - 0x0240)
class UQuestUpdatesLog_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                QuestUpdatesBox;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UFortQuestItem*>                      PinnedQuests;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortQuestItem*                              RequiredQuest;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       PinnedQuestSingularText;                                  // 0x0268(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PinnedQuestsPluralText;                                   // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDynamicQuestUpdateInfo>             QueuedDynamicQuestStatusUpdates;                          // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxDisplayedQuestUpdates;                                 // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	TArray<class UWidget*>                             QuestUpdateWidgets;                                       // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                TryDisplayNextUpdateTimerHandle;                          // 0x02C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxDisplayedQuestObjectives;                              // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C");
		return ptr;
	}


	void CanDisplayAnotherObjective(bool* Result);
	void GetTotalDisplayedObjectives(int* NumObjectives);
	void CreateAnnouncementUpdate(const struct FDynamicQuestUpdateInfo& UpdateInfo);
	void HandleQuestUpdateWidgetFinished(class UQuestUpdateEntry_C* UpdateWidget);
	void GetAvailableQuestUpdateWidget(const struct FDynamicQuestUpdateInfo& UpdateInfo, class UQuestUpdateEntry_C** AvailableWIdget);
	void TryDisplayDynamicQuestStatusUpdate();
	void CreateQuestUpdateWIdgets();
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate);
	void Construct();
	void ExecuteUbergraph_QuestUpdatesLog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
