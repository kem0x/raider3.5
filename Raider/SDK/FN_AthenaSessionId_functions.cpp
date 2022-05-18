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

// Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSessionId_C::UpdateSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId");

	UAthenaSessionId_C_UpdateSessionId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSessionId.AthenaSessionId_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSessionId_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSessionId.AthenaSessionId_C.Construct");

	UAthenaSessionId_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSessionId_C::ExecuteUbergraph_AthenaSessionId(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId");

	UAthenaSessionId_C_ExecuteUbergraph_AthenaSessionId_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
