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

// WidgetBlueprintGeneratedClass HordeWaveModifiersWidget.HordeWaveModifiersWidget_C
// 0x0030 (0x0248 - 0x0218)
class UHordeWaveModifiersWidget_C : public UFortUserWidget
{
public:
	class UVerticalBox*                                ModifierVertBox;                                          // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UHordeWaveModifiersTile_C*>           ModifierWidgets;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurPresentedIdx;                                          // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAllModifiersPresented;                                  // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HordeWaveModifiersWidget.HordeWaveModifiersWidget_C");
		return ptr;
	}


	void PresentNextModifier();
	void OnModifiersAdded(bool StartPresentationImmediately, TArray<class UFortGameplayModifierItemDefinition*>* Modifiers);
	void OnAllModifiersPresented__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
