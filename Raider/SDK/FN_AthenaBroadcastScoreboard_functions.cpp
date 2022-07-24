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

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              MapWidgetLocation              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaBroadcastScoreboard_C::IsMapWidgetLocationVisible(struct FVector2D* MapWidgetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible");

	UAthenaBroadcastScoreboard_C_IsMapWidgetLocationVisible_Params params;
	params.MapWidgetLocation = MapWidgetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortButtons
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::ResetSortButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortButtons");

	UAthenaBroadcastScoreboard_C_ResetSortButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortArrows
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::ResetSortArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortArrows");

	UAthenaBroadcastScoreboard_C_ResetSortArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bResetFocus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::UpdateListUI(bool* bResetFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI");

	UAthenaBroadcastScoreboard_C_UpdateListUI_Params params;
	params.bResetFocus = bResetFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::ResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus");

	UAthenaBroadcastScoreboard_C_ResetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct");

	UAthenaBroadcastScoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::ExecuteUbergraph_AthenaBroadcastScoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard");

	UAthenaBroadcastScoreboard_C_ExecuteUbergraph_AthenaBroadcastScoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
