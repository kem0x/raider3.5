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

// Function PhoneInfo.PhoneInfo_C.ClockTimerUpdate
struct UPhoneInfo_C_ClockTimerUpdate_Params
{
};

// Function PhoneInfo.PhoneInfo_C.BatteryTimerUpdate
struct UPhoneInfo_C_BatteryTimerUpdate_Params
{
};

// Function PhoneInfo.PhoneInfo_C.Construct
struct UPhoneInfo_C_Construct_Params
{
};

// Function PhoneInfo.PhoneInfo_C.On Low Perf Mode
struct UPhoneInfo_C_On_Low_Perf_Mode_Params
{
	bool                                               bInLowPerformanceMode;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhoneInfo.PhoneInfo_C.ExecuteUbergraph_PhoneInfo
struct UPhoneInfo_C_ExecuteUbergraph_PhoneInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
