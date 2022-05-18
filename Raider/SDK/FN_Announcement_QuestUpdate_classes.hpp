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

// WidgetBlueprintGeneratedClass Announcement_QuestUpdate.Announcement_QuestUpdate_C
// 0x0010 (0x0230 - 0x0220)
class UAnnouncement_QuestUpdate_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UQuestUpdateEntry_C*                         QuestUpdateEntry;                                         // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_QuestUpdate.Announcement_QuestUpdate_C");
		return ptr;
	}


	void UpdateWidgetData(class AFortClientAnnouncement** Announcement);
	void AllUpdatesFinished(class UQuestUpdateEntry_C* UpdateWidget);
	void ExecuteUbergraph_Announcement_QuestUpdate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
