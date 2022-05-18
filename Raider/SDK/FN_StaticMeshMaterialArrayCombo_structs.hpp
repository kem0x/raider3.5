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

// UserDefinedStruct StaticMeshMaterialArrayCombo.StaticMeshMaterialArrayCombo
// 0x0018
struct FStaticMeshMaterialArrayCombo
{
	class AStaticMeshActor*                            StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
