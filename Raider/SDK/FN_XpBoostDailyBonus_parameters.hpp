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

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
struct UXpBoostDailyBonus_C_Update_Daily_Bonus_Params
{
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.OnPlayerInfoChanged
struct UXpBoostDailyBonus_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
struct UXpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Boost Amount Changed__DelegateSignature
struct UXpBoostDailyBonus_C_Boost_Amount_Changed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
