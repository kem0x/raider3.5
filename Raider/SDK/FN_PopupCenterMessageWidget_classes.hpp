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

// WidgetBlueprintGeneratedClass PopupCenterMessageWidget.PopupCenterMessageWidget_C
// 0x0018 (0x0268 - 0x0250)
class UPopupCenterMessageWidget_C : public UFortHUDCenterPopupMessageWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UPopupCenterMessageModalPanel_C*             CenterPopupModal;                                         // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                UpdateStateTimer;                                         // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PopupCenterMessageWidget.PopupCenterMessageWidget_C");
		return ptr;
	}


	void OnModalDisplayed(ECenterPopupMessageStateEnum* NewState, class UCommonActivatablePanel** ModalPopup);
	void Construct();
	void UpdateStateEvent();
	void Destruct();
	void ExecuteUbergraph_PopupCenterMessageWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
