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

// Function XpMatchProgression.XpMatchProgression_C.UpdateRewardForLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeasonLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpMatchProgression_C::UpdateRewardForLevel(int SeasonLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.UpdateRewardForLevel");

	UXpMatchProgression_C_UpdateRewardForLevel_Params params;
	params.SeasonLevel = SeasonLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.IsReadyForNextXpEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXpMatchProgression_C::IsReadyForNextXpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.IsReadyForNextXpEvent");

	UXpMatchProgression_C_IsReadyForNextXpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpMatchProgression.XpMatchProgression_C.TickRewardAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UXpMatchProgression_C::TickRewardAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.TickRewardAnimation");

	UXpMatchProgression_C_TickRewardAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAthenaLevelInfo        AthenaLevelInfo                (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpMatchProgression_C::SetPlayerState(class AFortPlayerControllerAthena* PlayerController, const struct FAthenaLevelInfo& AthenaLevelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.SetPlayerState");

	UXpMatchProgression_C_SetPlayerState_Params params;
	params.PlayerController = PlayerController;
	params.AthenaLevelInfo = AthenaLevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.Play Xp Rewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerMatchReport* Report                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpMatchProgression_C::Play_Xp_Rewards(class UAthenaPlayerMatchReport* Report)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.Play Xp Rewards");

	UXpMatchProgression_C_Play_Xp_Rewards_Params params;
	params.Report = Report;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpMatchProgression_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.Tick");

	UXpMatchProgression_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.Finished Playing Animation
// (BlueprintCallable, BlueprintEvent)

void UXpMatchProgression_C::Finished_Playing_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.Finished Playing Animation");

	UXpMatchProgression_C_Finished_Playing_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpMatchProgression_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.Destruct");

	UXpMatchProgression_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpMatchProgression_C::BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature");

	UXpMatchProgression_C_BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpMatchProgression.XpMatchProgression_C.ExecuteUbergraph_XpMatchProgression
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpMatchProgression_C::ExecuteUbergraph_XpMatchProgression(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpMatchProgression.XpMatchProgression_C.ExecuteUbergraph_XpMatchProgression");

	UXpMatchProgression_C_ExecuteUbergraph_XpMatchProgression_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
