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

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.TrimUnusedRows
// (Public, BlueprintCallable, BlueprintEvent)

void UTeamScoreDetailsContent_C::TrimUnusedRows()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.TrimUnusedRows");

	UTeamScoreDetailsContent_C_TrimUnusedRows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.SetRowData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowIdx                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamScoreDetailsContent_C::SetRowData(int RowIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.SetRowData");

	UTeamScoreDetailsContent_C_SetRowData_Params params;
	params.RowIdx = RowIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamScoreDetailsContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.Construct");

	UTeamScoreDetailsContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.OnScoreReportChanged
// (BlueprintCallable, BlueprintEvent)

void UTeamScoreDetailsContent_C::OnScoreReportChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.OnScoreReportChanged");

	UTeamScoreDetailsContent_C_OnScoreReportChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.ExecuteUbergraph_TeamScoreDetailsContent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamScoreDetailsContent_C::ExecuteUbergraph_TeamScoreDetailsContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.ExecuteUbergraph_TeamScoreDetailsContent");

	UTeamScoreDetailsContent_C_ExecuteUbergraph_TeamScoreDetailsContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
