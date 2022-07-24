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

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Construct");

	UHUDLayoutToolButtonLayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.OnBuildMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bBuildMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolButtonLayer_C::OnBuildMode(bool* bBuildMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.OnBuildMode");

	UHUDLayoutToolButtonLayer_C_OnBuildMode_Params params;
	params.bBuildMode = bBuildMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Opened Tool
// (BlueprintCallable, BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::Opened_Tool()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Opened Tool");

	UHUDLayoutToolButtonLayer_C_Opened_Tool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::BndEvt__Extra_Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UHUDLayoutToolButtonLayer_C_BndEvt__Extra_Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.ExecuteUbergraph_HUDLayoutToolButtonLayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolButtonLayer_C::ExecuteUbergraph_HUDLayoutToolButtonLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.ExecuteUbergraph_HUDLayoutToolButtonLayer");

	UHUDLayoutToolButtonLayer_C_ExecuteUbergraph_HUDLayoutToolButtonLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
