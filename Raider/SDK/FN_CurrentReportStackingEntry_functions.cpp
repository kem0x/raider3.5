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

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.SetDisplayTextFields
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCurrentReportStackingEntry_C::SetDisplayTextFields()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.SetDisplayTextFields");

	UCurrentReportStackingEntry_C_SetDisplayTextFields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCurrentReportStackingEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.Construct");

	UCurrentReportStackingEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.InitStackingEntryFields
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           DisplayedReportingStep         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UCurrentReportStackingEntry_C::InitStackingEntryFields(EPlayerReportingStep DisplayedReportingStep, const struct FText& DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.InitStackingEntryFields");

	UCurrentReportStackingEntry_C_InitStackingEntryFields_Params params;
	params.DisplayedReportingStep = DisplayedReportingStep;
	params.DisplayText = DisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.ExecuteUbergraph_CurrentReportStackingEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentReportStackingEntry_C::ExecuteUbergraph_CurrentReportStackingEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.ExecuteUbergraph_CurrentReportStackingEntry");

	UCurrentReportStackingEntry_C_ExecuteUbergraph_CurrentReportStackingEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
