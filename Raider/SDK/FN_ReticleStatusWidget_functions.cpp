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

// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReticleStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleStatusWidget.ReticleStatusWidget_C.Construct");

	UReticleStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   FailureText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UReticleStatusWidget_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const struct FText& FailureText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction");

	UReticleStatusWidget_C_OnUnableToPerformAction_Params params;
	params.FailedReason = FailedReason;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticleStatusWidget_C::ExecuteUbergraph_ReticleStatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget");

	UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
