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

// BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C
// 0x0008 (0x03B8 - 0x03B0)
class AAnnounce_ZoneModifiers_C : public AFortClientAnnouncement_ZoneModifiers
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
