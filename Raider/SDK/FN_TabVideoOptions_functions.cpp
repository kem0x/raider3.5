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

// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::Initialize_Display_Resolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions");

	UTabVideoOptions_C_Initialize_Display_Resolutions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset_Quality_Selector         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Update_Data(bool Reset_Quality_Selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Update Data");

	UTabVideoOptions_C_Update_Data_Params params;
	params.Reset_Quality_Selector = Reset_Quality_Selector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::Initialize_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Initialize Data");

	UTabVideoOptions_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Shadows_Changed(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Shadows Changed");

	UTabVideoOptions_C_Shadows_Changed_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Anti_Aliasing_Changed(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed");

	UTabVideoOptions_C_Anti_Aliasing_Changed_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Textures_Changed(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Textures Changed");

	UTabVideoOptions_C_Textures_Changed_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Post_Processing_Changed(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed");

	UTabVideoOptions_C_Post_Processing_Changed_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Effects_Changed(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Effects Changed");

	UTabVideoOptions_C_Effects_Changed_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Quality_Changed(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Quality Changed");

	UTabVideoOptions_C_Quality_Changed_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab");

	UTabVideoOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Window_Mode__Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed");

	UTabVideoOptions_C_Window_Mode__Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_22_23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::CustomEvent_22_23(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent_22_23");

	UTabVideoOptions_C_CustomEvent_22_23_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23_24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::CustomEvent_23_24(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23_24");

	UTabVideoOptions_C_CustomEvent_23_24_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::View_Distance_Changed(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.View Distance Changed");

	UTabVideoOptions_C_View_Distance_Changed_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabVideoOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Construct");

	UTabVideoOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CenterOnTab");

	UTabVideoOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::VSync_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.VSync Changed");

	UTabVideoOptions_C_VSync_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Motion_Blur_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed");

	UTabVideoOptions_C_Motion_Blur_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::CustomEvent(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent");

	UTabVideoOptions_C_CustomEvent_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_1_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::CustomEvent_1_2(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent_1_2");

	UTabVideoOptions_C_CustomEvent_1_2_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.PreConstruct");

	UTabVideoOptions_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.3D Resolution Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::_3D_Resolution_Changed(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.3D Resolution Changed");

	UTabVideoOptions_C__3D_Resolution_Changed_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.OnGameUserSettingsUINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::OnGameUserSettingsUINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.OnGameUserSettingsUINeedsUpdate");

	UTabVideoOptions_C_OnGameUserSettingsUINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabVideoOptions_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Destruct");

	UTabVideoOptions_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::ExecuteUbergraph_TabVideoOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions");

	UTabVideoOptions_C_ExecuteUbergraph_TabVideoOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature");

	UTabVideoOptions_C_Disable_Overlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabVideoOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature");

	UTabVideoOptions_C_Enable_Overlay__DelegateSignature_Params params;
	params.Accept_Input = Accept_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
