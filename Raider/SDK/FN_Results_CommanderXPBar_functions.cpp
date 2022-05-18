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

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.DebugSections
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::DebugSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.DebugSections");

	UResults_CommanderXPBar_C_DebugSections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.GetHoveredProgressBarSection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   XpSectionName                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXPBar_C::GetHoveredProgressBarSection(struct FName* XpSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.GetHoveredProgressBarSection");

	UResults_CommanderXPBar_C_GetHoveredProgressBarSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XpSectionName != nullptr)
		*XpSectionName = params.XpSectionName;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateProgressBarPercent
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ProgressBarPercent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXPBar_C::UpdateProgressBarPercent(const struct FName& ParameterName, float ProgressBarPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateProgressBarPercent");

	UResults_CommanderXPBar_C_UpdateProgressBarPercent_Params params;
	params.ParameterName = ParameterName;
	params.ProgressBarPercent = ProgressBarPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.RandomizeDesignView
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::RandomizeDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.RandomizeDesignView");

	UResults_CommanderXPBar_C_RandomizeDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.updateXpType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::updateXpType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.updateXpType");

	UResults_CommanderXPBar_C_updateXpType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.clearXpBar
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::clearXpBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.clearXpBar");

	UResults_CommanderXPBar_C_clearXpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_CommanderXPBar_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.PlayAnimationCommon");

	UResults_CommanderXPBar_C_PlayAnimationCommon_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.SkipToFinalState");

	UResults_CommanderXPBar_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.SetSkippingToEnd");

	UResults_CommanderXPBar_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXPBar_C::Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Initialize");

	UResults_CommanderXPBar_C_Initialize_Params params;
	params.InScoreReport = InScoreReport;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::UpdateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateCount");

	UResults_CommanderXPBar_C_UpdateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Intro Sequence");

	UResults_CommanderXPBar_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Count Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::Count_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Count Sequence");

	UResults_CommanderXPBar_C_Count_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXPBar_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXPBar_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.On Count Finished
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::On_Count_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.On Count Finished");

	UResults_CommanderXPBar_C_On_Count_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXPBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.PreConstruct");

	UResults_CommanderXPBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_CommanderXPBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Construct");

	UResults_CommanderXPBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.ExecuteUbergraph_Results_CommanderXPBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXPBar_C::ExecuteUbergraph_Results_CommanderXPBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.ExecuteUbergraph_Results_CommanderXPBar");

	UResults_CommanderXPBar_C_ExecuteUbergraph_Results_CommanderXPBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountIncrement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::CountIncrement__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountIncrement__DelegateSignature");

	UResults_CommanderXPBar_C_CountIncrement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.IntroFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::IntroFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.IntroFinished__DelegateSignature");

	UResults_CommanderXPBar_C_IntroFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.LeveledUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXPBar_C::LeveledUp__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.LeveledUp__DelegateSignature");

	UResults_CommanderXPBar_C_LeveledUp__DelegateSignature_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXPBar_C::CountFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountFinished__DelegateSignature");

	UResults_CommanderXPBar_C_CountFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
