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

// WidgetBlueprintGeneratedClass AthenaAerialFeedback.AthenaAerialFeedback_C
// 0x0008 (0x0250 - 0x0248)
class UAthenaAerialFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaAerialFeedback.AthenaAerialFeedback_C");
		return ptr;
	}


	void Update();
	void OnLocalPlayerBeginSkydiving_Bind();
	void GamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
	void OnKeybindsChanged_Bind();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_AthenaAerialFeedback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
