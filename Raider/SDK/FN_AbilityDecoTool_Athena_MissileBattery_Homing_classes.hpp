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

// BlueprintGeneratedClass AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C
// 0x003C (0x0BBC - 0x0B80)
class AAbilityDecoTool_Athena_MissileBattery_Homing_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      NewVar_1;                                                 // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortDecoHelper*                             Helper;                                                   // 0x0B90(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideTimerHandle;                                          // 0x0B98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                                   FortPawn;                                                 // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_PlacementPreview_MissleBattery_Homing_C*  PPMissileBatteryHoming;                                   // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AimLocation;                                              // 0x0BB0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C");
		return ptr;
	}


	void GetAimLocFromDeco(struct FVector* AimLocation);
	void HideMeshAndPlacement(bool bInHide);
	void UserConstructionScript();
	void HideFor(float InTime);
	void BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper);
	void Show();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
