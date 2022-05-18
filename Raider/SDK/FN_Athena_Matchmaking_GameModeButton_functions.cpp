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

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetButtonSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           useLargeSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::SetButtonSize(bool useLargeSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetButtonSize");

	UAthena_Matchmaking_GameModeButton_C_SetButtonSize_Params params;
	params.useLargeSize = useLargeSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetOwningDisplayWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::SetOwningDisplayWidget(class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetOwningDisplayWidget");

	UAthena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget_Params params;
	params.OwningDisplay = OwningDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.UpdateGameModeAvailibilty
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_GameModeButton_C::UpdateGameModeAvailibilty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.UpdateGameModeAvailibilty");

	UAthena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ShowDisabledMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::ShowDisabledMessage(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ShowDisabledMessage");

	UAthena_Matchmaking_GameModeButton_C_ShowDisabledMessage_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.DisableGameModeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_GameModeButton_C::DisableGameModeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.DisableGameModeButton");

	UAthena_Matchmaking_GameModeButton_C_DisableGameModeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.IsGameModeAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*     InMode                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::IsGameModeAvailable(class UFortPlaylistAthena* InMode, bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.IsGameModeAvailable");

	UAthena_Matchmaking_GameModeButton_C_IsGameModeAvailable_Params params;
	params.InMode = InMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthena_Matchmaking_GameModeButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnFocusReceived");

	UAthena_Matchmaking_GameModeButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetupGameModeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*     PlaylistObj                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::SetupGameModeButton(class UFortPlaylistAthena* PlaylistObj, bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetupGameModeButton");

	UAthena_Matchmaking_GameModeButton_C_SetupGameModeButton_Params params;
	params.PlaylistObj = PlaylistObj;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.PreConstruct");

	UAthena_Matchmaking_GameModeButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature");

	UAthena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnModeButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::OnModeButtonHovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnModeButtonHovered");

	UAthena_Matchmaking_GameModeButton_C_OnModeButtonHovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthena_Matchmaking_GameModeButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.Construct");

	UAthena_Matchmaking_GameModeButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ExecuteUbergraph_Athena_Matchmaking_GameModeButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::ExecuteUbergraph_Athena_Matchmaking_GameModeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ExecuteUbergraph_Athena_Matchmaking_GameModeButton");

	UAthena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C* HoveredButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::ButtonHovered__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* HoveredButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ButtonHovered__DelegateSignature");

	UAthena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature_Params params;
	params.HoveredButton = HoveredButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.GameModeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_Matchmaking_GameModeButton_C::GameModeSelected__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.GameModeSelected__DelegateSignature");

	UAthena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature_Params params;
	params.SelectedGameModeButton = SelectedGameModeButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
