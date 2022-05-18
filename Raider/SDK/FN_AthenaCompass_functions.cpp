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

// Function AthenaCompass.AthenaCompass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCompass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompass.AthenaCompass_C.Construct");

	UAthenaCompass_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCompass_C::ExecuteUbergraph_AthenaCompass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass");

	UAthenaCompass_C_ExecuteUbergraph_AthenaCompass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
