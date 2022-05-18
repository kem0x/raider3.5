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

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.UpdateHealthData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  Healths                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Shields                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHUD_TeamMemberInfo_C::UpdateHealthData(TArray<float>* Healths, TArray<float>* Shields)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.UpdateHealthData");

	UHUD_TeamMemberInfo_C_UpdateHealthData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Healths != nullptr)
		*Healths = params.Healths;
	if (Shields != nullptr)
		*Shields = params.Shields;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamMemberInfo_C::SetHealth(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth");

	UHUD_TeamMemberInfo_C_SetHealth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     UpdatedMemberInfo              (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_TeamMemberInfo_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update");

	UHUD_TeamMemberInfo_C_Update_Params params;
	params.UpdatedMemberInfo = UpdatedMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TeamMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct");

	UHUD_TeamMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_TeamMemberInfo_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.OnPlayerInfoChanged");

	UHUD_TeamMemberInfo_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamMemberInfo_C::ExecuteUbergraph_HUD_TeamMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo");

	UHUD_TeamMemberInfo_C_ExecuteUbergraph_HUD_TeamMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
