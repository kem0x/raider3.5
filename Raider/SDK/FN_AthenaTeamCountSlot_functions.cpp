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

// Function AthenaTeamCountSlot.AthenaTeamCountSlot_C.SetTeamSlotData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaTeamCountSlotData TeamSlotData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaTeamCountSlot_C::SetTeamSlotData(const struct FAthenaTeamCountSlotData& TeamSlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamCountSlot.AthenaTeamCountSlot_C.SetTeamSlotData");

	UAthenaTeamCountSlot_C_SetTeamSlotData_Params params;
	params.TeamSlotData = TeamSlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
