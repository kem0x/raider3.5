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

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_IsUsingRemoteControlPawn_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnRemove");

	AGCNL_IsUsingRemoteControlPawn_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_IsUsingRemoteControlPawn_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnActive");

	AGCNL_IsUsingRemoteControlPawn_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_IsUsingRemoteControlPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.UserConstructionScript");

	AGCNL_IsUsingRemoteControlPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_IsUsingRemoteControlPawn_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveEndPlay");

	AGCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGCNL_IsUsingRemoteControlPawn_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveDestroyed");

	AGCNL_IsUsingRemoteControlPawn_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_IsUsingRemoteControlPawn_C::ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn");

	AGCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
