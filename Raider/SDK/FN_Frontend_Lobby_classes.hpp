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

// BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C
// 0x0018 (0x0358 - 0x0340)
class AFrontend_Lobby_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	struct FName                                       CurrentBackgroundLevelName;                               // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NewBackgroundLevelName;                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C");
		return ptr;
	}


	void OnBackgroundChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
