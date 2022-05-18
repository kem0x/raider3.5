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

// Function InfoWindow.InfoWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UInfoWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.Initialize");

	UInfoWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.AddInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> Info_Items                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UInfoWindow_C::AddInfo(const struct FText& Title, TArray<class UFortItemDefinition*>* Info_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.AddInfo");

	UInfoWindow_C_AddInfo_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info_Items != nullptr)
		*Info_Items = params.Info_Items;
}


// Function InfoWindow.InfoWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInfoWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	UInfoWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInfoWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.Construct");

	UInfoWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInfoWindow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.Destruct");

	UInfoWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature
// (BlueprintEvent)

void UInfoWindow_C::BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature");

	UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature
// (BlueprintEvent)

void UInfoWindow_C::BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature");

	UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UInfoWindow_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.OnBeginOutro");

	UInfoWindow_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UInfoWindow_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.OnBeginIntro");

	UInfoWindow_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInfoWindow_C::BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature");

	UInfoWindow_C_BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.Set Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     Entry_Item_Definition          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInfoWindow_C::Set_Info(class UFortItemDefinition* Entry_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.Set Info");

	UInfoWindow_C_Set_Info_Params params;
	params.Entry_Item_Definition = Entry_Item_Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoWindow.InfoWindow_C.ExecuteUbergraph_InfoWindow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInfoWindow_C::ExecuteUbergraph_InfoWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoWindow.InfoWindow_C.ExecuteUbergraph_InfoWindow");

	UInfoWindow_C_ExecuteUbergraph_InfoWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
