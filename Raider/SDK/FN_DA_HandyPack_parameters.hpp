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

// Function DA_HandyPack.DA_HandyPack_C.UserConstructionScript
struct ADA_HandyPack_C_UserConstructionScript_Params
{
};

// Function DA_HandyPack.DA_HandyPack_C.BPPressTrigger
struct ADA_HandyPack_C_BPPressTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_HandyPack.DA_HandyPack_C.BPReleaseTrigger
struct ADA_HandyPack_C_BPReleaseTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_HandyPack.DA_HandyPack_C.ExecuteUbergraph_DA_HandyPack
struct ADA_HandyPack_C_ExecuteUbergraph_DA_HandyPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
