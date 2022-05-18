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

// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHomeScreenQuestRewardItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.Construct");

	UHomeScreenQuestRewardItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.ExecuteUbergraph_HomeScreenQuestRewardItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeScreenQuestRewardItem_C::ExecuteUbergraph_HomeScreenQuestRewardItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.ExecuteUbergraph_HomeScreenQuestRewardItem");

	UHomeScreenQuestRewardItem_C_ExecuteUbergraph_HomeScreenQuestRewardItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
