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

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.DistanceFromPlayerToPPVolumeCenter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Athena_GasGrenade_FXVolume_C::DistanceFromPlayerToPPVolumeCenter(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.DistanceFromPlayerToPPVolumeCenter");

	AB_Athena_GasGrenade_FXVolume_C_DistanceFromPlayerToPPVolumeCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.GetPlayerPawn
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_GasGrenade_FXVolume_C::GetPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.GetPlayerPawn");

	AB_Athena_GasGrenade_FXVolume_C_GetPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.AdjustedDistanceFromPlayerToPPVolumeCenter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ScopeStateSwappedTime          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayerIsUsingScope            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Athena_GasGrenade_FXVolume_C::AdjustedDistanceFromPlayerToPPVolumeCenter(float ScopeStateSwappedTime, float* DistanceOut, bool* bPlayerIsUsingScope)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.AdjustedDistanceFromPlayerToPPVolumeCenter");

	AB_Athena_GasGrenade_FXVolume_C_AdjustedDistanceFromPlayerToPPVolumeCenter_Params params;
	params.ScopeStateSwappedTime = ScopeStateSwappedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceOut != nullptr)
		*DistanceOut = params.DistanceOut;
	if (bPlayerIsUsingScope != nullptr)
		*bPlayerIsUsingScope = params.bPlayerIsUsingScope;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Athena_GasGrenade_FXVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.UserConstructionScript");

	AB_Athena_GasGrenade_FXVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeSmokeTL__FinishedFunc
// (BlueprintEvent)

void AB_Athena_GasGrenade_FXVolume_C::FadeSmokeTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeSmokeTL__FinishedFunc");

	AB_Athena_GasGrenade_FXVolume_C_FadeSmokeTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeSmokeTL__UpdateFunc
// (BlueprintEvent)

void AB_Athena_GasGrenade_FXVolume_C::FadeSmokeTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeSmokeTL__UpdateFunc");

	AB_Athena_GasGrenade_FXVolume_C_FadeSmokeTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Athena_GasGrenade_FXVolume_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.ReceiveBeginPlay");

	AB_Athena_GasGrenade_FXVolume_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_GasGrenade_FXVolume_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeIn");

	AB_Athena_GasGrenade_FXVolume_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_GasGrenade_FXVolume_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeOut");

	AB_Athena_GasGrenade_FXVolume_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.ExecuteUbergraph_B_Athena_GasGrenade_FXVolume
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_GasGrenade_FXVolume_C::ExecuteUbergraph_B_Athena_GasGrenade_FXVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.ExecuteUbergraph_B_Athena_GasGrenade_FXVolume");

	AB_Athena_GasGrenade_FXVolume_C_ExecuteUbergraph_B_Athena_GasGrenade_FXVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
