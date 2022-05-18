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

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UResults_PlayerScoreRow_C::InitializeHomeBasePower(const struct FUniqueNetIdRepl& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower");

	UResults_PlayerScoreRow_C_InitializeHomeBasePower_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      ScoreReport                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreReportReferece            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreRow_C::InitializePlayerName(class UFortUIScoreReport* ScoreReport, int ScoreReportReferece)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName");

	UResults_PlayerScoreRow_C_InitializePlayerName_Params params;
	params.ScoreReport = ScoreReport;
	params.ScoreReportReferece = ScoreReportReferece;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InScoreReportIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreRow_C::InitializeScores(class UFortUIScoreReport* InScoreReport, int InScoreReportIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores");

	UResults_PlayerScoreRow_C_InitializeScores_Params params;
	params.InScoreReport = InScoreReport;
	params.InScoreReportIndex = InScoreReportIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_PlayerScoreRow_C::InitializeBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground");

	UResults_PlayerScoreRow_C_InitializeBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      ScoreReport                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreReportIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreRow_C::Initialize(class UFortUIScoreReport* ScoreReport, int ScoreReportIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize");

	UResults_PlayerScoreRow_C_Initialize_Params params;
	params.ScoreReport = ScoreReport;
	params.ScoreReportIndex = ScoreReportIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDesignTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreRow_C::Manual_Pre_Construct(bool bIsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct");

	UResults_PlayerScoreRow_C_Manual_Pre_Construct_Params params;
	params.bIsDesignTime = bIsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct");

	UResults_PlayerScoreRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_PlayerScoreRow_C::ExecuteUbergraph_Results_PlayerScoreRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow");

	UResults_PlayerScoreRow_C_ExecuteUbergraph_Results_PlayerScoreRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
