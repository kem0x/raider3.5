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

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     UpdatedMemberInfo              (BlueprintVisible, BlueprintReadOnly, Parm)

void UCinematic_TeamMics_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update");

	UCinematic_TeamMics_C_Update_Params params;
	params.UpdatedMemberInfo = UpdatedMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCinematic_TeamMics_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct");

	UCinematic_TeamMics_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCinematic_TeamMics_C::ExecuteUbergraph_Cinematic_TeamMics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics");

	UCinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
