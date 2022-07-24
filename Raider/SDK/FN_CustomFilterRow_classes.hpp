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

// WidgetBlueprintGeneratedClass CustomFilterRow.CustomFilterRow_C
// 0x0030 (0x08B8 - 0x0888)
class UCustomFilterRow_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                       CheckStateSwitcher;                                       // 0x0890(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            FilterText;                                               // 0x0898(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsChecked;                                               // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortInventoryCustomFilter                         Filter;                                                   // 0x08A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x08A2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCustomFilterToggled;                                    // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomFilterRow.CustomFilterRow_C");
		return ptr;
	}


	void SetCheckedState(bool IsChecked);
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void BP_OnClicked();
	void ExecuteUbergraph_CustomFilterRow(int EntryPoint);
	void OnCustomFilterToggled__DelegateSignature(EFortInventoryCustomFilter Filter, bool IsChecked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
