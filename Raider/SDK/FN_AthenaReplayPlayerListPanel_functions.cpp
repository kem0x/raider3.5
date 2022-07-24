// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnShowPlayerProfileInput
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayPlayerListPanel_C::OnShowPlayerProfileInput(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnShowPlayerProfileInput");

	UAthenaReplayPlayerListPanel_C_OnShowPlayerProfileInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaReplayPlayerListPanel_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	UAthenaReplayPlayerListPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaReplayPlayerListPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnActivated");

	UAthenaReplayPlayerListPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayPlayerListPanel_C::OnInputModeChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnInputModeChanged");

	UAthenaReplayPlayerListPanel_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReplayPlayerListPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.Construct");

	UAthenaReplayPlayerListPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.ExecuteUbergraph_AthenaReplayPlayerListPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayPlayerListPanel_C::ExecuteUbergraph_AthenaReplayPlayerListPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.ExecuteUbergraph_AthenaReplayPlayerListPanel");

	UAthenaReplayPlayerListPanel_C_ExecuteUbergraph_AthenaReplayPlayerListPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
