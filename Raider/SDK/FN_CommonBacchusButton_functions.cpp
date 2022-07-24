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

// Function CommonBacchusButton.CommonBacchusButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonBacchusButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonBacchusButton.CommonBacchusButton_C.PreConstruct");

	UCommonBacchusButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSprite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPaperSprite**           NewSprite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonBacchusButton_C::SetButtonSprite(class UPaperSprite** NewSprite)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSprite");

	UCommonBacchusButton_C_SetButtonSprite_Params params;
	params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewButtonSize                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonBacchusButton_C::SetButtonSize(float* NewButtonSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSize");

	UCommonBacchusButton_C_SetButtonSize_Params params;
	params.NewButtonSize = NewButtonSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonDisplayScale
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewDisplayScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonBacchusButton_C::SetButtonDisplayScale(float* NewDisplayScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonBacchusButton.CommonBacchusButton_C.SetButtonDisplayScale");

	UCommonBacchusButton_C_SetButtonDisplayScale_Params params;
	params.NewDisplayScale = NewDisplayScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonBacchusButton.CommonBacchusButton_C.ExecuteUbergraph_CommonBacchusButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonBacchusButton_C::ExecuteUbergraph_CommonBacchusButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonBacchusButton.CommonBacchusButton_C.ExecuteUbergraph_CommonBacchusButton");

	UCommonBacchusButton_C_ExecuteUbergraph_CommonBacchusButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
