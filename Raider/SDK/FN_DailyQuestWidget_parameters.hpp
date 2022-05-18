#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DailyQuestWidget.DailyQuestWidget_C.Entrance Anim
struct UDailyQuestWidget_C_Entrance_Anim_Params
{
};

// Function DailyQuestWidget.DailyQuestWidget_C.Collect Anim
struct UDailyQuestWidget_C_Collect_Anim_Params
{
};

// Function DailyQuestWidget.DailyQuestWidget_C.Completed State
struct UDailyQuestWidget_C_Completed_State_Params
{
};

// Function DailyQuestWidget.DailyQuestWidget_C.UpdateProgress
struct UDailyQuestWidget_C_UpdateProgress_Params
{
};

// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
struct UDailyQuestWidget_C_SetQuestItem_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
