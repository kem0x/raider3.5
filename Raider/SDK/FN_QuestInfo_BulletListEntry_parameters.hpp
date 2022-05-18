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

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder
struct UQuestInfo_BulletListEntry_C_ShowBorder_Params
{
};

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize
struct UQuestInfo_BulletListEntry_C_CalcBrushSize_Params
{
	struct FVector2D                                   InImageSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush
struct UQuestInfo_BulletListEntry_C_InitBrush_Params
{
	struct FText                                       EntryText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 EntryIconBrush;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet
struct UQuestInfo_BulletListEntry_C_InitBullet_Params
{
	struct FText                                       EntryText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
