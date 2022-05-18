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

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.GetIsValidScoreBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsValidScoreBox               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreBox_C::GetIsValidScoreBox(bool* bIsValidScoreBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.GetIsValidScoreBox");

	UResults_PlayerScoreBox_C_GetIsValidScoreBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValidScoreBox != nullptr)
		*bIsValidScoreBox = params.bIsValidScoreBox;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsValidScoreBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsValidScoreBox               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreBox_C::SetIsValidScoreBox(bool bIsValidScoreBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsValidScoreBox");

	UResults_PlayerScoreBox_C_SetIsValidScoreBox_Params params;
	params.bIsValidScoreBox = bIsValidScoreBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_PlayerScoreBox_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetSkippingToEnd");

	UResults_PlayerScoreBox_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsBestScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBestScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreBox_C::SetIsBestScore(bool bIsBestScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsBestScore");

	UResults_PlayerScoreBox_C_SetIsBestScore_Params params;
	params.bIsBestScore = bIsBestScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreBox_C::Initialize(int Score, float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Initialize");

	UResults_PlayerScoreBox_C_Initialize_Params params;
	params.Score = Score;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.PreConstruct");

	UResults_PlayerScoreBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_PlayerScoreBox_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Intro Sequence");

	UResults_PlayerScoreBox_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_PlayerScoreBox_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_PlayerScoreBox_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Count Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_PlayerScoreBox_C::Count_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Count Sequence");

	UResults_PlayerScoreBox_C_Count_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Skipped Count Interpolation
// (BlueprintCallable, BlueprintEvent)

void UResults_PlayerScoreBox_C::Skipped_Count_Interpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Skipped Count Interpolation");

	UResults_PlayerScoreBox_C_Skipped_Count_Interpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HadCompleted                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreBox_C::BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature");

	UResults_PlayerScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.HadCompleted = HadCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.ExecuteUbergraph_Results_PlayerScoreBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreBox_C::ExecuteUbergraph_Results_PlayerScoreBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.ExecuteUbergraph_Results_PlayerScoreBox");

	UResults_PlayerScoreBox_C_ExecuteUbergraph_Results_PlayerScoreBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
