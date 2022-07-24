// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AlterationWidget.AlterationWidget_C.GetValidBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UAlterationWidget_C::GetValidBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.GetValidBrush");

	UAlterationWidget_C_GetValidBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.HasValidBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ValidBrush                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAlterationWidget_C::HasValidBrush(bool* ValidBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.HasValidBrush");

	UAlterationWidget_C_HasValidBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidBrush != nullptr)
		*ValidBrush = params.ValidBrush;
}


// Function AlterationWidget.AlterationWidget_C.IsGamplaySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAlterationItemDefinition* Alteration                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAlterationWidget_C::IsGamplaySlot(class UFortAlterationItemDefinition* Alteration, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.IsGamplaySlot");

	UAlterationWidget_C_IsGamplaySlot_Params params;
	params.Alteration = Alteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AlterationWidget.AlterationWidget_C.TriggerTextAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::TriggerTextAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.TriggerTextAnimation");

	UAlterationWidget_C_TriggerTextAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.SetWidgetSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIncludeName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInIncludeShortDescription     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInIncludeDescription          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortBrushSize>    InIconSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInUseLargeFormatName          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InShouldShowRarity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationWidget_C::SetWidgetSettings(bool bInIncludeName, bool bInIncludeShortDescription, bool bInIncludeDescription, TEnumAsByte<EFortBrushSize> InIconSize, bool bInUseLargeFormatName, bool InShouldShowRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.SetWidgetSettings");

	UAlterationWidget_C_SetWidgetSettings_Params params;
	params.bInIncludeName = bInIncludeName;
	params.bInIncludeShortDescription = bInIncludeShortDescription;
	params.bInIncludeDescription = bInIncludeDescription;
	params.InIconSize = InIconSize;
	params.bInUseLargeFormatName = bInUseLargeFormatName;
	params.InShouldShowRarity = InShouldShowRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.InitLockedLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::InitLockedLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.InitLockedLayout");

	UAlterationWidget_C_InitLockedLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::SetEvolutionDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails");

	UAlterationWidget_C_SetEvolutionDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.UpdatePips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::UpdatePips()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.UpdatePips");

	UAlterationWidget_C_UpdatePips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.InitDescriptiveText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::InitDescriptiveText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.InitDescriptiveText");

	UAlterationWidget_C_InitDescriptiveText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::InitIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.InitIcon");

	UAlterationWidget_C_InitIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAlterationWidget_C::ShouldFadeAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration");

	UAlterationWidget_C_ShouldFadeAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UAlterationWidget_C::GetHighlightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.GetHighlightColor");

	UAlterationWidget_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAlterationWidget_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.OnSetup");

	UAlterationWidget_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationWidget_C::ExecuteUbergraph_AlterationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget");

	UAlterationWidget_C_ExecuteUbergraph_AlterationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
