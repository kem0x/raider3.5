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

// Function Button_EmoteMenu.Button_EmoteMenu_C.OnClicked
// (Event, Public, BlueprintEvent)

void UButton_EmoteMenu_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_EmoteMenu.Button_EmoteMenu_C.OnClicked");

	UButton_EmoteMenu_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_EmoteMenu.Button_EmoteMenu_C.ExecuteUbergraph_Button_EmoteMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_EmoteMenu_C::ExecuteUbergraph_Button_EmoteMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_EmoteMenu.Button_EmoteMenu_C.ExecuteUbergraph_Button_EmoteMenu");

	UButton_EmoteMenu_C_ExecuteUbergraph_Button_EmoteMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
