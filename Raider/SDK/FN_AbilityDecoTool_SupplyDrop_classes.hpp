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

// BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C
// 0x0020 (0x0BA0 - 0x0B80)
class AAbilityDecoTool_SupplyDrop_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      NewVar_1;                                                 // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortDecoHelper*                             Helper;                                                   // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideTimerHandle;                                          // 0x0B98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C");
		return ptr;
	}


	void HideMeshAndPlacement(bool bInHide);
	void UserConstructionScript();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper);
	void Show();
	void HideFor(float InTime);
	void ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
