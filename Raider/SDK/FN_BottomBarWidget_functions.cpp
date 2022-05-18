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

// Function BottomBarWidget.BottomBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBottomBarWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BottomBarWidget.BottomBarWidget_C.Construct");

	UBottomBarWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BottomBarWidget.BottomBarWidget_C.ExecuteUbergraph_BottomBarWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBottomBarWidget_C::ExecuteUbergraph_BottomBarWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BottomBarWidget.BottomBarWidget_C.ExecuteUbergraph_BottomBarWidget");

	UBottomBarWidget_C_ExecuteUbergraph_BottomBarWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
