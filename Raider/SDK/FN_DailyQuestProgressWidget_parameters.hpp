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

// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.Update
struct UDailyQuestProgressWidget_C_Update_Params
{
	int                                                Required;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Achieved;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.Construct
struct UDailyQuestProgressWidget_C_Construct_Params
{
};

// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.ExecuteUbergraph_DailyQuestProgressWidget
struct UDailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
