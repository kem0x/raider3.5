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

// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillTreePageColors    Page_Color                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESkillTreePages>   Pages                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTreeColorSetup_C::STATIC_SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, TEnumAsByte<ESkillTreePages> Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup");

	USkillTreeColorSetup_C_SkillTreeBGSetup_Params params;
	params.Page_Color = Page_Color;
	params.Pages = Pages;
	params.Mid = Mid;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
