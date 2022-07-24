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

// Function Node_Arrows.Node_Arrows_C.OverideColorOnBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  InBrush                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNode_Arrows_C::OverideColorOnBrush(class UImage* InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Node_Arrows.Node_Arrows_C.OverideColorOnBrush");

	UNode_Arrows_C_OverideColorOnBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node_Arrows.Node_Arrows_C.ApplyOverideColor
// (Public, BlueprintCallable, BlueprintEvent)

void UNode_Arrows_C::ApplyOverideColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Node_Arrows.Node_Arrows_C.ApplyOverideColor");

	UNode_Arrows_C_ApplyOverideColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node_Arrows.Node_Arrows_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNode_Arrows_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Node_Arrows.Node_Arrows_C.PreConstruct");

	UNode_Arrows_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node_Arrows.Node_Arrows_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNode_Arrows_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Node_Arrows.Node_Arrows_C.Construct");

	UNode_Arrows_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node_Arrows.Node_Arrows_C.ExecuteUbergraph_Node_Arrows
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNode_Arrows_C::ExecuteUbergraph_Node_Arrows(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Node_Arrows.Node_Arrows_C.ExecuteUbergraph_Node_Arrows");

	UNode_Arrows_C_ExecuteUbergraph_Node_Arrows_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
