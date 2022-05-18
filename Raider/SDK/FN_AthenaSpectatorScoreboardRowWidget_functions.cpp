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

// Function AthenaSpectatorScoreboardRowWidget.AthenaSpectatorScoreboardRowWidget_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorScoreboardRowWidget_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboardRowWidget.AthenaSpectatorScoreboardRowWidget_C.Refresh");

	UAthenaSpectatorScoreboardRowWidget_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorScoreboardRowWidget.AthenaSpectatorScoreboardRowWidget_C.OnEntryDataSet
// (Event, Public, BlueprintEvent)

void UAthenaSpectatorScoreboardRowWidget_C::OnEntryDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboardRowWidget.AthenaSpectatorScoreboardRowWidget_C.OnEntryDataSet");

	UAthenaSpectatorScoreboardRowWidget_C_OnEntryDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorScoreboardRowWidget.AthenaSpectatorScoreboardRowWidget_C.ExecuteUbergraph_AthenaSpectatorScoreboardRowWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorScoreboardRowWidget_C::ExecuteUbergraph_AthenaSpectatorScoreboardRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboardRowWidget.AthenaSpectatorScoreboardRowWidget_C.ExecuteUbergraph_AthenaSpectatorScoreboardRowWidget");

	UAthenaSpectatorScoreboardRowWidget_C_ExecuteUbergraph_AthenaSpectatorScoreboardRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
