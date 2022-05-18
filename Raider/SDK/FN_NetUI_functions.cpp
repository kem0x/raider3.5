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

// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)

void UNetDebugWidget::StopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.NetDebugWidget.StopTimer");

	UNetDebugWidget_StopTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)

void UNetDebugWidget::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.NetDebugWidget.StartTimer");

	UNetDebugWidget_StartTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
