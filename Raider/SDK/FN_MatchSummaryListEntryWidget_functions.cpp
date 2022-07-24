// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMatchSummaryListEntryWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.Update");

	UMatchSummaryListEntryWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UMatchSummaryListEntryWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.OnStatChanged");

	UMatchSummaryListEntryWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.ExecuteUbergraph_MatchSummaryListEntryWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchSummaryListEntryWidget_C::ExecuteUbergraph_MatchSummaryListEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.ExecuteUbergraph_MatchSummaryListEntryWidget");

	UMatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
