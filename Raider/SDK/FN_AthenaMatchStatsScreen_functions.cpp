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

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.On_BorderTouchZone_MouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaMatchStatsScreen_C::On_BorderTouchZone_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.On_BorderTouchZone_MouseButtonDown");

	UAthenaMatchStatsScreen_C_On_BorderTouchZone_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputRefresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatsScreen_C::InputRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputRefresh");

	UAthenaMatchStatsScreen_C_InputRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatsScreen_C::InputSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputSetup");

	UAthenaMatchStatsScreen_C_InputSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchStatsScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.HandleBack");

	UAthenaMatchStatsScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.RegisterBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatsScreen_C::RegisterBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.RegisterBack");

	UAthenaMatchStatsScreen_C_RegisterBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaMatchStatsScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.OnActivated");

	UAthenaMatchStatsScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchStatsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.Construct");

	UAthenaMatchStatsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.ExecuteUbergraph_AthenaMatchStatsScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchStatsScreen_C::ExecuteUbergraph_AthenaMatchStatsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.ExecuteUbergraph_AthenaMatchStatsScreen");

	UAthenaMatchStatsScreen_C_ExecuteUbergraph_AthenaMatchStatsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
