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

// Function AlterationOption.AlterationOption_C.SetWidgetSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    InIconSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOption_C::SetWidgetSettings(TEnumAsByte<EFortBrushSize> InIconSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.SetWidgetSettings");

	UAlterationOption_C_SetWidgetSettings_Params params;
	params.InIconSize = InIconSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOption.AlterationOption_C.GetValidBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UAlterationOption_C::GetValidBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.GetValidBrush");

	UAlterationOption_C_GetValidBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationOption.AlterationOption_C.HasValidBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ValidBrush                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAlterationOption_C::HasValidBrush(bool* ValidBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.HasValidBrush");

	UAlterationOption_C_HasValidBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidBrush != nullptr)
		*ValidBrush = params.ValidBrush;
}


// Function AlterationOption.AlterationOption_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationOption_C::InitIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.InitIcon");

	UAlterationOption_C_InitIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOption.AlterationOption_C.IntroPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationOption_C::IntroPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.IntroPlay");

	UAlterationOption_C_IntroPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOption.AlterationOption_C.IntroReset
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationOption_C::IntroReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.IntroReset");

	UAlterationOption_C_IntroReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOption.AlterationOption_C.SetupPips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationOption_C::SetupPips()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.SetupPips");

	UAlterationOption_C_SetupPips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOption.AlterationOption_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAlterationOption_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.OnSetup");

	UAlterationOption_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOption.AlterationOption_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               bNewInputType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOption_C::HandleInputMethodChanged(ECommonInputType bNewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.HandleInputMethodChanged");

	UAlterationOption_C_HandleInputMethodChanged_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOption.AlterationOption_C.ExecuteUbergraph_AlterationOption
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOption_C::ExecuteUbergraph_AlterationOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOption.AlterationOption_C.ExecuteUbergraph_AlterationOption");

	UAlterationOption_C_ExecuteUbergraph_AlterationOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
