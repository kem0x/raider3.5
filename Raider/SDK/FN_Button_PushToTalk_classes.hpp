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

// WidgetBlueprintGeneratedClass Button_PushToTalk.Button_PushToTalk_C
// 0x0008 (0x03D8 - 0x03D0)
class UButton_PushToTalk_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_PushToTalk.Button_PushToTalk_C");
		return ptr;
	}


	void Update_Visibility(EPTTState PTT_State);
	void OnClicked();
	void Construct();
	void OnHUDStateUpdate(struct FFortHUDState* NewState);
	void On_Can_PTT();
	void ExecuteUbergraph_Button_PushToTalk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
