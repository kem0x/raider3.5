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

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.GetFortPC
struct UBP_QuestExpiresWidget_C_GetFortPC_Params
{
	class AFortPlayerController*                       AsFort_Player_Controller;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.Refresh Expiration Timer
struct UBP_QuestExpiresWidget_C_Refresh_Expiration_Timer_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.PreConstruct
struct UBP_QuestExpiresWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.SetData
struct UBP_QuestExpiresWidget_C_SetData_Params
{
	class UFortQuestItem**                             InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.OnQuestExpirationUpdated
struct UBP_QuestExpiresWidget_C_OnQuestExpirationUpdated_Params
{
};

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.ExecuteUbergraph_BP_QuestExpiresWidget
struct UBP_QuestExpiresWidget_C_ExecuteUbergraph_BP_QuestExpiresWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
