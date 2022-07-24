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

// WidgetBlueprintGeneratedClass FullPartyMemberAthena.FullPartyMemberAthena_C
// 0x0010 (0x09A8 - 0x0998)
class UFullPartyMemberAthena_C : public UAthenaPartyMemberBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UPlayerBanner_C*                             PlayerBanner;                                             // 0x09A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FullPartyMemberAthena.FullPartyMemberAthena_C");
		return ptr;
	}


	void SetBannerIconAndColor(struct FString* IconId, struct FString* ColorId);
	void OpenPartyFinder();
	void OnFriendshipStatusDetermined(EFortFriendRequestStatus* RequestStatus);
	void ExecuteUbergraph_FullPartyMemberAthena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
