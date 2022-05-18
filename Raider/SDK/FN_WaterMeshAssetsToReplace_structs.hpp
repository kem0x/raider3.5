#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct WaterMeshAssetsToReplace.WaterMeshAssetsToReplace
// 0x0014
struct FWaterMeshAssetsToReplace
{
	class UStaticMesh*                                 StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Blueprint_8_FAC48F2D497ED83408C598897E74E513;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
