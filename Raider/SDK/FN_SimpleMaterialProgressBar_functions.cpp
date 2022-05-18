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

// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void USimpleMaterialProgressBar_C::SetColorB(const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorB");

	USimpleMaterialProgressBar_C_SetColorB_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void USimpleMaterialProgressBar_C::SetColorA(const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorA");

	USimpleMaterialProgressBar_C_SetColorA_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleMaterialProgressBar_C::SetProgress(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetProgress");

	USimpleMaterialProgressBar_C_SetProgress_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleMaterialProgressBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.PreConstruct");

	USimpleMaterialProgressBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.ExecuteUbergraph_SimpleMaterialProgressBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleMaterialProgressBar_C::ExecuteUbergraph_SimpleMaterialProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.ExecuteUbergraph_SimpleMaterialProgressBar");

	USimpleMaterialProgressBar_C_ExecuteUbergraph_SimpleMaterialProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
