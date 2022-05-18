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


// Function AlterationWidget.AlterationWidget_C.UpdateRaritySwitcherVisiblity
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::UpdateRaritySwitcherVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.UpdateRaritySwitcherVisiblity");

	UAlterationWidget_C_UpdateRaritySwitcherVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.SetLevelText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::SetLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.SetLevelText");

	UAlterationWidget_C_SetLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.InitText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::InitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.InitText");

	UAlterationWidget_C_InitText_Params params;

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


// Function AlterationWidget.AlterationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidget.AlterationWidget_C.Construct");

	UAlterationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
// (HasDefaults)
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
