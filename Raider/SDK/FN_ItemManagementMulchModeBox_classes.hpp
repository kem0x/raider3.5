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

// WidgetBlueprintGeneratedClass ItemManagementMulchModeBox.ItemManagementMulchModeBox_C
// 0x0010 (0x0420 - 0x0410)
class UItemManagementMulchModeBox_C : public UFortItemMulchModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class UItemWindow_C*                               Recycle_Info_Window;                                      // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemManagementMulchModeBox.ItemManagementMulchModeBox_C");
		return ptr;
	}


	void HandleLeaveInventory(bool* Passthrough);
	void HandleCursorModeChanging(bool IsEnabled);
	void HandleMulchListChanged();
	void HandleInfo(bool* Pass_Through);
	void HandleBack(bool* Passthrough);
	void HandleDifferentItemToDetailSetBP();
	void Construct();
	void OnActivated();
	void Destruct();
	void ExecuteUbergraph_ItemManagementMulchModeBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
