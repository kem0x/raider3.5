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

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone
// (Public, BlueprintCallable, BlueprintEvent)

void UPopupCenterMessageModalPanel_C::LeaveZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone");

	UPopupCenterMessageModalPanel_C_LeaveZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimerText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopTimer                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPopupCenterMessageModalPanel_C::UpdateMatchTimerText(bool* StopTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimerText");

	UPopupCenterMessageModalPanel_C_UpdateMatchTimerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StopTimer != nullptr)
		*StopTimer = params.StopTimer;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECenterPopupMessageStateEnum   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupCenterMessageModalPanel_C::UpdateState(ECenterPopupMessageStateEnum NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState");

	UPopupCenterMessageModalPanel_C_UpdateState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimer
// (BlueprintCallable, BlueprintEvent)

void UPopupCenterMessageModalPanel_C::UpdateMatchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimer");

	UPopupCenterMessageModalPanel_C_UpdateMatchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.StartMatchTimer
// (BlueprintCallable, BlueprintEvent)

void UPopupCenterMessageModalPanel_C::StartMatchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.StartMatchTimer");

	UPopupCenterMessageModalPanel_C_StartMatchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPopupCenterMessageModalPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.OnActivated");

	UPopupCenterMessageModalPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.ExecuteUbergraph_PopupCenterMessageModalPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupCenterMessageModalPanel_C::ExecuteUbergraph_PopupCenterMessageModalPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.ExecuteUbergraph_PopupCenterMessageModalPanel");

	UPopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
