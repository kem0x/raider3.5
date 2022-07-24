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

// Function ErrorLlama.ErrorLlama_C.HandleInputTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               NewInputType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorLlama_C::HandleInputTypeChanged(ECommonInputType NewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLlama.ErrorLlama_C.HandleInputTypeChanged");

	UErrorLlama_C_HandleInputTypeChanged_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorLlama.ErrorLlama_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorLlama_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLlama.ErrorLlama_C.Construct");

	UErrorLlama_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorLlama.ErrorLlama_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorLlama_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLlama.ErrorLlama_C.Tick");

	UErrorLlama_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorLlama.ErrorLlama_C.RandomizeColor
// (BlueprintCallable, BlueprintEvent)

void UErrorLlama_C::RandomizeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLlama.ErrorLlama_C.RandomizeColor");

	UErrorLlama_C_RandomizeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               _2DInputVec                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UErrorLlama_C::HandleNormalizedInputDirection(const struct FVector2D& _2DInputVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection");

	UErrorLlama_C_HandleNormalizedInputDirection_Params params;
	params._2DInputVec = _2DInputVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorLlama_C::ExecuteUbergraph_ErrorLlama(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama");

	UErrorLlama_C_ExecuteUbergraph_ErrorLlama_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
