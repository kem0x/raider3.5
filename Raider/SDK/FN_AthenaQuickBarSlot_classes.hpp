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

// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
// 0x0009 (0x0378 - 0x036F)
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x036F(0x0001) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C");
		return ptr;
	}


	void UpdateJetpackFuelGaugeVisiblity();
	void ShowJetpackFuelGauge();
	void HideJetpackFuelGauge();
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void OnRefreshItem();
	void ExecuteUbergraph_AthenaQuickBarSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
