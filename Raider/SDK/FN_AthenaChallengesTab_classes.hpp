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

// WidgetBlueprintGeneratedClass AthenaChallengesTab.AthenaChallengesTab_C
// 0x0039 (0x03C9 - 0x0390)
class UAthenaChallengesTab_C : public UAthenaChallengeBundleScheduleScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UCommonTreeView*                             ChallangeTreeView;                                        // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             OutOfSeasonSwitcher;                                      // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UFortChallengeBundleScheduleDefinition*> UnlockableBundles;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortChallengeBundleScheduleItem*>    ActiveBundles;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DoInitialSelection;                                       // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaChallengesTab.AthenaChallengesTab_C");
		return ptr;
	}


	void SelectFirstBundle();
	TArray<class UObject*> TreeViewGetChildrenForCategory(class UObject* Item);
	void SetupViewedItemData(class UFortItem* Item);
	void UpdateChallengeViews();
	void HandleChallengesChanged();
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void OnChallengesChanged();
	void ExecuteUbergraph_AthenaChallengesTab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
