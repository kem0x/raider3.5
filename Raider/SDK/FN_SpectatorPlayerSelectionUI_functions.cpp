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

// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.SetFollowedPlayerButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 NewButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USpectatorPlayerSelectionUI_C::SetFollowedPlayerButton(class UButton* NewButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.SetFollowedPlayerButton");

	USpectatorPlayerSelectionUI_C_SetFollowedPlayerButton_Params params;
	params.NewButton = NewButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.FindPlayerWithPressedButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*        Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerSelectionUI_C::FindPlayerWithPressedButton(class AFortPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.FindPlayerWithPressedButton");

	USpectatorPlayerSelectionUI_C_FindPlayerWithPressedButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.AddPlayerElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerSelectionUI_C::AddPlayerElement(class AFortPlayerStateAthena* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.AddPlayerElement");

	USpectatorPlayerSelectionUI_C_AddPlayerElement_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USpectatorPlayerSelectionUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.Construct");

	USpectatorPlayerSelectionUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnPlayerButtonPressed
// (BlueprintCallable, BlueprintEvent)

void USpectatorPlayerSelectionUI_C::OnPlayerButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnPlayerButtonPressed");

	USpectatorPlayerSelectionUI_C_OnPlayerButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnFollowedPlayerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating* SpectatorPC                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerState*        NewFollowedPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerSelectionUI_C::OnFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnFollowedPlayerChanged");

	USpectatorPlayerSelectionUI_C_OnFollowedPlayerChanged_Params params;
	params.SpectatorPC = SpectatorPC;
	params.NewFollowedPlayer = NewFollowedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameRelevant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*        NewlyRelevantPlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerSelectionUI_C::PlayerBecameRelevant(class AFortPlayerState* NewlyRelevantPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameRelevant");

	USpectatorPlayerSelectionUI_C_PlayerBecameRelevant_Params params;
	params.NewlyRelevantPlayer = NewlyRelevantPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameIrrelevant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*        NewlyRelevantPlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerSelectionUI_C::PlayerBecameIrrelevant(class AFortPlayerState* NewlyRelevantPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameIrrelevant");

	USpectatorPlayerSelectionUI_C_PlayerBecameIrrelevant_Params params;
	params.NewlyRelevantPlayer = NewlyRelevantPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.ExecuteUbergraph_SpectatorPlayerSelectionUI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerSelectionUI_C::ExecuteUbergraph_SpectatorPlayerSelectionUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.ExecuteUbergraph_SpectatorPlayerSelectionUI");

	USpectatorPlayerSelectionUI_C_ExecuteUbergraph_SpectatorPlayerSelectionUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
