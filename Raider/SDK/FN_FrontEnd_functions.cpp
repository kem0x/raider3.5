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

// Function Frontend.FrontEnd_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AFrontEnd_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.OnMatchStarted");

	AFrontEnd_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontEnd_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ReceiveBeginPlay");

	AFrontEnd_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::EnableTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.EnableTutorial");

	AFrontEnd_C_EnableTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::ExecuteUbergraph_FrontEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd");

	AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
