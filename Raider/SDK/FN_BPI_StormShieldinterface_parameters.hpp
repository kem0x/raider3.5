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

// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
struct UBPI_StormShieldInterface_C_GetOutpostReadyState_Params
{
	bool                                               ReadyToExpand;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReadyToInstallAmplifier;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
struct UBPI_StormShieldInterface_C_CanLeaveOutpost_Params
{
	bool                                               AllowedToLeave;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
