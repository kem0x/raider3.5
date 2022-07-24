#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C
// 0x0000 (0x0028 - 0x0028)
class UFrontendItemViewSettingsManager_C : public UFortFrontendItemViewSettingsManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C");
		return ptr;
	}


	bool Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition);
	struct FFortItemViewSettings GetItemViewSettings(EFrontEndCamera* Camera, ESubGame* GameMode, class UFortItemDefinition** ItemDefinition);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
