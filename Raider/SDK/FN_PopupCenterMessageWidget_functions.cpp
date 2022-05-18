// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// ECenterPopupMessageStateEnum*  NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonActivatablePanel** ModalPopup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopupCenterMessageWidget_C::OnModalDisplayed(ECenterPopupMessageStateEnum* NewState, class UCommonActivatablePanel** ModalPopup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed");

	UPopupCenterMessageWidget_C_OnModalDisplayed_Params params;
	params.NewState = NewState;
	params.ModalPopup = ModalPopup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupCenterMessageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Construct");

	UPopupCenterMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.UpdateStateEvent
// (BlueprintCallable, BlueprintEvent)

void UPopupCenterMessageWidget_C::UpdateStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.UpdateStateEvent");

	UPopupCenterMessageWidget_C_UpdateStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupCenterMessageWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Destruct");

	UPopupCenterMessageWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupCenterMessageWidget_C::ExecuteUbergraph_PopupCenterMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget");

	UPopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
