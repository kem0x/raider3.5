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

// WidgetBlueprintGeneratedClass ActiveModifierItemHUD.ActiveModifierItemHUD_C
// 0x0008 (0x0218 - 0x0210)
class UActiveModifierItemHUD_C : public UCommonUserWidget
{
public:
	class UImage*                                      ImageModifier;                                            // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActiveModifierItemHUD.ActiveModifierItemHUD_C");
		return ptr;
	}


	void AssignIcon(const struct FSlateBrush& inIconSlateBrush);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
