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

// WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C
// 0x0010 (0x0268 - 0x0258)
class UTabGameOptionsMain_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            TooltipDisplayReference;                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C");
		return ptr;
	}


	void Construct();
	void UpdatePossibleLanguages();
	void CenterOnTab();
	void UpdateOptionsTab();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Setting_Value_Changed(float Slider_Value);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void ExecuteUbergraph_TabGameOptionsMain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
