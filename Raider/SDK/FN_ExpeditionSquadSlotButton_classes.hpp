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

// WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C
// 0x0041 (0x0949 - 0x0908)
class UExpeditionSquadSlotButton_C : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0908(0x0008) (Transient, DuplicateTransient)
	int                                                SquadSlotIndex;                                           // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSquadSlotSelected;                                      // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadSlotUpdated;                                       // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadSlotOpened;                                        // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EFortItemCardSize                                  SlottedItemCardSize;                                      // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C");
		return ptr;
	}


	void Get_Squad_Data(struct FName* OutSquadId, int* OutSquadSlotIndex, TArray<EFortItemType>* ItemTypes);
	void PreConstruct(bool* IsDesignTime);
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void BP_OnSelected();
	void BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void Construct();
	void Destruct();
	void Open_Squad_Slot(int SquadSlotIndex);
	void ExecuteUbergraph_ExpeditionSquadSlotButton(int EntryPoint);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item);
	void OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
