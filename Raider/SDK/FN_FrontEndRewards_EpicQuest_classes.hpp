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

// WidgetBlueprintGeneratedClass FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C
// 0x0028 (0x0268 - 0x0240)
class UFrontEndRewards_EpicQuest_C : public UFortRewardNewQuestWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UQuestInfo_Widget_C*                         QuestInfo_Widget;                                         // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortQuestItem*                              Quest;                                                    // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ReplayAction;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C");
		return ptr;
	}


	void MarkQuestAsSeen();
	void HandleTransitionInComplete();
	void HandleContinueAction(bool* Committed);
	void PopulateFromQuest(class UFortQuestItem* InQuest);
	void TransitionInBegin();
	void TransitionOutBegin();
	void Construct();
	void OnPrimaryAction();
	void ExecuteUbergraph_FrontEndRewards_EpicQuest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
