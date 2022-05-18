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

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ShouldShowEmptyImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAthenaCustomizationSlotButton_C::ShouldShowEmptyImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ShouldShowEmptyImage");

	UAthenaCustomizationSlotButton_C_ShouldShowEmptyImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.UpdateTypeIconOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          VerticalOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationSlotButton_C::UpdateTypeIconOffset(float VerticalOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.UpdateTypeIconOffset");

	UAthenaCustomizationSlotButton_C_UpdateTypeIconOffset_Params params;
	params.VerticalOffset = VerticalOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Glow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GlowIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationSlotButton_C::Update_SubType_Icon_Glow(bool GlowIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Glow");

	UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Glow_Params params;
	params.GlowIcon = GlowIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Image
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationSlotButton_C::Update_SubType_Icon_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Image");

	UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationSlotButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct");

	UAthenaCustomizationSlotButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationSlotButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct");

	UAthenaCustomizationSlotButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationSlotButton_C::ExecuteUbergraph_AthenaCustomizationSlotButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton");

	UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
