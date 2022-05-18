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

// WidgetBlueprintGeneratedClass Announcement_ZoneModifiers.Announcement_ZoneModifiers_C
// 0x0018 (0x0238 - 0x0220)
class UAnnouncement_ZoneModifiers_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UMissionDetailsModifierList_C*               MissionDetailsModifierList;                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AFortClientAnnouncement_ZoneModifiers*       ZoneModifiersAnnouncement;                                // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_ZoneModifiers.Announcement_ZoneModifiers_C");
		return ptr;
	}


	void UpdateWidgetData(class AFortClientAnnouncement** Announcement);
	void OnDisplayTimerFinished();
	void OnConversationDelayFinished();
	void WidgetCachingHack();
	void ExecuteUbergraph_Announcement_ZoneModifiers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
