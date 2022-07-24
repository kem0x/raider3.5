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

// Function MissionVoteNotification.MissionVoteNotification_C.TakeAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMissionVoteNotification_C::TakeAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVoteNotification.MissionVoteNotification_C.TakeAction");

	UMissionVoteNotification_C_TakeAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVoteNotification.MissionVoteNotification_C.ExecuteUbergraph_MissionVoteNotification
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionVoteNotification_C::ExecuteUbergraph_MissionVoteNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVoteNotification.MissionVoteNotification_C.ExecuteUbergraph_MissionVoteNotification");

	UMissionVoteNotification_C_ExecuteUbergraph_MissionVoteNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
