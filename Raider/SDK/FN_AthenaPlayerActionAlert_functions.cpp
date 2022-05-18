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

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// EAthenaPlayerActionAlert*      Alert                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  DetailText                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerActionAlert_C::AlertPlayer(EAthenaPlayerActionAlert* Alert, struct FText* DetailText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer");

	UAthenaPlayerActionAlert_C_AlertPlayer_Params params;
	params.Alert = Alert;
	params.DetailText = DetailText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaPlayerActionAlert_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished");

	UAthenaPlayerActionAlert_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerActionAlert_C::ExecuteUbergraph_AthenaPlayerActionAlert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert");

	UAthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
