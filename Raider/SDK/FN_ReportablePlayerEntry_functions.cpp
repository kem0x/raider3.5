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

// Function ReportablePlayerEntry.ReportablePlayerEntry_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimateOnSelect               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportablePlayerEntry_C::SetSelectionState(bool* bIsSelected, bool* bAnimateOnSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportablePlayerEntry.ReportablePlayerEntry_C.SetSelectionState");

	UReportablePlayerEntry_C_SetSelectionState_Params params;
	params.bIsSelected = bIsSelected;
	params.bAnimateOnSelect = bAnimateOnSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportablePlayerEntry.ReportablePlayerEntry_C.ExecuteUbergraph_ReportablePlayerEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportablePlayerEntry_C::ExecuteUbergraph_ReportablePlayerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportablePlayerEntry.ReportablePlayerEntry_C.ExecuteUbergraph_ReportablePlayerEntry");

	UReportablePlayerEntry_C_ExecuteUbergraph_ReportablePlayerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
