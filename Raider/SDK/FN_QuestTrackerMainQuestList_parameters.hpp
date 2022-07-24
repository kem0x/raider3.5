#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuestTrackerMainQuestList.QuestTrackerMainQuestList_C.GetQuestsToDisplay
struct UQuestTrackerMainQuestList_C_GetQuestsToDisplay_Params
{
	TArray<class UFortQuestItem*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
