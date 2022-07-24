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

// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.PreConstruct
struct UAthenaTeamCountWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.SetTeamSlotData
struct UAthenaTeamCountWidget_C_SetTeamSlotData_Params
{
	int*                                               TeamIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAthenaTeamCountSlotData*                   TeamSlotData;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.ExecuteUbergraph_AthenaTeamCountWidget
struct UAthenaTeamCountWidget_C_ExecuteUbergraph_AthenaTeamCountWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
