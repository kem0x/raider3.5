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

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetInviteButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::SetInviteButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetInviteButtonVisibility");

	UResults_TeleportPadPlayer_C_SetInviteButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.On_InvitePopupMenuAnchor_GetMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UResults_TeleportPadPlayer_C::On_InvitePopupMenuAnchor_GetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.On_InvitePopupMenuAnchor_GetMenuContent");

	UResults_TeleportPadPlayer_C_On_InvitePopupMenuAnchor_GetMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsLocalPlayersPad             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_TeleportPadPlayer_C::IsLocalPlayersPad(bool* bIsLocalPlayersPad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad");

	UResults_TeleportPadPlayer_C_IsLocalPlayersPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLocalPlayersPad != nullptr)
		*bIsLocalPlayersPad = params.bIsLocalPlayersPad;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus");

	UResults_TeleportPadPlayer_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::ThumbsUpPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer");

	UResults_TeleportPadPlayer_C_ThumbsUpPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_TeleportPadPlayer_C::IsValidPad(bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad");

	UResults_TeleportPadPlayer_C_IsValidPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::SetIsValidPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad");

	UResults_TeleportPadPlayer_C_SetIsValidPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UFortUIScoreReport*      InScoreReport                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FUniqueNetIdRepl        InConsoleUniqueId              (BlueprintVisible, BlueprintReadOnly, Parm)

void UResults_TeleportPadPlayer_C::Initialize(const struct FUniqueNetIdRepl& InConsoleUniqueId, struct FUniqueNetIdRepl* InUniqueId, class UFortUIScoreReport** InScoreReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize");

	UResults_TeleportPadPlayer_C_Initialize_Params params;
	params.InConsoleUniqueId = InConsoleUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InUniqueId != nullptr)
		*InUniqueId = params.InUniqueId;
	if (InScoreReport != nullptr)
		*InScoreReport = params.InScoreReport;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro");

	UResults_TeleportPadPlayer_C_Team_Score_Screen_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro");

	UResults_TeleportPadPlayer_C_Team_Score_Screen_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Teleport_Pad_Screen_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro");

	UResults_TeleportPadPlayer_C_Teleport_Pad_Screen_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro");

	UResults_TeleportPadPlayer_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_TeleportPadPlayer_C::BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Construct");

	UResults_TeleportPadPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeleportPadPlayer_C::ExecuteUbergraph_Results_TeleportPadPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer");

	UResults_TeleportPadPlayer_C_ExecuteUbergraph_Results_TeleportPadPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C* TeleportPadPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_TeleportPadPlayer_C::OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnTeleportPadIntroFinished__DelegateSignature_Params params;
	params.TeleportPadPlayer = TeleportPadPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 TargetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UResults_TeleportPadPlayer_C::OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 TargetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UResults_TeleportPadPlayer_C::OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
