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

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestInfo_BulletListEntry_C::ShowBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder");

	UQuestInfo_BulletListEntry_C_ShowBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InImageSize                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UQuestInfo_BulletListEntry_C::CalcBrushSize(const struct FVector2D& InImageSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize");

	UQuestInfo_BulletListEntry_C_CalcBrushSize_Params params;
	params.InImageSize = InImageSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             EntryIconBrush                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestInfo_BulletListEntry_C::InitBrush(const struct FText& EntryText, const struct FSlateBrush& EntryIconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush");

	UQuestInfo_BulletListEntry_C_InitBrush_Params params;
	params.EntryText = EntryText;
	params.EntryIconBrush = EntryIconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestInfo_BulletListEntry_C::InitBullet(const struct FText& EntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet");

	UQuestInfo_BulletListEntry_C_InitBullet_Params params;
	params.EntryText = EntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
