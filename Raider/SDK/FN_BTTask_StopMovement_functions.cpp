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

// Function BTTask_StopMovement.BTTask_StopMovement_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_StopMovement_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StopMovement.BTTask_StopMovement_C.ReceiveExecute");

	UBTTask_StopMovement_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_StopMovement.BTTask_StopMovement_C.ExecuteUbergraph_BTTask_StopMovement
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_StopMovement_C::ExecuteUbergraph_BTTask_StopMovement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StopMovement.BTTask_StopMovement_C.ExecuteUbergraph_BTTask_StopMovement");

	UBTTask_StopMovement_C_ExecuteUbergraph_BTTask_StopMovement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
