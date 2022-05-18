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

// Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemCardWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived");

	UItemCardWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemCardWidget.ItemCardWidget_C.OnCentered
// (BlueprintCallable, BlueprintEvent)

void UItemCardWidget_C::OnCentered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.OnCentered");

	UItemCardWidget_C_OnCentered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCardWidget.ItemCardWidget_C.PlayShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCardWidget_C::PlayShow(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.PlayShow");

	UItemCardWidget_C_PlayShow_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCardWidget.ItemCardWidget_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemCardWidget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.OnFocusLost");

	UItemCardWidget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCardWidget.ItemCardWidget_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UItemCardWidget_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.OnHovered");

	UItemCardWidget_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCardWidget.ItemCardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.Construct");

	UItemCardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCardWidget_C::ExecuteUbergraph_ItemCardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget");

	UItemCardWidget_C_ExecuteUbergraph_ItemCardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemCardWidget_C::OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature");

	UItemCardWidget_C_OnHoveredEvent__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
