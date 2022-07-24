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

// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
// 0x001F (0x0580 - 0x0561)
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Background;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C");
		return ptr;
	}


	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid);
	void Setup_Light();
	void UserConstructionScript();
	void Randomize_Mesh_Rotation_for_BR();
	void OnTossed();
	void OnPickedUp();
	void ExecuteUbergraph_B_Pickups_Default(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
