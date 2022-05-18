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

// WidgetBlueprintGeneratedClass CollectionBookItemPicker.CollectionBookItemPicker_C
// 0x0060 (0x0300 - 0x02A0)
class UCollectionBookItemPicker_C : public UFortCollectionBookPicker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         BackInputActionName;                                      // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemTitle;                                     // 0x02B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemMessage;                                   // 0x02D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ConfirmInputActionName;                                   // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCollectionBookRecycleSlotResultsWidget_C*   RecycleSlotItemWidget;                                    // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookItemPicker.CollectionBookItemPicker_C");
		return ptr;
	}


	void Get_Type_Text(class UFortItem* Item, struct FText* Type);
	void HandleCommitAction(bool* Passthrough);
	void HandleItemSelected(class UObject* ItemSelected, bool IsSelected);
	void DialogResult_C897FB8741239C9DAE2430AD3D91A030(EFortDialogResult Result, const struct FName& ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void Construct();
	void ShowSlotItemConfirmation(class UFortItem* SelectedItem);
	void ExecuteUbergraph_CollectionBookItemPicker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
