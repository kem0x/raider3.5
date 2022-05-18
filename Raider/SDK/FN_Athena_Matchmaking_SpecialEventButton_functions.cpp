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

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthena_Matchmaking_SpecialEventButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.OnFocusReceived");

	UAthena_Matchmaking_SpecialEventButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetupLTM
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_SpecialEventButton_C::SetupLTM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetupLTM");

	UAthena_Matchmaking_SpecialEventButton_C_SetupLTM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetLTMSplashArt
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_SpecialEventButton_C::SetLTMSplashArt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetLTMSplashArt");

	UAthena_Matchmaking_SpecialEventButton_C_SetLTMSplashArt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.FirstTime_NewBang
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_SpecialEventButton_C::FirstTime_NewBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.FirstTime_NewBang");

	UAthena_Matchmaking_SpecialEventButton_C_FirstTime_NewBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PlayFirstTimeBang
// (BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_SpecialEventButton_C::PlayFirstTimeBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PlayFirstTimeBang");

	UAthena_Matchmaking_SpecialEventButton_C_PlayFirstTimeBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthena_Matchmaking_SpecialEventButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.Construct");

	UAthena_Matchmaking_SpecialEventButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_SpecialEventButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PreConstruct");

	UAthena_Matchmaking_SpecialEventButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_Matchmaking_SpecialEventButton_C::ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton");

	UAthena_Matchmaking_SpecialEventButton_C_ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
