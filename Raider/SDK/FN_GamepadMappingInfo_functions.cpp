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

// Function GamepadMappingInfo.GamepadMappingInfo_C.SetButtonTextLabelsFromTextArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_C::SetButtonTextLabelsFromTextArray(TArray<struct FText>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.SetButtonTextLabelsFromTextArray");

	UGamepadMappingInfo_C_SetButtonTextLabelsFromTextArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTW_BuilderProBuild
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ButtonTextLabels               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_C::InitializeListOfButtonTextForSTW_BuilderProBuild(TArray<struct FText>* ButtonTextLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTW_BuilderProBuild");

	UGamepadMappingInfo_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonTextLabels != nullptr)
		*ButtonTextLabels = params.ButtonTextLabels;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.GetLineImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UGamepadMappingInfo_C::GetLineImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.GetLineImage");

	UGamepadMappingInfo_C_GetLineImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.GetControllerImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UGamepadMappingInfo_C::GetControllerImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.GetControllerImage");

	UGamepadMappingInfo_C_GetControllerImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.ClearAllComboTextLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_C::ClearAllComboTextLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.ClearAllComboTextLines");

	UGamepadMappingInfo_C_ClearAllComboTextLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProCombat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ButtonTextLabels               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_C::InitializeListOfButtonTextForSTWCombatProCombat(TArray<struct FText>* ButtonTextLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProCombat");

	UGamepadMappingInfo_C_InitializeListOfButtonTextForSTWCombatProCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonTextLabels != nullptr)
		*ButtonTextLabels = params.ButtonTextLabels;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.SetTextFieldVisibilityForExtraLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              TextWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGamepadMappingInfo_C::SetTextFieldVisibilityForExtraLine(class UTextBlock* TextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.SetTextFieldVisibilityForExtraLine");

	UGamepadMappingInfo_C_SetTextFieldVisibilityForExtraLine_Params params;
	params.TextWidget = TextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              TextWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               DesiredSlateVisibility         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(class UTextBlock* TextWidget, ESlateVisibility* DesiredSlateVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay");

	UGamepadMappingInfo_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params params;
	params.TextWidget = TextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredSlateVisibility != nullptr)
		*DesiredSlateVisibility = params.DesiredSlateVisibility;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProBuild
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ButtonTextLabels               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_C::InitializeListOfButtonTextForSTWCombatProBuild(TArray<struct FText>* ButtonTextLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProBuild");

	UGamepadMappingInfo_C_InitializeListOfButtonTextForSTWCombatProBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonTextLabels != nullptr)
		*ButtonTextLabels = params.ButtonTextLabels;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonLabelTextWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_C::InitializeListOfButtonLabelTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonLabelTextWidgets");

	UGamepadMappingInfo_C_InitializeListOfButtonLabelTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed Hide or Show Unused Text Lines
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_C::Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed Hide or Show Unused Text Lines");

	UGamepadMappingInfo_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Combat Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::Handle_Config_Changed_STW_Combat_Mode(int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Combat Mode");

	UGamepadMappingInfo_C_Handle_Config_Changed_STW_Combat_Mode_Params params;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Build Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::Handle_Config_Changed_STW_Build_Mode(int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Build Mode");

	UGamepadMappingInfo_C_Handle_Config_Changed_STW_Build_Mode_Params params;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::HandleConfigChanged(int Mode, int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged");

	UGamepadMappingInfo_C_HandleConfigChanged_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::HandleConfigChanged_Athena(int Mode, int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena");

	UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::OnConfigChanged(int Mode, int Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged");

	UGamepadMappingInfo_C_OnConfigChanged_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Configuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::Update_Displayed_Mapping(int Platform, int Mode, int Configuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping");

	UGamepadMappingInfo_C_Update_Displayed_Mapping_Params params;
	params.Platform = Platform;
	params.Mode = Mode;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.OnLoaded_67B412844D12E60AF9677EAF507D3D57
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::OnLoaded_67B412844D12E60AF9677EAF507D3D57(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.OnLoaded_67B412844D12E60AF9677EAF507D3D57");

	UGamepadMappingInfo_C_OnLoaded_67B412844D12E60AF9677EAF507D3D57_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.OnLoaded_A196D7E54164016324DF5A9755C679BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::OnLoaded_A196D7E54164016324DF5A9755C679BD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.OnLoaded_A196D7E54164016324DF5A9755C679BD");

	UGamepadMappingInfo_C_OnLoaded_A196D7E54164016324DF5A9755C679BD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGamepadMappingInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.Construct");

	UGamepadMappingInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Controller Images
// (BlueprintCallable, BlueprintEvent)

void UGamepadMappingInfo_C::Update_Controller_Images()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.Update Controller Images");

	UGamepadMappingInfo_C_Update_Controller_Images_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.ExecuteUbergraph_GamepadMappingInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadMappingInfo_C::ExecuteUbergraph_GamepadMappingInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.ExecuteUbergraph_GamepadMappingInfo");

	UGamepadMappingInfo_C_ExecuteUbergraph_GamepadMappingInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
