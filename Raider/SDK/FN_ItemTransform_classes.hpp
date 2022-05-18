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

// WidgetBlueprintGeneratedClass ItemTransform.ItemTransform_C
// 0x0090 (0x0450 - 0x03C0)
class UItemTransform_C : public UFortItemTransform
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class UItemTransformKeyScreen_C*                   KeyScreen;                                                // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1_2;                                             // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UItemTransformSlotScreen_C*                  SlotScreen;                                               // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       TransformScreenSwitcher;                                  // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackInputAction;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SelectKeyInputAction;                                     // 0x03F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         TransformInputAction;                                     // 0x0408(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SelectItemInputAction;                                    // 0x0418(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         InspectItemInputAction;                                   // 0x0428(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsItemPickerOpen;                                         // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         ClosePickerInputAction;                                   // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemTransform.ItemTransform_C");
		return ptr;
	}


	void SetAndLogSelectedKey(class UFortItem* SelectedItem);
	void Handle_SubScreen_Activated();
	void HandleClosePicker(bool* Passthrough);
	void OnItemPickerOpened();
	void OnItemPickerClosed();
	void UpdateTransformAction(bool TransformActive);
	void Handle_Slot_Screen_Activated();
	void Handle_Key_Screen_Activated();
	void DisableTransformAction();
	void HideTransformAction();
	void ShowTransformAction();
	void UpdateSelectKeyAction();
	void DisableSelectKeyAction();
	void HideSelectKeyAction();
	void ShowSelectKeyAction();
	void HandleSelectKeyAction(bool* Passthrough);
	void HandleTransformAction(bool* Passthrough);
	void ResetItemTransform();
	void HandleTransformFailed(struct FText* ErrorMessage);
	void HandleTransformSucceeded(TArray<struct FFortItemInstanceQuantityPair>* RewardedItems, TArray<struct FFortItemInstanceQuantityPair>* SacrificedItems);
	void OpenResult(TArray<struct FFortItemInstanceQuantityPair>* RewardItems, TArray<struct FFortItemInstanceQuantityPair>* SacrificeItems);
	void HandleTransformConfirm();
	void HandleTransformCancel();
	void OpenConfirmation();
	void HandleSelect(bool* Passthrough);
	void HandleBack(bool* Passthrough);
	void SetupActionHandlers();
	void OpenSlotScreen();
	void OpenKeyScreen();
	void OpenItemTransform();
	void BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void OnActivated();
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature();
	void BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature(bool TransformActive);
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(class UFortItem* Key);
	void Construct();
	void OnRequestCloseItemPicker();
	void ExecuteUbergraph_ItemTransform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
