// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CheckForMessageItems.CheckForMessageItems_C.Closed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* Closed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACheckForMessageItems_C::Closed(class UCommonActivatablePanel* Closed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForMessageItems.CheckForMessageItems_C.Closed");

	ACheckForMessageItems_C_Closed_Params params;
	params.Closed = Closed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForMessageItems.CheckForMessageItems_C.ShowMessage
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckForMessageItems_C::ShowMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForMessageItems.CheckForMessageItems_C.ShowMessage");

	ACheckForMessageItems_C_ShowMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForMessageItems.CheckForMessageItems_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckForMessageItems_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForMessageItems.CheckForMessageItems_C.UserConstructionScript");

	ACheckForMessageItems_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForMessageItems.CheckForMessageItems_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckForMessageItems_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForMessageItems.CheckForMessageItems_C.Execute");

	ACheckForMessageItems_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForMessageItems.CheckForMessageItems_C.ExecuteUbergraph_CheckForMessageItems
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckForMessageItems_C::ExecuteUbergraph_CheckForMessageItems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForMessageItems.CheckForMessageItems_C.ExecuteUbergraph_CheckForMessageItems");

	ACheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
