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

// Function TransportIndicator.TransportIndicator_C.StopTheAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTransportIndicator_C::StopTheAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransportIndicator.TransportIndicator_C.StopTheAnimation");

	UTransportIndicator_C_StopTheAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransportIndicator.TransportIndicator_C.Animate
// (Public, BlueprintCallable, BlueprintEvent)

void UTransportIndicator_C::Animate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransportIndicator.TransportIndicator_C.Animate");

	UTransportIndicator_C_Animate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransportIndicator.TransportIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTransportIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransportIndicator.TransportIndicator_C.Construct");

	UTransportIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransportIndicator.TransportIndicator_C.HandleAniFinished
// (BlueprintCallable, BlueprintEvent)

void UTransportIndicator_C::HandleAniFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransportIndicator.TransportIndicator_C.HandleAniFinished");

	UTransportIndicator_C_HandleAniFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransportIndicator.TransportIndicator_C.ExecuteUbergraph_TransportIndicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTransportIndicator_C::ExecuteUbergraph_TransportIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TransportIndicator.TransportIndicator_C.ExecuteUbergraph_TransportIndicator");

	UTransportIndicator_C_ExecuteUbergraph_TransportIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
