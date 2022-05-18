#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SkillTreeColorSetup.SkillTreeColorSetup_C
// 0x0000 (0x0028 - 0x0028)
class USkillTreeColorSetup_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkillTreeColorSetup.SkillTreeColorSetup_C");
		return ptr;
	}


	void STATIC_SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, TEnumAsByte<ESkillTreePages> Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
