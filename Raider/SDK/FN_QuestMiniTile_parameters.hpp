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

// Function QuestMiniTile.QuestMiniTile_C.HandleSizeOverrides
struct UQuestMiniTile_C_HandleSizeOverrides_Params
{
};

// Function QuestMiniTile.QuestMiniTile_C.SetStateAndFindIncompleteQuest
struct UQuestMiniTile_C_SetStateAndFindIncompleteQuest_Params
{
	bool                                               QuestFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.PlayTileAnimation
struct UQuestMiniTile_C_PlayTileAnimation_Params
{
};

// Function QuestMiniTile.QuestMiniTile_C.ToggleCurrentQuestTileTimer
struct UQuestMiniTile_C_ToggleCurrentQuestTileTimer_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.SetState
struct UQuestMiniTile_C_SetState_Params
{
	class UFortQuestItem*                              InCurrentQuest;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.Init
struct UQuestMiniTile_C_Init_Params
{
};

// Function QuestMiniTile.QuestMiniTile_C.PreConstruct
struct UQuestMiniTile_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature
struct UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
struct UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_4_CommonSelectedStateChanged__DelegateSignature
struct UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_4_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.Construct
struct UQuestMiniTile_C_Construct_Params
{
};

// Function QuestMiniTile.QuestMiniTile_C.ExecuteUbergraph_QuestMiniTile
struct UQuestMiniTile_C_ExecuteUbergraph_QuestMiniTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.HandleQuestTileUnhovered__DelegateSignature
struct UQuestMiniTile_C_HandleQuestTileUnhovered__DelegateSignature_Params
{
	class UFortQuestItemDefinition*                    QuestItemDef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.HandleQuestTileHovered__DelegateSignature
struct UQuestMiniTile_C_HandleQuestTileHovered__DelegateSignature_Params
{
	class UFortQuestItemDefinition*                    QuestItemDef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
