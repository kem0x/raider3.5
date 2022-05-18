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

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeConvertScorePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeamTotalScore_C::InitializeConvertScorePlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeConvertScorePlayRate");

	UResults_TeamTotalScore_C_InitializeConvertScorePlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeCountScorePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeamTotalScore_C::InitializeCountScorePlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeCountScorePlayRate");

	UResults_TeamTotalScore_C_InitializeCountScorePlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToConvertScoreEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::SetSkippingToConvertScoreEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToConvertScoreEnd");

	UResults_TeamTotalScore_C_SetSkippingToConvertScoreEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToConvertScoreFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::SkipToConvertScoreFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToConvertScoreFinalState");

	UResults_TeamTotalScore_C_SkipToConvertScoreFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToCountScoreEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::SetSkippingToCountScoreEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToCountScoreEnd");

	UResults_TeamTotalScore_C_SetSkippingToCountScoreEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToCountScoreFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::SkipToCountScoreFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToCountScoreFinalState");

	UResults_TeamTotalScore_C_SkipToCountScoreFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      Score_Report                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeamTotalScore_C::Initialize(class UFortUIScoreReport* Score_Report)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Initialize");

	UResults_TeamTotalScore_C_Initialize_Params params;
	params.Score_Report = Score_Report;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Sequence");

	UResults_TeamTotalScore_C_Count_Score_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Intro Sequence");

	UResults_TeamTotalScore_C_Count_Score_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeamTotalScore_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.PreConstruct");

	UResults_TeamTotalScore_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Convert_Score_Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Intro Sequence");

	UResults_TeamTotalScore_C_Convert_Score_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Convert_Score_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Sequence");

	UResults_TeamTotalScore_C_Convert_Score_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Interpolation Finished
// (BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Interpolation_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Interpolation Finished");

	UResults_TeamTotalScore_C_Count_Score_Interpolation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Interpolation Finished
// (BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Convert_Score_Interpolation_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Interpolation Finished");

	UResults_TeamTotalScore_C_Convert_Score_Interpolation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Teleport Pad Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Teleport_Pad_Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Teleport Pad Intro Sequence");

	UResults_TeamTotalScore_C_Teleport_Pad_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HadCompleted                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeamTotalScore_C::BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature");

	UResults_TeamTotalScore_C_BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.HadCompleted = HadCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.ExecuteUbergraph_Results_TeamTotalScore
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeamTotalScore_C::ExecuteUbergraph_Results_TeamTotalScore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.ExecuteUbergraph_Results_TeamTotalScore");

	UResults_TeamTotalScore_C_ExecuteUbergraph_Results_TeamTotalScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Finished__DelegateSignature");

	UResults_TeamTotalScore_C_Count_Score_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
