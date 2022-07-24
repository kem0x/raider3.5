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

// Function ActionWarning.ActionWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActionWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionWarning.ActionWarning_C.Construct");

	UActionWarning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionWarning.ActionWarning_C.ExecuteUbergraph_ActionWarning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionWarning_C::ExecuteUbergraph_ActionWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionWarning.ActionWarning_C.ExecuteUbergraph_ActionWarning");

	UActionWarning_C_ExecuteUbergraph_ActionWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
