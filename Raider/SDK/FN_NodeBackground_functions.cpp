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

// Function NodeBackground.NodeBackground_C.SetBackgroundColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNodeBackground_C::SetBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NodeBackground.NodeBackground_C.SetBackgroundColor");

	UNodeBackground_C_SetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NodeBackground.NodeBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNodeBackground_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NodeBackground.NodeBackground_C.PreConstruct");

	UNodeBackground_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NodeBackground.NodeBackground_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNodeBackground_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NodeBackground.NodeBackground_C.Construct");

	UNodeBackground_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NodeBackground.NodeBackground_C.ExecuteUbergraph_NodeBackground
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNodeBackground_C::ExecuteUbergraph_NodeBackground(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NodeBackground.NodeBackground_C.ExecuteUbergraph_NodeBackground");

	UNodeBackground_C_ExecuteUbergraph_NodeBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
