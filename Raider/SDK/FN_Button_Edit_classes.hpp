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

// WidgetBlueprintGeneratedClass Button_Edit.Button_Edit_C
// 0x0010 (0x03E0 - 0x03D0)
class UButton_Edit_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UPaperSprite*                                Confirm_Icon;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Edit.Button_Edit_C");
		return ptr;
	}


	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void OnHUDStateUpdate(struct FFortHUDState* NewState);
	void ExecuteUbergraph_Button_Edit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
