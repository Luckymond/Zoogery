#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>
struct List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Experimental.U2D.IK.CCDSolver2D
struct CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30;
// UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]
struct FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46;
// UnityEngine.Experimental.U2D.IK.FabrikSolver2D
struct FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC;
// UnityEngine.Experimental.U2D.IK.IKChain2D
struct IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152;
// UnityEngine.Experimental.U2D.IK.IKManager2D
struct IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A;
// UnityEngine.Experimental.U2D.IK.IKUtility
struct IKUtility_t31EBC1B8A402311E538C024AC4D3FF544AB962F4;
// UnityEngine.Experimental.U2D.IK.LimbSolver2D
struct LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7;
// UnityEngine.Experimental.U2D.IK.Solver2D
struct Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9;
// UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute
struct Solver2DMenuAttribute_t15BA3093E9F879A050E03AC1869D7FF962D6786E;
// UnityEngine.Experimental.U2D.IK.Solver2D[]
struct Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A_m16A918427D7F0CDEAFAD55A384EEA4A895317186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSolver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9_mC151E5BBA912CF2D96E9E32290333C6CD072D447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2140074F505C7E1C9C0808CBE89FED403450DA52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDD6BABC7C382D7FA7D0E5BDB31980701D6284074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA8B413820F12027D26E2166EF6F2ADBD299603A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7E033BF8563E3006463CEDA272246F9DA50F3389_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1F2DD491E6712A2F9C93E4B4DDEEECA1CBC66B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mCE73E6B2ED1D41CE855577315BE64A132FE91731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mFC90E7DEE81C944EEEFF68B06AD00A7297FFD6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m28A23558AEABAD203C9A35CC191CF5153E7AB566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2938EAA70706D9B5B10D922C2F2CB4B27CB77AF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFE4C943BE7BCCE65BCCD4C11039F2CC06DDF00ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CCD2D_DoIteration_mFBD330B071092C881F226F116ADEE4A2F2FC7037_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCD2D_RotatePositionFrom_m584CF95198107ACCB301C567404AD89D820AA489_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCD2D_Solve_m4ADD3FB3172951D5E8320DDAE6B2275AFC89065D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_DoPrepare_m7C33C6521959841C6F43C7BDB15B001031A400E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_DoUpdateIK_mC55E98965474BEA9FBD548954CCD6C1BFF690C0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D__ctor_m21BA6BFE2B8A0FED69F6AB55FFD45ACC5E6A7456_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_set_iterations_m4D6A1E98DDC68B27613A027AC2DA2F09BE92B48E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_set_tolerance_m0B39EEAAE351162D41704D7E232D19E73211EEA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_set_velocity_m028AC2D80C21F3A4A2CF4C90ED7B74B4DBE8E8A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_Backward_mC0871F66C5AB73F54357A61E8C565F19467A7D87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_Forward_m9AB1F75F1764AAC95750FE07A318A1A332533E28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_SolveBackwardsChain_mD2486752953C098D5BA229863BD1D173B9CE11C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_SolveForwardsChain_mEB37964702634778F3CD0F229B63D7C9E809F48B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_Solve_m0796F12902CC03C3FBCA9DE7E9911F55D11439D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_ValidateChain_m7BEB341A681B84F926666C3D016607FD994F1C85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_ValidateJoint_m5BF6359DB6216253748A1CC0612FCAFBB282EB9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_DoPrepare_m6A8AAF474D0263DE0D93DF26F22A9CEA40BED10C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_DoUpdateIK_m383392A488B29057F8A989E22EF1D4E307C14F9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D__ctor_m3B50B17616D281B5002A2C6D023CFF4CF90F6D71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_set_iterations_mB3859118AB6531EAD9F3F7E598D023C56357FEFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_set_tolerance_m39B2B647A39A7FF5F5C96E7865D1F5F10753E148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_BlendFkToIk_mBC2FA4A43D931CFA8AEEE44362F91EB76BEAEF0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_Initialize_m101CF6E540A4AF0D68F970D1B55296314F7E89F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_PrepareLengths_m6A1FEF123B01033B971F273E635171690B405331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_Validate_m381B2F91E1ABF89C83C635AB2FD3956695A8FFC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_set_transformCount_m940532F21E092CB2755420D3B9A46A52C612B90D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_AddSolver_m666620BAE0C8B21B512328BE6587A8BF36249266_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_FindChildSolvers_m9FC593445C3926DFD82BB1DA745BF082FAA74925_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_OnValidate_mD121EFAFB82A2F7638F7CFE092722232DF95CB5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_RemoveSolver_m62DD1494CBBF3D70D1A0DBBED1FD9408F695913E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_UpdateManager_m5E1474C9C88A2D9778FDA8B347757CB2AF32D51C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D__ctor_m1584BC24B125109B6AFD9D283E48AA984A4368F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_set_weight_m2CAA40BD2B437D8AEC707B16E145907E86D8966F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKUtility_GetAncestorCount_m06BBFE89373C138DFF50B6B7484AE6A93C102BEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKUtility_GetMaxChainCount_m161FA95434042A6D34D3EB6EE8BFF73D57182F82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKUtility_IsDescendentOf_m8D98C7755E4DA8B7AC8055EE6430E02BCF9B2CD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LimbSolver2D_DoUpdateIK_mFCCAAD0396AB9E68347D9D109CB86A7DB39B511E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LimbSolver2D__ctor_m40BF4EE83B57ECA0F12408D1C70D61278DE3238C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Limb_Solve_mD5C501F6422C786198BB0438483EDF5E30ED70CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_BlendFkToIk_m0975F963772CF28CBD4A4B657E41B1FF048F63E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_GetWorldPositionFromSolverPlanePoint_mE316C5C26CD9DC53EE686B135C9A2BBFA38B8821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_HasTargets_m492514B11CC706D42795F643B419DA77335C2EDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_OnValidate_m20281F4D5D894B504F8E93F065C72960CEFBE6C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_PrepareEffectorPositions_mA1A9AEA8AFE21F4A66377A32F9D5546D7A4A5872_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_Prepare_m9B620DCE17B0D1148CA5CAE4A2A19C5964FD7029_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_UpdateIK_m7CEF681AAF21F70BA41E309F1BBA00F45EDD52CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D__ctor_mDBF0C2CC24D5BA51A1A797418122BDE4D7F8E9F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_set_weight_mD2826925FBCEC0106E9D717BCCA443095A6C548F_MetadataUsageId;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46;
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE7C1FCD397486377AD407002A63B1F04965DA9CB 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>
struct  List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19, ____items_1)); }
	inline Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43* get__items_1() const { return ____items_1; }
	inline Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19_StaticFields, ____emptyArray_5)); }
	inline Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Solver2DU5BU5D_tEE5243BA90D4A8B4362512009E7F756F5EE24D43* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Experimental.U2D.IK.CCD2D
struct  CCD2D_tEA9EFCE40A8F5171B486FF99E151C756EE0984D8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.FABRIK2D
struct  FABRIK2D_t20FE53D5F2527586AA3C9880516D08C70871343B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.IKChain2D
struct  IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::m_EffectorTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_EffectorTransform_0;
	// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::m_TargetTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_TargetTransform_1;
	// System.Int32 UnityEngine.Experimental.U2D.IK.IKChain2D::m_TransformCount
	int32_t ___m_TransformCount_2;
	// UnityEngine.Transform[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_Transforms
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ___m_Transforms_3;
	// UnityEngine.Quaternion[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_DefaultLocalRotations
	QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* ___m_DefaultLocalRotations_4;
	// UnityEngine.Quaternion[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_StoredLocalRotations
	QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* ___m_StoredLocalRotations_5;
	// System.Single[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_Lengths
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_Lengths_6;

