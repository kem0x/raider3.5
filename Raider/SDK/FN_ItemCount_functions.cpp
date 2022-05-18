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

// Function ItemCount.ItemCount_C.SetBrushAndTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    InBrushSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  InStyle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::SetBrushAndTextStyle(TEnumAsByte<EFortBrushSize> InBrushSize, class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.SetBrushAndTextStyle");

	UItemCount_C_SetBrushAndTextStyle_Params params;
	params.InBrushSize = InBrushSize;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.UpdateOverrideState
// (Private, BlueprintCallable, BlueprintEvent)

void UItemCount_C::UpdateOverrideState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.UpdateOverrideState");

	UItemCount_C_UpdateOverrideState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.SetOverrideValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OverrrideValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::SetOverrideValue(int OverrrideValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.SetOverrideValue");

	UItemCount_C_SetOverrideValue_Params params;
	params.OverrrideValue = OverrrideValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.SetIsBeingPreviewed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BeingPreviewed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::SetIsBeingPreviewed(bool BeingPreviewed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.SetIsBeingPreviewed");

	UItemCount_C_SetIsBeingPreviewed_Params params;
	params.BeingPreviewed = BeingPreviewed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.SetItemDefinition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::SetItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.SetItemDefinition");

	UItemCount_C_SetItemDefinition_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.Construct");

	UItemCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.PreConstruct");

	UItemCount_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::ExecuteUbergraph_ItemCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount");

	UItemCount_C_ExecuteUbergraph_ItemCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
