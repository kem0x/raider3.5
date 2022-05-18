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

// Function TextRotator.TextRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTextRotator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRotator.TextRotator_C.Construct");

	UTextRotator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextRotator.TextRotator_C.ExecuteUbergraph_TextRotator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextRotator_C::ExecuteUbergraph_TextRotator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRotator.TextRotator_C.ExecuteUbergraph_TextRotator");

	UTextRotator_C_ExecuteUbergraph_TextRotator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
