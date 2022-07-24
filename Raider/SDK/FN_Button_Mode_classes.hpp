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

// WidgetBlueprintGeneratedClass Button_Mode.Button_Mode_C
// 0x0008 (0x03D8 - 0x03D0)
class UButton_Mode_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Mode.Button_Mode_C");
		return ptr;
	}


	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void OnBuildModeChanged_Event_1(bool bEntering);
	void Construct();
	void ExecuteUbergraph_Button_Mode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
