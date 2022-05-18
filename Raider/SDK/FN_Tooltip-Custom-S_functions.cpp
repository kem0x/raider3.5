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

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UTooltip_Custom_S_C::Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush");

	UTooltip_Custom_S_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTooltip_Custom_S_C::Get_Header_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text");

	UTooltip_Custom_S_C_Get_Header_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTooltip_Custom_S_C::Get_Body_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text");

	UTooltip_Custom_S_C_Get_Body_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltip_Custom_S_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Custom-S.Tooltip-Custom-S_C.Construct");

	UTooltip_Custom_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltip_Custom_S_C::ExecuteUbergraph_Tooltip_Custom_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S");

	UTooltip_Custom_S_C_ExecuteUbergraph_Tooltip_Custom_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
