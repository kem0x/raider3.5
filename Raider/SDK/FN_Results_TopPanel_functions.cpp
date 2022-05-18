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

// Function Results_TopPanel.Results_TopPanel_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCompletionResult          CompletionResult               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TopPanel_C::Initialize(EFortCompletionResult CompletionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.Initialize");

	UResults_TopPanel_C_Initialize_Params params;
	params.CompletionResult = CompletionResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_TopPanel_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_TopPanel_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_TopPanel_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.Intro Sequence");

	UResults_TopPanel_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TopPanel_C::ExecuteUbergraph_Results_TopPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel");

	UResults_TopPanel_C_ExecuteUbergraph_Results_TopPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.IntroComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_TopPanel_C::IntroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.IntroComplete__DelegateSignature");

	UResults_TopPanel_C_IntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
