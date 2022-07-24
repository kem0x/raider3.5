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

// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URecentMatchesStatScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.HandleBack");

	URecentMatchesStatScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URecentMatchesStatScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.Construct");

	URecentMatchesStatScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void URecentMatchesStatScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDeactivated");

	URecentMatchesStatScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void URecentMatchesStatScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnActivated");

	URecentMatchesStatScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnStartFetchingData
// (Event, Public, BlueprintEvent)

void URecentMatchesStatScreen_C::OnStartFetchingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnStartFetchingData");

	URecentMatchesStatScreen_C_OnStartFetchingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnNoData
// (Event, Public, BlueprintEvent)

void URecentMatchesStatScreen_C::OnNoData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnNoData");

	URecentMatchesStatScreen_C_OnNoData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDataRecieved
// (Event, Public, BlueprintEvent)

void URecentMatchesStatScreen_C::OnDataRecieved()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDataRecieved");

	URecentMatchesStatScreen_C_OnDataRecieved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnRecentMatcheChanged
// (Event, Public, BlueprintEvent)

void URecentMatchesStatScreen_C::OnRecentMatcheChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnRecentMatcheChanged");

	URecentMatchesStatScreen_C_OnRecentMatcheChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.ExecuteUbergraph_RecentMatchesStatScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URecentMatchesStatScreen_C::ExecuteUbergraph_RecentMatchesStatScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.ExecuteUbergraph_RecentMatchesStatScreen");

	URecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
