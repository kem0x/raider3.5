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

// BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C
// 0x0018 (0x03B0 - 0x0398)
class AAnnounce_QuestUpdate_C : public AFortClientAnnouncement
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDynamicQuestUpdateInfo                     QuestUpdateInfo;                                          // 0x03A0(0x0010) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
