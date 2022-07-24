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

// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
// 0x0050 (0x0298 - 0x0248)
class UTabInputOptions_C : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               OverlayBorder;                                            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Currently_Selected_Input;                                 // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Currently_Primary;                                     // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    Enable_Overlay;                                           // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Disable_Overlay;                                          // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Using_Gamepad;                                            // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Gamepad_Changed;                                          // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C");
		return ptr;
	}


	void NewFunction_1();
	void Set_Input_Enabled(bool Enabled);
	void Overlay_Key_Pressed(const struct FKey& NewKey);
	void CenterOnTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleUsingGamepadChanged(ECommonInputType* bNewInputType);
	void UnbindClicked(int Number_in_List, class UOptionsMenuInput_C* Widget);
	void ClearAndConstructKeybindList();
	void Input_Clicked(int Number_in_List, bool Is_Primary_Button);
	void Construct();
	void UpdateOptionsTab();
	void ExecuteUbergraph_TabInputOptions(int EntryPoint);
	void Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input, const struct FText& Overlay_Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
