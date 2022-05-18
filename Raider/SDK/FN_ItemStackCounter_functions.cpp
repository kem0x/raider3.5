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

// Function ItemStackCounter.ItemStackCounter_C.Refresh Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemStackCounter_C::Refresh_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStackCounter.ItemStackCounter_C.Refresh Visibility");

	UItemStackCounter_C_Refresh_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemStackCounter.ItemStackCounter_C.Set Stack Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemStackCounter_C::Set_Stack_Count(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStackCounter.ItemStackCounter_C.Set Stack Count");

	UItemStackCounter_C_Set_Stack_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemStackCounter.ItemStackCounter_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemStackCounter_C::Update(TEnumAsByte<EFortBrushSize> Brush_Size, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStackCounter.ItemStackCounter_C.Update");

	UItemStackCounter_C_Update_Params params;
	params.Brush_Size = Brush_Size;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemStackCounter.ItemStackCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemStackCounter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStackCounter.ItemStackCounter_C.PreConstruct");

	UItemStackCounter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemStackCounter.ItemStackCounter_C.ExecuteUbergraph_ItemStackCounter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemStackCounter_C::ExecuteUbergraph_ItemStackCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStackCounter.ItemStackCounter_C.ExecuteUbergraph_ItemStackCounter");

	UItemStackCounter_C_ExecuteUbergraph_ItemStackCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
