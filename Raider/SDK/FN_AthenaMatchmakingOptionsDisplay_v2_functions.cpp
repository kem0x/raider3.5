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

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetScrollWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetScrollWidget");

	UAthenaMatchmakingOptionsDisplay_v2_C_SetScrollWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnCustomMatchmaking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnCustomMatchmaking(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnCustomMatchmaking");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnCustomMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileOutroAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::TriggerMatchmakingPageTileOutroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileOutroAnim");

	UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileOutroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileIntroAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::TriggerMatchmakingPageTileIntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileIntroAnim");

	UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileIntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Touch To Close
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaMatchmakingOptionsDisplay_v2_C::Touch_To_Close(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Touch To Close");

	UAthenaMatchmakingOptionsDisplay_v2_C_Touch_To_Close_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::Handle_InputAction_Cancel(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel");

	UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetupInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput");

	UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct");

	UAthenaMatchmakingOptionsDisplay_v2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSquadFillText
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InCurrentSquadFill             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetSquadFillText(bool* InCurrentSquadFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSquadFillText");

	UAthenaMatchmakingOptionsDisplay_v2_C_SetSquadFillText_Params params;
	params.InCurrentSquadFill = InCurrentSquadFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateMatchmakingButtonsBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsPartyLeader                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMatchmaking                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaylistSupportsPartySize      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaylistIsDisabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanShowFill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::UpdateMatchmakingButtonsBP(bool* IsPartyLeader, bool* IsMatchmaking, bool* PlaylistSupportsPartySize, bool* PlaylistIsDisabled, bool* CanShowFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateMatchmakingButtonsBP");

	UAthenaMatchmakingOptionsDisplay_v2_C_UpdateMatchmakingButtonsBP_Params params;
	params.IsPartyLeader = IsPartyLeader;
	params.IsMatchmaking = IsMatchmaking;
	params.PlaylistSupportsPartySize = PlaylistSupportsPartySize;
	params.PlaylistIsDisabled = PlaylistIsDisabled;
	params.CanShowFill = CanShowFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelOutroFinshed
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnRightPanelOutroFinshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelOutroFinshed");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelOutroFinshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnBeginIntro");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelIntroFinshed
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnRightPanelIntroFinshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelIntroFinshed");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelIntroFinshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.RepresentedPlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena**    NewRepresentedPlaylist         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::RepresentedPlaylistChanged(class UFortPlaylistAthena** NewRepresentedPlaylist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.RepresentedPlaylistChanged");

	UAthenaMatchmakingOptionsDisplay_v2_C_RepresentedPlaylistChanged_Params params;
	params.NewRepresentedPlaylist = NewRepresentedPlaylist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnTileDoubleClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCommonButton**          ButtonClicked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnTileDoubleClicked(class UCommonButton** ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnTileDoubleClicked");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnTileDoubleClicked_Params params;
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Start Closing Matchmaking Options
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::Start_Closing_Matchmaking_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Start Closing Matchmaking Options");

	UAthenaMatchmakingOptionsDisplay_v2_C_Start_Closing_Matchmaking_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2");

	UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
