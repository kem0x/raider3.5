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

// Function MissionRichText.MissionRichText_C.Update
struct UMissionRichText_C_Update_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MissionRichText.MissionRichText_C.Construct
struct UMissionRichText_C_Construct_Params
{
};

// Function MissionRichText.MissionRichText_C.ExecuteUbergraph_MissionRichText
struct UMissionRichText_C_ExecuteUbergraph_MissionRichText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
