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

// WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C
// 0x0050 (0x0420 - 0x03D0)
class UBP_FortExpeditionPickVehicleWidget_C : public UFortExpeditionPickVehicleWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UCommonTileView*                             CommonTileView_0_1;                                       // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_ExpeditionSquadSlotsView_C*              ExpeditionSquadSlotsView;                                 // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_0_1;                                             // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackInputAction;                                          // 0x03F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                             SquadOjbects;                                             // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVehicleSelected;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C");
		return ptr;
	}


	void Pre_Select_for_Console();
	void Determine_Available_Expedition_Squads(const struct FGameplayTagContainer& RequirementTags);
	void Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition);
	void Setup_Input_Action_Handlers();
	void HandleBack(bool* Passthrough);
	void Construct();
	void SetData(class UFortExpeditionItem** InItem);
	void OnActivated();
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleVehicleSelected(const struct FName& SquadId);
	void HACK_GetMeOutOfSelectContext();
	void HandleVehicleButtonHovered(class UCommonButton* Button);
	void HandleVehcileButtonUnhovered(class UCommonButton* Button);
	void ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int EntryPoint);
	void OnVehicleSelected__DelegateSignature(const struct FName& SquadId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
