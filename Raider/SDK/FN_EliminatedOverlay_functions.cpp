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

// Function EliminatedOverlay.EliminatedOverlay_C.GetMultiwinnerIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RequestedPosition              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ValidatedPosition              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEliminatedOverlay_C::GetMultiwinnerIndex(int RequestedPosition, int* ValidatedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.GetMultiwinnerIndex");

	UEliminatedOverlay_C_GetMultiwinnerIndex_Params params;
	params.RequestedPosition = RequestedPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidatedPosition != nullptr)
		*ValidatedPosition = params.ValidatedPosition;
}


// Function EliminatedOverlay.EliminatedOverlay_C.UpdateMultiwinner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::UpdateMultiwinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.UpdateMultiwinner");

	UEliminatedOverlay_C_UpdateMultiwinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.UpdatePlayerLost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::UpdatePlayerLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.UpdatePlayerLost");

	UEliminatedOverlay_C_UpdatePlayerLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.OnPlayerLost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndOfMatchReason              LostReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEliminatedOverlay_C::OnPlayerLost(EEndOfMatchReason LostReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.OnPlayerLost");

	UEliminatedOverlay_C_OnPlayerLost_Params params;
	params.LostReason = LostReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.Winning Score Determined
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEliminatedOverlay_C::Winning_Score_Determined(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.Winning Score Determined");

	UEliminatedOverlay_C_Winning_Score_Determined_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.StreamingLoadingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLoading                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEliminatedOverlay_C::StreamingLoadingChanged(bool bLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.StreamingLoadingChanged");

	UEliminatedOverlay_C_StreamingLoadingChanged_Params params;
	params.bLoading = bLoading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.SetBannerForKiller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  FortPlayerDeathReport          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEliminatedOverlay_C::SetBannerForKiller(struct FFortPlayerDeathReport* FortPlayerDeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.SetBannerForKiller");

	UEliminatedOverlay_C_SetBannerForKiller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPlayerDeathReport != nullptr)
		*FortPlayerDeathReport = params.FortPlayerDeathReport;
}


// Function EliminatedOverlay.EliminatedOverlay_C.ProcessDeathReport
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  FortPlayerDeathReport          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           DidPlayerKillThemselves        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   KillerName                     (Parm, OutParm)

void UEliminatedOverlay_C::ProcessDeathReport(struct FFortPlayerDeathReport* FortPlayerDeathReport, bool* DidPlayerKillThemselves, struct FText* KillerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.ProcessDeathReport");

	UEliminatedOverlay_C_ProcessDeathReport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPlayerDeathReport != nullptr)
		*FortPlayerDeathReport = params.FortPlayerDeathReport;
	if (DidPlayerKillThemselves != nullptr)
		*DidPlayerKillThemselves = params.DidPlayerKillThemselves;
	if (KillerName != nullptr)
		*KillerName = params.KillerName;
}


// Function EliminatedOverlay.EliminatedOverlay_C.OnKillFeedUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::OnKillFeedUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.OnKillFeedUpdated");

	UEliminatedOverlay_C_OnKillFeedUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.UpdateYouPlacedBoxVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::UpdateYouPlacedBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.UpdateYouPlacedBoxVisibility");

	UEliminatedOverlay_C_UpdateYouPlacedBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.Winner Announced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UEliminatedOverlay_C::Winner_Announced(const struct FString& inString)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.Winner Announced");

	UEliminatedOverlay_C_Winner_Announced_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.HideExtraStuffForSpectating
// (Public, BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::HideExtraStuffForSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.HideExtraStuffForSpectating");

	UEliminatedOverlay_C_HideExtraStuffForSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.UpdateViewTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::UpdateViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.UpdateViewTarget");

	UEliminatedOverlay_C_UpdateViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.UpdatePlace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::UpdatePlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.UpdatePlace");

	UEliminatedOverlay_C_UpdatePlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.OnPawnDied
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEliminatedOverlay_C::OnPawnDied(struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.OnPawnDied");

	UEliminatedOverlay_C_OnPawnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


// Function EliminatedOverlay.EliminatedOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEliminatedOverlay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.Tick");

	UEliminatedOverlay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEliminatedOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.Construct");

	UEliminatedOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.EventUpdateMultiWinner
// (BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::EventUpdateMultiWinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.EventUpdateMultiWinner");

	UEliminatedOverlay_C_EventUpdateMultiWinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.WinnerSwapComplete
// (BlueprintCallable, BlueprintEvent)

void UEliminatedOverlay_C::WinnerSwapComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.WinnerSwapComplete");

	UEliminatedOverlay_C_WinnerSwapComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliminatedOverlay.EliminatedOverlay_C.ExecuteUbergraph_EliminatedOverlay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEliminatedOverlay_C::ExecuteUbergraph_EliminatedOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.ExecuteUbergraph_EliminatedOverlay");

	UEliminatedOverlay_C_ExecuteUbergraph_EliminatedOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
