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

// Function NewsEntry.NewsEntry_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UNewsEntry_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewsEntry.NewsEntry_C.SetFocus");

	UNewsEntry_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewsEntry.NewsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewsEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewsEntry.NewsEntry_C.Construct");

	UNewsEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNewsEntry_C::BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature");

	UNewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewsEntry_C::ExecuteUbergraph_NewsEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry");

	UNewsEntry_C_ExecuteUbergraph_NewsEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   BodyText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewsEntry_C::HandleEntrySelected__DelegateSignature(const struct FText& BodyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature");

	UNewsEntry_C_HandleEntrySelected__DelegateSignature_Params params;
	params.BodyText = BodyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
