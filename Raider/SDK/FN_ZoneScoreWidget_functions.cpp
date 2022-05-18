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

// Function ZoneScoreWidget.ZoneScoreWidget_C.BindEndOfDayHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::BindEndOfDayHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.BindEndOfDayHeaderText");

	UZoneScoreWidget_C_BindEndOfDayHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowTeamScoreContributions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::ShowTeamScoreContributions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.ShowTeamScoreContributions");

	UZoneScoreWidget_C_ShowTeamScoreContributions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowXPReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::ShowXPReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.ShowXPReward");

	UZoneScoreWidget_C_ShowXPReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateXPLERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LERP_Factor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneScoreWidget_C::UpdateXPLERP(float LERP_Factor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateXPLERP");

	UZoneScoreWidget_C_UpdateXPLERP_Params params;
	params.LERP_Factor = LERP_Factor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningXP
// (Public, BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::BeginTweeningXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningXP");

	UZoneScoreWidget_C_BeginTweeningXP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateScoresLERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LERP_Factor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneScoreWidget_C::UpdateScoresLERP(float LERP_Factor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateScoresLERP");

	UZoneScoreWidget_C_UpdateScoresLERP_Params params;
	params.LERP_Factor = LERP_Factor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningScores
// (Public, BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::BeginTweeningScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningScores");

	UZoneScoreWidget_C_BeginTweeningScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.StartEndOfDayRecapAfterAnimation
// (BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::StartEndOfDayRecapAfterAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.StartEndOfDayRecapAfterAnimation");

	UZoneScoreWidget_C_StartEndOfDayRecapAfterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnXPTweenEndEvent
// (BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::OnXPTweenEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.OnXPTweenEndEvent");

	UZoneScoreWidget_C_OnXPTweenEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnScoreTweenEndEvent
// (BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::OnScoreTweenEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.OnScoreTweenEndEvent");

	UZoneScoreWidget_C_OnScoreTweenEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneScoreWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.Tick");

	UZoneScoreWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UZoneScoreWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.Construct");

	UZoneScoreWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEndOfDayRecap          EndOfDayRecap                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UZoneScoreWidget_C::OnEndOfDayRecap(const struct FEndOfDayRecap& EndOfDayRecap)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecap");

	UZoneScoreWidget_C_OnEndOfDayRecap_Params params;
	params.EndOfDayRecap = EndOfDayRecap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ExecuteUbergraph_ZoneScoreWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneScoreWidget_C::ExecuteUbergraph_ZoneScoreWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.ExecuteUbergraph_ZoneScoreWidget");

	UZoneScoreWidget_C_ExecuteUbergraph_ZoneScoreWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecapEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UZoneScoreWidget_C::OnEndOfDayRecapEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecapEnded__DelegateSignature");

	UZoneScoreWidget_C_OnEndOfDayRecapEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
