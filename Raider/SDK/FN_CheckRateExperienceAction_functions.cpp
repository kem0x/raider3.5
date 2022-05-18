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

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckRateExperienceAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript");

	ACheckRateExperienceAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckRateExperienceAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue");

	ACheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckRateExperienceAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute");

	ACheckRateExperienceAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckRateExperienceAction_C::ExecuteUbergraph_CheckRateExperienceAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction");

	ACheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
