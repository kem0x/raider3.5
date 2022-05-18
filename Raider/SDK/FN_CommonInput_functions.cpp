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

// Function CommonInput.CommonInputContext.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonGamepadType             InGamepadInputType             (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputContext::SetGamepadInputType(ECommonGamepadType InGamepadInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputContext.SetGamepadInputType");

	UCommonInputContext_SetGamepadInputType_Params params;
	params.InGamepadInputType = InGamepadInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputContext.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonInputType               NewInputType                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputContext::SetCurrentInputType(ECommonInputType NewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputContext.SetCurrentInputType");

	UCommonInputContext_SetCurrentInputType_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputContext.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputContext::IsUsingPointerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputContext.IsUsingPointerInput");

	UCommonInputContext_IsUsingPointerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction CommonInput.CommonInputContext.InputMethodChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// ECommonInputType               bNewInputType                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputContext::InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonInput.CommonInputContext.InputMethodChangedDelegate__DelegateSignature");

	UCommonInputContext_InputMethodChangedDelegate__DelegateSignature_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputContext.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECommonInputType UCommonInputContext::GetCurrentInputType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputContext.GetCurrentInputType");

	UCommonInputContext_GetCurrentInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputContext.GetCurrentGamepadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonGamepadType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECommonGamepadType UCommonInputContext::GetCurrentGamepadType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputContext.GetCurrentGamepadType");

	UCommonInputContext_GetCurrentGamepadType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
