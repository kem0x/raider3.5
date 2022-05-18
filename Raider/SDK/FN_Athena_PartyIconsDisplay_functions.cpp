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

// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.SetPartySize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PartySize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_PartyIconsDisplay_C::SetPartySize(int PartySize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.SetPartySize");

	UAthena_PartyIconsDisplay_C_SetPartySize_Params params;
	params.PartySize = PartySize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_PartyIconsDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.PreConstruct");

	UAthena_PartyIconsDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.ExecuteUbergraph_Athena_PartyIconsDisplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_PartyIconsDisplay_C::ExecuteUbergraph_Athena_PartyIconsDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.ExecuteUbergraph_Athena_PartyIconsDisplay");

	UAthena_PartyIconsDisplay_C_ExecuteUbergraph_Athena_PartyIconsDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
