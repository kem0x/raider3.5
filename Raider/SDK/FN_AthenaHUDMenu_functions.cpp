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

// Function AthenaHUDMenu.AthenaHUDMenu_C.Has Player Died
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDied                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortPlayerDeathReport  DeathReport                    (Parm, OutParm)

void UAthenaHUDMenu_C::Has_Player_Died(bool* bDied, struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.Has Player Died");

	UAthenaHUDMenu_C_Has_Player_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDied != nullptr)
		*bDied = params.bDied;
	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Has Player Or Team Won
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaHUDMenu_C::Has_Player_Or_Team_Won(bool* bWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.Has Player Or Team Won");

	UAthenaHUDMenu_C_Has_Player_Or_Team_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWon != nullptr)
		*bWon = params.bWon;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.SetViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*  ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUDMenu_C::SetViewModel(class UAthenaPlayerViewModel* ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.SetViewModel");

	UAthenaHUDMenu_C_SetViewModel_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.CreateOrShowGameOverScreen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaGameOverWidget_C* GameOverScreen                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaHUDMenu_C::CreateOrShowGameOverScreen(class UAthenaGameOverWidget_C** GameOverScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.CreateOrShowGameOverScreen");

	UAthenaHUDMenu_C_CreateOrShowGameOverScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameOverScreen != nullptr)
		*GameOverScreen = params.GameOverScreen;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUDMenu_C::Dismiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.Dismiss");

	UAthenaHUDMenu_C_Dismiss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.PopMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaHUDMenu_C::PopMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.PopMenuContent");

	UAthenaHUDMenu_C_PopMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.PushMenuContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaHUDMenu_C::PushMenuContent(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.PushMenuContent");

	UAthenaHUDMenu_C_PushMenuContent_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.SetCursorModeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             CustomWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUDMenu_C::SetCursorModeContent(class UUserWidget* CustomWidget, const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.SetCursorModeContent");

	UAthenaHUDMenu_C_SetCursorModeContent_Params params;
	params.CustomWidget = CustomWidget;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Or Team Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUDMenu_C::On_Player_Or_Team_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Or Team Won");

	UAthenaHUDMenu_C_On_Player_Or_Team_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUDMenu_C::HandleRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.HandleRevived");

	UAthenaHUDMenu_C_HandleRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUDMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.Construct");

	UAthenaHUDMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Clear GameOver Screen
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUDMenu_C::Clear_GameOver_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.Clear GameOver Screen");

	UAthenaHUDMenu_C_Clear_GameOver_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Died
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaHUDMenu_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Died");

	UAthenaHUDMenu_C_On_Player_Died_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.PostBind_CheckConditions
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUDMenu_C::PostBind_CheckConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.PostBind_CheckConditions");

	UAthenaHUDMenu_C_PostBind_CheckConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.ExecuteUbergraph_AthenaHUDMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUDMenu_C::ExecuteUbergraph_AthenaHUDMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUDMenu.AthenaHUDMenu_C.ExecuteUbergraph_AthenaHUDMenu");

	UAthenaHUDMenu_C_ExecuteUbergraph_AthenaHUDMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
