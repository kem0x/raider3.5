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

// Function TeamMicStack.TeamMicStack_C.ClearContents
// (Public, BlueprintCallable, BlueprintEvent)

void UTeamMicStack_C::ClearContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.ClearContents");

	UTeamMicStack_C_ClearContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.AppendTeamMember
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTeamMicStack_C::AppendTeamMember(struct FFortTeamMemberInfo* TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.AppendTeamMember");

	UTeamMicStack_C_AppendTeamMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMemberInfo != nullptr)
		*TeamMemberInfo = params.TeamMemberInfo;
}


// Function TeamMicStack.TeamMicStack_C.ShiftTeamMembers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMicStack_C::ShiftTeamMembers(int Index, struct FFortTeamMemberInfo* TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.ShiftTeamMembers");

	UTeamMicStack_C_ShiftTeamMembers_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMemberInfo != nullptr)
		*TeamMemberInfo = params.TeamMemberInfo;
}


// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Member_Info                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTeamMicStack_C::HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged");

	UTeamMicStack_C_HandleTeamMemberChanged_Params params;
	params.Member_Info = Member_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Member_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMicStack_C::HandleTeamMemberRemoved(int Member_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved");

	UTeamMicStack_C_HandleTeamMemberRemoved_Params params;
	params.Member_Index = Member_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamMicStack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.Construct");

	UTeamMicStack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.HandlePartyLeft
// (BlueprintCallable, BlueprintEvent)

void UTeamMicStack_C::HandlePartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.HandlePartyLeft");

	UTeamMicStack_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMicStack_C::ExecuteUbergraph_TeamMicStack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack");

	UTeamMicStack_C_ExecuteUbergraph_TeamMicStack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
