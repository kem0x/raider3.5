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

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_FragGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.UserConstructionScript");

	AB_Prj_Athena_FragGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_FragGrenade_C::FuseEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded");

	AB_Prj_Athena_FragGrenade_C_FuseEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_FragGrenade_C::ExecuteUbergraph_B_Prj_Athena_FragGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade");

	AB_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
