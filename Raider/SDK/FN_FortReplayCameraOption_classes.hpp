#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
// 0x0009 (0x0909 - 0x0900)
class UFortReplayCameraOption_C : public UIconTextButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (Transient, DuplicateTransient)
	ESpectatorCameraType                               CameraType;                                               // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C");
		return ptr;
	}


	void OnClicked();
	void Construct();
	void ExecuteUbergraph_FortReplayCameraOption(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
