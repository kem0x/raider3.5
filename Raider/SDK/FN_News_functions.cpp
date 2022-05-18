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

// Function News.News_C.UpdateInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   BodyText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UNews_C::UpdateInfoPanel(const struct FText& BodyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.UpdateInfoPanel");

	UNews_C_UpdateInfoPanel_Params params;
	params.BodyText = BodyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNews_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.Init");

	UNews_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.PopulateEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNews_C::PopulateEntries(bool* isEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.PopulateEntries");

	UNews_C_PopulateEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isEmpty != nullptr)
		*isEmpty = params.isEmpty;
}


// Function News.News_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   inEntryText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNews_C::AddEntry(const struct FText& inEntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.AddEntry");

	UNews_C_AddEntry_Params params;
	params.inEntryText = inEntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNews_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	UNews_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNews_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.Construct");

	UNews_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function News.News_C.ExecuteUbergraph_News
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNews_C::ExecuteUbergraph_News(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function News.News_C.ExecuteUbergraph_News");

	UNews_C_ExecuteUbergraph_News_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
