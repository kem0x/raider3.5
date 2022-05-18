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

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.ResetAdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)

void UHelpEntryBodyWidget_C::ResetAdditionalContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.ResetAdditionalContent");

	UHelpEntryBodyWidget_C_ResetAdditionalContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalImage
// (Public, BlueprintCallable, BlueprintEvent)

void UHelpEntryBodyWidget_C::UpdateAdditionalImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalImage");

	UHelpEntryBodyWidget_C_UpdateAdditionalImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UHelpEntryBodyWidget_C::UpdateAdditionalWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalWidget");

	UHelpEntryBodyWidget_C_UpdateAdditionalWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateBodyText
// (Public, BlueprintCallable, BlueprintEvent)

void UHelpEntryBodyWidget_C::UpdateBodyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateBodyText");

	UHelpEntryBodyWidget_C_UpdateBodyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.SetActiveEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHelpItem*           InHelpItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpEntryBodyWidget_C::SetActiveEntry(class UFortHelpItem* InHelpItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.SetActiveEntry");

	UHelpEntryBodyWidget_C_SetActiveEntry_Params params;
	params.InHelpItem = InHelpItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
