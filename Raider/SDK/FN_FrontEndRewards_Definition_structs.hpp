#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FrontEndRewards_Definition.FrontEndRewards_Definition
// 0x004A
struct FFrontEndRewards_Definition
{
	bool                                               ShowMissionRewards_1_C7BDE40E456913658E82C99BDF716FD0;    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowMissionAlertRewards_16_45DFCE744858A450CF7A6F8DDB3019E2;// 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class UFortQuestItem*>                      CompletedQuests_5_F0B57A5444C985942CB6438097704985;       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortQuestItem*>                      NewQuests_7_9B70ABD44C42EFEED67C05BAA7B44AC7;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortExpeditionItem*>                 Expeditions_10_F1E594504A730C86DC1574996D8CD6F5;          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFortCollectionBookRewards>          CollectionBookRewards_14_257477CC44DB7B3E9CE221BEFD80F48E;// 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ShowDifficultyIncreaseRewards_23_65788A384F15925597F8D2BC507844A4;// 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewGiftBoxes_25_8CF5BBD04ED2FF67BBD1278A910766B6;         // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
