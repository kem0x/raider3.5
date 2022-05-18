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

// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ActorToUnregisterRegister      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGen_Interact_UnregisterFocus_C::BreakParams(class AActor** ActorToUnregisterRegister)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams");

	UGen_Interact_UnregisterFocus_C_BreakParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorToUnregisterRegister != nullptr)
		*ActorToUnregisterRegister = params.ActorToUnregisterRegister;
}


// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToUnregister              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGen_Interact_UnregisterFocus_C* ThisObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGen_Interact_UnregisterFocus_C::SetParams(class AActor* ActorToUnregister, class UGen_Interact_UnregisterFocus_C** ThisObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams");

	UGen_Interact_UnregisterFocus_C_SetParams_Params params;
	params.ActorToUnregister = ActorToUnregister;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThisObject != nullptr)
		*ThisObject = params.ThisObject;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
