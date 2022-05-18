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

// Function InputReflector.InputReflector_C.OnButtonAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UCommonButton**          AddedButton                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCommonInputActionHandlerData* Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInputReflector_C::OnButtonAdded(class UCommonButton** AddedButton, struct FCommonInputActionHandlerData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.OnButtonAdded");

	UInputReflector_C_OnButtonAdded_Params params;
	params.AddedButton = AddedButton;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflector_C::ExecuteUbergraph_InputReflector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector");

	UInputReflector_C_ExecuteUbergraph_InputReflector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
