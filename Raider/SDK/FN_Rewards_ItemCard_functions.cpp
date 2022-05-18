// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetQuantityOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuantityOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::SetQuantityOverride(int QuantityOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetQuantityOverride");

	URewards_ItemCard_C_SetQuantityOverride_Params params;
	params.QuantityOverride = QuantityOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOutpostInventoryNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::SetOutpostInventoryNotification(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetOutpostInventoryNotification");

	URewards_ItemCard_C_SetOutpostInventoryNotification_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOpaque
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::SetOpaque()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetOpaque");

	URewards_ItemCard_C_SetOpaque_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SkipPopInAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::SkipPopInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SkipPopInAnimation");

	URewards_ItemCard_C_SkipPopInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetTransparent
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::SetTransparent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetTransparent");

	URewards_ItemCard_C_SetTransparent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySecondaryPopInAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::PlaySecondaryPopInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySecondaryPopInAnimation");

	URewards_ItemCard_C_PlaySecondaryPopInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayPrimaryPopInAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::PlayPrimaryPopInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.PlayPrimaryPopInAnimation");

	URewards_ItemCard_C_PlayPrimaryPopInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetDropShadowDepth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DropShadowDepth                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::GetDropShadowDepth(float* DropShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.GetDropShadowDepth");

	URewards_ItemCard_C_GetDropShadowDepth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropShadowDepth != nullptr)
		*DropShadowDepth = params.DropShadowDepth;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDropShadow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::InitDropShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.InitDropShadow");

	URewards_ItemCard_C_InitDropShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::SetDropShadowSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowSize");

	URewards_ItemCard_C_SetDropShadowSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowDepth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShadowDepth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::SetDropShadowDepth(float ShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowDepth");

	URewards_ItemCard_C_SetDropShadowDepth_Params params;
	params.ShadowDepth = ShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.HideDropShadow
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::HideDropShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.HideDropShadow");

	URewards_ItemCard_C_HideDropShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.ShowDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShadowDepth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::ShowDropShadow(float ShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.ShowDropShadow");

	URewards_ItemCard_C_ShowDropShadow_Params params;
	params.ShadowDepth = ShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.StartResizeAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::StartResizeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.StartResizeAnimation");

	URewards_ItemCard_C_StartResizeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DropShadowDepth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::SizeUp(float Duration, float Delay, float DropShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SizeUp");

	URewards_ItemCard_C_SizeUp_Params params;
	params.Duration = Duration;
	params.Delay = Delay;
	params.DropShadowDepth = DropShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickResizeAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::TickResizeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.TickResizeAnimation");

	URewards_ItemCard_C_TickResizeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DropShadowDepth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::SizeDown(float Duration, float Delay, float DropShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SizeDown");

	URewards_ItemCard_C_SizeDown_Params params;
	params.Duration = Duration;
	params.Delay = Delay;
	params.DropShadowDepth = DropShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetCardSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D URewards_ItemCard_C::GetCardSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.GetCardSize");

	URewards_ItemCard_C_GetCardSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetItemToRepresent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               ItemToRepresent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::GetItemToRepresent(class UFortItem** ItemToRepresent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.GetItemToRepresent");

	URewards_ItemCard_C_GetItemToRepresent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemToRepresent != nullptr)
		*ItemToRepresent = params.ItemToRepresent;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.HandlePopInAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::HandlePopInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.HandlePopInAnimationFinished");

	URewards_ItemCard_C_HandlePopInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetInspectAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::SetInspectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetInspectAction");

	URewards_ItemCard_C_SetInspectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickScaleAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::TickScaleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.TickScaleAnimation");

	URewards_ItemCard_C_TickScaleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayScaleAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DropShadowDepth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::PlayScaleAnimation(float TargetScale, float Duration, float DropShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.PlayScaleAnimation");

	URewards_ItemCard_C_PlayScaleAnimation_Params params;
	params.TargetScale = TargetScale;
	params.Duration = Duration;
	params.DropShadowDepth = DropShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.StartSlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::StartSlideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.StartSlideAnimation");

	URewards_ItemCard_C_StartSlideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.EndSlideAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::EndSlideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.EndSlideAnimation");

	URewards_ItemCard_C_EndSlideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               TargetAlignment                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnchors                TargetAnchors                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TargetScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDelay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TargetTranslation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void URewards_ItemCard_C::PlaySlideAnimation(const struct FVector2D& TargetAlignment, const struct FAnchors& TargetAnchors, float TargetScale, float TargetOffset, float TargetAngle, float Duration, float StaggerDelay, const struct FVector2D& TargetTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySlideAnimation");

	URewards_ItemCard_C_PlaySlideAnimation_Params params;
	params.TargetAlignment = TargetAlignment;
	params.TargetAnchors = TargetAnchors;
	params.TargetScale = TargetScale;
	params.TargetOffset = TargetOffset;
	params.TargetAngle = TargetAngle;
	params.Duration = Duration;
	params.StaggerDelay = StaggerDelay;
	params.TargetTranslation = TargetTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickSlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::TickSlideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.TickSlideAnimation");

	URewards_ItemCard_C_TickSlideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.SetItemToRepresent");

	URewards_ItemCard_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDesignView
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::InitDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.InitDesignView");

	URewards_ItemCard_C_InitDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.PreConstruct");

	URewards_ItemCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewards_ItemCard_C::BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	URewards_ItemCard_C_BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URewards_ItemCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.Construct");

	URewards_ItemCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.ExecuteUbergraph_Rewards_ItemCard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewards_ItemCard_C::ExecuteUbergraph_Rewards_ItemCard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.ExecuteUbergraph_Rewards_ItemCard");

	URewards_ItemCard_C_ExecuteUbergraph_Rewards_ItemCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnPopInAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URewards_ItemCard_C::OnPopInAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.OnPopInAnimationFinished__DelegateSignature");

	URewards_ItemCard_C_OnPopInAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnResizeAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewards_ItemCard_C::OnResizeAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.OnResizeAnimationFinished__DelegateSignature");

	URewards_ItemCard_C_OnResizeAnimationFinished__DelegateSignature_Params params;
	params.RewardsItemCard = RewardsItemCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnInspectClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewards_ItemCard_C::OnInspectClicked__DelegateSignature(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.OnInspectClicked__DelegateSignature");

	URewards_ItemCard_C_OnInspectClicked__DelegateSignature_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnSlideAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewards_ItemCard_C::OnSlideAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rewards_ItemCard.Rewards_ItemCard_C.OnSlideAnimationFinished__DelegateSignature");

	URewards_ItemCard_C_OnSlideAnimationFinished__DelegateSignature_Params params;
	params.RewardsItemCard = RewardsItemCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
