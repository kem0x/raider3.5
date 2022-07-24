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

// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponCalloutStatWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.Update");

	UWeaponCalloutStatWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UWeaponCalloutStatWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.OnStatChanged");

	UWeaponCalloutStatWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.ExecuteUbergraph_WeaponCalloutStatWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponCalloutStatWidget_C::ExecuteUbergraph_WeaponCalloutStatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.ExecuteUbergraph_WeaponCalloutStatWidget");

	UWeaponCalloutStatWidget_C_ExecuteUbergraph_WeaponCalloutStatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
