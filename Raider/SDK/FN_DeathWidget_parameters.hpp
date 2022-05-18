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

// Function DeathWidget.DeathWidget_C.Show Resurrect & Respawn Anim
struct UDeathWidget_C_Show_Resurrect___Respawn_Anim_Params
{
};

// Function DeathWidget.DeathWidget_C.Prompt Out Anim
struct UDeathWidget_C_Prompt_Out_Anim_Params
{
};

// Function DeathWidget.DeathWidget_C.Resurrection Prompt Anim
struct UDeathWidget_C_Resurrection_Prompt_Anim_Params
{
};

// Function DeathWidget.DeathWidget_C.YouDied Anim
struct UDeathWidget_C_YouDied_Anim_Params
{
};

// Function DeathWidget.DeathWidget_C.ShowExtraLivesText
struct UDeathWidget_C_ShowExtraLivesText_Params
{
};

// Function DeathWidget.DeathWidget_C.SetRespawnTimerText
struct UDeathWidget_C_SetRespawnTimerText_Params
{
};

// Function DeathWidget.DeathWidget_C.OnRespawnTimerUpdate
struct UDeathWidget_C_OnRespawnTimerUpdate_Params
{
};

// Function DeathWidget.DeathWidget_C.ConfigureRespawnTimer
struct UDeathWidget_C_ConfigureRespawnTimer_Params
{
	float                                              ServerRespawnTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerResurrectTime;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathWidget.DeathWidget_C.OnPawnDied
struct UDeathWidget_C_OnPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DeathWidget.DeathWidget_C.OnPawnSpawned
struct UDeathWidget_C_OnPawnSpawned_Params
{
};

// Function DeathWidget.DeathWidget_C.Construct
struct UDeathWidget_C_Construct_Params
{
};

// Function DeathWidget.DeathWidget_C.ExecuteUbergraph_DeathWidget
struct UDeathWidget_C_ExecuteUbergraph_DeathWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
