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

// Function RewardsIcon.RewardsIcon_C.PopulateFromGiftBoxData
struct URewardsIcon_C_PopulateFromGiftBoxData_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromDifficultyIncreaseRewards
struct URewardsIcon_C_PopulateFromDifficultyIncreaseRewards_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionAlertRewards
struct URewardsIcon_C_PopulateFromMissionAlertRewards_Params
{
};

// Function RewardsIcon.RewardsIcon_C.Play Show Animation Sound
struct URewardsIcon_C_Play_Show_Animation_Sound_Params
{
};

// Function RewardsIcon.RewardsIcon_C.Play Hide Animation Sound
struct URewardsIcon_C_Play_Hide_Animation_Sound_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PlayShowAnimation
struct URewardsIcon_C_PlayShowAnimation_Params
{
};

// Function RewardsIcon.RewardsIcon_C.On_ImageIcon_MouseButtonDown_0_1
struct URewardsIcon_C_On_ImageIcon_MouseButtonDown_0_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RewardsIcon.RewardsIcon_C.RandomizeDesignView
struct URewardsIcon_C_RandomizeDesignView_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromRandomLootLevel
struct URewardsIcon_C_PopulateFromRandomLootLevel_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromCollectionBookRewards
struct URewardsIcon_C_PopulateFromCollectionBookRewards_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromExpedition
struct URewardsIcon_C_PopulateFromExpedition_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromNewQuest
struct URewardsIcon_C_PopulateFromNewQuest_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromQuestRewards
struct URewardsIcon_C_PopulateFromQuestRewards_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionRewards
struct URewardsIcon_C_PopulateFromMissionRewards_Params
{
};

// Function RewardsIcon.RewardsIcon_C.GetScale
struct URewardsIcon_C_GetScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.SetScale
struct URewardsIcon_C_SetScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromLootLevel
struct URewardsIcon_C_PopulateFromLootLevel_Params
{
	int                                                LootLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.PlaySlideAnimation
struct URewardsIcon_C_PlaySlideAnimation_Params
{
	float                                              TargetTranslation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.TickSlideAnimation
struct URewardsIcon_C_TickSlideAnimation_Params
{
};

// Function RewardsIcon.RewardsIcon_C.HandleSlideAnimationFinished
struct URewardsIcon_C_HandleSlideAnimationFinished_Params
{
};

// Function RewardsIcon.RewardsIcon_C.HandleShowAnimationFinished
struct URewardsIcon_C_HandleShowAnimationFinished_Params
{
};

// Function RewardsIcon.RewardsIcon_C.HandleHideAnimationFinished
struct URewardsIcon_C_HandleHideAnimationFinished_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PopulateFromReward
struct URewardsIcon_C_PopulateFromReward_Params
{
	class UFortRewardNotificationData*                 InRewardItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.Cleanup
struct URewardsIcon_C_Cleanup_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PlayHideAnimation
struct URewardsIcon_C_PlayHideAnimation_Params
{
};

// Function RewardsIcon.RewardsIcon_C.Construct
struct URewardsIcon_C_Construct_Params
{
};

// Function RewardsIcon.RewardsIcon_C.PreConstruct
struct URewardsIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.whiteFadeOut
struct URewardsIcon_C_whiteFadeOut_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.ExecuteUbergraph_RewardsIcon
struct URewardsIcon_C_ExecuteUbergraph_RewardsIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.OnImageClicked__DelegateSignature
struct URewardsIcon_C_OnImageClicked__DelegateSignature_Params
{
};

// Function RewardsIcon.RewardsIcon_C.OnMaterializeAnimationFinished__DelegateSignature
struct URewardsIcon_C_OnMaterializeAnimationFinished__DelegateSignature_Params
{
	class URewardsIcon_C*                              Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.OnDisperseAnimationFinished__DelegateSignature
struct URewardsIcon_C_OnDisperseAnimationFinished__DelegateSignature_Params
{
	class URewardsIcon_C*                              Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RewardsIcon.RewardsIcon_C.OnSlideAnimationFinished__DelegateSignature
struct URewardsIcon_C_OnSlideAnimationFinished__DelegateSignature_Params
{
	class URewardsIcon_C*                              Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
