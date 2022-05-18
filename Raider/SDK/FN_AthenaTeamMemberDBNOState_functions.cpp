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

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.RefreshVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberDBNOState_C::RefreshVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.RefreshVisuals");

	UAthenaTeamMemberDBNOState_C_RefreshVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Reviving                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::Set_Reviving(bool Is_Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving");

	UAthenaTeamMemberDBNOState_C_Set_Reviving_Params params;
	params.Is_Reviving = Is_Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_DBNO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::Set_DBNO(bool Is_DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO");

	UAthenaTeamMemberDBNOState_C_Set_DBNO_Params params;
	params.Is_DBNO = Is_DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberDBNOState_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Construct");

	UAthenaTeamMemberDBNOState_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.ExecuteUbergraph_AthenaTeamMemberDBNOState
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::ExecuteUbergraph_AthenaTeamMemberDBNOState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.ExecuteUbergraph_AthenaTeamMemberDBNOState");

	UAthenaTeamMemberDBNOState_C_ExecuteUbergraph_AthenaTeamMemberDBNOState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
