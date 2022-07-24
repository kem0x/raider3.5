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

// Function Button_BuildingInteract.Button_BuildingInteract_C.OnClicked
// (Event, Public, BlueprintEvent)

void UButton_BuildingInteract_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_BuildingInteract.Button_BuildingInteract_C.OnClicked");

	UButton_BuildingInteract_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_BuildingInteract.Button_BuildingInteract_C.ExecuteUbergraph_Button_BuildingInteract
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_BuildingInteract_C::ExecuteUbergraph_Button_BuildingInteract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_BuildingInteract.Button_BuildingInteract_C.ExecuteUbergraph_Button_BuildingInteract");

	UButton_BuildingInteract_C_ExecuteUbergraph_Button_BuildingInteract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
