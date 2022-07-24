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

// WidgetBlueprintGeneratedClass BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C
// 0x0039 (0x0331 - 0x02F8)
class UBP_ExpeditionSquadSlotsView_C : public UFortSquadSlotsView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (Transient, DuplicateTransient)
	class USquadSlotGroup_C*                           SubordinatesSquadSlotGroup;                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSquadSlotSelected;                                      // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bShowHeader;                                              // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectableButtons;                                       // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x031A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSquadSlotOpened;                                        // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EFortItemCardSize                                  Slot_Size;                                                // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C");
		return ptr;
	}


	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int* SquadSlotIndex, struct FHomebaseSquadSlot* SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
	void HandleSquadSlotSelected(int SquadSlotIndex);
	void PreConstruct(bool* IsDesignTime);
	void HandleSquadSlotOpened();
	void OpenSquadSlotEvent(int SquadSlotIndex);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int EntryPoint);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
