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

// Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)

void UHealthWarningWidget_C::HandleShowTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete");

	UHealthWarningWidget_C_HandleShowTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthWarningWidget_C::ExecuteUbergraph_HealthWarningWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget");

	UHealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHealthWarningWidget_C::HealthWarningCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature");

	UHealthWarningWidget_C_HealthWarningCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
