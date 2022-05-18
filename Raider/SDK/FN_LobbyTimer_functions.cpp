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

// Function LobbyTimer.LobbyTimer_C.Handle Lobby Timer Updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds_Remaining              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyTimer_C::Handle_Lobby_Timer_Updated(int Seconds_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.Handle Lobby Timer Updated");

	ULobbyTimer_C_Handle_Lobby_Timer_Updated_Params params;
	params.Seconds_Remaining = Seconds_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyTimer.LobbyTimer_C.Handle Show Lobby Timer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyTimer_C::Handle_Show_Lobby_Timer(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.Handle Show Lobby Timer");

	ULobbyTimer_C_Handle_Show_Lobby_Timer_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyTimer.LobbyTimer_C.Bind Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyTimer_C::Bind_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.Bind Delegates");

	ULobbyTimer_C_Bind_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyTimer.LobbyTimer_C.Show Lobby Timer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyTimer_C::Show_Lobby_Timer(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.Show Lobby Timer");

	ULobbyTimer_C_Show_Lobby_Timer_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyTimer.LobbyTimer_C.Handle Lobby Disconnected
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyTimer_C::Handle_Lobby_Disconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.Handle Lobby Disconnected");

	ULobbyTimer_C_Handle_Lobby_Disconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyTimer.LobbyTimer_C.Handle Lobby Started
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyTimer_C::Handle_Lobby_Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.Handle Lobby Started");

	ULobbyTimer_C_Handle_Lobby_Started_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyTimer.LobbyTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.Construct");

	ULobbyTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyTimer.LobbyTimer_C.ExecuteUbergraph_LobbyTimer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyTimer_C::ExecuteUbergraph_LobbyTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyTimer.LobbyTimer_C.ExecuteUbergraph_LobbyTimer");

	ULobbyTimer_C_ExecuteUbergraph_LobbyTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
