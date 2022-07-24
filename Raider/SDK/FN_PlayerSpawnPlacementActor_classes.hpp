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

// BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C
// 0x0008 (0x05F0 - 0x05E8)
class APlayerSpawnPlacementActor_C : public AFortPlacementActor
{
public:
	class UArrowComponent*                             Arrow;                                                    // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
