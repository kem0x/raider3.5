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

// WidgetBlueprintGeneratedClass MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C
// 0x0010 (0x0250 - 0x0240)
class UMiniCraftingIngredientListEntry_C : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UItemCount_C*                                ItemCountWidget;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C");
		return ptr;
	}


	class UWidget* Get_ItemCountWidget_ToolTipWidget();
	void RefreshBeingPreviewed();
	void Refresh();
	void HandleDifferentItemOrQuantitySetBP(bool* IsBeingReset);
	void PreviewStarted();
	void PreviewEnded();
	void ExecuteUbergraph_MiniCraftingIngredientListEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
