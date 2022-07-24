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

// AnimBlueprintGeneratedClass Shielder_AnimBP.Shielder_AnimBP_C
// 0x520D (0x556D - 0x0360)
class UShielder_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7DE4D53242B2AD51D3E9A28151C05EA5;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1AF6CEA241B4EFABDE6DE1B3E79BC5DF;      // 0x03B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278;// 0x0420(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22;// 0x0468(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1;// 0x04B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64F638374E3A425A40F8768292E1CBAB;// 0x04F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71667AB441930B4A5CBACC983713B3FD;// 0x0540(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C8B4D5C6407141DFC802F39076F63A71;// 0x05F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55A39E584D0D03C5C0ACD1B80017E348;// 0x0638(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E88305EF4EC8C13449A03DA51BE219BF;// 0x06E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE306AB24FBA7EF1EEE74D848B32AE08;// 0x0730(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F76894F5439CEE20D16AB89210FA35F3;// 0x07E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7A492D5E4B91AF2B6783A98C61BC5C7C;// 0x0828(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_548804C544150F086A2D7CB13B4443D1;      // 0x0908(0x0070)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_961752584D112905920E2186887B255C;// 0x0978(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_092208A34ADB41F15D8DC0A003E53E8B;// 0x09C0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A08(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_ADF7F0304EAAB0169163AF97DCCDD06E;    // 0x0A10(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_EEB0718F4F580A8B395D5F85AC4BCDCB;    // 0x0C50(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_75A72B7542D28D85CB53C9BCDE31790B;    // 0x0E90(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C41C4A8143AE12AD0A5C1198F72912C4;    // 0x10D0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4B17AFA7484A7476DE37B2AFC774735C;    // 0x1310(0x0240)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5EACE9814BD7663EFF5A4EB4A6267911;// 0x1550(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D8C7CB34497A3672AAD1C4AF984A4B5E;// 0x1620(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0EF986B649BA67F5530DE790ECB07E68;// 0x1700(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6403226D4978CE414DC7BEAE5440C7A0;// 0x1750(0x0050)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_FF2BE5334EC963253184219F8D6CEBE1;    // 0x17A0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_91A6E94B4403D6FE7667D1AE708E00C9;    // 0x19E0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_703B04C4479A6FF38E449CB56C0C9E32;    // 0x1C20(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F8F28A2341D427DBCC3463B753C8F884;    // 0x1E60(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0213A6E24F644BB0F4ADE0BC240149E0;    // 0x20A0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_E6FF7CFF4B667248BB4D0B9D80CE57C7;    // 0x22E0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_68B98BDD43F0651856C42C88D98638D4;    // 0x2520(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1EC87F2B4134D48DB470CDB984C5CB32;    // 0x2760(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_85820324449E7A01B496868D8D42DA4B;    // 0x29A0(0x0240)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6416B4BA4A35340EFBA0CBA57750D945;// 0x2BE0(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DDCF714A4D0C8C522B47AA9887917E34;// 0x2CF8(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FF7C86A947FA9AC3BA3658951D35A3FC;// 0x2E20(0x0048)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_557155124535AB6A09814FAB6B6628B8;// 0x2E68(0x0180)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_14243BD34C51BFBCCB5ACEB4D60C2457;// 0x2FE8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_456A1C2141841886A9C26289A75E6F54;// 0x3030(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_922D122F41AA7533D2B8F1AF7A5E2F62;// 0x3080(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56B881EB41990F59CE3E2F9DEE6B83DF;// 0x31A0(0x00D0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9C2EE868438557DE17763ABD8B8AEE87;// 0x3270(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_71A021B841767D60F8D084B6D38A554C;// 0x32B8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_42AFD1B9438CE92244691796B78DD933;    // 0x3300(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C819CF2D4EEF881E230E0F854D8F1F0D;    // 0x3540(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A2C45FD84D752FE5B5CA3B9983A41703;    // 0x3780(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8C0966AD4F94AC09DE80D39607FF2D3B;    // 0x39C0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9B104AFE4B4D74767A505FB64DF2575F;    // 0x3C00(0x0240)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DFFCC82B4CC345D6F7CA76BEA4503D38;// 0x3E40(0x0050)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1B2AAB1C4D5168D43E6097B58D39B7A4;    // 0x3E90(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_17481C2E40BB405940CBDEAB797A1EF3;    // 0x40D0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_32381C5948368EB3DCCC1A8D57BEE445;    // 0x4310(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B0B7B83345CCDA78A3DDE185BB606714;    // 0x4550(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_965FA2244E221C684E5EEFAD0A03DF5E;    // 0x4790(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0630B06747AF80B6DA5939AFAE6A5ECB;    // 0x49D0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8CB3223E4B8D7EE6886334BE4EFB406A;    // 0x4C10(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5BE8EB8941BD233637AD41B6D6199158;    // 0x4E50(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_24BB63B243B3CF4CA84494AFB813B0BC;    // 0x5090(0x0240)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_43FAD47A49099BFFB9A5318FD80070DB;// 0x52D0(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CD7B08F24978133833A3E8A0CA0C0DF1;// 0x53E8(0x0128)
	float                                              Speed;                                                    // 0x5510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpwardVelocity;                                           // 0x5514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementStyle>                    MovementStyle;                                            // 0x5518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Orphaned;                                                 // 0x5519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x551A(0x0006) MISSED OFFSET
	class AShielderPawn_C*                             ShielderPawn;                                             // 0x5520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TailAimTargetLocation;                                    // 0x5528(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShielderLocation;                                         // 0x5534(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShielderLocation_LastFrame;                               // 0x5540(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShielderLocation_Delta;                                   // 0x554C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ShielderLeanAngle_FwdBack;                                // 0x5558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShielderLeanAngle_LeftRight;                              // 0x555C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShielderLeanAngleMultiplier;                              // 0x5560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDisableTailAim;                                     // 0x5564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x5565(0x0003) MISSED OFFSET
	float                                              SpringSkelControlWeight;                                  // 0x5568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSuperShielder;                                          // 0x556C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Shielder_AnimBP.Shielder_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_1EC87F2B4134D48DB470CDB984C5CB32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_85820324449E7A01B496868D8D42DA4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_BlendSpacePlayer_DDCF714A4D0C8C522B47AA9887917E34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_SpringBone_557155124535AB6A09814FAB6B6628B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_BlendListByBool_56B881EB41990F59CE3E2F9DEE6B83DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_42AFD1B9438CE92244691796B78DD933();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_C819CF2D4EEF881E230E0F854D8F1F0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_A2C45FD84D752FE5B5CA3B9983A41703();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_8C0966AD4F94AC09DE80D39607FF2D3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_9B104AFE4B4D74767A505FB64DF2575F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_1B2AAB1C4D5168D43E6097B58D39B7A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_17481C2E40BB405940CBDEAB797A1EF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_32381C5948368EB3DCCC1A8D57BEE445();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_B0B7B83345CCDA78A3DDE185BB606714();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_965FA2244E221C684E5EEFAD0A03DF5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_0630B06747AF80B6DA5939AFAE6A5ECB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_8CB3223E4B8D7EE6886334BE4EFB406A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_5BE8EB8941BD233637AD41B6D6199158();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_24BB63B243B3CF4CA84494AFB813B0BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_BlendSpacePlayer_CD7B08F24978133833A3E8A0CA0C0DF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_0213A6E24F644BB0F4ADE0BC240149E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_F8F28A2341D427DBCC3463B753C8F884();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_703B04C4479A6FF38E449CB56C0C9E32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_91A6E94B4403D6FE7667D1AE708E00C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_FF2BE5334EC963253184219F8D6CEBE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_BlendListByBool_5EACE9814BD7663EFF5A4EB4A6267911();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_4B17AFA7484A7476DE37B2AFC774735C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_C41C4A8143AE12AD0A5C1198F72912C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_75A72B7542D28D85CB53C9BCDE31790B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_EEB0718F4F580A8B395D5F85AC4BCDCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_68B98BDD43F0651856C42C88D98638D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_ADF7F0304EAAB0169163AF97DCCDD06E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_64F638374E3A425A40F8768292E1CBAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_E6FF7CFF4B667248BB4D0B9D80CE57C7();
	void ExecuteUbergraph_Shielder_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
