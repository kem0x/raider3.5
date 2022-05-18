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

// WidgetBlueprintGeneratedClass QuestTrackerMainQuestList.QuestTrackerMainQuestList_C
// 0x0000 (0x0250 - 0x0250)
class UQuestTrackerMainQuestList_C : public UFortQuestTrackerList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestTrackerMainQuestList.QuestTrackerMainQuestList_C");
		return ptr;
	}


	TArray<class UFortQuestItem*> GetQuestsToDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
