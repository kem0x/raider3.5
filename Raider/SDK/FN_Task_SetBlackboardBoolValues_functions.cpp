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

// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_SetBlackboardBoolValues_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ReceiveExecute");

	UTask_SetBlackboardBoolValues_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ExecuteUbergraph_Task_SetBlackboardBoolValues
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_SetBlackboardBoolValues_C::ExecuteUbergraph_Task_SetBlackboardBoolValues(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ExecuteUbergraph_Task_SetBlackboardBoolValues");

	UTask_SetBlackboardBoolValues_C_ExecuteUbergraph_Task_SetBlackboardBoolValues_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
