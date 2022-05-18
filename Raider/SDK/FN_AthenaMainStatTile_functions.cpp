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

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatValueAsText                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMainStatTile_C::SetStatValue(const struct FText& StatValueAsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue");

	UAthenaMainStatTile_C_SetStatValue_Params params;
	params.StatValueAsText = StatValueAsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMainStatTile_C::SetTagAndDisplayName(const struct FString& Tag, const struct FText& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName");

	UAthenaMainStatTile_C_SetTagAndDisplayName_Params params;
	params.Tag = Tag;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMainStatTile_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct");

	UAthenaMainStatTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMainStatTile_C::ExecuteUbergraph_AthenaMainStatTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile");

	UAthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
