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

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetNextLootLevelPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LootPoints                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextLootLevelPoints            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLootBar_C::GetNextLootLevelPoints(int LootPoints, int* NextLootLevelPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetNextLootLevelPoints");

	UResults_BadgeLootBar_C_GetNextLootLevelPoints_Params params;
	params.LootPoints = LootPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextLootLevelPoints != nullptr)
		*NextLootLevelPoints = params.NextLootLevelPoints;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.SkipToFinalState");

	UResults_BadgeLootBar_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetSkippingToEnd");

	UResults_BadgeLootBar_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_BadgeLootBar_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.PlayAnimationCommon");

	UResults_BadgeLootBar_C_PlayAnimationCommon_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetBadgePoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UResults_Badge_C*        Badge                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Points                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLootBar_C::GetBadgePoints(class UResults_Badge_C* Badge, int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetBadgePoints");

	UResults_BadgeLootBar_C_GetBadgePoints_Params params;
	params.Badge = Badge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetLootLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLootBar_C::SetLootLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetLootLevel");

	UResults_BadgeLootBar_C_SetLootLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLootBar_C::Initialize(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Initialize");

	UResults_BadgeLootBar_C_Initialize_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.UpdateAddBadgePoints
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::UpdateAddBadgePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.UpdateAddBadgePoints");

	UResults_BadgeLootBar_C_UpdateAddBadgePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLootBar_C::BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLootBar_C_BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Intro Sequence");

	UResults_BadgeLootBar_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLootBar_C::BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLootBar_C_BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Add Badge Points Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_Badge_C*        Badge                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_BadgeLootBar_C::Add_Badge_Points_Sequence(class UResults_Badge_C* Badge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Add Badge Points Sequence");

	UResults_BadgeLootBar_C_Add_Badge_Points_Sequence_Params params;
	params.Badge = Badge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLootBar_C::BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLootBar_C_BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.On Leveled Up
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::On_Leveled_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.On Leveled Up");

	UResults_BadgeLootBar_C_On_Leveled_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_BadgeLootBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Construct");

	UResults_BadgeLootBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.ExecuteUbergraph_Results_BadgeLootBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLootBar_C::ExecuteUbergraph_Results_BadgeLootBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.ExecuteUbergraph_Results_BadgeLootBar");

	UResults_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.LeveledUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::LeveledUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.LeveledUp__DelegateSignature");

	UResults_BadgeLootBar_C_LeveledUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.FinishedAddingBadgePoints__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::FinishedAddingBadgePoints__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.FinishedAddingBadgePoints__DelegateSignature");

	UResults_BadgeLootBar_C_FinishedAddingBadgePoints__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.IntroComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLootBar_C::IntroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.IntroComplete__DelegateSignature");

	UResults_BadgeLootBar_C_IntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
