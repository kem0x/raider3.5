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

// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Clear
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserMatchStats_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Clear");

	UAthenaReplayBrowserMatchStats_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserMatchStats_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Refresh");

	UAthenaReplayBrowserMatchStats_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReplayBrowserMatchStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Construct");

	UAthenaReplayBrowserMatchStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.SetReplayInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance* ReplayInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserMatchStats_C::SetReplayInfo(class UAthenaReplayBrowserRowProxyInstance* ReplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.SetReplayInfo");

	UAthenaReplayBrowserMatchStats_C_SetReplayInfo_Params params;
	params.ReplayInfo = ReplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.ExecuteUbergraph_AthenaReplayBrowserMatchStats
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayBrowserMatchStats_C::ExecuteUbergraph_AthenaReplayBrowserMatchStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.ExecuteUbergraph_AthenaReplayBrowserMatchStats");

	UAthenaReplayBrowserMatchStats_C_ExecuteUbergraph_AthenaReplayBrowserMatchStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
