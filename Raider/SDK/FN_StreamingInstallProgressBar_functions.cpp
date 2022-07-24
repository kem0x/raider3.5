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

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.RefreshTick
// (Public, BlueprintCallable, BlueprintEvent)

void UStreamingInstallProgressBar_C::RefreshTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.RefreshTick");

	UStreamingInstallProgressBar_C_RefreshTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStreamingInstallProgressBar_C::ToggleTimer(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ToggleTimer");

	UStreamingInstallProgressBar_C_ToggleTimer_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStreamingInstallProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Construct");

	UStreamingInstallProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStreamingInstallProgressBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Destruct");

	UStreamingInstallProgressBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ExecuteUbergraph_StreamingInstallProgressBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStreamingInstallProgressBar_C::ExecuteUbergraph_StreamingInstallProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ExecuteUbergraph_StreamingInstallProgressBar");

	UStreamingInstallProgressBar_C_ExecuteUbergraph_StreamingInstallProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
