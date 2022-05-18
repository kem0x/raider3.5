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

// Function FrontendCamera_Main.FrontendCamera_Main_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontendCamera_Main_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Main.FrontendCamera_Main_C.UserConstructionScript");

	AFrontendCamera_Main_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Main.FrontendCamera_Main_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontendCamera_Main_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Main.FrontendCamera_Main_C.OnActivated");

	AFrontendCamera_Main_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Main.FrontendCamera_Main_C.ExecuteUbergraph_FrontendCamera_Main
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontendCamera_Main_C::ExecuteUbergraph_FrontendCamera_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Main.FrontendCamera_Main_C.ExecuteUbergraph_FrontendCamera_Main");

	AFrontendCamera_Main_C_ExecuteUbergraph_FrontendCamera_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
