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

// Function MissionVoter.MissionVoter_C.SetVoterData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoter                  Voter                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMissionVoter_C::SetVoterData(const struct FVoter& Voter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVoter.MissionVoter_C.SetVoterData");

	UMissionVoter_C_SetVoterData_Params params;
	params.Voter = Voter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
