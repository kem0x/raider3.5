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

// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
struct UObjectivesPage_C_MissionHasModifiers_Params
{
	bool                                               MissionHasModifiers;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
struct UObjectivesPage_C_ConfigureModifiersView_Params
{
	bool                                               ShowModifiers;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
struct UObjectivesPage_C_HandleInventory_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
struct UObjectivesPage_C_HandleSelectedButtonChanged_Params
{
	class UCommonButton*                               InButton;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InButtonIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.HandleBack
struct UObjectivesPage_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.Construct
struct UObjectivesPage_C_Construct_Params
{
};

// Function ObjectivesPage.ObjectivesPage_C.OnActivated
struct UObjectivesPage_C_OnActivated_Params
{
};

// Function ObjectivesPage.ObjectivesPage_C.Destruct
struct UObjectivesPage_C_Destruct_Params
{
};

// Function ObjectivesPage.ObjectivesPage_C.OnActiveGameplayModifiersChanged_Event_0_1
struct UObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0_1_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
struct UObjectivesPage_C_ExecuteUbergraph_ObjectivesPage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
