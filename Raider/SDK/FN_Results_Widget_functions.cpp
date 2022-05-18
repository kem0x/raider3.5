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

// Function Results_Widget.Results_Widget_C.UseVideos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bVideos                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_Widget_C::UseVideos(bool* bVideos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.UseVideos");

	UResults_Widget_C_UseVideos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bVideos != nullptr)
		*bVideos = params.bVideos;
}


// Function Results_Widget.Results_Widget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Focus");

	UResults_Widget_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.InitializeInput");

	UResults_Widget_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.OnInputSkip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommited                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_Widget_C::OnInputSkip(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.OnInputSkip");

	UResults_Widget_C_OnInputSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function Results_Widget.Results_Widget_C.LogAnalytics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ScreenName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSkipped                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Widget_C::LogAnalytics(const struct FString& ScreenName, bool bSkipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.LogAnalytics");

	UResults_Widget_C_LogAnalytics_Params params;
	params.ScreenName = ScreenName;
	params.bSkipped = bSkipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.PlayMissionResultSound
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::PlayMissionResultSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.PlayMissionResultSound");

	UResults_Widget_C_PlayMissionResultSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Toggle Top Level Tab Controls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Widget_C::Toggle_Top_Level_Tab_Controls(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Toggle Top Level Tab Controls");

	UResults_Widget_C_Toggle_Top_Level_Tab_Controls_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.SpawnResultsMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::SpawnResultsMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.SpawnResultsMusic");

	UResults_Widget_C_SpawnResultsMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Toggle Chat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Widget_C::Toggle_Chat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Toggle Chat");

	UResults_Widget_C_Toggle_Chat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Initialize Video
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Initialize_Video()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Initialize Video");

	UResults_Widget_C_Initialize_Video_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Initialize");

	UResults_Widget_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature");

	UResults_Widget_C_BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Teleport Scene Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Teleport_Scene_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Teleport Scene Sequence");

	UResults_Widget_C_Teleport_Scene_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 TargetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature");

	UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 TargetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature");

	UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature");

	UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature");

	UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Badge Loot Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Badge_Loot_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Badge Loot Sequence");

	UResults_Widget_C_Badge_Loot_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature");

	UResults_Widget_C_BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Commander XP Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Commander_XP_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Commander XP Sequence");

	UResults_Widget_C_Commander_XP_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature");

	UResults_Widget_C_BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_Widget_C_BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_Widget_C_BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature");

	UResults_Widget_C_BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Team Score Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Team_Score_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Team Score Sequence");

	UResults_Widget_C_Team_Score_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature");

	UResults_Widget_C_BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.PreResults Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::PreResults_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.PreResults Sequence");

	UResults_Widget_C_PreResults_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_Widget_C_BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.VideoSequenceStart
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::VideoSequenceStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.VideoSequenceStart");

	UResults_Widget_C_VideoSequenceStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.OnVideoEndReached
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::OnVideoEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.OnVideoEndReached");

	UResults_Widget_C_OnVideoEndReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_Widget_C_BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.SkipVideo
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::SkipVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.SkipVideo");

	UResults_Widget_C_SkipVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.OnMediaOpened
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::OnMediaOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.OnMediaOpened");

	UResults_Widget_C_OnMediaOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Construct");

	UResults_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.HandleClientEvent_PlayerLeftEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResults_Widget_C::HandleClientEvent_PlayerLeftEvent(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.HandleClientEvent_PlayerLeftEvent");

	UResults_Widget_C_HandleClientEvent_PlayerLeftEvent_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Wait for Replication
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Wait_for_Replication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Wait for Replication");

	UResults_Widget_C_Wait_for_Replication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_Widget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.Destruct");

	UResults_Widget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UResults_Widget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.OnActivated");

	UResults_Widget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Widget.Results_Widget_C.ExecuteUbergraph_Results_Widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Widget_C::ExecuteUbergraph_Results_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Widget.Results_Widget_C.ExecuteUbergraph_Results_Widget");

	UResults_Widget_C_ExecuteUbergraph_Results_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
