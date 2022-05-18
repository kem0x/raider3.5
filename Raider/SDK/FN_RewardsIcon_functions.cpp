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

// Function RewardsIcon.RewardsIcon_C.PopulateFromGiftBoxData
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromGiftBoxData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromGiftBoxData");

	URewardsIcon_C_PopulateFromGiftBoxData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromDifficultyIncreaseRewards
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromDifficultyIncreaseRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromDifficultyIncreaseRewards");

	URewardsIcon_C_PopulateFromDifficultyIncreaseRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromMissionAlertRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromMissionAlertRewards");

	URewardsIcon_C_PopulateFromMissionAlertRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.Play Show Animation Sound
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::Play_Show_Animation_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.Play Show Animation Sound");

	URewardsIcon_C_Play_Show_Animation_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.Play Hide Animation Sound
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::Play_Hide_Animation_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.Play Hide Animation Sound");

	URewardsIcon_C_Play_Hide_Animation_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PlayShowAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PlayShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PlayShowAnimation");

	URewardsIcon_C_PlayShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.On_ImageIcon_MouseButtonDown_0_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply URewardsIcon_C::On_ImageIcon_MouseButtonDown_0_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.On_ImageIcon_MouseButtonDown_0_1");

	URewardsIcon_C_On_ImageIcon_MouseButtonDown_0_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function RewardsIcon.RewardsIcon_C.RandomizeDesignView
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::RandomizeDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.RandomizeDesignView");

	URewardsIcon_C_RandomizeDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromRandomLootLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::PopulateFromRandomLootLevel(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromRandomLootLevel");

	URewardsIcon_C_PopulateFromRandomLootLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromCollectionBookRewards
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromCollectionBookRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromCollectionBookRewards");

	URewardsIcon_C_PopulateFromCollectionBookRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromExpedition
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromExpedition");

	URewardsIcon_C_PopulateFromExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromNewQuest
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromNewQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromNewQuest");

	URewardsIcon_C_PopulateFromNewQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromQuestRewards
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromQuestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromQuestRewards");

	URewardsIcon_C_PopulateFromQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionRewards
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PopulateFromMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromMissionRewards");

	URewardsIcon_C_PopulateFromMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.GetScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::GetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.GetScale");

	URewardsIcon_C_GetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function RewardsIcon.RewardsIcon_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::SetScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.SetScale");

	URewardsIcon_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromLootLevel
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LootLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::PopulateFromLootLevel(int LootLevel, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromLootLevel");

	URewardsIcon_C_PopulateFromLootLevel_Params params;
	params.LootLevel = LootLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function RewardsIcon.RewardsIcon_C.PlaySlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetTranslation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::PlaySlideAnimation(float TargetTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PlaySlideAnimation");

	URewardsIcon_C_PlaySlideAnimation_Params params;
	params.TargetTranslation = TargetTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.TickSlideAnimation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::TickSlideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.TickSlideAnimation");

	URewardsIcon_C_TickSlideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.HandleSlideAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::HandleSlideAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.HandleSlideAnimationFinished");

	URewardsIcon_C_HandleSlideAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.HandleShowAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::HandleShowAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.HandleShowAnimationFinished");

	URewardsIcon_C_HandleShowAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.HandleHideAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::HandleHideAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.HandleHideAnimationFinished");

	URewardsIcon_C_HandleHideAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PopulateFromReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* InRewardItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::PopulateFromReward(class UFortRewardNotificationData* InRewardItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PopulateFromReward");

	URewardsIcon_C_PopulateFromReward_Params params;
	params.InRewardItem = InRewardItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.Cleanup");

	URewardsIcon_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PlayHideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::PlayHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PlayHideAnimation");

	URewardsIcon_C_PlayHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URewardsIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.Construct");

	URewardsIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.PreConstruct");

	URewardsIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.whiteFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::whiteFadeOut(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.whiteFadeOut");

	URewardsIcon_C_whiteFadeOut_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.ExecuteUbergraph_RewardsIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardsIcon_C::ExecuteUbergraph_RewardsIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.ExecuteUbergraph_RewardsIcon");

	URewardsIcon_C_ExecuteUbergraph_RewardsIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.OnImageClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URewardsIcon_C::OnImageClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.OnImageClicked__DelegateSignature");

	URewardsIcon_C_OnImageClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.OnMaterializeAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewardsIcon_C::OnMaterializeAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.OnMaterializeAnimationFinished__DelegateSignature");

	URewardsIcon_C_OnMaterializeAnimationFinished__DelegateSignature_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.OnDisperseAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewardsIcon_C::OnDisperseAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.OnDisperseAnimationFinished__DelegateSignature");

	URewardsIcon_C_OnDisperseAnimationFinished__DelegateSignature_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsIcon.RewardsIcon_C.OnSlideAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewardsIcon_C::OnSlideAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsIcon.RewardsIcon_C.OnSlideAnimationFinished__DelegateSignature");

	URewardsIcon_C_OnSlideAnimationFinished__DelegateSignature_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
