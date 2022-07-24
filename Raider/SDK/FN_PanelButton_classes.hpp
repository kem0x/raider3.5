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

// WidgetBlueprintGeneratedClass PanelButton.PanelButton_C
// 0x0048 (0x08D0 - 0x0888)
class UPanelButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (Transient, DuplicateTransient)
	class UNamedSlot*                                  ContentSlot;                                              // 0x0890(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      ControllerInputStyle;                                     // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MouseKeyboardStyle;                                       // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ButtonClickAction;                                        // 0x08A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  InputActionHorizontalAlignment;                           // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    InputActionVerticalAlignment;                             // 0x08B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08BA(0x0002) MISSED OFFSET
	struct FVector2D                                   InputActionRenderTranslation;                             // 0x08BC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               InputActionUseRimBrush;                                   // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	struct FVector2D                                   InputActionRimBrushSize;                                  // 0x08C8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PanelButton.PanelButton_C");
		return ptr;
	}


	void UpdateInputActionLayout();
	void UpdateStyle(bool bUsingGamepad);
	void InitializeButton();
	void UpdateTextAndStyle();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction);
	void OnActionProgress(float* HeldPercent);
	void OnActionComplete();
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_PanelButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
