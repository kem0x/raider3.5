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

// WidgetBlueprintGeneratedClass AthenaVehicleFeedback.AthenaVehicleFeedback_C
// 0x0018 (0x0260 - 0x0248)
class UAthenaVehicleFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	float                                              HideFeedbackTime;                                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	struct FTimerHandle                                HideFeedbackTimerHandle;                                  // 0x0258(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaVehicleFeedback.AthenaVehicleFeedback_C");
		return ptr;
	}


	void OnEnterVehicleDriver_Bind();
	void OnEnterVehiclePassenger_Bind();
	void HideFeedback();
	void ShowFeedback();
	void Construct();
	void OnKeybindsChanged_Bind();
	void OnExitVehicle_Bind();
	void ExecuteUbergraph_AthenaVehicleFeedback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
