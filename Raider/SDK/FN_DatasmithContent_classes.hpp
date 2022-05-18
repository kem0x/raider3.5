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

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0020 (0x0338 - 0x0318)
class ADatasmithAreaLightActor : public AActor
{
public:
	EDatasmithAreaLightActorShape                      LightShape;                                               // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x031C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0324(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Intensity;                                                // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
