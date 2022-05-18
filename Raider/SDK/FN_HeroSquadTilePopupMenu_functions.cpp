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

// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.GetItemInSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeroSquadTilePopupMenu_C::GetItemInSlot(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.GetItemInSlot");

	UHeroSquadTilePopupMenu_C_GetItemInSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.SetViewAllText
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::SetViewAllText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.SetViewAllText");

	UHeroSquadTilePopupMenu_C_SetViewAllText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnActivated");

	UHeroSquadTilePopupMenu_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeroSquadTilePopupMenu_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	UHeroSquadTilePopupMenu_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.Construct");

	UHeroSquadTilePopupMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeroSquadTilePopupMenu_C::BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	UHeroSquadTilePopupMenu_C_BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnBeginOutro");

	UHeroSquadTilePopupMenu_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnBeginIntro");

	UHeroSquadTilePopupMenu_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeroSquadTilePopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature");

	UHeroSquadTilePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UHeroSquadTilePopupMenu_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UHeroSquadTilePopupMenu_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeroSquadTilePopupMenu_C::BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature");

	UHeroSquadTilePopupMenu_C_BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeroSquadTilePopupMenu_C::BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature");

	UHeroSquadTilePopupMenu_C_BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.HandlePostDifferentContextProviderSet
// (Event, Protected, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::HandlePostDifferentContextProviderSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.HandlePostDifferentContextProviderSet");

	UHeroSquadTilePopupMenu_C_HandlePostDifferentContextProviderSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.Initialize");

	UHeroSquadTilePopupMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UHeroSquadTilePopupMenu_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnDeactivated");

	UHeroSquadTilePopupMenu_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.ExecuteUbergraph_HeroSquadTilePopupMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadTilePopupMenu_C::ExecuteUbergraph_HeroSquadTilePopupMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.ExecuteUbergraph_HeroSquadTilePopupMenu");

	UHeroSquadTilePopupMenu_C_ExecuteUbergraph_HeroSquadTilePopupMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
