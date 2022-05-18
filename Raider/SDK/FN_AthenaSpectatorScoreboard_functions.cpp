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

// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.SetConsoleInputImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorScoreboard_C::SetConsoleInputImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.SetConsoleInputImages");

	UAthenaSpectatorScoreboard_C_SetConsoleInputImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.UpdateListUI
// (Event, Protected, BlueprintEvent)

void UAthenaSpectatorScoreboard_C::UpdateListUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.UpdateListUI");

	UAthenaSpectatorScoreboard_C_UpdateListUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorScoreboard_C::ResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ResetFocus");

	UAthenaSpectatorScoreboard_C_ResetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSpectatorScoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.Construct");

	UAthenaSpectatorScoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ExecuteUbergraph_AthenaSpectatorScoreboard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorScoreboard_C::ExecuteUbergraph_AthenaSpectatorScoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ExecuteUbergraph_AthenaSpectatorScoreboard");

	UAthenaSpectatorScoreboard_C_ExecuteUbergraph_AthenaSpectatorScoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
