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

// Function QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C.GetQuestsToDisplay
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UFortQuestItem*> UQuestTrackerTrackedQuestsList_C::GetQuestsToDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C.GetQuestsToDisplay");

	UQuestTrackerTrackedQuestsList_C_GetQuestsToDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
