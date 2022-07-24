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

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdatePlacement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamScoreWidget_C::UpdatePlacement(int Place, bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdatePlacement");

	UAthenaTeamScoreWidget_C_UpdatePlacement_Params params;
	params.Place = Place;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdateScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamScoreWidget_C::UpdateScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdateScore");

	UAthenaTeamScoreWidget_C_UpdateScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamScoreWidget_C::OnScoreChanged(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnScoreChanged");

	UAthenaTeamScoreWidget_C_OnScoreChanged_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnPlacementChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamScoreWidget_C::OnPlacementChanged(int* Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnPlacementChanged");

	UAthenaTeamScoreWidget_C_OnPlacementChanged_Params params;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamScoreWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.Construct");

	UAthenaTeamScoreWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamScoreWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.PreConstruct");

	UAthenaTeamScoreWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.ExecuteUbergraph_AthenaTeamScoreWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamScoreWidget_C::ExecuteUbergraph_AthenaTeamScoreWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.ExecuteUbergraph_AthenaTeamScoreWidget");

	UAthenaTeamScoreWidget_C_ExecuteUbergraph_AthenaTeamScoreWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
