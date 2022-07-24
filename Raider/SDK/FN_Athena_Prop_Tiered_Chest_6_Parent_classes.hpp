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

// BlueprintGeneratedClass Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C
// 0x0034 (0x0BE4 - 0x0BB0)
class AAthena_Prop_Tiered_Chest_6_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        S_Chest_SmokeSheet;                                       // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        TrasureLight;                                             // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Chest_Ambient_Sound;                                      // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Loot_Effect;                                              // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SpecialChestOpenSound;                                    // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDrawDistance_ChestFX;                                  // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C");
		return ptr;
	}


	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void SetLightVisibility(bool Visible);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveActorBeginCursorOver();
	void ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
