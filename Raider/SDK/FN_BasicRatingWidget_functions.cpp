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

// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InStyle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicRatingWidget_C::Update_Power_Rating_Style(class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Style");

	UBasicRatingWidget_C_Update_Power_Rating_Style_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Get Current Rating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CurrentNumericValue            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasicRatingWidget_C::Get_Current_Rating(float* CurrentNumericValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Get Current Rating");

	UBasicRatingWidget_C_Get_Current_Rating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentNumericValue != nullptr)
		*CurrentNumericValue = params.CurrentNumericValue;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Update Border Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color1                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Color2                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBasicRatingWidget_C::Update_Border_Color(const struct FLinearColor& Color1, const struct FLinearColor& Color2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Update Border Color");

	UBasicRatingWidget_C_Update_Border_Color_Params params;
	params.Color1 = Color1;
	params.Color2 = Color2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicRatingWidget_C::Update_Power_Rating_Value(int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Value");

	UBasicRatingWidget_C_Update_Power_Rating_Value_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.GetBorderVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasicRatingWidget_C::GetBorderVisibility(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.GetBorderVisibility");

	UBasicRatingWidget_C_GetBorderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function BasicRatingWidget.BasicRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicRatingWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.PreConstruct");

	UBasicRatingWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicRatingWidget.BasicRatingWidget_C.ExecuteUbergraph_BasicRatingWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicRatingWidget_C::ExecuteUbergraph_BasicRatingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicRatingWidget.BasicRatingWidget_C.ExecuteUbergraph_BasicRatingWidget");

	UBasicRatingWidget_C_ExecuteUbergraph_BasicRatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
