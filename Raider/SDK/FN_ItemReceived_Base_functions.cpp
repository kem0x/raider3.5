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

// Function ItemReceived_Base.ItemReceived_Base_C.Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::Clicked(class UCommonButton* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Clicked");

	UItemReceived_Base_C_Clicked_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleSelectionIncrement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::HandleSelectionIncrement(bool Increment, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleSelectionIncrement");

	UItemReceived_Base_C_HandleSelectionIncrement_Params params;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleRight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Nav_Enum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::HandleRight(EUINavigation Nav_Enum, class UWidget** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleRight");

	UItemReceived_Base_C_HandleRight_Params params;
	params.Nav_Enum = Nav_Enum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation_Enum                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::HandleLeft(EUINavigation Navigation_Enum, class UWidget** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleLeft");

	UItemReceived_Base_C_HandleLeft_Params params;
	params.Navigation_Enum = Navigation_Enum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo Loot                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemReceived_Base_C::UpdateFromHoverState(const struct FFortReceivedItemLootInfo& Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromHoverState");

	UItemReceived_Base_C_UpdateFromHoverState_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.AddItemCard
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UItemCardWidget_C*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UItemCardWidget_C* UItemReceived_Base_C::AddItemCard(const struct FFortReceivedItemLootInfo& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.AddItemCard");

	UItemReceived_Base_C_AddItemCard_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromItemReceivedInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo Loot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::UpdateFromItemReceivedInfo(const struct FFortReceivedItemLootInfo& Loot, bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromItemReceivedInfo");

	UItemReceived_Base_C_UpdateFromItemReceivedInfo_Params params;
	params.Loot = Loot;
	params.Select = Select;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleBack");

	UItemReceived_Base_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemReceived_Base.ItemReceived_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.PreConstruct");

	UItemReceived_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.AnimateRollout
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::AnimateRollout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.AnimateRollout");

	UItemReceived_Base_C_AnimateRollout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Right
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Right");

	UItemReceived_Base_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Left
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Left");

	UItemReceived_Base_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.UpdateRarityFlare
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::UpdateRarityFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.UpdateRarityFlare");

	UItemReceived_Base_C_UpdateRarityFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.SelectItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CenterWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::SelectItem(int Index, bool CenterWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.SelectItem");

	UItemReceived_Base_C_SelectItem_Params params;
	params.Index = Index;
	params.CenterWidget = CenterWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.OnGiftBoxItemSet
// (Event, Public, BlueprintEvent)

void UItemReceived_Base_C::OnGiftBoxItemSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.OnGiftBoxItemSet");

	UItemReceived_Base_C_OnGiftBoxItemSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemReceived_Base_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.OnActivated");

	UItemReceived_Base_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature");

	UItemReceived_Base_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.CustomEvent_0_1
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::CustomEvent_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.CustomEvent_0_1");

	UItemReceived_Base_C_CustomEvent_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceived_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Construct");

	UItemReceived_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature");

	UItemReceived_Base_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::OnInputModeChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.OnInputModeChanged");

	UItemReceived_Base_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Check if Battlepass upgrade
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::Check_if_Battlepass_upgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Check if Battlepass upgrade");

	UItemReceived_Base_C_Check_if_Battlepass_upgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Rollout Items Received
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::Rollout_Items_Received()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Rollout Items Received");

	UItemReceived_Base_C_Rollout_Items_Received_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Play BattlePass Upgrade Anim
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::Play_BattlePass_Upgrade_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Play BattlePass Upgrade Anim");

	UItemReceived_Base_C_Play_BattlePass_Upgrade_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.OnBattlepassAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::OnBattlepassAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.OnBattlepassAnimFinished");

	UItemReceived_Base_C_OnBattlepassAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.ExecuteUbergraph_ItemReceived_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::ExecuteUbergraph_ItemReceived_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.ExecuteUbergraph_ItemReceived_Base");

	UItemReceived_Base_C_ExecuteUbergraph_ItemReceived_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.FinalOnGiftingComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::FinalOnGiftingComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.FinalOnGiftingComplete__DelegateSignature");

	UItemReceived_Base_C_FinalOnGiftingComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
