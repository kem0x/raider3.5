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

// Function ChoiceCardCount.ChoiceCardCount_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InventoryCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChoiceCardCount_C::UpdateText(int InventoryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChoiceCardCount.ChoiceCardCount_C.UpdateText");

	UChoiceCardCount_C_UpdateText_Params params;
	params.InventoryCount = InventoryCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
