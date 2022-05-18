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

// BlueprintGeneratedClass BluGloRequestHandler.BluGloRequestHandler_C
// 0x0048 (0x00C0 - 0x0078)
class UBluGloRequestHandler_C : public UEnvQueryInstanceBlueprintWrapper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnBluGloQueryFinished;                                    // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                NumBluGloToSpawn;                                         // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class AActor*                                      ActorToSpawnFrom;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocationToSpawnFrom;                                      // 0x00A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LocationsToSpawnTo;                                       // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGloRequestHandler.BluGloRequestHandler_C");
		return ptr;
	}


	void BuildLocationsRandomly();
	void BuildLocationsFromQueryLocations(TArray<struct FVector>* QueryResultLocations);
	void EQSQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void InitializeBluGloRequestHandler(int NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid);
	void ExecuteUbergraph_BluGloRequestHandler(int EntryPoint);
	void OnBluGloQueryFinished__DelegateSignature(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
