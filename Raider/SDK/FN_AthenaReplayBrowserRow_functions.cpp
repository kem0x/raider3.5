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

// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.FormatLengthText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAthenaReplayBrowserRow_C::FormatLengthText(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.FormatLengthText");

	UAthenaReplayBrowserRow_C_FormatLengthText_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserRow_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.Refresh");

	UAthenaReplayBrowserRow_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.OnReplayBrowserEntryDataSet
// (Event, Public, BlueprintEvent)

void UAthenaReplayBrowserRow_C::OnReplayBrowserEntryDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.OnReplayBrowserEntryDataSet");

	UAthenaReplayBrowserRow_C_OnReplayBrowserEntryDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.ExecuteUbergraph_AthenaReplayBrowserRow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserRow_C::ExecuteUbergraph_AthenaReplayBrowserRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.ExecuteUbergraph_AthenaReplayBrowserRow");

	UAthenaReplayBrowserRow_C_ExecuteUbergraph_AthenaReplayBrowserRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
