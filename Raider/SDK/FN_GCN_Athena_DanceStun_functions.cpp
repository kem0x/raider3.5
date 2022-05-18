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

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Athena_DanceStun_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnRemove");

	AGCN_Athena_DanceStun_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Athena_DanceStun_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnActive");

	AGCN_Athena_DanceStun_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Athena_DanceStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.UserConstructionScript");

	AGCN_Athena_DanceStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__FinishedFunc
// (BlueprintEvent)

void AGCN_Athena_DanceStun_C::IntroAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__FinishedFunc");

	AGCN_Athena_DanceStun_C_IntroAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__UpdateFunc
// (BlueprintEvent)

void AGCN_Athena_DanceStun_C::IntroAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__UpdateFunc");

	AGCN_Athena_DanceStun_C_IntroAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__FinishedFunc
// (BlueprintEvent)

void AGCN_Athena_DanceStun_C::OutroAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__FinishedFunc");

	AGCN_Athena_DanceStun_C_OutroAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__UpdateFunc
// (BlueprintEvent)

void AGCN_Athena_DanceStun_C::OutroAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__UpdateFunc");

	AGCN_Athena_DanceStun_C_OutroAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_DanceStun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ReceiveTick");

	AGCN_Athena_DanceStun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_DanceStun_C::AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateIn");

	AGCN_Athena_DanceStun_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateOut
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_DanceStun_C::AnimateOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateOut");

	AGCN_Athena_DanceStun_C_AnimateOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ExecuteUbergraph_GCN_Athena_DanceStun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_DanceStun_C::ExecuteUbergraph_GCN_Athena_DanceStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ExecuteUbergraph_GCN_Athena_DanceStun");

	AGCN_Athena_DanceStun_C_ExecuteUbergraph_GCN_Athena_DanceStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
