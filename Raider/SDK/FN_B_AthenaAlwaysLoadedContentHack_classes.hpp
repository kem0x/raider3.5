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

// BlueprintGeneratedClass B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C
// 0x0028 (0x0350 - 0x0328)
class AB_AthenaAlwaysLoadedContentHack_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UObject*>                             HardObjectList;                                           // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              HardClassList;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
