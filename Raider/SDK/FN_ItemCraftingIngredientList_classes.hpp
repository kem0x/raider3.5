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

// WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C
// 0x0019 (0x02A9 - 0x0290)
class UItemCraftingIngredientList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                IngredientsList;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortItem*                                   ItemRepresented;                                          // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C");
		return ptr;
	}


	void HandleCraftItemFailed(EFortCraftFailCause FailCause);
	void GetIngredients(class UObject* Item, TArray<struct FFortItemQuantityPair>* ReturnIngredients);
	void SetItemToCompare(class UFortItem* ItemToCompare);
	void ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking);
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void RefreshInventoryTracking();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved);
	void Refresh();
	void SetItemToRepresent(class UFortItem* Item);
	void AddListEntry(class UFortItemQuantityListEntryBase** ListEntry);
	void ExecuteUbergraph_ItemCraftingIngredientList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
