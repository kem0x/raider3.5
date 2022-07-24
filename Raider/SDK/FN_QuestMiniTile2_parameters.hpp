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

// Function QuestMiniTile2.QuestMiniTile2_C.UpdateQuestData
struct UQuestMiniTile2_C_UpdateQuestData_Params
{
};

// Function QuestMiniTile2.QuestMiniTile2_C.Init
struct UQuestMiniTile2_C_Init_Params
{
};

// Function QuestMiniTile2.QuestMiniTile2_C.HandleSizeOverrides
struct UQuestMiniTile2_C_HandleSizeOverrides_Params
{
};

// Function QuestMiniTile2.QuestMiniTile2_C.SetStateAndFindIncompleteQuest
struct UQuestMiniTile2_C_SetStateAndFindIncompleteQuest_Params
{
	bool                                               QuestFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile2.QuestMiniTile2_C.Update
struct UQuestMiniTile2_C_Update_Params
{
};

// Function QuestMiniTile2.QuestMiniTile2_C.PreConstruct
struct UQuestMiniTile2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile2.QuestMiniTile2_C.Construct
struct UQuestMiniTile2_C_Construct_Params
{
};

// Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature
struct UQuestMiniTile2_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestDataChangedBP
struct UQuestMiniTile2_C_HandleQuestDataChangedBP_Params
{
};

// Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature
struct UQuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile2.QuestMiniTile2_C.ExecuteUbergraph_QuestMiniTile2
struct UQuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestTileUnhovered__DelegateSignature
struct UQuestMiniTile2_C_HandleQuestTileUnhovered__DelegateSignature_Params
{
	class UFortQuestItemDefinition*                    QuestItemDef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestTileHovered__DelegateSignature
struct UQuestMiniTile2_C_HandleQuestTileHovered__DelegateSignature_Params
{
	class UFortQuestItemDefinition*                    QuestItemDef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
