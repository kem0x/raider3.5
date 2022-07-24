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

// Function ShowSocialImportAction.ShowSocialImportAction_C.HandleSocialImportClosed
// (Public, BlueprintCallable, BlueprintEvent)

void AShowSocialImportAction_C::HandleSocialImportClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowSocialImportAction.ShowSocialImportAction_C.HandleSocialImportClosed");

	AShowSocialImportAction_C_HandleSocialImportClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.ShowSocialImport
// (Public, BlueprintCallable, BlueprintEvent)

void AShowSocialImportAction_C::ShowSocialImport()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowSocialImportAction.ShowSocialImportAction_C.ShowSocialImport");

	AShowSocialImportAction_C_ShowSocialImport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShowSocialImportAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowSocialImportAction.ShowSocialImportAction_C.UserConstructionScript");

	AShowSocialImportAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AShowSocialImportAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowSocialImportAction.ShowSocialImportAction_C.Execute");

	AShowSocialImportAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.ExecuteUbergraph_ShowSocialImportAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShowSocialImportAction_C::ExecuteUbergraph_ShowSocialImportAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowSocialImportAction.ShowSocialImportAction_C.ExecuteUbergraph_ShowSocialImportAction");

	AShowSocialImportAction_C_ExecuteUbergraph_ShowSocialImportAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
