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

// Function PowerWidget.PowerWidget_C.Check For Power Change
struct UPowerWidget_C_Check_For_Power_Change_Params
{
};

// Function PowerWidget.PowerWidget_C.GetPowerRatingTooltipWidget
struct UPowerWidget_C_GetPowerRatingTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.PlayerHasTeammates
struct UPowerWidget_C_PlayerHasTeammates_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.Debug
struct UPowerWidget_C_Debug_Params
{
};

// Function PowerWidget.PowerWidget_C.SetState
struct UPowerWidget_C_SetState_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.UpdateProgress
struct UPowerWidget_C_UpdateProgress_Params
{
};

// Function PowerWidget.PowerWidget_C.Update Rating Value
struct UPowerWidget_C_Update_Rating_Value_Params
{
};

// Function PowerWidget.PowerWidget_C.OnPlayerInfoChanged
struct UPowerWidget_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PowerWidget.PowerWidget_C.PreConstruct
struct UPowerWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.Construct
struct UPowerWidget_C_Construct_Params
{
};

// Function PowerWidget.PowerWidget_C.ExecuteUbergraph_PowerWidget
struct UPowerWidget_C_ExecuteUbergraph_PowerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.Power Increased__DelegateSignature
struct UPowerWidget_C_Power_Increased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
