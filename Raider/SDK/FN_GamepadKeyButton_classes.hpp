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

// WidgetBlueprintGeneratedClass GamepadKeyButton.GamepadKeyButton_C
// 0x00D1 (0x0959 - 0x0888)
class UGamepadKeyButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (Transient, DuplicateTransient)
	class UKeybindWidget_C*                            BoundKey;                                                 // 0x0890(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     ContentBorder;                                            // 0x0898(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonText;                                               // 0x08A0(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x08B8(0x0088) (Edit, BlueprintVisible)
	class UClass*                                      ControllerInputStyle;                                     // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ButtonClickAction;                                        // 0x0948(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadKeyButton.GamepadKeyButton_C");
		return ptr;
	}


	void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);
	void UpdateContentAlignment();
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool* IsDesignTime);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction);
	void BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_24_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_GamepadKeyButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
