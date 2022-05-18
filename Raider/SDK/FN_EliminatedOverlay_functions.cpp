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

// Function EliminatedOverlay.EliminatedOverlay_C.ViewTargetKillsChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Kills                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEliminatedOverlay_C::ViewTargetKillsChanged(int Kills)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.ViewTargetKillsChanged");

	UEliminatedOverlay_C_ViewTargetKillsChanged_Params params;
	params.Kills = Kills;

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
// class AFortPawn*               KillerPawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DidPlayerKillThemselves        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   KillerName                     (Parm, OutParm)

void UEliminatedOverlay_C::ProcessDeathReport(struct FFortPlayerDeathReport* FortPlayerDeathReport, class AFortPawn** KillerPawn, bool* DidPlayerKillThemselves, struct FText* KillerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliminatedOverlay.EliminatedOverlay_C.ProcessDeathReport");

	UEliminatedOverlay_C_ProcessDeathReport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPlayerDeathReport != nullptr)
		*FortPlayerDeathReport = params.FortPlayerDeathReport;
	if (KillerPawn != nullptr)
		*KillerPawn = params.KillerPawn;
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