public:
	inline static int32_t get_offset_of_m_EffectorTransform_0() { return static_cast<int32_t>(offsetof(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152, ___m_EffectorTransform_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_EffectorTransform_0() const { return ___m_EffectorTransform_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_EffectorTransform_0() { return &___m_EffectorTransform_0; }
	inline void set_m_EffectorTransform_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_EffectorTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EffectorTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetTransform_1() { return static_cast<int32_t>(offsetof(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152, ___m_TargetTransform_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_TargetTransform_1() const { return ___m_TargetTransform_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_TargetTransform_1() { return &___m_TargetTransform_1; }
	inline void set_m_TargetTransform_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_TargetTransform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetTransform_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransformCount_2() { return static_cast<int32_t>(offsetof(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152, ___m_TransformCount_2)); }
	inline int32_t get_m_TransformCount_2() const { return ___m_TransformCount_2; }
	inline int32_t* get_address_of_m_TransformCount_2() { return &___m_TransformCount_2; }
	inline void set_m_TransformCount_2(int32_t value)
	{
		___m_TransformCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Transforms_3() { return static_cast<int32_t>(offsetof(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152, ___m_Transforms_3)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get_m_Transforms_3() const { return ___m_Transforms_3; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of_m_Transforms_3() { return &___m_Transforms_3; }
	inline void set_m_Transforms_3(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		___m_Transforms_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transforms_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultLocalRotations_4() { return static_cast<int32_t>(offsetof(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152, ___m_DefaultLocalRotations_4)); }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* get_m_DefaultLocalRotations_4() const { return ___m_DefaultLocalRotations_4; }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3** get_address_of_m_DefaultLocalRotations_4() { return &___m_DefaultLocalRotations_4; }
	inline void set_m_DefaultLocalRotations_4(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* value)
	{
		___m_DefaultLocalRotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultLocalRotations_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoredLocalRotations_5() { return static_cast<int32_t>(offsetof(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152, ___m_StoredLocalRotations_5)); }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* get_m_StoredLocalRotations_5() const { return ___m_StoredLocalRotations_5; }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3** get_address_of_m_StoredLocalRotations_5() { return &___m_StoredLocalRotations_5; }
	inline void set_m_StoredLocalRotations_5(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* value)
	{
		___m_StoredLocalRotations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoredLocalRotations_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lengths_6() { return static_cast<int32_t>(offsetof(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152, ___m_Lengths_6)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_Lengths_6() const { return ___m_Lengths_6; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_Lengths_6() { return &___m_Lengths_6; }
	inline void set_m_Lengths_6(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_Lengths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_6), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.IKUtility
struct  IKUtility_t31EBC1B8A402311E538C024AC4D3FF544AB962F4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.Limb
struct  Limb_t9EF3318D4D34033F483AE6C229A176064BC2BBF1  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>
struct  Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F, ___list_0)); }
	inline List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * get_list_0() const { return ___list_0; }
	inline List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F, ___current_3)); }
	inline Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * get_current_3() const { return ___current_3; }
	inline Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute
struct  Solver2DMenuAttribute_t15BA3093E9F879A050E03AC1869D7FF962D6786E  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute::m_MenuPath
	String_t* ___m_MenuPath_0;

public:
	inline static int32_t get_offset_of_m_MenuPath_0() { return static_cast<int32_t>(offsetof(Solver2DMenuAttribute_t15BA3093E9F879A050E03AC1869D7FF962D6786E, ___m_MenuPath_0)); }
	inline String_t* get_m_MenuPath_0() const { return ___m_MenuPath_0; }
	inline String_t** get_address_of_m_MenuPath_0() { return &___m_MenuPath_0; }
	inline void set_m_MenuPath_0(String_t* value)
	{
		___m_MenuPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuPath_0), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Experimental.U2D.IK.FABRIKChain2D
struct  FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 
{
public:
	// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::origin
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___origin_0;
	// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::target
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___target_1;
	// System.Single UnityEngine.Experimental.U2D.IK.FABRIKChain2D::sqrTolerance
	float ___sqrTolerance_2;
	// UnityEngine.Vector2[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::positions
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___positions_3;
	// System.Single[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::lengths
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths_4;
	// System.Int32[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::subChainIndices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___subChainIndices_5;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::worldPositions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___worldPositions_6;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62, ___origin_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_origin_0() const { return ___origin_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62, ___target_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_target_1() const { return ___target_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___target_1 = value;
	}

	inline static int32_t get_offset_of_sqrTolerance_2() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62, ___sqrTolerance_2)); }
	inline float get_sqrTolerance_2() const { return ___sqrTolerance_2; }
	inline float* get_address_of_sqrTolerance_2() { return &___sqrTolerance_2; }
	inline void set_sqrTolerance_2(float value)
	{
		___sqrTolerance_2 = value;
	}

	inline static int32_t get_offset_of_positions_3() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62, ___positions_3)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_positions_3() const { return ___positions_3; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_positions_3() { return &___positions_3; }
	inline void set_positions_3(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___positions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_3), (void*)value);
	}

	inline static int32_t get_offset_of_lengths_4() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62, ___lengths_4)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_lengths_4() const { return ___lengths_4; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_lengths_4() { return &___lengths_4; }
	inline void set_lengths_4(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___lengths_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengths_4), (void*)value);
	}

	inline static int32_t get_offset_of_subChainIndices_5() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62, ___subChainIndices_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_subChainIndices_5() const { return ___subChainIndices_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_subChainIndices_5() { return &___subChainIndices_5; }
	inline void set_subChainIndices_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___subChainIndices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subChainIndices_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldPositions_6() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62, ___worldPositions_6)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_worldPositions_6() const { return ___worldPositions_6; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_worldPositions_6() { return &___worldPositions_6; }
	inline void set_worldPositions_6(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___worldPositions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldPositions_6), (void*)value);
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.IKManager2D
struct  IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D> UnityEngine.Experimental.U2D.IK.IKManager2D::m_Solvers
	List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * ___m_Solvers_4;
	// System.Single UnityEngine.Experimental.U2D.IK.IKManager2D::m_Weight
	float ___m_Weight_5;

public:
	inline static int32_t get_offset_of_m_Solvers_4() { return static_cast<int32_t>(offsetof(IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A, ___m_Solvers_4)); }
	inline List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * get_m_Solvers_4() const { return ___m_Solvers_4; }
	inline List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 ** get_address_of_m_Solvers_4() { return &___m_Solvers_4; }
	inline void set_m_Solvers_4(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * value)
	{
		___m_Solvers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Solvers_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_5() { return static_cast<int32_t>(offsetof(IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A, ___m_Weight_5)); }
	inline float get_m_Weight_5() const { return ___m_Weight_5; }
	inline float* get_address_of_m_Weight_5() { return &___m_Weight_5; }
	inline void set_m_Weight_5(float value)
	{
		___m_Weight_5 = value;
	}
};


// UnityEngine.Experimental.U2D.IK.Solver2D
struct  Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::m_ConstrainRotation
	bool ___m_ConstrainRotation_4;
	// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::m_SolveFromDefaultPose
	bool ___m_SolveFromDefaultPose_5;
	// System.Single UnityEngine.Experimental.U2D.IK.Solver2D::m_Weight
	float ___m_Weight_6;
	// UnityEngine.Plane UnityEngine.Experimental.U2D.IK.Solver2D::m_Plane
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  ___m_Plane_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.Experimental.U2D.IK.Solver2D::m_TargetPositions
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___m_TargetPositions_8;

public:
	inline static int32_t get_offset_of_m_ConstrainRotation_4() { return static_cast<int32_t>(offsetof(Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9, ___m_ConstrainRotation_4)); }
	inline bool get_m_ConstrainRotation_4() const { return ___m_ConstrainRotation_4; }
	inline bool* get_address_of_m_ConstrainRotation_4() { return &___m_ConstrainRotation_4; }
	inline void set_m_ConstrainRotation_4(bool value)
	{
		___m_ConstrainRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_SolveFromDefaultPose_5() { return static_cast<int32_t>(offsetof(Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9, ___m_SolveFromDefaultPose_5)); }
	inline bool get_m_SolveFromDefaultPose_5() const { return ___m_SolveFromDefaultPose_5; }
	inline bool* get_address_of_m_SolveFromDefaultPose_5() { return &___m_SolveFromDefaultPose_5; }
	inline void set_m_SolveFromDefaultPose_5(bool value)
	{
		___m_SolveFromDefaultPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Weight_6() { return static_cast<int32_t>(offsetof(Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9, ___m_Weight_6)); }
	inline float get_m_Weight_6() const { return ___m_Weight_6; }
	inline float* get_address_of_m_Weight_6() { return &___m_Weight_6; }
	inline void set_m_Weight_6(float value)
	{
		___m_Weight_6 = value;
	}

	inline static int32_t get_offset_of_m_Plane_7() { return static_cast<int32_t>(offsetof(Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9, ___m_Plane_7)); }
	inline Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  get_m_Plane_7() const { return ___m_Plane_7; }
	inline Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * get_address_of_m_Plane_7() { return &___m_Plane_7; }
	inline void set_m_Plane_7(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  value)
	{
		___m_Plane_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetPositions_8() { return static_cast<int32_t>(offsetof(Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9, ___m_TargetPositions_8)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_m_TargetPositions_8() const { return ___m_TargetPositions_8; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_m_TargetPositions_8() { return &___m_TargetPositions_8; }
	inline void set_m_TargetPositions_8(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___m_TargetPositions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetPositions_8), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.CCDSolver2D
struct  CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30  : public Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9
{
public:
	// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Chain
	IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * ___m_Chain_13;
	// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Iterations
	int32_t ___m_Iterations_14;
	// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Tolerance
	float ___m_Tolerance_15;
	// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Velocity
	float ___m_Velocity_16;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Positions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Positions_17;

public:
	inline static int32_t get_offset_of_m_Chain_13() { return static_cast<int32_t>(offsetof(CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30, ___m_Chain_13)); }
	inline IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * get_m_Chain_13() const { return ___m_Chain_13; }
	inline IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 ** get_address_of_m_Chain_13() { return &___m_Chain_13; }
	inline void set_m_Chain_13(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * value)
	{
		___m_Chain_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Iterations_14() { return static_cast<int32_t>(offsetof(CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30, ___m_Iterations_14)); }
	inline int32_t get_m_Iterations_14() const { return ___m_Iterations_14; }
	inline int32_t* get_address_of_m_Iterations_14() { return &___m_Iterations_14; }
	inline void set_m_Iterations_14(int32_t value)
	{
		___m_Iterations_14 = value;
	}

	inline static int32_t get_offset_of_m_Tolerance_15() { return static_cast<int32_t>(offsetof(CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30, ___m_Tolerance_15)); }
	inline float get_m_Tolerance_15() const { return ___m_Tolerance_15; }
	inline float* get_address_of_m_Tolerance_15() { return &___m_Tolerance_15; }
	inline void set_m_Tolerance_15(float value)
	{
		___m_Tolerance_15 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_16() { return static_cast<int32_t>(offsetof(CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30, ___m_Velocity_16)); }
	inline float get_m_Velocity_16() const { return ___m_Velocity_16; }
	inline float* get_address_of_m_Velocity_16() { return &___m_Velocity_16; }
	inline void set_m_Velocity_16(float value)
	{
		___m_Velocity_16 = value;
	}

	inline static int32_t get_offset_of_m_Positions_17() { return static_cast<int32_t>(offsetof(CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30, ___m_Positions_17)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Positions_17() const { return ___m_Positions_17; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Positions_17() { return &___m_Positions_17; }
	inline void set_m_Positions_17(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Positions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_17), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.FabrikSolver2D
struct  FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC  : public Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9
{
public:
	// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Chain
	IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * ___m_Chain_11;
	// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Iterations
	int32_t ___m_Iterations_12;
	// System.Single UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Tolerance
	float ___m_Tolerance_13;
	// System.Single[] UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Lengths
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_Lengths_14;
	// UnityEngine.Vector2[] UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Positions
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_Positions_15;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_WorldPositions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_WorldPositions_16;

public:
	inline static int32_t get_offset_of_m_Chain_11() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC, ___m_Chain_11)); }
	inline IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * get_m_Chain_11() const { return ___m_Chain_11; }
	inline IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 ** get_address_of_m_Chain_11() { return &___m_Chain_11; }
	inline void set_m_Chain_11(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * value)
	{
		___m_Chain_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Iterations_12() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC, ___m_Iterations_12)); }
	inline int32_t get_m_Iterations_12() const { return ___m_Iterations_12; }
	inline int32_t* get_address_of_m_Iterations_12() { return &___m_Iterations_12; }
	inline void set_m_Iterations_12(int32_t value)
	{
		___m_Iterations_12 = value;
	}

	inline static int32_t get_offset_of_m_Tolerance_13() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC, ___m_Tolerance_13)); }
	inline float get_m_Tolerance_13() const { return ___m_Tolerance_13; }
	inline float* get_address_of_m_Tolerance_13() { return &___m_Tolerance_13; }
	inline void set_m_Tolerance_13(float value)
	{
		___m_Tolerance_13 = value;
	}

	inline static int32_t get_offset_of_m_Lengths_14() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC, ___m_Lengths_14)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_Lengths_14() const { return ___m_Lengths_14; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_Lengths_14() { return &___m_Lengths_14; }
	inline void set_m_Lengths_14(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_Lengths_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Positions_15() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC, ___m_Positions_15)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_Positions_15() const { return ___m_Positions_15; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_Positions_15() { return &___m_Positions_15; }
	inline void set_m_Positions_15(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_Positions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_WorldPositions_16() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC, ___m_WorldPositions_16)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_WorldPositions_16() const { return ___m_WorldPositions_16; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_WorldPositions_16() { return &___m_WorldPositions_16; }
	inline void set_m_WorldPositions_16(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_WorldPositions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldPositions_16), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.LimbSolver2D
struct  LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7  : public Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9
{
public:
	// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Chain
	IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * ___m_Chain_9;
	// System.Boolean UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Flip
	bool ___m_Flip_10;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Positions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Positions_11;
	// System.Single[] UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Lengths
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_Lengths_12;
	// System.Single[] UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Angles
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_Angles_13;

public:
	inline static int32_t get_offset_of_m_Chain_9() { return static_cast<int32_t>(offsetof(LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7, ___m_Chain_9)); }
	inline IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * get_m_Chain_9() const { return ___m_Chain_9; }
	inline IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 ** get_address_of_m_Chain_9() { return &___m_Chain_9; }
	inline void set_m_Chain_9(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * value)
	{
		___m_Chain_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flip_10() { return static_cast<int32_t>(offsetof(LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7, ___m_Flip_10)); }
	inline bool get_m_Flip_10() const { return ___m_Flip_10; }
	inline bool* get_address_of_m_Flip_10() { return &___m_Flip_10; }
	inline void set_m_Flip_10(bool value)
	{
		___m_Flip_10 = value;
	}

	inline static int32_t get_offset_of_m_Positions_11() { return static_cast<int32_t>(offsetof(LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7, ___m_Positions_11)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Positions_11() const { return ___m_Positions_11; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Positions_11() { return &___m_Positions_11; }
	inline void set_m_Positions_11(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Positions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lengths_12() { return static_cast<int32_t>(offsetof(LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7, ___m_Lengths_12)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_Lengths_12() const { return ___m_Lengths_12; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_Lengths_12() { return &___m_Lengths_12; }
	inline void set_m_Lengths_12(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_Lengths_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Angles_13() { return static_cast<int32_t>(offsetof(LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7, ___m_Angles_13)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_Angles_13() const { return ___m_Angles_13; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_Angles_13() { return &___m_Angles_13; }
	inline void set_m_Angles_13(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_Angles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Angles_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * m_Items[1];

public:
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]
struct FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  m_Items[1];

public:
	inline FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___positions_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lengths_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subChainIndices_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___worldPositions_6), (void*)NULL);
		#endif
	}
	inline FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___positions_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lengths_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subChainIndices_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___worldPositions_6), (void*)NULL);
		#endif
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  m_Items[1];

public:
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mBC8C7F7AC47D7C6706426302F2A8C6D0044A2CBD_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m36052D294AB8C1574678FEF9A9749145A073E8E3_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1F2DD491E6712A2F9C93E4B4DDEEECA1CBC66B55_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.CCD2D::DoIteration(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCD2D_DoIteration_mFBD330B071092C881F226F116ADEE4A2F2FC7037 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward1, int32_t ___last2, float ___velocity3, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___positions4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m1EE7C67FC8F7497353EBDE007D3ED35774C82E4C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.CCD2D::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CCD2D_RotatePositionFrom_m584CF95198107ACCB301C567404AD89D820AA489 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.IKChain2D::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// UnityEngine.Transform[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_get_iterations_mB4A88056DCD9DCF56DAFB17245D5C7C2E442AB5B (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_tolerance_mAA01A8461B1EF2C98E91357CE319C2B2D3202121 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.CCD2D::Solve(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CCD2D_Solve_m4ADD3FB3172951D5E8320DDAE6B2275AFC89065D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward1, int32_t ___solverLimit2, float ___tolerance3, float ___velocity4, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___positions5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D__ctor_m05D60373E96D087E0D5F0AD212A1543BEE792042 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D__ctor_mDBF0C2CC24D5BA51A1A797418122BDE4D7F8E9F7 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Forward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Forward_m9AB1F75F1764AAC95750FE07A318A1A332533E28 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___targetPosition0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths1, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** ___positions2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Backward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Backward_mC0871F66C5AB73F54357A61E8C565F19467A7D87 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___originPosition0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths1, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** ___positions2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::ValidateChain(UnityEngine.Experimental.U2D.IK.FABRIKChain2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_ValidateChain_m7BEB341A681B84F926666C3D016607FD994F1C85 (FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* ___chains0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveForwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_SolveForwardsChain_mEB37964702634778F3CD0F229B63D7C9E809F48B (int32_t ___idx0, FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** ___chains1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveBackwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveBackwardsChain_mD2486752953C098D5BA229863BD1D173B9CE11C7 (int32_t ___idx0, FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** ___chains1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FABRIKChain2D_get_last_m2084F2633470EFF0917F7267D09F40D6C27D4BED (FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_first()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FABRIKChain2D_get_first_mD7464259F646C5DEC325CFA80ACA103F66140E0D (FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38 (float p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mEE4D2EE5E1705D49AA08EC1B10AA4A8BFF1D8408 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetPointOnSolverPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver2D_GetPointOnSolverPlane_m76B5E431D751EA2541D442A28BB30F5CF447CD26 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_get_iterations_mD707CA920CF693EB2780D0568204014C2D4C667C (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FabrikSolver2D_get_tolerance_m39FF5E1B3F7686E2D353ECEA6FEF943D7F972F11 (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::Solve(UnityEngine.Vector2,System.Int32,System.Single,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_Solve_m0796F12902CC03C3FBCA9DE7E9911F55D11439D6 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___targetPosition0, int32_t ___solverLimit1, float ___tolerance2, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths3, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** ___positions4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetWorldPositionFromSolverPlanePoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver2D_GetWorldPositionFromSolverPlanePoint_mE316C5C26CD9DC53EE686B135C9A2BBFA38B8821 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___planePoint0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_Validate_m381B2F91E1ABF89C83C635AB2FD3956695A8FFC4 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_get_isValid_m479924C7ED5A354319804EBA709639A121DA48C8 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::PrepareLengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_PrepareLengths_m6A1FEF123B01033B971F273E635171690B405331 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_effector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_rootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_rootTransform_mB50E9B0287291ECA7919007ED69EC37BB8F17FB6 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_lastTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_lastTransform_m39ADAC5970D016DD2DDF37B04B292AF8F05DD24C (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.IKUtility::IsDescendentOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKUtility_IsDescendentOf_m8D98C7755E4DA8B7AC8055EE6430E02BCF9B2CD2 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ancestor1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.IKUtility::GetAncestorCount(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetAncestorCount_m06BBFE89373C138DFF50B6B7484AE6A93C102BEE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::FindChildSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_FindChildSolvers_m9FC593445C3926DFD82BB1DA745BF082FAA74925 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Clear()
inline void List_1_Clear_mCE73E6B2ED1D41CE855577315BE64A132FE91731 (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::.ctor()
inline void List_1__ctor_mFE4C943BE7BCCE65BCCD4C11039F2CC06DDF00ED (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.Experimental.U2D.IK.Solver2D>(System.Boolean,System.Collections.Generic.List`1<!!0>)
inline void Component_GetComponentsInChildren_TisSolver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9_mC151E5BBA912CF2D96E9E32290333C6CD072D447 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * p1, const RuntimeMethod* method)
{
	((  void (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mBC8C7F7AC47D7C6706426302F2A8C6D0044A2CBD_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::GetEnumerator()
inline Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F  List_1_GetEnumerator_m28A23558AEABAD203C9A35CC191CF5153E7AB566 (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F  (*) (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>::get_Current()
inline Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * Enumerator_get_Current_mA8B413820F12027D26E2166EF6F2ADBD299603A8 (Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F * __this, const RuntimeMethod* method)
{
	return ((  Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * (*) (Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Experimental.U2D.IK.IKManager2D>()
inline IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * Component_GetComponentInParent_TisIKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A_m16A918427D7F0CDEAFAD55A384EEA4A895317186 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m36052D294AB8C1574678FEF9A9749145A073E8E3_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::AddSolver(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolver_m666620BAE0C8B21B512328BE6587A8BF36249266 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * ___solver0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>::MoveNext()
inline bool Enumerator_MoveNext_mDD6BABC7C382D7FA7D0E5BDB31980701D6284074 (Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>::Dispose()
inline void Enumerator_Dispose_m2140074F505C7E1C9C0808CBE89FED403450DA52 (Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Contains(!0)
inline bool List_1_Contains_mFC90E7DEE81C944EEEFF68B06AD00A7297FFD6AA (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * __this, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Add(!0)
inline void List_1_Add_m7E033BF8563E3006463CEDA272246F9DA50F3389 (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * __this, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Remove(!0)
inline bool List_1_Remove_m2938EAA70706D9B5B10D922C2F2CB4B27CB77AF4 (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * __this, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61 (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_isValid_mD342EEB5077AAE58C9D9D7C79387A2F593D2BD1D (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Initialize_m2896B321867895F4BD397B0552E441AE3359F56B (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.IKManager2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKManager2D_get_weight_m37A3944AA6D4CD7CA3D30E6458E7D5FA698D74EC (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m80A8EB3B3E4470386E55F5CE48AC629028F99CDB (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, float ___globalWeight0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::UpdateManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_UpdateManager_m5E1474C9C88A2D9778FDA8B347757CB2AF32D51C (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_transformCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_transformCount_m940532F21E092CB2755420D3B9A46A52C612B90D (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_OnValidate_m20281F4D5D894B504F8E93F065C72960CEFBE6C9 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Single[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_lengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* IKChain2D_get_lengths_mB5818DD7FE1D4424B3B1EF6F15DE79E01FD1B479 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Limb::Solve(UnityEngine.Vector3,System.Single[],UnityEngine.Vector3[],System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Limb_Solve_mD5C501F6422C786198BB0438483EDF5E30ED70CB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** ___angles3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.LimbSolver2D::get_flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimbSolver2D_get_flip_mA6F4BEA2025697755B6FF003A379DAD5AD57198A (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_Validate_m6DAE84C38DA652E2446B75188A5AEDB78742CFC8 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::HasTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_HasTargets_m492514B11CC706D42795F643B419DA77335C2EDE (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_Initialize_m101CF6E540A4AF0D68F970D1B55296314F7E89F5 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::set_normal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_normal_m848DA6C5F58CFF7B3A8EA25F97002A1BBF4867A7 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::set_distance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_distance_mE29A36BDD0530CD58FE00D0F5261CEC24C107C11 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_constrainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_constrainRotation_m602DD0AE2BD77BC2A9CDEB3FB1C972503E611CAA (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::RestoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_RestoreDefaultPose_m78D8757B8F90A9D4230029CD263EE78E1F05DC3C (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, bool ___targetRotationIsConstrained0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m1F2DD491E6712A2F9C93E4B4DDEEECA1CBC66B55 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_Clear_m1F2DD491E6712A2F9C93E4B4DDEEECA1CBC66B55_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_allChainsHaveTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_allChainsHaveTargets_mD534DA924866ADF7E10D3D32E6A6E9DB06612FBC (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::PrepareEffectorPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_PrepareEffectorPositions_mA1A9AEA8AFE21F4A66377A32F9D5546D7A4A5872 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m7CEF681AAF21F70BA41E309F1BBA00F45EDD52CC (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___positions0, float ___globalWeight1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_gshared)(__this, method);
}
// System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::get_chainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Solver2D_get_chainCount_mF5F599904211FE684B7D440D7CCF298DD1D572FF (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.Solver2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver2D_get_weight_m8AE6519F5A44A5E45205980B38D36F02D315E5BE (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Prepare_m9B620DCE17B0D1148CA5CAE4A2A19C5964FD7029 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_StoreLocalRotations_mBBB132AF9D7EBE692AB19FAD1FCE24BC8156C728 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::BlendFkToIk(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_BlendFkToIk_m0975F963772CF28CBD4A4B657E41B1FF048F63E6 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, float ___finalWeight0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_StoreLocalRotations_mA648E81C439D6CFCB2DDF3F97CBDA9C95E5AC42E (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::BlendFkToIk(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_BlendFkToIk_mBC2FA4A43D931CFA8AEEE44362F91EB76BEAEF0E (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, float ___finalWeight0, bool ___targetRotationIsConstrained1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_ClosestPointOnPlane_m5BD59F43459CAC4A3CEA9F763455C23E3162A4AE (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.U2D.IK.CCD2D::Solve(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CCD2D_Solve_m4ADD3FB3172951D5E8320DDAE6B2275AFC89065D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward1, int32_t ___solverLimit2, float ___tolerance3, float ___velocity4, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___positions5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCD2D_Solve_m4ADD3FB3172951D5E8320DDAE6B2275AFC89065D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// int last = positions.Length - 1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_0 = ___positions5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		// int iterations = 0;
		V_1 = 0;
		// float sqrTolerance = tolerance * tolerance;
		float L_2 = ___tolerance3;
		float L_3 = ___tolerance3;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// float sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___targetPosition0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_5 = ___positions5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_11;
		goto IL_0056;
	}

IL_0029:
	{
		// DoIteration(targetPosition, forward, last, velocity, ref positions);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___targetPosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___forward1;
		int32_t L_14 = V_0;
		float L_15 = ___velocity4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_16 = ___positions5;
		CCD2D_DoIteration_mFBD330B071092C881F226F116ADEE4A2F2FC7037(L_12, L_13, L_14, L_15, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_16, /*hidden argument*/NULL);
		// sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___targetPosition0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_18 = ___positions5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_18);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_17, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		float L_24 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_24;
		// if (++iterations >= solverLimit)
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		V_1 = L_26;
		int32_t L_27 = ___solverLimit2;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_005a;
		}
	}

IL_0056:
	{
		// while (sqrDistanceToTarget > sqrTolerance)
		float L_28 = V_3;
		float L_29 = V_2;
		if ((((float)L_28) > ((float)L_29)))
		{
			goto IL_0029;
		}
	}

IL_005a:
	{
		// return iterations != 0;
		int32_t L_30 = V_1;
		return (bool)((!(((uint32_t)L_30) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCD2D::DoIteration(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,UnityEngine.Vector3[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCD2D_DoIteration_mFBD330B071092C881F226F116ADEE4A2F2FC7037 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward1, int32_t ___last2, float ___velocity3, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___positions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCD2D_DoIteration_mFBD330B071092C881F226F116ADEE4A2F2FC7037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_0 = ___last2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_0081;
	}

IL_0006:
	{
		// Vector3 toTarget = targetPosition - positions[i];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___targetPosition0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_2 = ___positions4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_2);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_1, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// Vector3 toLast = positions[last] - positions[i];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_8 = ___positions4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_8);
		int32_t L_10 = ___last2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_13 = ___positions4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_13);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_12, L_17, /*hidden argument*/NULL);
		// float angle = Vector3.SignedAngle(toLast, toTarget, forward);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___forward1;
		float L_21 = Vector3_SignedAngle_m1EE7C67FC8F7497353EBDE007D3ED35774C82E4C(L_18, L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// angle = Mathf.Lerp(0f, angle, velocity);
		float L_22 = V_2;
		float L_23 = ___velocity3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_24 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364((0.0f), L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// Quaternion deltaRotation = Quaternion.AngleAxis(angle, forward);
		float L_25 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = ___forward1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_25, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		// for (int j = last; j > i; --j)
		int32_t L_28 = ___last2;
		V_4 = L_28;
		goto IL_0078;
	}

IL_004f:
	{
		// positions[j] = RotatePositionFrom(positions[j], positions[i], deltaRotation);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_29 = ___positions4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_30 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_29);
		int32_t L_31 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_32 = ___positions4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_33 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_32);
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_37 = ___positions4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_38 = *((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_37);
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = CCD2D_RotatePositionFrom_m584CF95198107ACCB301C567404AD89D820AA489(L_36, L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_43);
		// for (int j = last; j > i; --j)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
	}

IL_0078:
	{
		// for (int j = last; j > i; --j)
		int32_t L_45 = V_4;
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) > ((int32_t)L_46)))
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1));
	}

IL_0081:
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.CCD2D::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CCD2D_RotatePositionFrom_m584CF95198107ACCB301C567404AD89D820AA489 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCD2D_RotatePositionFrom_m584CF95198107ACCB301C567404AD89D820AA489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = position - pivot;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___pivot1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// v = rotation * v;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// return pivot + v;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___pivot1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_get_iterations_mB4A88056DCD9DCF56DAFB17245D5C7C2E442AB5B (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Iterations; }
		int32_t L_0 = __this->get_m_Iterations_14();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::set_iterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_iterations_m4D6A1E98DDC68B27613A027AC2DA2F09BE92B48E (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_set_iterations_m4D6A1E98DDC68B27613A027AC2DA2F09BE92B48E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_0, 1, /*hidden argument*/NULL);
		__this->set_m_Iterations_14(L_1);
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		return;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_tolerance_mAA01A8461B1EF2C98E91357CE319C2B2D3202121 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Tolerance; }
		float L_0 = __this->get_m_Tolerance_15();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::set_tolerance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_tolerance_m0B39EEAAE351162D41704D7E232D19E73211EEA3 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_set_tolerance_m0B39EEAAE351162D41704D7E232D19E73211EEA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_0, (0.001f), /*hidden argument*/NULL);
		__this->set_m_Tolerance_15(L_1);
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		return;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_velocity_mA07945798584AA908D59E37FD2A6BFC72549BE13 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Velocity; }
		float L_0 = __this->get_m_Velocity_16();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::set_velocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_velocity_m028AC2D80C21F3A4A2CF4C90ED7B74B4DBE8E8A0 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_set_velocity_m028AC2D80C21F3A4A2CF4C90ED7B74B4DBE8E8A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Velocity = Mathf.Clamp01(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		__this->set_m_Velocity_16(L_1);
		// set { m_Velocity = Mathf.Clamp01(value); }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_GetChainCount_mD6724F7CDCFED255D0AA65D1592D50B1DD206998 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method)
{
	{
		// return 1;
		return 1;
	}
}
// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.CCDSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * CCDSolver2D_GetChain_m63EFAA00F0FCEF7FE713CE904770A82728D6EE83 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return m_Chain;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = __this->get_m_Chain_13();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_DoPrepare_m7C33C6521959841C6F43C7BDB15B001031A400E9 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_DoPrepare_m7C33C6521959841C6F43C7BDB15B001031A400E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_Positions == null || m_Positions.Length != m_Chain.transformCount)
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = __this->get_m_Positions_17();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = __this->get_m_Positions_17();
		NullCheck(L_1);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_2 = __this->get_m_Chain_13();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_2, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) == ((int32_t)L_3)))
		{
			goto IL_0033;
		}
	}

IL_001d:
	{
		// m_Positions = new Vector3[m_Chain.transformCount];
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_4 = __this->get_m_Chain_13();
		NullCheck(L_4);
		int32_t L_5 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_4, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_m_Positions_17(L_6);
	}

IL_0033:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		V_0 = 0;
		goto IL_0059;
	}

IL_0037:
	{
		// m_Positions[i] = m_Chain.transforms[i].position;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = __this->get_m_Positions_17();
		int32_t L_8 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_9 = __this->get_m_Chain_13();
		NullCheck(L_9);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_10 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_14);
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_16 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_17 = __this->get_m_Chain_13();
		NullCheck(L_17);
		int32_t L_18 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_DoUpdateIK_mC55E98965474BEA9FBD548954CCD6C1BFF690C0D (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_DoUpdateIK_mC55E98965474BEA9FBD548954CCD6C1BFF690C0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 effectorPosition = effectorPositions[0];
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___effectorPositions0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_0, 0, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		V_0 = L_1;
		// Vector2 effectorLocalPosition2D = m_Chain.transforms[0].InverseTransformPoint(effectorPosition);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_2 = __this->get_m_Chain_13();
		NullCheck(L_2);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_3 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// effectorPosition = m_Chain.transforms[0].TransformPoint(effectorLocalPosition2D);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_9 = __this->get_m_Chain_13();
		NullCheck(L_9);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_10 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// if (CCD2D.Solve(effectorPosition, GetPlaneRootTransform().forward, iterations, tolerance, Mathf.Lerp(kMinVelocity, kMaxVelocity, m_Velocity), ref m_Positions))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = VirtFuncInvoker0< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_17, /*hidden argument*/NULL);
		int32_t L_19 = CCDSolver2D_get_iterations_mB4A88056DCD9DCF56DAFB17245D5C7C2E442AB5B(__this, /*hidden argument*/NULL);
		float L_20 = CCDSolver2D_get_tolerance_mAA01A8461B1EF2C98E91357CE319C2B2D3202121(__this, /*hidden argument*/NULL);
		float L_21 = __this->get_m_Velocity_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364((0.01f), (1.0f), L_21, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** L_23 = __this->get_address_of_m_Positions_17();
		bool L_24 = CCD2D_Solve_m4ADD3FB3172951D5E8320DDAE6B2275AFC89065D(L_16, L_18, L_19, L_20, L_22, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e8;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		V_2 = 0;
		goto IL_00d8;
	}

IL_0078:
	{
		// Vector3 startLocalPosition = m_Chain.transforms[i + 1].localPosition;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_25 = __this->get_m_Chain_13();
		NullCheck(L_25);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_26 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// Vector3 endLocalPosition = m_Chain.transforms[i].InverseTransformPoint(m_Positions[i + 1]);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_31 = __this->get_m_Chain_13();
		NullCheck(L_31);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_32 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_31, /*hidden argument*/NULL);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_36 = __this->get_m_Positions_17();
		int32_t L_37 = V_2;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_35, L_39, /*hidden argument*/NULL);
		V_4 = L_40;
		// m_Chain.transforms[i].localRotation *= Quaternion.FromToRotation(startLocalPosition, endLocalPosition);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_41 = __this->get_m_Chain_13();
		NullCheck(L_41);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_42 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_41, /*hidden argument*/NULL);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = L_45;
		NullCheck(L_46);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_46, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_48, L_49, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_47, L_50, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_46, L_51, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00d8:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_53 = V_2;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_54 = __this->get_m_Chain_13();
		NullCheck(L_54);
		int32_t L_55 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)))))
		{
			goto IL_0078;
		}
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D__ctor_m21BA6BFE2B8A0FED69F6AB55FFD45ACC5E6A7456 (CCDSolver2D_tD827E2498298EC130E70A9CD4AB78DB5E559AB30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D__ctor_m21BA6BFE2B8A0FED69F6AB55FFD45ACC5E6A7456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IKChain2D m_Chain = new IKChain2D();
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *)il2cpp_codegen_object_new(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152_il2cpp_TypeInfo_var);
		IKChain2D__ctor_m05D60373E96D087E0D5F0AD212A1543BEE792042(L_0, /*hidden argument*/NULL);
		__this->set_m_Chain_13(L_0);
		// private int m_Iterations = 10;
		__this->set_m_Iterations_14(((int32_t)10));
		// private float m_Tolerance = 0.01f;
		__this->set_m_Tolerance_15((0.01f));
		// private float m_Velocity = 0.5f;
		__this->set_m_Velocity_16((0.5f));
		Solver2D__ctor_mDBF0C2CC24D5BA51A1A797418122BDE4D7F8E9F7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::Solve(UnityEngine.Vector2,System.Int32,System.Single,System.Single[],UnityEngine.Vector2[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_Solve_m0796F12902CC03C3FBCA9DE7E9911F55D11439D6 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___targetPosition0, int32_t ___solverLimit1, float ___tolerance2, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths3, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** ___positions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_Solve_m0796F12902CC03C3FBCA9DE7E9911F55D11439D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int last = positions.Length - 1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_0 = ___positions4;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_1 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		// int iterations = 0;
		V_1 = 0;
		// float sqrTolerance = tolerance * tolerance;
		float L_2 = ___tolerance2;
		float L_3 = ___tolerance2;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// float sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___targetPosition0;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_5 = ___positions4;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_6 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_4, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		V_3 = L_11;
		// Vector2 originPosition = positions[0];
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_12 = ___positions4;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_13 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_12);
		NullCheck(L_13);
		int32_t L_14 = 0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		goto IL_0068;
	}

IL_0034:
	{
		// Forward(targetPosition, lengths, ref positions);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = ___targetPosition0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_17 = ___lengths3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_18 = ___positions4;
		FABRIK2D_Forward_m9AB1F75F1764AAC95750FE07A318A1A332533E28(L_16, L_17, (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_18, /*hidden argument*/NULL);
		// Backward(originPosition, lengths, ref positions);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_4;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_20 = ___lengths3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_21 = ___positions4;
		FABRIK2D_Backward_mC0871F66C5AB73F54357A61E8C565F19467A7D87(L_19, L_20, (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_21, /*hidden argument*/NULL);
		// sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = ___targetPosition0;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_23 = ___positions4;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_24 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_23);
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_22, L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		V_3 = L_29;
		// if (++iterations >= solverLimit)
		int32_t L_30 = V_1;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		V_1 = L_31;
		int32_t L_32 = ___solverLimit1;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_006c;
		}
	}

IL_0068:
	{
		// while (sqrDistanceToTarget > sqrTolerance)
		float L_33 = V_3;
		float L_34 = V_2;
		if ((((float)L_33) > ((float)L_34)))
		{
			goto IL_0034;
		}
	}

IL_006c:
	{
		// return iterations != 0;
		int32_t L_35 = V_1;
		return (bool)((!(((uint32_t)L_35) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveChain_m92BE97DFBB96DF40BE044FBF32EC497C7695CDED (int32_t ___solverLimit0, FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** ___chains1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (ValidateChain(chains))
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_1 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_0);
		bool L_2 = FABRIK2D_ValidateChain_m7BEB341A681B84F926666C3D016607FD994F1C85(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		V_0 = 0;
		goto IL_0023;
	}

IL_000f:
	{
		// SolveForwardsChain(0, ref chains);
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_3 = ___chains1;
		FABRIK2D_SolveForwardsChain_mEB37964702634778F3CD0F229B63D7C9E809F48B(0, (FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_3, /*hidden argument*/NULL);
		// if (!SolveBackwardsChain(0, ref chains))
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_4 = ___chains1;
		bool L_5 = FABRIK2D_SolveBackwardsChain_mD2486752953C098D5BA229863BD1D173B9CE11C7(0, (FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		int32_t L_7 = V_0;
		int32_t L_8 = ___solverLimit0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000f;
		}
	}

IL_0027:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::ValidateChain(UnityEngine.Experimental.U2D.IK.FABRIKChain2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_ValidateChain_m7BEB341A681B84F926666C3D016607FD994F1C85 (FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* ___chains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_ValidateChain_m7BEB341A681B84F926666C3D016607FD994F1C85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* V_0 = NULL;
	int32_t V_1 = 0;
	FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// foreach (var chain in chains)
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_0 = ___chains0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_0006:
	{
		// foreach (var chain in chains)
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (chain.subChainIndices.Length == 0 && (chain.target - chain.last).sqrMagnitude > chain.sqrTolerance)
		FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  L_5 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = L_5.get_subChainIndices_5();
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_003b;
		}
	}
	{
		FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  L_7 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = L_7.get_target_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = FABRIKChain2D_get_last_m2084F2633470EFF0917F7267D09F40D6C27D4BED((FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62  L_12 = V_2;
		float L_13 = L_12.get_sqrTolerance_2();
		if ((!(((float)L_11) > ((float)L_13))))
		{
			goto IL_003b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003f:
	{
		// foreach (var chain in chains)
		int32_t L_15 = V_1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveForwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_SolveForwardsChain_mEB37964702634778F3CD0F229B63D7C9E809F48B (int32_t ___idx0, FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** ___chains1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_SolveForwardsChain_mEB37964702634778F3CD0F229B63D7C9E809F48B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var target = chains[idx].target;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_1 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_0);
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_target_1();
		V_0 = L_3;
		// if (chains[idx].subChainIndices.Length > 0)
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_4 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_5 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_4);
		int32_t L_6 = ___idx0;
		NullCheck(L_5);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_subChainIndices_5();
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0080;
		}
	}
	{
		// target = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		V_0 = L_8;
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_0028:
	{
		// var childIdx = chains[idx].subChainIndices[i];
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_9 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_10 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_9);
		int32_t L_11 = ___idx0;
		NullCheck(L_10);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_subChainIndices_5();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		// SolveForwardsChain(childIdx, ref chains);
		int32_t L_16 = V_2;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_17 = ___chains1;
		FABRIK2D_SolveForwardsChain_mEB37964702634778F3CD0F229B63D7C9E809F48B(L_16, (FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_17, /*hidden argument*/NULL);
		// target += chains[childIdx].first;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_0;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_19 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_20 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_19);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = FABRIKChain2D_get_first_mD7464259F646C5DEC325CFA80ACA103F66140E0D((FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_18, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0057:
	{
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_25 = V_1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_26 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_27 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_26);
		int32_t L_28 = ___idx0;
		NullCheck(L_27);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_subChainIndices_5();
		NullCheck(L_29);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		// target = target / chains[idx].subChainIndices.Length;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = V_0;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_31 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_32 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_31);
		int32_t L_33 = ___idx0;
		NullCheck(L_32);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_subChainIndices_5();
		NullCheck(L_34);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_30, (((float)((float)(((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))), /*hidden argument*/NULL);
		V_0 = L_35;
	}

IL_0080:
	{
		// Forward(target, chains[idx].lengths, ref chains[idx].positions);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = V_0;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_37 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_38 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_37);
		int32_t L_39 = ___idx0;
		NullCheck(L_38);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->get_lengths_4();
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_41 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_42 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_41);
		int32_t L_43 = ___idx0;
		NullCheck(L_42);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_address_of_positions_3();
		FABRIK2D_Forward_m9AB1F75F1764AAC95750FE07A318A1A332533E28(L_36, L_40, (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveBackwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveBackwardsChain_mD2486752953C098D5BA229863BD1D173B9CE11C7 (int32_t ___idx0, FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** ___chains1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_SolveBackwardsChain_mD2486752953C098D5BA229863BD1D173B9CE11C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool notSolved = false;
		V_0 = (bool)0;
		// Backward(chains[idx].origin, chains[idx].lengths, ref chains[idx].positions);
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_1 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_0);
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_origin_0();
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_4 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_5 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_4);
		int32_t L_6 = ___idx0;
		NullCheck(L_5);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_lengths_4();
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_8 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_9 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_8);
		int32_t L_10 = ___idx0;
		NullCheck(L_9);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_address_of_positions_3();
		FABRIK2D_Backward_mC0871F66C5AB73F54357A61E8C565F19467A7D87(L_3, L_7, (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_11, /*hidden argument*/NULL);
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_0032:
	{
		// var childIdx = chains[idx].subChainIndices[i];
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_12 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_13 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_12);
		int32_t L_14 = ___idx0;
		NullCheck(L_13);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->get_subChainIndices_5();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		// chains[childIdx].origin = chains[idx].last;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_19 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_20 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_19);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_22 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_23 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_22);
		int32_t L_24 = ___idx0;
		NullCheck(L_23);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = FABRIKChain2D_get_last_m2084F2633470EFF0917F7267D09F40D6C27D4BED((FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), /*hidden argument*/NULL);
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->set_origin_0(L_25);
		// notSolved |= SolveBackwardsChain(childIdx, ref chains);
		bool L_26 = V_0;
		int32_t L_27 = V_2;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_28 = ___chains1;
		bool L_29 = FABRIK2D_SolveBackwardsChain_mD2486752953C098D5BA229863BD1D173B9CE11C7(L_27, (FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_28, /*hidden argument*/NULL);
		V_0 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_29));
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_006a:
	{
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_31 = V_1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_32 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_33 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_32);
		int32_t L_34 = ___idx0;
		NullCheck(L_33);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_subChainIndices_5();
		NullCheck(L_35);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		// if (chains[idx].subChainIndices.Length == 0)
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_36 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_37 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_36);
		int32_t L_38 = ___idx0;
		NullCheck(L_37);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_subChainIndices_5();
		NullCheck(L_39);
		if ((((RuntimeArray*)L_39)->max_length))
		{
			goto IL_00c5;
		}
	}
	{
		// notSolved |= (chains[idx].target - chains[idx].last).sqrMagnitude > chains[idx].sqrTolerance;
		bool L_40 = V_0;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_41 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_42 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_41);
		int32_t L_43 = ___idx0;
		NullCheck(L_42);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_target_1();
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_45 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_46 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_45);
		int32_t L_47 = ___idx0;
		NullCheck(L_46);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_48 = FABRIKChain2D_get_last_m2084F2633470EFF0917F7267D09F40D6C27D4BED((FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_44, L_48, /*hidden argument*/NULL);
		V_3 = L_49;
		float L_50 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46** L_51 = ___chains1;
		FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46* L_52 = *((FABRIKChain2DU5BU5D_tEEBDE2C3B90CE78772E5525423A2A668B529DD46**)L_51);
		int32_t L_53 = ___idx0;
		NullCheck(L_52);
		float L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->get_sqrTolerance_2();
		V_0 = (bool)((int32_t)((int32_t)L_40|(int32_t)((((float)L_50) > ((float)L_54))? 1 : 0)));
	}

IL_00c5:
	{
		// return notSolved;
		bool L_55 = V_0;
		return L_55;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Forward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Forward_m9AB1F75F1764AAC95750FE07A318A1A332533E28 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___targetPosition0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths1, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** ___positions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_Forward_m9AB1F75F1764AAC95750FE07A318A1A332533E28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var last = positions.Length - 1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_0 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_1 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		// positions[last] = targetPosition;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_2 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_2);
		int32_t L_4 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ___targetPosition0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_5);
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_6 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		goto IL_0073;
	}

IL_0016:
	{
		// var r = positions[i + 1] - positions[i];
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_7 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_8 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_12 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_13 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_12);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_11, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// var l = lengths[i] / r.magnitude;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_18 = ___lengths1;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_2), /*hidden argument*/NULL);
		V_3 = ((float)((float)L_21/(float)L_22));
		// var position = (1f - l) * positions[i + 1] + l * positions[i];
		float L_23 = V_3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_24 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_25 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_24);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23)), L_28, /*hidden argument*/NULL);
		float L_30 = V_3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_31 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_32 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_31);
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(L_30, L_35, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_29, L_36, /*hidden argument*/NULL);
		V_4 = L_37;
		// positions[i] = position;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_38 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_39 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_38);
		int32_t L_40 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = V_4;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_41);
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
	}

IL_0073:
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_43 = V_1;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Backward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Backward_mC0871F66C5AB73F54357A61E8C565F19467A7D87 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___originPosition0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths1, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** ___positions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_Backward_mC0871F66C5AB73F54357A61E8C565F19467A7D87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// positions[0] = originPosition;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_0 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_1 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___originPosition0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_2);
		// var last = positions.Length - 1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_3 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), (int32_t)1));
		// for (int i = 0; i < last; ++i)
		V_1 = 0;
		goto IL_0073;
	}

IL_0014:
	{
		// var r = positions[i + 1] - positions[i];
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_5 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_6 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_10 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_11 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_9, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// var l = lengths[i] / r.magnitude;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_16 = ___lengths1;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_2), /*hidden argument*/NULL);
		V_3 = ((float)((float)L_19/(float)L_20));
		// var position = (1f - l) * positions[i] + l * positions[i + 1];
		float L_21 = V_3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_22 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_23 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_22);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_21)), L_26, /*hidden argument*/NULL);
		float L_28 = V_3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_29 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_30 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_29);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(L_28, L_33, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_27, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		// positions[i + 1] = position;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_36 = ___positions2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_37 = *((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_36);
		int32_t L_38 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = V_4;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1))), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_39);
		// for (int i = 0; i < last; ++i)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0073:
	{
		// for (int i = 0; i < last; ++i)
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIK2D::ValidateJoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FABRIK2D_ValidateJoint_m5BF6359DB6216253748A1CC0612FCAFBB282EB9D (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___endPosition0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___startPosition1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___right2, float ___min3, float ___max4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_ValidateJoint_m5BF6359DB6216253748A1CC0612FCAFBB282EB9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var localDifference = endPosition - startPosition;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___endPosition0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___startPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var angle = Vector2.SignedAngle(right, localDifference);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___right2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = V_0;
		float L_5 = Vector2_SignedAngle_mEE4D2EE5E1705D49AA08EC1B10AA4A8BFF1D8408(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// var validatedPosition = endPosition;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___endPosition0;
		V_2 = L_6;
		// if (angle < min)
		float L_7 = V_1;
		float L_8 = ___min3;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_004d;
		}
	}
	{
		// var minRotation = Quaternion.Euler(0f, 0f, min);
		float L_9 = ___min3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// validatedPosition = startPosition + (Vector2)(minRotation * right * localDifference.magnitude);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = ___startPosition1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = ___right2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_12, L_14, /*hidden argument*/NULL);
		float L_16 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, L_16, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_17, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_11, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// }
		goto IL_008a;
	}

IL_004d:
	{
		// else if (angle > max)
		float L_20 = V_1;
		float L_21 = ___max4;
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_008a;
		}
	}
	{
		// var maxRotation = Quaternion.Euler(0f, 0f, max);
		float L_22 = ___max4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		// validatedPosition = startPosition + (Vector2)(maxRotation * right * localDifference.magnitude);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = ___startPosition1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = V_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = ___right2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_25, L_27, /*hidden argument*/NULL);
		float L_29 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_28, L_29, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_30, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_24, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
	}

IL_008a:
	{
		// return validatedPosition;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = V_2;
		return L_33;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_first()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FABRIKChain2D_get_first_mD7464259F646C5DEC325CFA80ACA103F66140E0D (FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * __this, const RuntimeMethod* method)
{
	{
		// get { return positions[0]; }
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_0 = __this->get_positions_3();
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FABRIKChain2D_get_first_mD7464259F646C5DEC325CFA80ACA103F66140E0D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * _thisAdjusted = reinterpret_cast<FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 *>(__this + 1);
	return FABRIKChain2D_get_first_mD7464259F646C5DEC325CFA80ACA103F66140E0D(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FABRIKChain2D_get_last_m2084F2633470EFF0917F7267D09F40D6C27D4BED (FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * __this, const RuntimeMethod* method)
{
	{
		// get { return positions[positions.Length - 1]; }
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_0 = __this->get_positions_3();
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_1 = __this->get_positions_3();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FABRIKChain2D_get_last_m2084F2633470EFF0917F7267D09F40D6C27D4BED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 * _thisAdjusted = reinterpret_cast<FABRIKChain2D_t9669E696F17C314492D8B7C9107D32472380AA62 *>(__this + 1);
	return FABRIKChain2D_get_last_m2084F2633470EFF0917F7267D09F40D6C27D4BED(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_get_iterations_mD707CA920CF693EB2780D0568204014C2D4C667C (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Iterations; }
		int32_t L_0 = __this->get_m_Iterations_12();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::set_iterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_set_iterations_mB3859118AB6531EAD9F3F7E598D023C56357FEFD (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_set_iterations_mB3859118AB6531EAD9F3F7E598D023C56357FEFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_0, 1, /*hidden argument*/NULL);
		__this->set_m_Iterations_12(L_1);
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		return;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FabrikSolver2D_get_tolerance_m39FF5E1B3F7686E2D353ECEA6FEF943D7F972F11 (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Tolerance; }
		float L_0 = __this->get_m_Tolerance_13();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::set_tolerance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_set_tolerance_m39B2B647A39A7FF5F5C96E7865D1F5F10753E148 (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_set_tolerance_m39B2B647A39A7FF5F5C96E7865D1F5F10753E148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_0, (0.001f), /*hidden argument*/NULL);
		__this->set_m_Tolerance_13(L_1);
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_GetChainCount_m8F811377235F0AB87446D61910975EF507E3067C (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, const RuntimeMethod* method)
{
	{
		// return 1;
		return 1;
	}
}
// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.FabrikSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * FabrikSolver2D_GetChain_m0AE64A252E264FFA65E1605AC63DCF9547BC5A4C (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return m_Chain;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = __this->get_m_Chain_11();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_DoPrepare_m6A8AAF474D0263DE0D93DF26F22A9CEA40BED10C (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_DoPrepare_m6A8AAF474D0263DE0D93DF26F22A9CEA40BED10C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_Positions == null || m_Positions.Length != m_Chain.transformCount)
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_0 = __this->get_m_Positions_15();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_1 = __this->get_m_Positions_15();
		NullCheck(L_1);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_2 = __this->get_m_Chain_11();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_2, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) == ((int32_t)L_3)))
		{
			goto IL_0061;
		}
	}

IL_001d:
	{
		// m_Positions = new Vector2[m_Chain.transformCount];
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_4 = __this->get_m_Chain_11();
		NullCheck(L_4);
		int32_t L_5 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_4, /*hidden argument*/NULL);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_6 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_m_Positions_15(L_6);
		// m_Lengths = new float[m_Chain.transformCount - 1];
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_7 = __this->get_m_Chain_11();
		NullCheck(L_7);
		int32_t L_8 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_7, /*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		__this->set_m_Lengths_14(L_9);
		// m_WorldPositions = new Vector3[m_Chain.transformCount];
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_10 = __this->get_m_Chain_11();
		NullCheck(L_10);
		int32_t L_11 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_10, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_12 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->set_m_WorldPositions_16(L_12);
	}

IL_0061:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		V_0 = 0;
		goto IL_0092;
	}

IL_0065:
	{
		// m_Positions[i] = GetPointOnSolverPlane(m_Chain.transforms[i].position);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_13 = __this->get_m_Positions_15();
		int32_t L_14 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_15 = __this->get_m_Chain_11();
		NullCheck(L_15);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_16 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Solver2D_GetPointOnSolverPlane_m76B5E431D751EA2541D442A28BB30F5CF447CD26(__this, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_21, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_22);
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0092:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_24 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_25 = __this->get_m_Chain_11();
		NullCheck(L_25);
		int32_t L_26 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0065;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		V_1 = 0;
		goto IL_00d7;
	}

IL_00a4:
	{
		// m_Lengths[i] = (m_Positions[i + 1] - m_Positions[i]).magnitude;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_27 = __this->get_m_Lengths_14();
		int32_t L_28 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_29 = __this->get_m_Positions_15();
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_33 = __this->get_m_Positions_15();
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_32, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		float L_38 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (float)L_38);
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00d7:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_40 = V_1;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_41 = __this->get_m_Chain_11();
		NullCheck(L_41);
		int32_t L_42 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1)))))
		{
			goto IL_00a4;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_DoUpdateIK_m383392A488B29057F8A989E22EF1D4E307C14F9D (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_DoUpdateIK_m383392A488B29057F8A989E22EF1D4E307C14F9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 effectorPosition = effectorPositions[0];
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___effectorPositions0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_0, 0, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		V_0 = L_1;
		// effectorPosition = GetPointOnSolverPlane(effectorPosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver2D_GetPointOnSolverPlane_m76B5E431D751EA2541D442A28BB30F5CF447CD26(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (FABRIK2D.Solve(effectorPosition, iterations, tolerance, m_Lengths, ref m_Positions))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_4, /*hidden argument*/NULL);
		int32_t L_6 = FabrikSolver2D_get_iterations_mD707CA920CF693EB2780D0568204014C2D4C667C(__this, /*hidden argument*/NULL);
		float L_7 = FabrikSolver2D_get_tolerance_m39FF5E1B3F7686E2D353ECEA6FEF943D7F972F11(__this, /*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = __this->get_m_Lengths_14();
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** L_9 = __this->get_address_of_m_Positions_15();
		bool L_10 = FABRIK2D_Solve_m0796F12902CC03C3FBCA9DE7E9911F55D11439D6(L_5, L_6, L_7, L_8, (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6**)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0; i < m_Positions.Length; ++i)
		V_1 = 0;
		goto IL_005e;
	}

IL_003c:
	{
		// m_WorldPositions[i] = GetWorldPositionFromSolverPlanePoint(m_Positions[i]);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = __this->get_m_WorldPositions_16();
		int32_t L_12 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_13 = __this->get_m_Positions_15();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Solver2D_GetWorldPositionFromSolverPlanePoint_mE316C5C26CD9DC53EE686B135C9A2BBFA38B8821(__this, L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_17);
		// for (int i = 0; i < m_Positions.Length; ++i)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005e:
	{
		// for (int i = 0; i < m_Positions.Length; ++i)
		int32_t L_19 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_20 = __this->get_m_Positions_15();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_003c;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		V_2 = 0;
		goto IL_00cd;
	}

IL_006d:
	{
		// Vector3 startLocalPosition = m_Chain.transforms[i + 1].localPosition;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_21 = __this->get_m_Chain_11();
		NullCheck(L_21);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_22 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// Vector3 endLocalPosition = m_Chain.transforms[i].InverseTransformPoint(m_WorldPositions[i + 1]);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_27 = __this->get_m_Chain_11();
		NullCheck(L_27);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_28 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_32 = __this->get_m_WorldPositions_16();
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_31, L_35, /*hidden argument*/NULL);
		V_4 = L_36;
		// m_Chain.transforms[i].localRotation *= Quaternion.FromToRotation(startLocalPosition, endLocalPosition);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_37 = __this->get_m_Chain_11();
		NullCheck(L_37);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_38 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_37, /*hidden argument*/NULL);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = L_41;
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_42, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_44, L_45, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_43, L_46, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_42, L_47, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00cd:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_49 = V_2;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_50 = __this->get_m_Chain_11();
		NullCheck(L_50);
		int32_t L_51 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(L_50, /*hidden argument*/NULL);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1)))))
		{
			goto IL_006d;
		}
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D__ctor_m3B50B17616D281B5002A2C6D023CFF4CF90F6D71 (FabrikSolver2D_t76A19CCC4217E0BFA836204E46504650D5B67FFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D__ctor_m3B50B17616D281B5002A2C6D023CFF4CF90F6D71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IKChain2D m_Chain = new IKChain2D();
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *)il2cpp_codegen_object_new(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152_il2cpp_TypeInfo_var);
		IKChain2D__ctor_m05D60373E96D087E0D5F0AD212A1543BEE792042(L_0, /*hidden argument*/NULL);
		__this->set_m_Chain_11(L_0);
		// private int m_Iterations = 10;
		__this->set_m_Iterations_12(((int32_t)10));
		// private float m_Tolerance = 0.01f;
		__this->set_m_Tolerance_13((0.01f));
		Solver2D__ctor_mDBF0C2CC24D5BA51A1A797418122BDE4D7F8E9F7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_effector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EffectorTransform; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_m_EffectorTransform_0();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_effector(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_effector_mF0FE8E4B22FEA550C8EA58F01216B53F56ADDD94 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_EffectorTransform = value; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_m_EffectorTransform_0(L_0);
		// set { m_EffectorTransform = value; }
		return;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TargetTransform; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_m_TargetTransform_1();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_target(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_target_m3A5000A2483019A0C68D1565B9319251C7854702 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_TargetTransform = value; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_m_TargetTransform_1(L_0);
		// set { m_TargetTransform = value; }
		return;
	}
}
// UnityEngine.Transform[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Transforms; }
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_0 = __this->get_m_Transforms_3();
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_rootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_rootTransform_mB50E9B0287291ECA7919007ED69EC37BB8F17FB6 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Transforms != null && transformCount > 0 && m_Transforms.Length == transformCount)
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_0 = __this->get_m_Transforms_3();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_2 = __this->get_m_Transforms_3();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((uint32_t)L_3))))
		{
			goto IL_002a;
		}
	}
	{
		// return m_Transforms[0];
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_4 = __this->get_m_Transforms_3();
		NullCheck(L_4);
		int32_t L_5 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_002a:
	{
		// return null;
		return (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_lastTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * IKChain2D_get_lastTransform_m39ADAC5970D016DD2DDF37B04B292AF8F05DD24C (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Transforms != null && transformCount > 0 && m_Transforms.Length == transformCount)
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_0 = __this->get_m_Transforms_3();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_2 = __this->get_m_Transforms_3();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((uint32_t)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		// return m_Transforms[transformCount - 1];
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_4 = __this->get_m_Transforms_3();
		int32_t L_5 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_0031:
	{
		// return null;
		return (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.IKChain2D::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TransformCount; }
		int32_t L_0 = __this->get_m_TransformCount_2();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_transformCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_transformCount_m940532F21E092CB2755420D3B9A46A52C612B90D (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_set_transformCount_m940532F21E092CB2755420D3B9A46A52C612B90D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_TransformCount = Mathf.Max(0, value); }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(0, L_0, /*hidden argument*/NULL);
		__this->set_m_TransformCount_2(L_1);
		// set { m_TransformCount = Mathf.Max(0, value); }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_get_isValid_m479924C7ED5A354319804EBA709639A121DA48C8 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// get { return Validate(); }
		bool L_0 = IKChain2D_Validate_m381B2F91E1ABF89C83C635AB2FD3956695A8FFC4(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_lengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* IKChain2D_get_lengths_mB5818DD7FE1D4424B3B1EF6F15DE79E01FD1B479 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		// if(isValid)
		bool L_0 = IKChain2D_get_isValid_m479924C7ED5A354319804EBA709639A121DA48C8(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PrepareLengths();
		IKChain2D_PrepareLengths_m6A1FEF123B01033B971F273E635171690B405331(__this, /*hidden argument*/NULL);
		// return m_Lengths;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = __this->get_m_Lengths_6();
		return L_1;
	}

IL_0015:
	{
		// return null;
		return (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)NULL;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_Validate_m381B2F91E1ABF89C83C635AB2FD3956695A8FFC4 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_Validate_m381B2F91E1ABF89C83C635AB2FD3956695A8FFC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (effector == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (transformCount == 0)
		int32_t L_2 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// if (m_Transforms == null || m_Transforms.Length != transformCount)
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_3 = __this->get_m_Transforms_3();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_4 = __this->get_m_Transforms_3();
		NullCheck(L_4);
		int32_t L_5 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))) == ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}

IL_0032:
	{
		// return false;
		return (bool)0;
	}

IL_0034:
	{
		// if (m_DefaultLocalRotations == null || m_DefaultLocalRotations.Length != transformCount)
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_6 = __this->get_m_DefaultLocalRotations_4();
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_7 = __this->get_m_DefaultLocalRotations_4();
		NullCheck(L_7);
		int32_t L_8 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) == ((int32_t)L_8)))
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		// return false;
		return (bool)0;
	}

IL_004e:
	{
		// if (m_StoredLocalRotations ==  null || m_StoredLocalRotations.Length != transformCount)
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_9 = __this->get_m_StoredLocalRotations_5();
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_10 = __this->get_m_StoredLocalRotations_5();
		NullCheck(L_10);
		int32_t L_11 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))) == ((int32_t)L_11)))
		{
			goto IL_0068;
		}
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}

IL_0068:
	{
		// if (rootTransform == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = IKChain2D_get_rootTransform_mB50E9B0287291ECA7919007ED69EC37BB8F17FB6(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0078:
	{
		// if (lastTransform != effector)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = IKChain2D_get_lastTransform_m39ADAC5970D016DD2DDF37B04B292AF8F05DD24C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_008d:
	{
		// if (target && IKUtility.IsDescendentOf(target, rootTransform))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = IKChain2D_get_rootTransform_mB50E9B0287291ECA7919007ED69EC37BB8F17FB6(__this, /*hidden argument*/NULL);
		bool L_21 = IKUtility_IsDescendentOf_m8D98C7755E4DA8B7AC8055EE6430E02BCF9B2CD2(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00af;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00af:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_Initialize_m101CF6E540A4AF0D68F970D1B55296314F7E89F5 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_Initialize_m101CF6E540A4AF0D68F970D1B55296314F7E89F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (effector == null || transformCount == 0 || IKUtility.GetAncestorCount(effector) < transformCount - 1)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(__this, /*hidden argument*/NULL);
		int32_t L_4 = IKUtility_GetAncestorCount_m06BBFE89373C138DFF50B6B7484AE6A93C102BEE(L_3, /*hidden argument*/NULL);
		int32_t L_5 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))))
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		// return;
		return;
	}

IL_002c:
	{
		// m_Transforms = new Transform[transformCount];
		int32_t L_6 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_7 = (TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804*)(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804*)SZArrayNew(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_m_Transforms_3(L_7);
		// m_DefaultLocalRotations = new Quaternion[transformCount];
		int32_t L_8 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_9 = (QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3*)(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3*)SZArrayNew(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_m_DefaultLocalRotations_4(L_9);
		// m_StoredLocalRotations = new Quaternion[transformCount];
		int32_t L_10 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_11 = (QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3*)(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3*)SZArrayNew(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_m_StoredLocalRotations_5(L_11);
		// var currentTransform = effector;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(__this, /*hidden argument*/NULL);
		V_0 = L_12;
		// int index = transformCount - 1;
		int32_t L_13 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		goto IL_0097;
	}

IL_0071:
	{
		// m_Transforms[index] = currentTransform;
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_14 = __this->get_m_Transforms_3();
		int32_t L_15 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_16);
		// m_DefaultLocalRotations[index] = currentTransform.localRotation;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_17 = __this->get_m_DefaultLocalRotations_4();
		int32_t L_18 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = V_0;
		NullCheck(L_19);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_20);
		// currentTransform = currentTransform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = V_0;
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// --index;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
	}

IL_0097:
	{
		// while (currentTransform && index >= 0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::PrepareLengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_PrepareLengths_m6A1FEF123B01033B971F273E635171690B405331 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_PrepareLengths_m6A1FEF123B01033B971F273E635171690B405331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var currentTransform = effector;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// int index = transformCount - 1;
		int32_t L_1 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		// if (m_Lengths == null || m_Lengths.Length != transformCount - 1)
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = __this->get_m_Lengths_6();
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = __this->get_m_Lengths_6();
		NullCheck(L_3);
		int32_t L_4 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))))
		{
			goto IL_0083;
		}
	}

IL_002a:
	{
		// m_Lengths = new float[transformCount - 1];
		int32_t L_5 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
		__this->set_m_Lengths_6(L_6);
		goto IL_0083;
	}

IL_003f:
	{
		// if (currentTransform.parent && index > 0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		// m_Lengths[index - 1] = (currentTransform.position - currentTransform.parent.position).magnitude;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_11 = __this->get_m_Lengths_6();
		int32_t L_12 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = V_0;
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = V_0;
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		float L_19 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))), (float)L_19);
	}

IL_0078:
	{
		// currentTransform = currentTransform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = V_0;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// --index;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
	}

IL_0083:
	{
		// while (currentTransform && index >= 0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::RestoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_RestoreDefaultPose_m78D8757B8F90A9D4230029CD263EE78E1F05DC3C (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, bool ___targetRotationIsConstrained0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// var count = targetRotationIsConstrained ? transformCount : transformCount-1;
		bool L_0 = ___targetRotationIsConstrained0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_2 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		// m_Transforms[i].localRotation = m_DefaultLocalRotations[i];
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_3 = __this->get_m_Transforms_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_7 = __this->get_m_DefaultLocalRotations_4();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_6, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_StoreLocalRotations_mA648E81C439D6CFCB2DDF3F97CBDA9C95E5AC42E (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Transforms.Length; ++i)
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		// m_StoredLocalRotations[i] = m_Transforms[i].localRotation;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_0 = __this->get_m_StoredLocalRotations_5();
		int32_t L_1 = V_0;
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_2 = __this->get_m_Transforms_3();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6);
		// for (int i = 0; i < m_Transforms.Length; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < m_Transforms.Length; ++i)
		int32_t L_8 = V_0;
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_9 = __this->get_m_Transforms_3();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::BlendFkToIk(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_BlendFkToIk_mBC2FA4A43D931CFA8AEEE44362F91EB76BEAEF0E (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, float ___finalWeight0, bool ___targetRotationIsConstrained1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_BlendFkToIk_mBC2FA4A43D931CFA8AEEE44362F91EB76BEAEF0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// var count = targetRotationIsConstrained ? transformCount : transformCount-1;
		bool L_0 = ___targetRotationIsConstrained1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_2 = IKChain2D_get_transformCount_mC279C1642EE54288E3CF87E6EF1CE7F6ACF17925(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_0048;
	}

IL_0018:
	{
		// m_Transforms[i].localRotation = Quaternion.Slerp(m_StoredLocalRotations[i], m_Transforms[i].localRotation, finalWeight);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_3 = __this->get_m_Transforms_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_7 = __this->get_m_StoredLocalRotations_5();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_11 = __this->get_m_Transforms_3();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_14, /*hidden argument*/NULL);
		float L_16 = ___finalWeight0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_10, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_6, L_17, /*hidden argument*/NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0048:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D__ctor_m05D60373E96D087E0D5F0AD212A1543BEE792042 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Experimental.U2D.IK.IKManager2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKManager2D_get_weight_m37A3944AA6D4CD7CA3D30E6458E7D5FA698D74EC (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Weight; }
		float L_0 = __this->get_m_Weight_5();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_set_weight_m2CAA40BD2B437D8AEC707B16E145907E86D8966F (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_set_weight_m2CAA40BD2B437D8AEC707B16E145907E86D8966F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Weight = Mathf.Clamp01(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_5(L_1);
		// set { m_Weight = Mathf.Clamp01(value); }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D> UnityEngine.Experimental.U2D.IK.IKManager2D::get_solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * IKManager2D_get_solvers_m7A3E28F4962C59D0174D366A3FA65209CE6EB569 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Solvers; }
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_0 = __this->get_m_Solvers_4();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnValidate_mD121EFAFB82A2F7638F7CFE092722232DF95CB5E (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_OnValidate_mD121EFAFB82A2F7638F7CFE092722232DF95CB5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Weight = Mathf.Clamp01(m_Weight);
		float L_0 = __this->get_m_Weight_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_5(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnEnable_m7802F5304E7ABB8F1D18E968CA91F8E3BB4E21F9 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_Reset_mAD07FB5424269FE7AF9813F1AE4371DA52C83170 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	{
		// FindChildSolvers();
		IKManager2D_FindChildSolvers_m9FC593445C3926DFD82BB1DA745BF082FAA74925(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::FindChildSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_FindChildSolvers_m9FC593445C3926DFD82BB1DA745BF082FAA74925 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_FindChildSolvers_m9FC593445C3926DFD82BB1DA745BF082FAA74925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * V_0 = NULL;
	Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// m_Solvers.Clear();
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_0 = __this->get_m_Solvers_4();
		NullCheck(L_0);
		List_1_Clear_mCE73E6B2ED1D41CE855577315BE64A132FE91731(L_0, /*hidden argument*/List_1_Clear_mCE73E6B2ED1D41CE855577315BE64A132FE91731_RuntimeMethod_var);
		// List<Solver2D> solvers = new List<Solver2D>();
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_1 = (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *)il2cpp_codegen_object_new(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19_il2cpp_TypeInfo_var);
		List_1__ctor_mFE4C943BE7BCCE65BCCD4C11039F2CC06DDF00ED(L_1, /*hidden argument*/List_1__ctor_mFE4C943BE7BCCE65BCCD4C11039F2CC06DDF00ED_RuntimeMethod_var);
		V_0 = L_1;
		// transform.GetComponentsInChildren<Solver2D>(true, solvers);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_3 = V_0;
		NullCheck(L_2);
		Component_GetComponentsInChildren_TisSolver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9_mC151E5BBA912CF2D96E9E32290333C6CD072D447(L_2, (bool)1, L_3, /*hidden argument*/Component_GetComponentsInChildren_TisSolver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9_mC151E5BBA912CF2D96E9E32290333C6CD072D447_RuntimeMethod_var);
		// foreach (Solver2D solver in solvers)
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_4 = V_0;
		NullCheck(L_4);
		Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F  L_5 = List_1_GetEnumerator_m28A23558AEABAD203C9A35CC191CF5153E7AB566(L_4, /*hidden argument*/List_1_GetEnumerator_m28A23558AEABAD203C9A35CC191CF5153E7AB566_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0027:
		{
			// foreach (Solver2D solver in solvers)
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_6 = Enumerator_get_Current_mA8B413820F12027D26E2166EF6F2ADBD299603A8((Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *)(&V_1), /*hidden argument*/Enumerator_get_Current_mA8B413820F12027D26E2166EF6F2ADBD299603A8_RuntimeMethod_var);
			V_2 = L_6;
			// if (solver.GetComponentInParent<IKManager2D>() == this)
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_7 = V_2;
			NullCheck(L_7);
			IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * L_8 = Component_GetComponentInParent_TisIKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A_m16A918427D7F0CDEAFAD55A384EEA4A895317186(L_7, /*hidden argument*/Component_GetComponentInParent_TisIKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A_m16A918427D7F0CDEAFAD55A384EEA4A895317186_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, __this, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			// AddSolver(solver);
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_10 = V_2;
			IKManager2D_AddSolver_m666620BAE0C8B21B512328BE6587A8BF36249266(__this, L_10, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// foreach (Solver2D solver in solvers)
			bool L_11 = Enumerator_MoveNext_mDD6BABC7C382D7FA7D0E5BDB31980701D6284074((Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDD6BABC7C382D7FA7D0E5BDB31980701D6284074_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0027;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2140074F505C7E1C9C0808CBE89FED403450DA52((Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2140074F505C7E1C9C0808CBE89FED403450DA52_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::AddSolver(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolver_m666620BAE0C8B21B512328BE6587A8BF36249266 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_AddSolver_m666620BAE0C8B21B512328BE6587A8BF36249266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Solvers.Contains(solver))
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_0 = __this->get_m_Solvers_4();
		Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_mFC90E7DEE81C944EEEFF68B06AD00A7297FFD6AA(L_0, L_1, /*hidden argument*/List_1_Contains_mFC90E7DEE81C944EEEFF68B06AD00A7297FFD6AA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// m_Solvers.Add(solver);
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_3 = __this->get_m_Solvers_4();
		Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_4 = ___solver0;
		NullCheck(L_3);
		List_1_Add_m7E033BF8563E3006463CEDA272246F9DA50F3389(L_3, L_4, /*hidden argument*/List_1_Add_m7E033BF8563E3006463CEDA272246F9DA50F3389_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::RemoveSolver(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_RemoveSolver_m62DD1494CBBF3D70D1A0DBBED1FD9408F695913E (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_RemoveSolver_m62DD1494CBBF3D70D1A0DBBED1FD9408F695913E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Solvers.Remove(solver);
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_0 = __this->get_m_Solvers_4();
		Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_1 = ___solver0;
		NullCheck(L_0);
		List_1_Remove_m2938EAA70706D9B5B10D922C2F2CB4B27CB77AF4(L_0, L_1, /*hidden argument*/List_1_Remove_m2938EAA70706D9B5B10D922C2F2CB4B27CB77AF4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::UpdateManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_UpdateManager_m5E1474C9C88A2D9778FDA8B347757CB2AF32D51C (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_UpdateManager_m5E1474C9C88A2D9778FDA8B347757CB2AF32D51C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var solver in m_Solvers)
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_0 = __this->get_m_Solvers_4();
		NullCheck(L_0);
		Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F  L_1 = List_1_GetEnumerator_m28A23558AEABAD203C9A35CC191CF5153E7AB566(L_0, /*hidden argument*/List_1_GetEnumerator_m28A23558AEABAD203C9A35CC191CF5153E7AB566_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_000e:
		{
			// foreach (var solver in m_Solvers)
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_2 = Enumerator_get_Current_mA8B413820F12027D26E2166EF6F2ADBD299603A8((Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA8B413820F12027D26E2166EF6F2ADBD299603A8_RuntimeMethod_var);
			V_1 = L_2;
			// if (solver == null || !solver.isActiveAndEnabled)
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_3 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0041;
			}
		}

IL_001f:
		{
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0041;
			}
		}

IL_0027:
		{
			// if (!solver.isValid)
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = Solver2D_get_isValid_mD342EEB5077AAE58C9D9D7C79387A2F593D2BD1D(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			// solver.Initialize();
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_9 = V_1;
			NullCheck(L_9);
			Solver2D_Initialize_m2896B321867895F4BD397B0552E441AE3359F56B(L_9, /*hidden argument*/NULL);
		}

IL_0035:
		{
			// solver.UpdateIK(weight);
			Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * L_10 = V_1;
			float L_11 = IKManager2D_get_weight_m37A3944AA6D4CD7CA3D30E6458E7D5FA698D74EC(__this, /*hidden argument*/NULL);
			NullCheck(L_10);
			Solver2D_UpdateIK_m80A8EB3B3E4470386E55F5CE48AC629028F99CDB(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			// foreach (var solver in m_Solvers)
			bool L_12 = Enumerator_MoveNext_mDD6BABC7C382D7FA7D0E5BDB31980701D6284074((Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mDD6BABC7C382D7FA7D0E5BDB31980701D6284074_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_000e;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2140074F505C7E1C9C0808CBE89FED403450DA52((Enumerator_t45DF7B3ED12D543EDDFA5AC5B27B5251B06BF15F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2140074F505C7E1C9C0808CBE89FED403450DA52_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_LateUpdate_mB86B5C5257BCDF23C2DDF5E44750E832D7022F8E (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	{
		// UpdateManager();
		IKManager2D_UpdateManager_m5E1474C9C88A2D9778FDA8B347757CB2AF32D51C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D__ctor_m1584BC24B125109B6AFD9D283E48AA984A4368F7 (IKManager2D_t8C2DC98EE1B61D48837E47A54D73C16619CF047A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D__ctor_m1584BC24B125109B6AFD9D283E48AA984A4368F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Solver2D> m_Solvers = new List<Solver2D>();
		List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 * L_0 = (List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19 *)il2cpp_codegen_object_new(List_1_tAEAA400EAAEB0D3143EB58E7C2AE9A6C8FBA5E19_il2cpp_TypeInfo_var);
		List_1__ctor_mFE4C943BE7BCCE65BCCD4C11039F2CC06DDF00ED(L_0, /*hidden argument*/List_1__ctor_mFE4C943BE7BCCE65BCCD4C11039F2CC06DDF00ED_RuntimeMethod_var);
		__this->set_m_Solvers_4(L_0);
		// private float m_Weight = 1f;
		__this->set_m_Weight_5((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.U2D.IK.IKUtility::IsDescendentOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKUtility_IsDescendentOf_m8D98C7755E4DA8B7AC8055EE6430E02BCF9B2CD2 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ancestor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKUtility_IsDescendentOf_m8D98C7755E4DA8B7AC8055EE6430E02BCF9B2CD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// Transform currentParent = transform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001b;
	}

IL_0009:
	{
		// if (currentParent == ancestor)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___ancestor1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// currentParent = currentParent.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_0;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_001b:
	{
		// while (currentParent)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.IKUtility::GetAncestorCount(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetAncestorCount_m06BBFE89373C138DFF50B6B7484AE6A93C102BEE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKUtility_GetAncestorCount_m06BBFE89373C138DFF50B6B7484AE6A93C102BEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ancestorCount = 0;
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		// ++ancestorCount;
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		// transform = transform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___transform0;
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_1, /*hidden argument*/NULL);
		___transform0 = L_2;
	}

IL_0010:
	{
		// while (transform.parent)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___transform0;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0004;
		}
	}
	{
		// return ancestorCount;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.IKUtility::GetMaxChainCount(UnityEngine.Experimental.U2D.IK.IKChain2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetMaxChainCount_m161FA95434042A6D34D3EB6EE8BFF73D57182F82 (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * ___chain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKUtility_GetMaxChainCount_m161FA95434042A6D34D3EB6EE8BFF73D57182F82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int maxChainCount = 0;
		V_0 = 0;
		// if (chain.effector)
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = ___chain0;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// maxChainCount = GetAncestorCount(chain.effector) + 1;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_3 = ___chain0;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(L_3, /*hidden argument*/NULL);
		int32_t L_5 = IKUtility_GetAncestorCount_m06BBFE89373C138DFF50B6B7484AE6A93C102BEE(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001d:
	{
		// return maxChainCount;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKUtility__ctor_m2EAB42793DD730CDAD2F40926FA941B78DC20969 (IKUtility_t31EBC1B8A402311E538C024AC4D3FF544AB962F4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.U2D.IK.Limb::Solve(UnityEngine.Vector3,System.Single[],UnityEngine.Vector3[],System.Single[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Limb_Solve_mD5C501F6422C786198BB0438483EDF5E30ED70CB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengths1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** ___angles3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Limb_Solve_mD5C501F6422C786198BB0438483EDF5E30ED70CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// angles[0] = 0f;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_0 = ___angles3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_0);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		// angles[1] = 0f;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_2 = ___angles3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_2);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0f));
		// if (lengths[0] == 0f || lengths[1] == 0f)
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = ___lengths1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = ___lengths1;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// Vector3 startToEnd = targetPosition - positions[0];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___targetPosition0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = ___positions2;
		NullCheck(L_11);
		int32_t L_12 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// float distanceMagnitude = startToEnd.magnitude;
		float L_15 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_15;
		// float sqrDistance = startToEnd.sqrMagnitude;
		float L_16 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		// float sqrParentLength = (lengths[0] * lengths[0]);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_17 = ___lengths1;
		NullCheck(L_17);
		int32_t L_18 = 0;
		float L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_20 = ___lengths1;
		NullCheck(L_20);
		int32_t L_21 = 0;
		float L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = ((float)il2cpp_codegen_multiply((float)L_19, (float)L_22));
		// float sqrTargetLength = (lengths[1] * lengths[1]);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_23 = ___lengths1;
		NullCheck(L_23);
		int32_t L_24 = 1;
		float L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_26 = ___lengths1;
		NullCheck(L_26);
		int32_t L_27 = 1;
		float L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = ((float)il2cpp_codegen_multiply((float)L_25, (float)L_28));
		// float angle0Cos = (sqrDistance + sqrParentLength - sqrTargetLength) / (2f * lengths[0] * distanceMagnitude);
		float L_29 = L_16;
		float L_30 = V_2;
		float L_31 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_32 = ___lengths1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		float L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		float L_35 = V_1;
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_29, (float)L_30)), (float)L_31))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_34)), (float)L_35))));
		// float angle1Cos = (sqrDistance - sqrParentLength - sqrTargetLength) / (2f * lengths[0] * lengths[1]);
		float L_36 = V_2;
		float L_37 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_38 = ___lengths1;
		NullCheck(L_38);
		int32_t L_39 = 0;
		float L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_41 = ___lengths1;
		NullCheck(L_41);
		int32_t L_42 = 1;
		float L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_29, (float)L_36)), (float)L_37))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_40)), (float)L_43))));
		// if ((angle0Cos >= -1f && angle0Cos <= 1f) && (angle1Cos >= -1f && angle1Cos <= 1f))
		float L_44 = V_4;
		if ((!(((float)L_44) >= ((float)(-1.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		float L_45 = V_4;
		if ((!(((float)L_45) <= ((float)(1.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		float L_46 = V_5;
		if ((!(((float)L_46) >= ((float)(-1.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		float L_47 = V_5;
		if ((!(((float)L_47) <= ((float)(1.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		// angles[0] = Mathf.Acos(angle0Cos) * Mathf.Rad2Deg;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_48 = ___angles3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_49 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_48);
		float L_50 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_51 = acosf(L_50);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_multiply((float)L_51, (float)(57.29578f))));
		// angles[1] = Mathf.Acos(angle1Cos) * Mathf.Rad2Deg;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_52 = ___angles3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_53 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_52);
		float L_54 = V_5;
		float L_55 = acosf(L_54);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_multiply((float)L_55, (float)(57.29578f))));
	}

IL_00c2:
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.U2D.IK.LimbSolver2D::get_flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimbSolver2D_get_flip_mA6F4BEA2025697755B6FF003A379DAD5AD57198A (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Flip; }
		bool L_0 = __this->get_m_Flip_10();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::set_flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_set_flip_m17912837212E174090111409D7933D6D4EBD1E3A (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Flip = value; }
		bool L_0 = ___value0;
		__this->set_m_Flip_10(L_0);
		// set { m_Flip = value; }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_OnValidate_m56A45CB83833C1F8E6AB8F1BCE1DD13AA2B9C39B (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, const RuntimeMethod* method)
{
	{
		// m_Chain.transformCount = 3;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = __this->get_m_Chain_9();
		NullCheck(L_0);
		IKChain2D_set_transformCount_m940532F21E092CB2755420D3B9A46A52C612B90D(L_0, 3, /*hidden argument*/NULL);
		// base.OnValidate();
		Solver2D_OnValidate_m20281F4D5D894B504F8E93F065C72960CEFBE6C9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.LimbSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LimbSolver2D_GetChainCount_m79ADF03D53D3009082BFB1DAAC3F16331A5DB7E3 (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, const RuntimeMethod* method)
{
	{
		// return 1;
		return 1;
	}
}
// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.LimbSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * LimbSolver2D_GetChain_m0C2A6DACD8F51729F0FC28F38C693C6238931816 (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return m_Chain;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = __this->get_m_Chain_9();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoPrepare_m14A18BC841AE3C8D3D10A75AC8CD5B4C1837A553 (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, const RuntimeMethod* method)
{
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_0 = NULL;
	{
		// var lengths = m_Chain.lengths;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = __this->get_m_Chain_9();
		NullCheck(L_0);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = IKChain2D_get_lengths_mB5818DD7FE1D4424B3B1EF6F15DE79E01FD1B479(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// m_Positions[0] = m_Chain.transforms[0].position;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = __this->get_m_Positions_11();
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_3 = __this->get_m_Chain_9();
		NullCheck(L_3);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_4 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_7);
		// m_Positions[1] = m_Chain.transforms[1].position;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = __this->get_m_Positions_11();
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_9 = __this->get_m_Chain_9();
		NullCheck(L_9);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_10 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_13);
		// m_Positions[2] = m_Chain.transforms[2].position;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = __this->get_m_Positions_11();
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_15 = __this->get_m_Chain_9();
		NullCheck(L_15);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_16 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = 2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_19);
		// m_Lengths[0] = lengths[0];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_20 = __this->get_m_Lengths_12();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_23);
		// m_Lengths[1] = lengths[1];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_24 = __this->get_m_Lengths_12();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_27);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoUpdateIK_mFCCAAD0396AB9E68347D9D109CB86A7DB39B511E (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LimbSolver2D_DoUpdateIK_mFCCAAD0396AB9E68347D9D109CB86A7DB39B511E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		// Vector3 effectorPosition = effectorPositions[0];
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___effectorPositions0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_0, 0, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		V_0 = L_1;
		// Vector2 effectorLocalPosition2D = m_Chain.transforms[0].InverseTransformPoint(effectorPosition);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_2 = __this->get_m_Chain_9();
		NullCheck(L_2);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_3 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// effectorPosition = m_Chain.transforms[0].TransformPoint(effectorLocalPosition2D);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_9 = __this->get_m_Chain_9();
		NullCheck(L_9);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_10 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// if (effectorLocalPosition2D.sqrMagnitude > 0f && Limb.Solve(effectorPosition, m_Lengths, m_Positions, ref m_Angles))
		float L_16 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_0157;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_18 = __this->get_m_Lengths_12();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = __this->get_m_Positions_11();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_20 = __this->get_address_of_m_Angles_13();
		bool L_21 = Limb_Solve_mD5C501F6422C786198BB0438483EDF5E30ED70CB(L_17, L_18, L_19, (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0157;
		}
	}
	{
		// float flipSign = flip ? -1f : 1f;
		bool L_22 = LimbSolver2D_get_flip_mA6F4BEA2025697755B6FF003A379DAD5AD57198A(__this, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0077;
		}
	}
	{
		G_B5_0 = (1.0f);
		goto IL_007c;
	}

IL_0077:
	{
		G_B5_0 = (-1.0f);
	}

IL_007c:
	{
		V_2 = G_B5_0;
		// m_Chain.transforms[0].localRotation *= Quaternion.FromToRotation(Vector3.right, effectorLocalPosition2D) * Quaternion.FromToRotation(m_Chain.transforms[1].localPosition, Vector3.right);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_23 = __this->get_m_Chain_9();
		NullCheck(L_23);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_24 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = L_26;
		NullCheck(L_27);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_29, L_31, /*hidden argument*/NULL);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_33 = __this->get_m_Chain_9();
		NullCheck(L_33);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_34 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_35 = 1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_37, L_38, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_32, L_39, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_28, L_40, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_27, L_41, /*hidden argument*/NULL);
		// m_Chain.transforms[0].localRotation *= Quaternion.AngleAxis(flipSign * m_Angles[0], Vector3.forward);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_42 = __this->get_m_Chain_9();
		NullCheck(L_42);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_43 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = L_45;
		NullCheck(L_46);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_46, /*hidden argument*/NULL);
		float L_48 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_49 = __this->get_m_Angles_13();
		NullCheck(L_49);
		int32_t L_50 = 0;
		float L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_53 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(((float)il2cpp_codegen_multiply((float)L_48, (float)L_51)), L_52, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_47, L_53, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_46, L_54, /*hidden argument*/NULL);
		// m_Chain.transforms[1].localRotation *= Quaternion.FromToRotation(Vector3.right, m_Chain.transforms[1].InverseTransformPoint(effectorPosition)) * Quaternion.FromToRotation(m_Chain.transforms[2].localPosition, Vector3.right);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_55 = __this->get_m_Chain_9();
		NullCheck(L_55);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_56 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		int32_t L_57 = 1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_59 = L_58;
		NullCheck(L_59);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_60 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_59, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_62 = __this->get_m_Chain_9();
		NullCheck(L_62);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_63 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		int32_t L_64 = 1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = V_0;
		NullCheck(L_65);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_65, L_66, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_68 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_61, L_67, /*hidden argument*/NULL);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_69 = __this->get_m_Chain_9();
		NullCheck(L_69);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_70 = IKChain2D_get_transforms_m2610B9E7DB4747A170F492B85897C2C6541A7796(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		int32_t L_71 = 2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_75 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_73, L_74, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_76 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_68, L_75, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_77 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_60, L_76, /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_59, L_77, /*hidden argument*/NULL);
	}

IL_0157:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D__ctor_m40BF4EE83B57ECA0F12408D1C70D61278DE3238C (LimbSolver2D_t44169A26CBA04B16796AE385E9587651B5626CE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LimbSolver2D__ctor_m40BF4EE83B57ECA0F12408D1C70D61278DE3238C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IKChain2D m_Chain = new IKChain2D();
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_0 = (IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *)il2cpp_codegen_object_new(IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152_il2cpp_TypeInfo_var);
		IKChain2D__ctor_m05D60373E96D087E0D5F0AD212A1543BEE792042(L_0, /*hidden argument*/NULL);
		__this->set_m_Chain_9(L_0);
		// private Vector3[] m_Positions = new Vector3[3];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_Positions_11(L_1);
		// private float[] m_Lengths = new float[2];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Lengths_12(L_2);
		// private float[] m_Angles = new float[2];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Angles_13(L_3);
		Solver2D__ctor_mDBF0C2CC24D5BA51A1A797418122BDE4D7F8E9F7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::get_chainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Solver2D_get_chainCount_mF5F599904211FE684B7D440D7CCF298DD1D572FF (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// get { return GetChainCount(); }
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		return L_0;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_constrainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_constrainRotation_m602DD0AE2BD77BC2A9CDEB3FB1C972503E611CAA (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ConstrainRotation; }
		bool L_0 = __this->get_m_ConstrainRotation_4();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_constrainRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_constrainRotation_mD1A3675EE40626A1362E10B60AF17F5C56CBD503 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ConstrainRotation = value; }
		bool L_0 = ___value0;
		__this->set_m_ConstrainRotation_4(L_0);
		// set { m_ConstrainRotation = value; }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_restoreDefaultPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_restoreDefaultPose_m3D5C3639BFD50A1AB43460FAA12F2D1EC8DB1FE7 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SolveFromDefaultPose; }
		bool L_0 = __this->get_m_SolveFromDefaultPose_5();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_restoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_restoreDefaultPose_m97A0833659E438C5C148470852FCD8B1D68D55E4 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SolveFromDefaultPose = value; }
		bool L_0 = ___value0;
		__this->set_m_SolveFromDefaultPose_5(L_0);
		// set { m_SolveFromDefaultPose = value; }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_solveFromDefaultPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_solveFromDefaultPose_mF1BC8365C0D04A89C48746FB362228390C5EE35B (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SolveFromDefaultPose; }
		bool L_0 = __this->get_m_SolveFromDefaultPose_5();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_solveFromDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_solveFromDefaultPose_m77DB5DB2597B93E75FCC30753EB964931FB0AD6A (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SolveFromDefaultPose = value; }
		bool L_0 = ___value0;
		__this->set_m_SolveFromDefaultPose_5(L_0);
		// set { m_SolveFromDefaultPose = value; }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_isValid_mD342EEB5077AAE58C9D9D7C79387A2F593D2BD1D (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// get { return Validate(); }
		bool L_0 = Solver2D_Validate_m6DAE84C38DA652E2446B75188A5AEDB78742CFC8(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_allChainsHaveTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_allChainsHaveTargets_mD534DA924866ADF7E10D3D32E6A6E9DB06612FBC (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// get { return HasTargets(); }
		bool L_0 = Solver2D_HasTargets_m492514B11CC706D42795F643B419DA77335C2EDE(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.Solver2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver2D_get_weight_m8AE6519F5A44A5E45205980B38D36F02D315E5BE (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Weight; }
		float L_0 = __this->get_m_Weight_6();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_weight_mD2826925FBCEC0106E9D717BCCA443095A6C548F (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_set_weight_mD2826925FBCEC0106E9D717BCCA443095A6C548F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Weight = Mathf.Clamp01(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_6(L_1);
		// set { m_Weight = Mathf.Clamp01(value); }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_OnEnable_m3E5AEFF30D1A527801E8138CA9D1D76386621626 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// private void OnEnable() {}
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_OnValidate_m20281F4D5D894B504F8E93F065C72960CEFBE6C9 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_OnValidate_m20281F4D5D894B504F8E93F065C72960CEFBE6C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Weight = Mathf.Clamp01(m_Weight);
		float L_0 = __this->get_m_Weight_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_6(L_1);
		// if (!isValid)
		bool L_2 = Solver2D_get_isValid_mD342EEB5077AAE58C9D9D7C79387A2F593D2BD1D(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Initialize();
		Solver2D_Initialize_m2896B321867895F4BD397B0552E441AE3359F56B(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_Validate_m6DAE84C38DA652E2446B75188A5AEDB78742CFC8 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_1 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		// if (!chain.isValid)
		NullCheck(L_1);
		bool L_2 = IKChain2D_get_isValid_m479924C7ED5A354319804EBA709639A121DA48C8(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_4 = V_0;
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0004;
		}
	}
	{
		// return DoValidate();
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::DoValidate() */, __this);
		return L_6;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::HasTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_HasTargets_m492514B11CC706D42795F643B419DA77335C2EDE (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_HasTargets_m492514B11CC706D42795F643B419DA77335C2EDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_1 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		// if (chain.target == null)
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_5 = V_0;
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Initialize_m2896B321867895F4BD397B0552E441AE3359F56B (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// DoInitialize();
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoInitialize() */, __this);
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_001a;
	}

IL_000a:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_1 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		// chain.Initialize();
		NullCheck(L_1);
		IKChain2D_Initialize_m101CF6E540A4AF0D68F970D1B55296314F7E89F5(L_1, /*hidden argument*/NULL);
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_3 = V_0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Prepare_m9B620DCE17B0D1148CA5CAE4A2A19C5964FD7029 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_Prepare_m9B620DCE17B0D1148CA5CAE4A2A19C5964FD7029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	int32_t V_1 = 0;
	IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * V_2 = NULL;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// var rootTransform = GetPlaneRootTransform();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = VirtFuncInvoker0< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		V_0 = L_0;
		// if (rootTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// m_Plane.normal = rootTransform.forward;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_3 = __this->get_address_of_m_Plane_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_4, /*hidden argument*/NULL);
		Plane_set_normal_m848DA6C5F58CFF7B3A8EA25F97002A1BBF4867A7((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_3, L_5, /*hidden argument*/NULL);
		// m_Plane.distance = -Vector3.Dot(m_Plane.normal, rootTransform.position);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_6 = __this->get_address_of_m_Plane_7();
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_7 = __this->get_address_of_m_Plane_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_11 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_8, L_10, /*hidden argument*/NULL);
		Plane_set_distance_mE29A36BDD0530CD58FE00D0F5261CEC24C107C11((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_6, ((-L_11)), /*hidden argument*/NULL);
	}

IL_0043:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_1 = 0;
		goto IL_007a;
	}

IL_0047:
	{
		// var chain = GetChain(i);
		int32_t L_12 = V_1;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_13 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_12);
		V_2 = L_13;
		// var constrainTargetRotation = constrainRotation && chain.target != null;
		bool L_14 = Solver2D_get_constrainRotation_m602DD0AE2BD77BC2A9CDEB3FB1C972503E611CAA(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_15 = V_2;
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_16, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_17));
		goto IL_0066;
	}

IL_0065:
	{
		G_B6_0 = 0;
	}

IL_0066:
	{
		V_3 = (bool)G_B6_0;
		// if (m_SolveFromDefaultPose)
		bool L_18 = __this->get_m_SolveFromDefaultPose_5();
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		// chain.RestoreDefaultPose(constrainTargetRotation);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_19 = V_2;
		bool L_20 = V_3;
		NullCheck(L_19);
		IKChain2D_RestoreDefaultPose_m78D8757B8F90A9D4230029CD263EE78E1F05DC3C(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_007a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_22 = V_1;
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0047;
		}
	}
	{
		// DoPrepare();
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoPrepare() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::PrepareEffectorPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_PrepareEffectorPositions_mA1A9AEA8AFE21F4A66377A32F9D5546D7A4A5872 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_PrepareEffectorPositions_mA1A9AEA8AFE21F4A66377A32F9D5546D7A4A5872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * V_1 = NULL;
	{
		// m_TargetPositions.Clear();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = __this->get_m_TargetPositions_8();
		NullCheck(L_0);
		List_1_Clear_m1F2DD491E6712A2F9C93E4B4DDEEECA1CBC66B55(L_0, /*hidden argument*/List_1_Clear_m1F2DD491E6712A2F9C93E4B4DDEEECA1CBC66B55_RuntimeMethod_var);
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_003e;
	}

IL_000f:
	{
		// var chain = GetChain(i);
		int32_t L_1 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_2 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_1);
		V_1 = L_2;
		// if (chain.target)
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_3 = V_1;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// m_TargetPositions.Add(chain.target.position);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = __this->get_m_TargetPositions_8();
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76(L_6, L_9, /*hidden argument*/List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_RuntimeMethod_var);
	}

IL_003a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003e:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_11 = V_0;
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m80A8EB3B3E4470386E55F5CE48AC629028F99CDB (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, float ___globalWeight0, const RuntimeMethod* method)
{
	{
		// if(allChainsHaveTargets)
		bool L_0 = Solver2D_get_allChainsHaveTargets_mD534DA924866ADF7E10D3D32E6A6E9DB06612FBC(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// PrepareEffectorPositions();
		Solver2D_PrepareEffectorPositions_mA1A9AEA8AFE21F4A66377A32F9D5546D7A4A5872(__this, /*hidden argument*/NULL);
		// UpdateIK(m_TargetPositions, globalWeight);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = __this->get_m_TargetPositions_8();
		float L_2 = ___globalWeight0;
		Solver2D_UpdateIK_m7CEF681AAF21F70BA41E309F1BBA00F45EDD52CC(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m7CEF681AAF21F70BA41E309F1BBA00F45EDD52CC (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___positions0, float ___globalWeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_UpdateIK_m7CEF681AAF21F70BA41E309F1BBA00F45EDD52CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * V_2 = NULL;
	{
		// if(positions.Count != chainCount)
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___positions0;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3(L_0, /*hidden argument*/List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_RuntimeMethod_var);
		int32_t L_2 = Solver2D_get_chainCount_mF5F599904211FE684B7D440D7CCF298DD1D572FF(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// float finalWeight = globalWeight * weight;
		float L_3 = ___globalWeight1;
		float L_4 = Solver2D_get_weight_m8AE6519F5A44A5E45205980B38D36F02D315E5BE(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		// if (finalWeight == 0f)
		float L_5 = V_0;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// return;
		return;
	}

IL_0021:
	{
		// if (!isValid)
		bool L_6 = Solver2D_get_isValid_mD342EEB5077AAE58C9D9D7C79387A2F593D2BD1D(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// Prepare();
		Solver2D_Prepare_m9B620DCE17B0D1148CA5CAE4A2A19C5964FD7029(__this, /*hidden argument*/NULL);
		// if (finalWeight < 1f)
		float L_7 = V_0;
		if ((!(((float)L_7) < ((float)(1.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// StoreLocalRotations();
		Solver2D_StoreLocalRotations_mBBB132AF9D7EBE692AB19FAD1FCE24BC8156C728(__this, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// DoUpdateIK(positions);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_8 = ___positions0;
		VirtActionInvoker1< List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * >::Invoke(7 /* System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>) */, __this, L_8);
		// if (constrainRotation)
		bool L_9 = Solver2D_get_constrainRotation_m602DD0AE2BD77BC2A9CDEB3FB1C972503E611CAA(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_1 = 0;
		goto IL_0080;
	}

IL_0051:
	{
		// var chain = GetChain(i);
		int32_t L_10 = V_1;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_11 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_10);
		V_2 = L_11;
		// if (chain.target)
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_12 = V_2;
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// chain.effector.rotation = chain.target.rotation;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_15 = V_2;
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = IKChain2D_get_effector_m8B5CCD899D52731A4AB4F41B26D6AB18152CDDF8(L_15, /*hidden argument*/NULL);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_17 = V_2;
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_16, L_19, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0080:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_21 = V_1;
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0051;
		}
	}

IL_0089:
	{
		// if (finalWeight < 1f)
		float L_23 = V_0;
		if ((!(((float)L_23) < ((float)(1.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// BlendFkToIk(finalWeight);
		float L_24 = V_0;
		Solver2D_BlendFkToIk_m0975F963772CF28CBD4A4B657E41B1FF048F63E6(__this, L_24, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_StoreLocalRotations_mBBB132AF9D7EBE692AB19FAD1FCE24BC8156C728 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_1 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		// chain.StoreLocalRotations();
		NullCheck(L_1);
		IKChain2D_StoreLocalRotations_mA648E81C439D6CFCB2DDF3F97CBDA9C95E5AC42E(L_1, /*hidden argument*/NULL);
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0014:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_3 = V_0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::BlendFkToIk(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_BlendFkToIk_m0975F963772CF28CBD4A4B657E41B1FF048F63E6 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, float ___finalWeight0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_BlendFkToIk_m0975F963772CF28CBD4A4B657E41B1FF048F63E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_1 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		V_1 = L_1;
		// var constrainTargetRotation = constrainRotation && chain.target != null;
		bool L_2 = Solver2D_get_constrainRotation_m602DD0AE2BD77BC2A9CDEB3FB1C972503E611CAA(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_3 = V_1;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = IKChain2D_get_target_m8750C3C04F2FAA1B78F568EE25DFD3E59116DDB2(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
	}

IL_0023:
	{
		V_2 = (bool)G_B4_0;
		// chain.BlendFkToIk(finalWeight, constrainTargetRotation);
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_6 = V_1;
		float L_7 = ___finalWeight0;
		bool L_8 = V_2;
		NullCheck(L_6);
		IKChain2D_BlendFkToIk_mBC2FA4A43D931CFA8AEEE44362F91EB76BEAEF0E(L_6, L_7, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::DoValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_DoValidate_m5F362DACC13513E610364733C752A172FC4518C1 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// protected virtual bool DoValidate() { return true; }
		return (bool)1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoInitialize_m121CABF884BDF1D17334E6F3CFAB723E8A05857D (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void DoInitialize() {}
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoPrepare_mD9AEF0D015029FBEB4A0E2DE8777285B7ED6EAF1 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void DoPrepare() {}
		return;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Solver2D_GetPlaneRootTransform_m7834DCEC8A323FC2AB3FB4BC7714705CBEF2E043 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	{
		// if (chainCount > 0)
		int32_t L_0 = Solver2D_get_chainCount_mF5F599904211FE684B7D440D7CCF298DD1D572FF(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// return GetChain(0).rootTransform;
		IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 * L_1 = VirtFuncInvoker1< IKChain2D_t71A3C2A262541D267198F4CE01CD902FFA700152 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, 0);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = IKChain2D_get_rootTransform_mB50E9B0287291ECA7919007ED69EC37BB8F17FB6(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		// return null;
		return (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
	}
}
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetPointOnSolverPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver2D_GetPointOnSolverPlane_m76B5E431D751EA2541D442A28BB30F5CF447CD26 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition0, const RuntimeMethod* method)
{
	{
		// return GetPlaneRootTransform().InverseTransformPoint(m_Plane.ClosestPointOnPlane(worldPosition));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = VirtFuncInvoker0< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_1 = __this->get_address_of_m_Plane_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___worldPosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Plane_ClosestPointOnPlane_m5BD59F43459CAC4A3CEA9F763455C23E3162A4AE((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetWorldPositionFromSolverPlanePoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver2D_GetWorldPositionFromSolverPlanePoint_mE316C5C26CD9DC53EE686B135C9A2BBFA38B8821 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___planePoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_GetWorldPositionFromSolverPlanePoint_mE316C5C26CD9DC53EE686B135C9A2BBFA38B8821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetPlaneRootTransform().TransformPoint(planePoint);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = VirtFuncInvoker0< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___planePoint0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D__ctor_mDBF0C2CC24D5BA51A1A797418122BDE4D7F8E9F7 (Solver2D_tDACBE9626F24A45E24ADFB683BF5C6F4D3EE25A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D__ctor_mDBF0C2CC24D5BA51A1A797418122BDE4D7F8E9F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool m_ConstrainRotation = true;
		__this->set_m_ConstrainRotation_4((bool)1);
		// private bool m_SolveFromDefaultPose = true;
		__this->set_m_SolveFromDefaultPose_5((bool)1);
		// private float m_Weight = 1f;
		__this->set_m_Weight_6((1.0f));
		// private List<Vector3> m_TargetPositions = new List<Vector3>();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171(L_0, /*hidden argument*/List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var);
		__this->set_m_TargetPositions_8(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute::get_menuPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Solver2DMenuAttribute_get_menuPath_m72B11E8BB8D03D88553B8029F3C3F187167C1C44 (Solver2DMenuAttribute_t15BA3093E9F879A050E03AC1869D7FF962D6786E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_MenuPath; }
		String_t* L_0 = __this->get_m_MenuPath_0();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2DMenuAttribute__ctor_m25205A86F89195141C8C44DAA0EED90B525D5084 (Solver2DMenuAttribute_t15BA3093E9F879A050E03AC1869D7FF962D6786E * __this, String_t* ____menuPath0, const RuntimeMethod* method)
{
	{
		// public Solver2DMenuAttribute(string _menuPath)
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// m_MenuPath = _menuPath;
		String_t* L_0 = ____menuPath0;
		__this->set_m_MenuPath_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
