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

// Function Node.Node_C.SetSelectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNode_C::SetSelectedState(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Node.Node_C.SetSelectedState");

	UNode_C_SetSelectedState_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node.Node_C.SetHighContrastMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ActivateHighContrast           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNode_C::SetHighContrastMode(bool ActivateHighContrast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Node.Node_C.SetHighContrastMode");

	UNode_C_SetHighContrastMode_Params params;
	params.ActivateHighContrast = ActivateHighContrast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node.Node_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNode_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Node.Node_C.PreConstruct");

	UNode_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node.Node_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Node.Node_C.Construct");

	UNode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Node.Node_C.ExecuteUbergraph_Node
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNode_C::ExecuteUbergraph_Node(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Node.Node_C.ExecuteUbergraph_Node");

	UNode_C_ExecuteUbergraph_Node_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
