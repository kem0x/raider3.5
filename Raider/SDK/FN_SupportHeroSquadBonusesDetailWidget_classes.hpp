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

// WidgetBlueprintGeneratedClass SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C
// 0x0019 (0x0299 - 0x0280)
class USupportHeroSquadBonusesDetailWidget_C : public UFortSquadSlotItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (Transient, DuplicateTransient)
	class UFortHeroSupportPerkWidget_C*                SupportPerkWidget;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortHeroSupportPerkWidget_C*                TacticalPerkWidget;                                       // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               AlwaysDisplayDescriptions;                                // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C");
		return ptr;
	}


	void HandleSquadSlotChanged(const struct FName& SquadName, int SlotIndex);
	void SetState(EFortSupportPerkWidgetState InState);
	void UpdatePerkWidgets();
	void UpdateVisibility();
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentSquadSlotSetBP();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
