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

// Function MapKeybindWidget.MapKeybindWidget_C.UpdateKeybindWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapKeybindWidget_C::UpdateKeybindWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapKeybindWidget.MapKeybindWidget_C.UpdateKeybindWidget");

	UMapKeybindWidget_C_UpdateKeybindWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapKeybindWidget.MapKeybindWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapKeybindWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapKeybindWidget.MapKeybindWidget_C.Construct");

	UMapKeybindWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapKeybindWidget.MapKeybindWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapKeybindWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapKeybindWidget.MapKeybindWidget_C.Destruct");

	UMapKeybindWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapKeybindWidget.MapKeybindWidget_C.ExecuteUbergraph_MapKeybindWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMapKeybindWidget_C::ExecuteUbergraph_MapKeybindWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapKeybindWidget.MapKeybindWidget_C.ExecuteUbergraph_MapKeybindWidget");

	UMapKeybindWidget_C_ExecuteUbergraph_MapKeybindWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
