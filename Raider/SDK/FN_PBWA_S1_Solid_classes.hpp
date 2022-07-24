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

// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// 0x0028 (0x0C88 - 0x0C60)
class APBWA_S1_Solid_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C60(0x0008) (Transient, DuplicateTransient)
	int                                                GnomeWallChance;                                          // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GnomeWallMax;                                             // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Gnomed;                                                   // 0x0C70(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C71(0x0007) MISSED OFFSET
	class UMaterialInstanceConstant*                   GnomeMaterial;                                            // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 GnomeWall;                                                // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBWA_S1_Solid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
