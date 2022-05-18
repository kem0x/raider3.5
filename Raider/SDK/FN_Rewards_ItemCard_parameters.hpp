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

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetQuantityOverride
struct URewards_ItemCard_C_SetQuantityOverride_Params
{
	int                                                QuantityOverride;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOutpostInventoryNotification
struct URewards_ItemCard_C_SetOutpostInventoryNotification_Params
{
	bool                                               ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOpaque
struct URewards_ItemCard_C_SetOpaque_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SkipPopInAnimation
struct URewards_ItemCard_C_SkipPopInAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetTransparent
struct URewards_ItemCard_C_SetTransparent_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySecondaryPopInAnimation
struct URewards_ItemCard_C_PlaySecondaryPopInAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayPrimaryPopInAnimation
struct URewards_ItemCard_C_PlayPrimaryPopInAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.GetDropShadowDepth
struct URewards_ItemCard_C_GetDropShadowDepth_Params
{
	float                                              DropShadowDepth;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDropShadow
struct URewards_ItemCard_C_InitDropShadow_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowSize
struct URewards_ItemCard_C_SetDropShadowSize_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowDepth
struct URewards_ItemCard_C_SetDropShadowDepth_Params
{
	float                                              ShadowDepth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.HideDropShadow
struct URewards_ItemCard_C_HideDropShadow_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.ShowDropShadow
struct URewards_ItemCard_C_ShowDropShadow_Params
{
	float                                              ShadowDepth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.StartResizeAnimation
struct URewards_ItemCard_C_StartResizeAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeUp
struct URewards_ItemCard_C_SizeUp_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DropShadowDepth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.TickResizeAnimation
struct URewards_ItemCard_C_TickResizeAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeDown
struct URewards_ItemCard_C_SizeDown_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DropShadowDepth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.GetCardSize
struct URewards_ItemCard_C_GetCardSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.GetItemToRepresent
struct URewards_ItemCard_C_GetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.HandlePopInAnimationFinished
struct URewards_ItemCard_C_HandlePopInAnimationFinished_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetInspectAction
struct URewards_ItemCard_C_SetInspectAction_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.TickScaleAnimation
struct URewards_ItemCard_C_TickScaleAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayScaleAnimation
struct URewards_ItemCard_C_PlayScaleAnimation_Params
{
	float                                              TargetScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DropShadowDepth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.StartSlideAnimation
struct URewards_ItemCard_C_StartSlideAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.EndSlideAnimation
struct URewards_ItemCard_C_EndSlideAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySlideAnimation
struct URewards_ItemCard_C_PlaySlideAnimation_Params
{
	struct FVector2D                                   TargetAlignment;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnchors                                    TargetAnchors;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TargetScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDelay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TargetTranslation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.TickSlideAnimation
struct URewards_ItemCard_C_TickSlideAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetItemToRepresent
struct URewards_ItemCard_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDesignView
struct URewards_ItemCard_C_InitDesignView_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PreConstruct
struct URewards_ItemCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct URewards_ItemCard_C_BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.Construct
struct URewards_ItemCard_C_Construct_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.ExecuteUbergraph_Rewards_ItemCard
struct URewards_ItemCard_C_ExecuteUbergraph_Rewards_ItemCard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnPopInAnimationFinished__DelegateSignature
struct URewards_ItemCard_C_OnPopInAnimationFinished__DelegateSignature_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnResizeAnimationFinished__DelegateSignature
struct URewards_ItemCard_C_OnResizeAnimationFinished__DelegateSignature_Params
{
	class URewards_ItemCard_C*                         RewardsItemCard;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnInspectClicked__DelegateSignature
struct URewards_ItemCard_C_OnInspectClicked__DelegateSignature_Params
{
	class URewards_ItemCard_C*                         Card;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnSlideAnimationFinished__DelegateSignature
struct URewards_ItemCard_C_OnSlideAnimationFinished__DelegateSignature_Params
{
	class URewards_ItemCard_C*                         RewardsItemCard;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
