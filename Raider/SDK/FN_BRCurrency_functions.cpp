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

// Function BRCurrency.BRCurrency_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBRCurrency_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BRCurrency.BRCurrency_C.Construct");

	UBRCurrency_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BRCurrency.BRCurrency_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBRCurrency_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BRCurrency.BRCurrency_C.Destruct");

	UBRCurrency_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BRCurrency.BRCurrency_C.ExecuteUbergraph_BRCurrency
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBRCurrency_C::ExecuteUbergraph_BRCurrency(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BRCurrency.BRCurrency_C.ExecuteUbergraph_BRCurrency");

	UBRCurrency_C_ExecuteUbergraph_BRCurrency_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
