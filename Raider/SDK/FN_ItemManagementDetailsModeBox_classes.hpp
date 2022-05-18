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

// WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C
// 0x0028 (0x0428 - 0x0400)
class UItemManagementDetailsModeBox_C : public UFortItemDetailsModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class UHorizontalTabList_C*                        DetailPanelTabList;                                       // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    ItemSelected;                                             // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                NoSelectionDetailsBox;                                    // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDateTime                                   LastDesiredReadOnlyModeWIFE;                              // 0x0420(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C");
		return ptr;
	}


	void GetStatsTabVisibility(ESlateVisibility* StatsTabVisbility);
	void HandleOpenCustomFilter(bool* Passthrough);
	void RegisterOpenCustomFilter();
	void RefreshDestroyAction();
	void UpdateReadOnlyWIFE();
	void PreferReadOnlyWIFE(bool* ReadOnly);
	void HandleMore(bool* Pass_Through);
	void RegisterMore();
	void HandleDestroy(bool* Passthrough);
	void HandleWithdrawAll(bool* Passthrough);
	void RefreshSwitchPanelAction();
	void HandleSwitchPanel(bool* Passthrough);
	void UnbindEvents();
	void RefreshTransferActions();
	void HandleTransfer(bool* Passthrough);
	void RegisterTransferActions();
	void RegisterInspectUpgrade();
	void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray<int>* ChangedSlots);
	void RegisterLeaveInventory();
	void RefreshMulchAction();
	void HandleCraftAndSlot(bool* Passthrough);
	void RegisterCraftAndSlot();
	void RefreshCraftActions();
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved);
	void RegisterInventoryInspect();
	void SetTabStyling(class UObject* Object);
	void SetItemVisualization();
	void RefreshConsumeAction();
	void SetupDetailPanels();
	void HandleEquip(bool* Passthrough);
	void RegisterEquip();
	void HandleTrack(bool* Passthrough);
	void RegisterTrack();
	void RegisterCompare();
	void RegisterConsumeItem();
	void RegisterSort(bool InGame);
	void RegisterBack();
	void RegisterInspect();
	void RegisterRetire();
	void RegisterMulch();
	void RegisterCraft();
	void RegisterDropOrDestroy();
	void HandleDrop(bool* Passthrough);
	void ShowSelection();
	void HandleCraft(bool* Passthrough);
	void HandleConsumeItem(bool* Passthrough);
	void TrySetupInputHandling();
	void HandleSort(bool* Passthrough);
	void HandleMulch(bool* Passthrough);
	void HandleCompare(bool* Passthrough);
	void HandleInspect(bool* Passthrough);
	void HandleBack(bool* Passthrough);
	void DialogResult_475B18A9452A639A04116D83A8B1CC22(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_4190138B4388B0E2F8396BBD395808D5(EFortDialogResult Result, const struct FName& ResultName);
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void HandleDifferentItemToDetailSetBP();
	void OnActivated();
	void BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void HandleConsumeItemProgressChangedBP();
	void BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void OnDeactivated();
	void Construct();
	void OnInputModeChanged(bool* bUsingGamepad);
	void OnDestroyItem(class UFortItem* Item);
	void HandleCraftItemFailed(EFortCraftFailCause FailureCause);
	void ExecuteUbergraph_ItemManagementDetailsModeBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
