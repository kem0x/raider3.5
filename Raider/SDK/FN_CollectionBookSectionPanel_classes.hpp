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

// WidgetBlueprintGeneratedClass CollectionBookSectionPanel.CollectionBookSectionPanel_C
// 0x0080 (0x0530 - 0x04B0)
class UCollectionBookSectionPanel_C : public UFortCollectionBookSectionPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_3;                                                  // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMainModeItemDetailsHostPanel_C*             MainModeItemDetailsHostPanel;                             // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         SlotItemInputAction;                                      // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         InspectInputAction;                                       // 0x04E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemTitle;                                     // 0x04F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemMessage;                                   // 0x0508(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         BackInputActionName;                                      // 0x0520(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookSectionPanel.CollectionBookSectionPanel_C");
		return ptr;
	}


	void OnUnslotItemConfirm(class UFortItem* Item);
	void OnResearchItemConfirm(class UFortItem* ResearchItem, const struct FFortCollectionBookSlotData& SlotData);
	void OnInspectItem(class UFortItem* Item, bool AllowItemModifications, bool IsTemporaryItem);
	void OnSlotItemConfirm(class UFortItem* ItemToSlot);
	void ShowItemDetail(class UFortItem* SelectedItem);
	void Construct();
	void OnSectionChanged(class UFortCollectionBookSection** Section);
	void OnActivated();
	void Destruct();
	void ExecuteUbergraph_CollectionBookSectionPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
