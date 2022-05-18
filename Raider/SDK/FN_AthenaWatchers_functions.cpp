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

// Function AthenaWatchers.AthenaWatchers_C.UpdateSpectatorCountDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaWatchers_C::UpdateSpectatorCountDisplay(int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatchers.AthenaWatchers_C.UpdateSpectatorCountDisplay");

	UAthenaWatchers_C_UpdateSpectatorCountDisplay_Params params;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatchers.AthenaWatchers_C.OnSpectatorCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaWatchers_C::OnSpectatorCountChanged(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatchers.AthenaWatchers_C.OnSpectatorCountChanged");

	UAthenaWatchers_C_OnSpectatorCountChanged_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatchers.AthenaWatchers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaWatchers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatchers.AthenaWatchers_C.Construct");

	UAthenaWatchers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatchers.AthenaWatchers_C.UpdateVisibilityBasedOnSettings
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatchers_C::UpdateVisibilityBasedOnSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatchers.AthenaWatchers_C.UpdateVisibilityBasedOnSettings");

	UAthenaWatchers_C_UpdateVisibilityBasedOnSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWatchers.AthenaWatchers_C.ExecuteUbergraph_AthenaWatchers
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaWatchers_C::ExecuteUbergraph_AthenaWatchers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWatchers.AthenaWatchers_C.ExecuteUbergraph_AthenaWatchers");

	UAthenaWatchers_C_ExecuteUbergraph_AthenaWatchers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
