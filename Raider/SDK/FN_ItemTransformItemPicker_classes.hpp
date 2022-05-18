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

// WidgetBlueprintGeneratedClass ItemTransformItemPicker.ItemTransformItemPicker_C
// 0x005C (0x0274 - 0x0218)
class UItemTransformItemPicker_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UHorizontalTabList_C*                        FilterTabList;                                            // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UItemTransformSlotItemPicker_C*              ItemTransformSlotItemPicker;                              // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMainModeItemDetailsHostPanel_C*             MainModeItemDetailsHostPanel;                             // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FFortItemTransformFilterTabLabelInfo> FilterTabs;                                               // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortItem*>                           SacrificeItems;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       CurrentTab;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentlySelectedSlot;                                    // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemTransformItemPicker.ItemTransformItemPicker_C");
		return ptr;
	}


	void Return_Item_to_Detail(class UFortItem* InItem, class UFortItem** OutItem);
	void OpenInspectionScreen(bool* PassThru);
	void CommitSelectedItem(bool* PassThru);
	void OpenPicker(int SelectedSlot, TArray<class UFortItem*>* SacrificeItems);
	void SetFilter(const struct FName& FilterName);
	void SetupFilterTabList();
	void HandleItemCommitted(class UFortItem* Item);
	void RemoveInvalidItems(TArray<class UFortAccountItem*>* UnrefinedItems, TArray<class UFortItem*>* CurrentSacrificeItems, TArray<class UFortAccountItem*>* RefinedItems);
	void HandleItemSelected(class UFortItem* Item);
	void SetupItemPicker();
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId);
	void ExecuteUbergraph_ItemTransformItemPicker(int EntryPoint);
	void OnItemSelected__DelegateSignature(class UFortItem* SelectedItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
