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

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemDisplayStyle> QuickbarItemDisplayStyle       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EFortItemCooldownType>  DesiredCooldownTypesSupported  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuickbarSlotCooldown_C::Initialize(TEnumAsByte<EItemDisplayStyle> QuickbarItemDisplayStyle, TArray<EFortItemCooldownType>* DesiredCooldownTypesSupported)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize");

	UQuickbarSlotCooldown_C_Initialize_Params params;
	params.QuickbarItemDisplayStyle = QuickbarItemDisplayStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredCooldownTypesSupported != nullptr)
		*DesiredCooldownTypesSupported = params.DesiredCooldownTypesSupported;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlotCooldown_C::Show_Countdown(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown");

	UQuickbarSlotCooldown_C_Show_Countdown_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortItemCooldownType*         CooldownType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlotCooldown_C::OnCooldownStarted(EFortItemCooldownType* CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted");

	UQuickbarSlotCooldown_C_OnCooldownStarted_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortItemCooldownType*         CooldownType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlotCooldown_C::OnCooldownStopped(EFortItemCooldownType* CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped");

	UQuickbarSlotCooldown_C_OnCooldownStopped_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlotCooldown_C::ExecuteUbergraph_QuickbarSlotCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown");

	UQuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
