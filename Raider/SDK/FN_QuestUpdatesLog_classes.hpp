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

// WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C
// 0x0010 (0x0288 - 0x0278)
class UQuestUpdatesLog_C : public UFortQuestUpdatesLog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                TryDisplayNextUpdateTimerHandle;                          // 0x0280(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C");
		return ptr;
	}


	void CreateAnnouncementUpdate(class UFortQuestObjectiveInfo** QuestItemToCheck);
	void ExecuteUbergraph_QuestUpdatesLog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
