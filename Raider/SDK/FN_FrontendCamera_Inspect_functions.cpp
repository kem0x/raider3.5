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

// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontendCamera_Inspect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.UserConstructionScript");

	AFrontendCamera_Inspect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontendCamera_Inspect_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnActivated");

	AFrontendCamera_Inspect_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontendCamera_Inspect_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnDeactivated");

	AFrontendCamera_Inspect_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.ExecuteUbergraph_FrontendCamera_Inspect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontendCamera_Inspect_C::ExecuteUbergraph_FrontendCamera_Inspect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.ExecuteUbergraph_FrontendCamera_Inspect");

	AFrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
