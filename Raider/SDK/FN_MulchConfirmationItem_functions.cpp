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

// Function MulchConfirmationItem.MulchConfirmationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMulchConfirmationItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchConfirmationItem.MulchConfirmationItem_C.Construct");

	UMulchConfirmationItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchConfirmationItem.MulchConfirmationItem_C.ExecuteUbergraph_MulchConfirmationItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchConfirmationItem_C::ExecuteUbergraph_MulchConfirmationItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchConfirmationItem.MulchConfirmationItem_C.ExecuteUbergraph_MulchConfirmationItem");

	UMulchConfirmationItem_C_ExecuteUbergraph_MulchConfirmationItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
