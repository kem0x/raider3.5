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

// Function MulchWarning.MulchWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMulchWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchWarning.MulchWarning_C.Construct");

	UMulchWarning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchWarning.MulchWarning_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchWarning_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchWarning.MulchWarning_C.SetSelected");

	UMulchWarning_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MulchWarning.MulchWarning_C.ExecuteUbergraph_MulchWarning
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMulchWarning_C::ExecuteUbergraph_MulchWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MulchWarning.MulchWarning_C.ExecuteUbergraph_MulchWarning");

	UMulchWarning_C_ExecuteUbergraph_MulchWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
