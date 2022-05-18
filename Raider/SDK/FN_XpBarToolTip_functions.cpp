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

// Function XpBarToolTip.XpBarToolTip_C.GetBodyText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UXpBarToolTip_C::GetBodyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetBodyText");

	UXpBarToolTip_C_GetBodyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetRestedXPText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UXpBarToolTip_C::GetRestedXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetRestedXPText");

	UXpBarToolTip_C_GetRestedXPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetBoostXPText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UXpBarToolTip_C::GetBoostXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetBoostXPText");

	UXpBarToolTip_C_GetBoostXPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetCommanderXPText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UXpBarToolTip_C::GetCommanderXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetCommanderXPText");

	UXpBarToolTip_C_GetCommanderXPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetHeaderText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UXpBarToolTip_C::GetHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetHeaderText");

	UXpBarToolTip_C_GetHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
