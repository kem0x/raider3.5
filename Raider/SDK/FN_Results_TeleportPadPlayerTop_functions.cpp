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

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayerTop_C::Play_Anim_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro");

	UResults_TeleportPadPlayerTop_C_Play_Anim_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetId                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortUIScoreReport*      ScoreReport                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreReportIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeleportPadPlayerTop_C::Initialize(const struct FUniqueNetIdRepl& UniqueNetId, class UFortUIScoreReport* ScoreReport, int ScoreReportIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize");

	UResults_TeleportPadPlayerTop_C_Initialize_Params params;
	params.UniqueNetId = UniqueNetId;
	params.ScoreReport = ScoreReport;
	params.ScoreReportIndex = ScoreReportIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayerTop_C::IntroName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName");

	UResults_TeleportPadPlayerTop_C_IntroName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeleportPadPlayerTop_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct");

	UResults_TeleportPadPlayerTop_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayerTop_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro");

	UResults_TeleportPadPlayerTop_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_TeleportPadPlayerTop_C::ExecuteUbergraph_Results_TeleportPadPlayerTop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop");

	UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
