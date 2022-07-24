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

// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
// 0x0009 (0x0989 - 0x0980)
class UFortReplayCameraOption_C : public UIconTextButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	ESpectatorCameraType                               CameraType;                                               // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C");
		return ptr;
	}


	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_FortReplayCameraOption(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
