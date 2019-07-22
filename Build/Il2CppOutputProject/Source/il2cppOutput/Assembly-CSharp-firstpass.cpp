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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t6D3713791B96784802458EC5B20592CFE3BFE8E1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_t58C8B9BEC84F9933F2BBE548E5CA3216CD069153;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_tF94F2F90CE349EBAD9AA95EB2C3BBED7B2628FB0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_t738326A1F091029FF6CA00C388DB628C06E1B6F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_t3C7818EFEF9689B702CBF35CB049AAB6C68F9E28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_tF99C713FA22D462D07A9618CB2A571E15E57DA49;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t4DD8490EB900C82E89E3C456A8DA6A741801BDEF;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_tB291263EEE72B9F137CA4DC19F039DE672D08028;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Touch[]
struct TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t935C2FEF06530E3578BBC8CF2C9871CF2BBCF7F7;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral048803BFDF77BE1B67FFF11B00E027D28F715E74;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7D4D8BDD2801B7F33B04B9B6937978FB7E75C6;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral68DEF667D36D69C74A4858297D53552058192BC2;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB98224D7A16DAFCAED1BC6025B0F35E8517B068;
IL2CPP_EXTERN_C String_t* _stringLiteralBC48007F419FB366764A3F684CEAC85680E6A914;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_mE35687928423C6384AFA5449298B1140012832A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4B4D8B22E09ABBDC7B0F403018AC64AA1AA94ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m66D6CA46FAFECDEDDD6C552DFF539E703FB57B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m280FAFFEFA24FD4ACF7DB87DB1B208D873BE88DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9D7482B3D27794500FB33065A6EB0200193A9639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m600A45698661FFAB823F245812FC9D7C56FF2624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF51080BFED2E908F713E9A1B43DE1D8166A47FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m937909825E8A75FEACE3210C9BC7E336B92349AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisNegative_m8A573DD3B4F7F3843CB846C8FD334FEA434BF6A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisPositive_m93BE5FFBF94EDD51FB8A1447F355087F702D19D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisZero_m07C55C091E0947804138093A3E56212FA64C1D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxis_m9235E0F0BB5F8DC0B3D3F759DB2678EC8AA9CE97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonDown_m8E5E75EA89C2E68EAF6655D8A10168AD5CC60ED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonUp_mD50C17D111F22EFF2806C19800EFC25411F182DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AxisTouchButton_FindPairedButton_mF91D13C9755AC650166874A704B274BD10F43D84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AxisTouchButton_OnEnable_m29AB36A1E0E041B3DE2CB99DC46D20B56E294DE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AxisTouchButton_OnPointerDown_m7B82CDE0D37724C99EE1A2CDCE99C39FE2B0C7E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AxisTouchButton_OnPointerUp_mB5E2BCB9B6A4342529EFA2BCA37DE8F1E096BD72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AxisTouchButton__ctor_mF9825DAAC7182C75F7C6CB2EFED4AA8DC96A327E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonHandler_SetAxisNegativeState_mB6BAD56080DCB3D934D65DB1A8493F9AAFF5BDB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonHandler_SetAxisNeutralState_m0941F0DDA9312B25565FAEFE01E5F30F34E7E03D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonHandler_SetAxisPositiveState_m90108A36743F1315D8A9362131C5D084D4824174_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonHandler_SetDownState_mAA64E4DCC63748295BAC71350484F8005D845C05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonHandler_SetUpState_m8E15DB82EBA0350EBB7429EDBEA3DB7FFC5A0C14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_AxisExists_m2555F1EE8C9454409BCB25D8E11BD5C92B1ABD6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_ButtonExists_m45ACF99988AACA1305F01CE03AAF64E3DD16F41A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_GetAxisRaw_mD130E9B085649C0942ACCEC7F689A7E250BE3E06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_GetAxis_m0FBACA184EB6060C98F45C0AD1D488CBB740027B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_GetAxis_mF379E8ACAD65A62F181C585F8A2316B541E3203A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_GetButtonDown_m5BC3728E612F3889D7CD69F37271115907D70491_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_GetButtonUp_m7EA441DEBF67FF26FEE632BBC8C17439031795DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_GetButton_m799CF89850D68282AFC554FE8FAAC308B43590A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_RegisterVirtualButton_m9328F88674AC82B9533679DF13293AB9B740E05A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetAxisNegative_m041BC238E99449C11C7E5124EB38D12AAE905100_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetAxisPositive_m33BA0850E8ED0346EADA2BAD3D8C9A5987CD7F87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetAxisZero_mD48811838B227E88BB5367C5E8D01CCE57F65F4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetAxis_mC0AB8D6E72D9A9F147A25DCFD2DA4D132A30837D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetButtonDown_m2BE5D97A12FFE0C0BDC84BD6B3C681450885DF7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetButtonUp_mB991430DEBA2A4F5E6D9EA239933B1E4FBDA6FE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetVirtualMousePositionX_m61D906BA46E06A613FC8E46A5668951F61AF1F61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetVirtualMousePositionY_m5B4D33BFD1D491E18DA9B97FDC127859B2B1A0C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SetVirtualMousePositionZ_mD177608F5B9E3DEB620ED1D624496D76B40B11AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_SwitchActiveInputMethod_mC7431879D960293266D1B271B04AB164B602E5D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_UnRegisterVirtualButton_m39C6B8D4EBC061653F870C41113CE6AC97A7210A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_VirtualAxisReference_mED7126401F6AE52717A6A1F7B7D159D9B87E3D31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager__cctor_m00F7D3BECE0F3F05B48DBCB5EA16418703703402_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CrossPlatformInputManager_get_mousePosition_mC886FC2F654E91F06407FDB891DF3201ED576DCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputAxisScrollbar_HandleInput_m2B581FDD829C18EC992DC470B9DCFBDF7B918C7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_CreateVirtualAxes_mFD176229174244D4473E795326E86C872B66385C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_OnDrag_m397CD3849713FB162041D209A1D989F217E90E68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_Start_m86F4DF9F1A22108F31C58BD4875A93B89FB9666C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_UpdateVirtualAxes_mFBA91C320D783A3B497B7ED19E5DF00DC2C59F36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick__ctor_m332CD5B18419E231B7E9D5248A72FA1D7A63109D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileControlRig_EnableControlRig_mBA84D82A6E4F60B0B2D3AA7E7F77FEFE02DDED6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileControlRig_Start_m24380C27FCFA9820B8D4BE992F7FEC3720D2BBE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_GetAxis_mE316AE075BA94A7C62B3985A839475F6F38B088F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_GetButtonDown_m8824A493A92DBDB2CA4F5DF9584A732D37D0D30D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_GetButtonUp_mAEEE8DD2BD384EB512F76848A9A44BC0CBE3BC27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_GetButton_mC50BFCD2B591106CD826A30637E74C6A4BE531AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_SetAxisNegative_m279C577D7ACDBF75ACC5CFEB0710DF2265B174BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_SetAxisPositive_m8DC57D188C1494B0AD00E54550654EE618A7AE1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_SetAxisZero_mE84A959667DE1094CF2CB37A9F8787DD8C8AA3CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_SetAxis_mA22742A53FA38E2FEBEA1FFFE7A5B9E07062173F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_SetButtonDown_m060490DB53BF2F23D72BF67E1B3D80CBAF301AFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileInput_SetButtonUp_m4BE0DD26B379C478825F3265623063F77EC6384C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandaloneInput_SetAxisNegative_m8A573DD3B4F7F3843CB846C8FD334FEA434BF6A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandaloneInput_SetAxisPositive_m93BE5FFBF94EDD51FB8A1447F355087F702D19D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandaloneInput_SetAxisZero_m07C55C091E0947804138093A3E56212FA64C1D4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandaloneInput_SetAxis_m9235E0F0BB5F8DC0B3D3F759DB2678EC8AA9CE97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandaloneInput_SetButtonDown_m8E5E75EA89C2E68EAF6655D8A10168AD5CC60ED2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandaloneInput_SetButtonUp_mD50C17D111F22EFF2806C19800EFC25411F182DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TiltInput_OnEnable_mC700FE8904F578419643E75395BE99DA39F88A63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TiltInput_Update_m7E40FC0C58A61EC874C2BCE505D19456C5724D1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchPad_CreateVirtualAxes_m9D15A5DE4C7A00B54C146EC36D98D6A0C80B8609_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchPad_OnDisable_m8006C26AE5AF35F59B479F9CF95AB80598EF0172_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchPad_OnPointerDown_mF07C1E0A747C3076DB1569BE07BF328CA3F6F6AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchPad_OnPointerUp_mAB17D2EAABB83955F29E4DB701A19C731F41D36F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchPad_Start_mA4222D895E69B4F61852765584B35C0F8D98099C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchPad_Update_m7CB85940E39EC3B27A780405D14D5C8D62FE1A67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchPad__ctor_m79B5115AD776BA462A7C580C2F5BEFD4CE5A2F52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualButton_Remove_m3F055827A2E7DFACA548E482337E80C50F1EABD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput_AxisExists_m0B1E0317ACA3E372D9EDE15104BD1E91AE23AB97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput_ButtonExists_m90030223A969B2C1D9D89CE1E6120138C11C99E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput_RegisterVirtualAxis_mBFDFA749ADE0D71301A116F3EFEA838509ED3858_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput_RegisterVirtualButton_mB98A166A0B2DC0CB5E8E9D93D5FAD96E85D64CED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput_UnRegisterVirtualAxis_mE2924D6992E3EEFEDA1AEF811153DBADDC3452A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput_UnRegisterVirtualButton_m63841A01BFA1821938092302A45CA8B2E7FC82BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput_VirtualAxisReference_mBF50EC42C985094F411FAB3494BCBC1FE916827C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VirtualInput__ctor_m1DD186B3107C12E45D9FE0C9959C163F9EE6F1B9_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571;
struct AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis>
struct  Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6D3713791B96784802458EC5B20592CFE3BFE8E1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF94F2F90CE349EBAD9AA95EB2C3BBED7B2628FB0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3C7818EFEF9689B702CBF35CB049AAB6C68F9E28 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___entries_1)); }
	inline EntryU5BU5D_t6D3713791B96784802458EC5B20592CFE3BFE8E1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6D3713791B96784802458EC5B20592CFE3BFE8E1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6D3713791B96784802458EC5B20592CFE3BFE8E1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___keys_7)); }
	inline KeyCollection_tF94F2F90CE349EBAD9AA95EB2C3BBED7B2628FB0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF94F2F90CE349EBAD9AA95EB2C3BBED7B2628FB0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF94F2F90CE349EBAD9AA95EB2C3BBED7B2628FB0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ___values_8)); }
	inline ValueCollection_t3C7818EFEF9689B702CBF35CB049AAB6C68F9E28 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3C7818EFEF9689B702CBF35CB049AAB6C68F9E28 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3C7818EFEF9689B702CBF35CB049AAB6C68F9E28 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton>
struct  Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t58C8B9BEC84F9933F2BBE548E5CA3216CD069153* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t738326A1F091029FF6CA00C388DB628C06E1B6F2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF99C713FA22D462D07A9618CB2A571E15E57DA49 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___entries_1)); }
	inline EntryU5BU5D_t58C8B9BEC84F9933F2BBE548E5CA3216CD069153* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t58C8B9BEC84F9933F2BBE548E5CA3216CD069153** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t58C8B9BEC84F9933F2BBE548E5CA3216CD069153* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___keys_7)); }
	inline KeyCollection_t738326A1F091029FF6CA00C388DB628C06E1B6F2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t738326A1F091029FF6CA00C388DB628C06E1B6F2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t738326A1F091029FF6CA00C388DB628C06E1B6F2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ___values_8)); }
	inline ValueCollection_tF99C713FA22D462D07A9618CB2A571E15E57DA49 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF99C713FA22D462D07A9618CB2A571E15E57DA49 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF99C713FA22D462D07A9618CB2A571E15E57DA49 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields, ___activeInput_0)); }
	inline VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInput_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TouchInput_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HardwareInput_2), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis
struct  VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton
struct  VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
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


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
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


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
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

// UnityEngine.TouchPhase
struct  TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_ActiveInputMethod
struct  ActiveInputMethod_t809D9C23DD316DBC93963EAF0FAF0FA63CBF8C53 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_ActiveInputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t809D9C23DD316DBC93963EAF0FAF0FA63CBF8C53, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.Joystick_AxisOption
struct  AxisOption_t2E4FAD7B3F55CE394680B6CEA9C2F01B92849786 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick_AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_t2E4FAD7B3F55CE394680B6CEA9C2F01B92849786, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping_MappingType
struct  MappingType_tA5DC189BC7DB7B5AE049E710D502B88A32BA87B3 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping_MappingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MappingType_tA5DC189BC7DB7B5AE049E710D502B88A32BA87B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput_AxisOptions
struct  AxisOptions_t7D42CBC0AAF7DFE9DF7335044264BAF17BA6CC71 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput_AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_t7D42CBC0AAF7DFE9DF7335044264BAF17BA6CC71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad_AxisOption
struct  AxisOption_tA48A0481101792CB4679A6C5D81F14DB1582FF11 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad_AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_tA48A0481101792CB4679A6C5D81F14DB1582FF11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad_ControlStyle
struct  ControlStyle_t60A34C5903F112F7E6982BB8161F9F7372669CAC 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad_ControlStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlStyle_t60A34C5903F112F7E6982BB8161F9F7372669CAC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39, ___m_VirtualAxes_1)); }
	inline Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualAxes_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualButtons_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39, ___m_AlwaysUseVirtual_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlwaysUseVirtual_3), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_t806752C775BA713A91B6588A07CA98417CABC003 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44  : public VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB  : public VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping
struct  AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping_MappingType UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisName_1), (void*)value);
	}
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


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_7;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * ___m_PairedWith_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___m_Axis_9;

public:
	inline static int32_t get_offset_of_axisName_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4, ___axisName_4)); }
	inline String_t* get_axisName_4() const { return ___axisName_4; }
	inline String_t** get_address_of_axisName_4() { return &___axisName_4; }
	inline void set_axisName_4(String_t* value)
	{
		___axisName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisName_4), (void*)value);
	}

	inline static int32_t get_offset_of_axisValue_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4, ___axisValue_5)); }
	inline float get_axisValue_5() const { return ___axisValue_5; }
	inline float* get_address_of_axisValue_5() { return &___axisValue_5; }
	inline void set_axisValue_5(float value)
	{
		___axisValue_5 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4, ___responseSpeed_6)); }
	inline float get_responseSpeed_6() const { return ___responseSpeed_6; }
	inline float* get_address_of_responseSpeed_6() { return &___responseSpeed_6; }
	inline void set_responseSpeed_6(float value)
	{
		___responseSpeed_6 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4, ___returnToCentreSpeed_7)); }
	inline float get_returnToCentreSpeed_7() const { return ___returnToCentreSpeed_7; }
	inline float* get_address_of_returnToCentreSpeed_7() { return &___returnToCentreSpeed_7; }
	inline void set_returnToCentreSpeed_7(float value)
	{
		___returnToCentreSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_8() { return static_cast<int32_t>(offsetof(AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4, ___m_PairedWith_8)); }
	inline AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * get_m_PairedWith_8() const { return ___m_PairedWith_8; }
	inline AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 ** get_address_of_m_PairedWith_8() { return &___m_PairedWith_8; }
	inline void set_m_PairedWith_8(AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * value)
	{
		___m_PairedWith_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PairedWith_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Axis_9() { return static_cast<int32_t>(offsetof(AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4, ___m_Axis_9)); }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * get_m_Axis_9() const { return ___m_Axis_9; }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B ** get_address_of_m_Axis_9() { return &___m_Axis_9; }
	inline void set_m_Axis_9(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * value)
	{
		___m_Axis_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Axis_9), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct  ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_4;

public:
	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct  InputAxisScrollbar_t935C2FEF06530E3578BBC8CF2C9871CF2BBCF7F7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_4;

public:
	inline static int32_t get_offset_of_axis_4() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t935C2FEF06530E3578BBC8CF2C9871CF2BBCF7F7, ___axis_4)); }
	inline String_t* get_axis_4() const { return ___axis_4; }
	inline String_t** get_address_of_axis_4() { return &___axis_4; }
	inline void set_axis_4(String_t* value)
	{
		___axis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axis_4), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_4;
	// UnityStandardAssets.CrossPlatformInput.Joystick_AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___m_VerticalVirtualAxis_12;

public:
	inline static int32_t get_offset_of_MovementRange_4() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___MovementRange_4)); }
	inline int32_t get_MovementRange_4() const { return ___MovementRange_4; }
	inline int32_t* get_address_of_MovementRange_4() { return &___MovementRange_4; }
	inline void set_MovementRange_4(int32_t value)
	{
		___MovementRange_4 = value;
	}

	inline static int32_t get_offset_of_axesToUse_5() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___axesToUse_5)); }
	inline int32_t get_axesToUse_5() const { return ___axesToUse_5; }
	inline int32_t* get_address_of_axesToUse_5() { return &___axesToUse_5; }
	inline void set_axesToUse_5(int32_t value)
	{
		___axesToUse_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontalAxisName_6), (void*)value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticalAxisName_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___m_StartPos_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_UseX_9() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___m_UseX_9)); }
	inline bool get_m_UseX_9() const { return ___m_UseX_9; }
	inline bool* get_address_of_m_UseX_9() { return &___m_UseX_9; }
	inline void set_m_UseX_9(bool value)
	{
		___m_UseX_9 = value;
	}

	inline static int32_t get_offset_of_m_UseY_10() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___m_UseY_10)); }
	inline bool get_m_UseY_10() const { return ___m_UseY_10; }
	inline bool* get_address_of_m_UseY_10() { return &___m_UseY_10; }
	inline void set_m_UseY_10(bool value)
	{
		___m_UseY_10 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_11() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___m_HorizontalVirtualAxis_11)); }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * get_m_HorizontalVirtualAxis_11() const { return ___m_HorizontalVirtualAxis_11; }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B ** get_address_of_m_HorizontalVirtualAxis_11() { return &___m_HorizontalVirtualAxis_11; }
	inline void set_m_HorizontalVirtualAxis_11(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * value)
	{
		___m_HorizontalVirtualAxis_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalVirtualAxis_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_12() { return static_cast<int32_t>(offsetof(Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300, ___m_VerticalVirtualAxis_12)); }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * get_m_VerticalVirtualAxis_12() const { return ___m_VerticalVirtualAxis_12; }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B ** get_address_of_m_VerticalVirtualAxis_12() { return &___m_VerticalVirtualAxis_12; }
	inline void set_m_VerticalVirtualAxis_12(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * value)
	{
		___m_VerticalVirtualAxis_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalVirtualAxis_12), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E * ___mapping_4;
	// UnityStandardAssets.CrossPlatformInput.TiltInput_AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_7;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___m_SteerAxis_8;

public:
	inline static int32_t get_offset_of_mapping_4() { return static_cast<int32_t>(offsetof(TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53, ___mapping_4)); }
	inline AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E * get_mapping_4() const { return ___mapping_4; }
	inline AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E ** get_address_of_mapping_4() { return &___mapping_4; }
	inline void set_mapping_4(AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E * value)
	{
		___mapping_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapping_4), (void*)value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_5() { return static_cast<int32_t>(offsetof(TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53, ___tiltAroundAxis_5)); }
	inline int32_t get_tiltAroundAxis_5() const { return ___tiltAroundAxis_5; }
	inline int32_t* get_address_of_tiltAroundAxis_5() { return &___tiltAroundAxis_5; }
	inline void set_tiltAroundAxis_5(int32_t value)
	{
		___tiltAroundAxis_5 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_6() { return static_cast<int32_t>(offsetof(TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53, ___fullTiltAngle_6)); }
	inline float get_fullTiltAngle_6() const { return ___fullTiltAngle_6; }
	inline float* get_address_of_fullTiltAngle_6() { return &___fullTiltAngle_6; }
	inline void set_fullTiltAngle_6(float value)
	{
		___fullTiltAngle_6 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_7() { return static_cast<int32_t>(offsetof(TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53, ___centreAngleOffset_7)); }
	inline float get_centreAngleOffset_7() const { return ___centreAngleOffset_7; }
	inline float* get_address_of_centreAngleOffset_7() { return &___centreAngleOffset_7; }
	inline void set_centreAngleOffset_7(float value)
	{
		___centreAngleOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_8() { return static_cast<int32_t>(offsetof(TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53, ___m_SteerAxis_8)); }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * get_m_SteerAxis_8() const { return ___m_SteerAxis_8; }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B ** get_address_of_m_SteerAxis_8() { return &___m_SteerAxis_8; }
	inline void set_m_SteerAxis_8(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * value)
	{
		___m_SteerAxis_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SteerAxis_8), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad
struct  TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad_AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_4;
	// UnityStandardAssets.CrossPlatformInput.TouchPad_ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_5;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_8;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_StartPos_10;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousDelta_11;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_JoytickOutput_12;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_13;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___m_HorizontalVirtualAxis_15;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___m_VerticalVirtualAxis_16;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_17;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_18;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousTouchPos_19;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_20;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_Image_21;

public:
	inline static int32_t get_offset_of_axesToUse_4() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___axesToUse_4)); }
	inline int32_t get_axesToUse_4() const { return ___axesToUse_4; }
	inline int32_t* get_address_of_axesToUse_4() { return &___axesToUse_4; }
	inline void set_axesToUse_4(int32_t value)
	{
		___axesToUse_4 = value;
	}

	inline static int32_t get_offset_of_controlStyle_5() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___controlStyle_5)); }
	inline int32_t get_controlStyle_5() const { return ___controlStyle_5; }
	inline int32_t* get_address_of_controlStyle_5() { return &___controlStyle_5; }
	inline void set_controlStyle_5(int32_t value)
	{
		___controlStyle_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontalAxisName_6), (void*)value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticalAxisName_7), (void*)value);
	}

	inline static int32_t get_offset_of_Xsensitivity_8() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___Xsensitivity_8)); }
	inline float get_Xsensitivity_8() const { return ___Xsensitivity_8; }
	inline float* get_address_of_Xsensitivity_8() { return &___Xsensitivity_8; }
	inline void set_Xsensitivity_8(float value)
	{
		___Xsensitivity_8 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_9() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___Ysensitivity_9)); }
	inline float get_Ysensitivity_9() const { return ___Ysensitivity_9; }
	inline float* get_address_of_Ysensitivity_9() { return &___Ysensitivity_9; }
	inline void set_Ysensitivity_9(float value)
	{
		___Ysensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_10() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_StartPos_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_StartPos_10() const { return ___m_StartPos_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_StartPos_10() { return &___m_StartPos_10; }
	inline void set_m_StartPos_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_StartPos_10 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_11() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_PreviousDelta_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousDelta_11() const { return ___m_PreviousDelta_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousDelta_11() { return &___m_PreviousDelta_11; }
	inline void set_m_PreviousDelta_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousDelta_11 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_12() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_JoytickOutput_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_JoytickOutput_12() const { return ___m_JoytickOutput_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_JoytickOutput_12() { return &___m_JoytickOutput_12; }
	inline void set_m_JoytickOutput_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_JoytickOutput_12 = value;
	}

	inline static int32_t get_offset_of_m_UseX_13() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_UseX_13)); }
	inline bool get_m_UseX_13() const { return ___m_UseX_13; }
	inline bool* get_address_of_m_UseX_13() { return &___m_UseX_13; }
	inline void set_m_UseX_13(bool value)
	{
		___m_UseX_13 = value;
	}

	inline static int32_t get_offset_of_m_UseY_14() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_UseY_14)); }
	inline bool get_m_UseY_14() const { return ___m_UseY_14; }
	inline bool* get_address_of_m_UseY_14() { return &___m_UseY_14; }
	inline void set_m_UseY_14(bool value)
	{
		___m_UseY_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_15() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_HorizontalVirtualAxis_15)); }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * get_m_HorizontalVirtualAxis_15() const { return ___m_HorizontalVirtualAxis_15; }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B ** get_address_of_m_HorizontalVirtualAxis_15() { return &___m_HorizontalVirtualAxis_15; }
	inline void set_m_HorizontalVirtualAxis_15(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * value)
	{
		___m_HorizontalVirtualAxis_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalVirtualAxis_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_16() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_VerticalVirtualAxis_16)); }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * get_m_VerticalVirtualAxis_16() const { return ___m_VerticalVirtualAxis_16; }
	inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B ** get_address_of_m_VerticalVirtualAxis_16() { return &___m_VerticalVirtualAxis_16; }
	inline void set_m_VerticalVirtualAxis_16(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * value)
	{
		___m_VerticalVirtualAxis_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalVirtualAxis_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dragging_17() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_Dragging_17)); }
	inline bool get_m_Dragging_17() const { return ___m_Dragging_17; }
	inline bool* get_address_of_m_Dragging_17() { return &___m_Dragging_17; }
	inline void set_m_Dragging_17(bool value)
	{
		___m_Dragging_17 = value;
	}

	inline static int32_t get_offset_of_m_Id_18() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_Id_18)); }
	inline int32_t get_m_Id_18() const { return ___m_Id_18; }
	inline int32_t* get_address_of_m_Id_18() { return &___m_Id_18; }
	inline void set_m_Id_18(int32_t value)
	{
		___m_Id_18 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_19() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_PreviousTouchPos_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousTouchPos_19() const { return ___m_PreviousTouchPos_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousTouchPos_19() { return &___m_PreviousTouchPos_19; }
	inline void set_m_PreviousTouchPos_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousTouchPos_19 = value;
	}

	inline static int32_t get_offset_of_m_Center_20() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_Center_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_20() const { return ___m_Center_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_20() { return &___m_Center_20; }
	inline void set_m_Center_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_20 = value;
	}

	inline static int32_t get_offset_of_m_Image_21() { return static_cast<int32_t>(offsetof(TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11, ___m_Image_21)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_Image_21() const { return ___m_Image_21; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_Image_21() { return &___m_Image_21; }
	inline void set_m_Image_21(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_Image_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_21), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_tB291263EEE72B9F137CA4DC19F039DE672D08028 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_RaycastResultCache_4)); }
	inline List_1_tB291263EEE72B9F137CA4DC19F039DE672D08028 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_tB291263EEE72B9F137CA4DC19F039DE672D08028 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_tB291263EEE72B9F137CA4DC19F039DE672D08028 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_AxisEventData_5)); }
	inline AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_EventSystem_6)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_BaseEventData_7)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_InputOverride_8)); }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_DefaultInput_9)); }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mgU24cache0
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_15), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C  : public BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t4DD8490EB900C82E89E3C456A8DA6A741801BDEF * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule_MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C, ___m_PointerData_14)); }
	inline Dictionary_2_t4DD8490EB900C82E89E3C456A8DA6A741801BDEF * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t4DD8490EB900C82E89E3C456A8DA6A741801BDEF ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t4DD8490EB900C82E89E3C456A8DA6A741801BDEF * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C, ___m_MouseState_15)); }
	inline MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5  : public PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_LastMoveVector_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_LastMousePosition_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_MousePosition_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_35;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_36;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_37;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_38;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_39;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_40;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_41;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_42;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_43;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_44;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_45;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_46;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_47;

public:
	inline static int32_t get_offset_of_m_Sprite_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_35)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_35() const { return ___m_Sprite_35; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_35() { return &___m_Sprite_35; }
	inline void set_m_Sprite_35(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_36() const { return ___m_OverrideSprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_36() { return &___m_OverrideSprite_36; }
	inline void set_m_OverrideSprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_37)); }
	inline int32_t get_m_Type_37() const { return ___m_Type_37; }
	inline int32_t* get_address_of_m_Type_37() { return &___m_Type_37; }
	inline void set_m_Type_37(int32_t value)
	{
		___m_Type_37 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_38)); }
	inline bool get_m_PreserveAspect_38() const { return ___m_PreserveAspect_38; }
	inline bool* get_address_of_m_PreserveAspect_38() { return &___m_PreserveAspect_38; }
	inline void set_m_PreserveAspect_38(bool value)
	{
		___m_PreserveAspect_38 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_39)); }
	inline bool get_m_FillCenter_39() const { return ___m_FillCenter_39; }
	inline bool* get_address_of_m_FillCenter_39() { return &___m_FillCenter_39; }
	inline void set_m_FillCenter_39(bool value)
	{
		___m_FillCenter_39 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_40)); }
	inline int32_t get_m_FillMethod_40() const { return ___m_FillMethod_40; }
	inline int32_t* get_address_of_m_FillMethod_40() { return &___m_FillMethod_40; }
	inline void set_m_FillMethod_40(int32_t value)
	{
		___m_FillMethod_40 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_41)); }
	inline float get_m_FillAmount_41() const { return ___m_FillAmount_41; }
	inline float* get_address_of_m_FillAmount_41() { return &___m_FillAmount_41; }
	inline void set_m_FillAmount_41(float value)
	{
		___m_FillAmount_41 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_42)); }
	inline bool get_m_FillClockwise_42() const { return ___m_FillClockwise_42; }
	inline bool* get_address_of_m_FillClockwise_42() { return &___m_FillClockwise_42; }
	inline void set_m_FillClockwise_42(bool value)
	{
		___m_FillClockwise_42 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_43)); }
	inline int32_t get_m_FillOrigin_43() const { return ___m_FillOrigin_43; }
	inline int32_t* get_address_of_m_FillOrigin_43() { return &___m_FillOrigin_43; }
	inline void set_m_FillOrigin_43(int32_t value)
	{
		___m_FillOrigin_43 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_44)); }
	inline float get_m_AlphaHitTestMinimumThreshold_44() const { return ___m_AlphaHitTestMinimumThreshold_44; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_44() { return &___m_AlphaHitTestMinimumThreshold_44; }
	inline void set_m_AlphaHitTestMinimumThreshold_44(float value)
	{
		___m_AlphaHitTestMinimumThreshold_44 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_45)); }
	inline bool get_m_Tracked_45() const { return ___m_Tracked_45; }
	inline bool* get_address_of_m_Tracked_45() { return &___m_Tracked_45; }
	inline void set_m_Tracked_45(bool value)
	{
		___m_Tracked_45 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_46)); }
	inline bool get_m_UseSpriteMesh_46() const { return ___m_UseSpriteMesh_46; }
	inline bool* get_address_of_m_UseSpriteMesh_46() { return &___m_UseSpriteMesh_46; }
	inline void set_m_UseSpriteMesh_46(bool value)
	{
		___m_UseSpriteMesh_46 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_47)); }
	inline float get_m_CachedReferencePixelsPerUnit_47() const { return ___m_CachedReferencePixelsPerUnit_47; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_47() { return &___m_CachedReferencePixelsPerUnit_47; }
	inline void set_m_CachedReferencePixelsPerUnit_47(float value)
	{
		___m_CachedReferencePixelsPerUnit_47 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_48;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_49;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_50;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_51;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * ___m_TrackedTexturelessImages_52;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_53;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mgU24cache0
	Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * ___U3CU3Ef__mgU24cache0_54;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_34() const { return ___s_ETC1DefaultUI_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_34() { return &___s_ETC1DefaultUI_34; }
	inline void set_s_ETC1DefaultUI_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_48)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_48() const { return ___s_VertScratch_48; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_48() { return &___s_VertScratch_48; }
	inline void set_s_VertScratch_48(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_48), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_49)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_49() const { return ___s_UVScratch_49; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_49() { return &___s_UVScratch_49; }
	inline void set_s_UVScratch_49(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_49), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_50)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_50() const { return ___s_Xy_50; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_50() { return &___s_Xy_50; }
	inline void set_s_Xy_50(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_51)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_51() const { return ___s_Uv_51; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_51() { return &___s_Uv_51; }
	inline void set_s_Uv_51(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_52)); }
	inline List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * get_m_TrackedTexturelessImages_52() const { return ___m_TrackedTexturelessImages_52; }
	inline List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED ** get_address_of_m_TrackedTexturelessImages_52() { return &___m_TrackedTexturelessImages_52; }
	inline void set_m_TrackedTexturelessImages_52(List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * value)
	{
		___m_TrackedTexturelessImages_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_53)); }
	inline bool get_s_Initialized_53() const { return ___s_Initialized_53; }
	inline bool* get_address_of_s_Initialized_53() { return &___s_Initialized_53; }
	inline void set_s_Initialized_53(bool value)
	{
		___s_Initialized_53 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___U3CU3Ef__mgU24cache0_54)); }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * get_U3CU3Ef__mgU24cache0_54() const { return ___U3CU3Ef__mgU24cache0_54; }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 ** get_address_of_U3CU3Ef__mgU24cache0_54() { return &___U3CU3Ef__mgU24cache0_54; }
	inline void set_U3CU3Ef__mgU24cache0_54(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * value)
	{
		___U3CU3Ef__mgU24cache0_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_54), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * m_Items[1];

public:
	inline AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t806752C775BA713A91B6588A07CA98417CABC003  m_Items[1];

public:
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t806752C775BA713A91B6588A07CA98417CABC003  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t806752C775BA713A91B6588A07CA98417CABC003  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m2555F1EE8C9454409BCB25D8E11BD5C92B1ABD6F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___axis0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * CrossPlatformInputManager_VirtualAxisReference_mED7126401F6AE52717A6A1F7B7D159D9B87E3D31 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mF91D13C9755AC650166874A704B274BD10F43D84 (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mE35EF2EA2B32232CA0B3310F33B9E8A4364FC387 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m3B267066E774818E369220B0ABD084B271B45A85 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m2BE5D97A12FFE0C0BDC84BD6B3C681450885DF7D (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_mB991430DEBA2A4F5E6D9EA239933B1E4FBDA6FE0 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m33BA0850E8ED0346EADA2BAD3D8C9A5987CD7F87 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mD48811838B227E88BB5367C5E8D01CCE57F65F4A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_m041BC238E99449C11C7E5124EB38D12AAE905100 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m988DD75209D609FA6C82BD344C741ED1CE85B0D4 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m08DA2F07EF8A6F7CB270D89ADAB244715BCB4D0D (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m0B1E0317ACA3E372D9EDE15104BD1E91AE23AB97 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m90030223A969B2C1D9D89CE1E6120138C11C99E3 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_mBFDFA749ADE0D71301A116F3EFEA838509ED3858 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___axis0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_mB98A166A0B2DC0CB5E8E9D93D5FAD96E85D64CED (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * ___button0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mE2924D6992E3EEFEDA1AEF811153DBADDC3452A8 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_m63841A01BFA1821938092302A45CA8B2E7FC82BE (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * VirtualInput_VirtualAxisReference_mBF50EC42C985094F411FAB3494BCBC1FE916827C (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mF379E8ACAD65A62F181C585F8A2316B541E3203A (String_t* ___name0, bool ___raw1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m0F52B866977E941510EB9AF88585C390FF123529 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_mDF8ECB3534F832D20B5A8DF9F886CD9DC563E09F (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m5EB52471A45F3F64B6ED80B0D6E44267246358D1 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m0D9CAD919859F9F02A6447BDC91901DEA05E1D6C (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m6B22383F798AD25A70F3BA3DC72D9C0FABCF104E (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m343A6645DC80203B5A0915482BA2C90B65F0CE51 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m9765BA7FB19530B2CFBD719EBED55AE776D0281B (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m4A1E5951D30ACD680DF32C2B5D4DA2B959FA6F25 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_mA2B1719ADEC970BCC329ECC2F05FEE4C4DABF737 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_mD61A760780F6B5E9FB93A45A6F6EDF6270B1A4BC (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m97573E267B487B8FD4BF37615AFC19BED7B4E436 (const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m21CF24E17EEE67F1C2DFBA7FE62CCCFAE1E3C1CA (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m39C6B8D4EBC061653F870C41113CE6AC97A7210A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_mC0AB8D6E72D9A9F147A25DCFD2DA4D132A30837D (String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mFD176229174244D4473E795326E86C872B66385C (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_mFBA91C320D783A3B497B7ED19E5DF00DC2C59F36 (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061 (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m9405AD022E4DDE90DF0F4D9CBF92A4D02078B43C (MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A (const RuntimeMethod* method)
{
	return ((  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * GameObject_AddComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m937909825E8A75FEACE3210C9BC7E336B92349AD (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_mBA84D82A6E4F60B0B2D3AA7E7F77FEFE02DDED6E (MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418 * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m6DBB942F85E55582B325C5D952573CE5056B78B4 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m9328F88674AC82B9533679DF13293AB9B740E05A (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * ___button0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599 (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
inline VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5 (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * (*) (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65 (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0)
inline VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * (*) (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mE619AB45867F940E5B9696588071EA3C0ED031CF (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mC63B27B875625CD65DC0E9956B8F6993650E8BCC (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m736D5FEBCC135D9EBE2B1077301461F73811C876 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_mA76B4A0A9319F7E93587B47840FF6B021F659252 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mDB070B042D45F554246F739C77963ABF8DE7C2CA (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m1DD186B3107C12E45D9FE0C9959C163F9EE6F1B9 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496 (String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m35430CD9260C960DFE19F809D5410BA0DBFDE0F7 (String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m5CF1A504E539DE122B548AA3E15A7DC0918DE06A (String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mBCFF01DD979D2BE061A8F47082060258F2C4458B (String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m4A4FE2D2191747FE5181289A0C99FEA307E0238C (String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_acceleration_m053AF82D2844276A2E896A87EB70F6F4ABBBCF7B (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m61D906BA46E06A613FC8E46A5668951F61AF1F61 (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5B4D33BFD1D491E18DA9B97FDC127859B2B1A0C1 (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mD177608F5B9E3DEB620ED1D624496D76B40B11AA (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m9D15A5DE4C7A00B54C146EC36D98D6A0C80B8609 (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_mE35687928423C6384AFA5449298B1140012832A8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m2E7B8CD923977019C2697ED57519F14E4F2ADB3F (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6 (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571* Input_get_touches_m605F63342DC3C26E74843F9CE2F4C191C9151B12 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9 (Touch_t806752C775BA713A91B6588A07CA98417CABC003 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m180C82A370D651BC4E65B14421A281AA27F69D12 (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
inline void Dictionary_2_Add_m4B4D8B22E09ABBDC7B0F403018AC64AA1AA94ED3 (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * __this, String_t* p0, VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 *, String_t*, VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mA99391FED2F2655BC0835D0C3E9F0D81CC65895A (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
inline void Dictionary_2_Add_m66D6CA46FAFECDEDDD6C552DFF539E703FB57B0A (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * __this, String_t* p0, VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E *, String_t*, VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m5930428BD9EC8703482B0927C884705A9A7FCD5C (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
inline bool Dictionary_2_Remove_m9D7482B3D27794500FB33065A6EB0200193A9639 (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
inline bool Dictionary_2_Remove_m280FAFFEFA24FD4ACF7DB87DB1B208D873BE88DC (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3073C72F081E04E1C0A03A7CF67BDAF196358314 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_m600A45698661FFAB823F245812FC9D7C56FF2624 (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_mF51080BFED2E908F713E9A1B43DE1D8166A47FBD (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
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
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnEnable_m29AB36A1E0E041B3DE2CB99DC46D20B56E294DE5 (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnEnable_m29AB36A1E0E041B3DE2CB99DC46D20B56E294DE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CrossPlatformInputManager.AxisExists(axisName))
		String_t* L_0 = __this->get_axisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m2555F1EE8C9454409BCB25D8E11BD5C92B1ABD6F(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// m_Axis = new CrossPlatformInputManager.VirtualAxis(axisName);
		String_t* L_2 = __this->get_axisName_4();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_3 = (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)il2cpp_codegen_object_new(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_Axis_9(L_3);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_Axis);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_4 = __this->get_m_Axis_9();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720(L_4, /*hidden argument*/NULL);
		// }
		goto IL_003c;
	}

IL_002b:
	{
		// m_Axis = CrossPlatformInputManager.VirtualAxisReference(axisName);
		String_t* L_5 = __this->get_axisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = CrossPlatformInputManager_VirtualAxisReference_mED7126401F6AE52717A6A1F7B7D159D9B87E3D31(L_5, /*hidden argument*/NULL);
		__this->set_m_Axis_9(L_6);
	}

IL_003c:
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mF91D13C9755AC650166874A704B274BD10F43D84(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mF91D13C9755AC650166874A704B274BD10F43D84 (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_FindPairedButton_mF91D13C9755AC650166874A704B274BD10F43D84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var otherAxisButtons = FindObjectsOfType(typeof(AxisTouchButton)) as AxisTouchButton[];
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203(L_1, /*hidden argument*/NULL);
		V_0 = ((AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23_il2cpp_TypeInfo_var));
		// if (otherAxisButtons != null)
		AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_001c:
	{
		// if (otherAxisButtons[i].axisName == axisName && otherAxisButtons[i] != this)
		AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->get_axisName_4();
		String_t* L_9 = __this->get_axisName_4();
		bool L_10 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_14, __this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		// m_PairedWith = otherAxisButtons[i];
		AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_m_PairedWith_8(L_19);
	}

IL_0045:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0049:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_t0272F9B57E8AC7FEF4C6DC614C1FE63A83DF4A23* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_001c;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnDisable_mA62B4E5082B5826E4E53EB547D6DF6F9937A8A23 (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * __this, const RuntimeMethod* method)
{
	{
		// m_Axis.Remove();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_0 = __this->get_m_Axis_9();
		NullCheck(L_0);
		VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerDown_m7B82CDE0D37724C99EE1A2CDCE99C39FE2B0C7E9 (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnPointerDown_m7B82CDE0D37724C99EE1A2CDCE99C39FE2B0C7E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PairedWith == null)
		AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * L_0 = __this->get_m_PairedWith_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mF91D13C9755AC650166874A704B274BD10F43D84(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, axisValue, responseSpeed * Time.deltaTime));
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_2 = __this->get_m_Axis_9();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_3 = __this->get_m_Axis_9();
		NullCheck(L_3);
		float L_4 = VirtualAxis_get_GetValue_mE35EF2EA2B32232CA0B3310F33B9E8A4364FC387(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_axisValue_5();
		float L_6 = __this->get_responseSpeed_6();
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = Mathf_MoveTowards_m3B267066E774818E369220B0ABD084B271B45A85(L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_2, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerUp_mB5E2BCB9B6A4342529EFA2BCA37DE8F1E096BD72 (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnPointerUp_mB5E2BCB9B6A4342529EFA2BCA37DE8F1E096BD72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, 0, responseSpeed * Time.deltaTime));
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_0 = __this->get_m_Axis_9();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_1 = __this->get_m_Axis_9();
		NullCheck(L_1);
		float L_2 = VirtualAxis_get_GetValue_mE35EF2EA2B32232CA0B3310F33B9E8A4364FC387(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_responseSpeed_6();
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = Mathf_MoveTowards_m3B267066E774818E369220B0ABD084B271B45A85(L_2, (0.0f), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton__ctor_mF9825DAAC7182C75F7C6CB2EFED4AA8DC96A327E (AxisTouchButton_t124E142E5813D33A6407C920758816933327BEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton__ctor_mF9825DAAC7182C75F7C6CB2EFED4AA8DC96A327E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string axisName = "Horizontal"; // The name of the axis
		__this->set_axisName_4(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C);
		// public float axisValue = 1; // The axis that the value has
		__this->set_axisValue_5((1.0f));
		// public float responseSpeed = 3; // The speed at which the axis touch button responds
		__this->set_responseSpeed_6((3.0f));
		// public float returnToCentreSpeed = 3; // The speed at which the button will return to its centre
		__this->set_returnToCentreSpeed_7((3.0f));
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_OnEnable_mC1FF43F052740CDEE5ADAEFF0CC55FFD0DC06C70 (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetDownState_mAA64E4DCC63748295BAC71350484F8005D845C05 (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetDownState_mAA64E4DCC63748295BAC71350484F8005D845C05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonDown(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m2BE5D97A12FFE0C0BDC84BD6B3C681450885DF7D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetUpState_m8E15DB82EBA0350EBB7429EDBEA3DB7FFC5A0C14 (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetUpState_m8E15DB82EBA0350EBB7429EDBEA3DB7FFC5A0C14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonUp(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_mB991430DEBA2A4F5E6D9EA239933B1E4FBDA6FE0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisPositiveState_m90108A36743F1315D8A9362131C5D084D4824174 (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisPositiveState_m90108A36743F1315D8A9362131C5D084D4824174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisPositive(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_m33BA0850E8ED0346EADA2BAD3D8C9A5987CD7F87(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNeutralState_m0941F0DDA9312B25565FAEFE01E5F30F34E7E03D (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisNeutralState_m0941F0DDA9312B25565FAEFE01E5F30F34E7E03D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisZero(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_mD48811838B227E88BB5367C5E8D01CCE57F65F4A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNegativeState_mB6BAD56080DCB3D934D65DB1A8493F9AAFF5BDB1 (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisNegativeState_mB6BAD56080DCB3D934D65DB1A8493F9AAFF5BDB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisNegative(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_m041BC238E99449C11C7E5124EB38D12AAE905100(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_Update_m2590E65C6FDF5793091A52439D36C27EC9A65E20 (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m4F2E576B6069732AC99E7D08B9ADE462396B643D (ButtonHandler_tA53C84C0B2F2670630A8B3B02001C0E6F773C631 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_m00F7D3BECE0F3F05B48DBCB5EA16418703703402 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager__cctor_m00F7D3BECE0F3F05B48DBCB5EA16418703703402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TouchInput = new MobileInput();
		MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * L_0 = (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 *)il2cpp_codegen_object_new(MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44_il2cpp_TypeInfo_var);
		MobileInput__ctor_m988DD75209D609FA6C82BD344C741ED1CE85B0D4(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->set_s_TouchInput_1(L_0);
		// s_HardwareInput = new StandaloneInput();
		StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * L_1 = (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB *)il2cpp_codegen_object_new(StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m08DA2F07EF8A6F7CB270D89ADAB244715BCB4D0D(L_1, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->set_s_HardwareInput_2(L_1);
		// activeInput = s_TouchInput;
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_2 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_ActiveInputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_mC7431879D960293266D1B271B04AB164B602E5D9 (int32_t ___activeInputMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SwitchActiveInputMethod_mC7431879D960293266D1B271B04AB164B602E5D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (activeInputMethod)
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// activeInput = s_HardwareInput;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_2 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_s_HardwareInput_2();
		((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		// break;
		return;
	}

IL_0013:
	{
		// activeInput = s_TouchInput;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_3 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->set_activeInput_0(L_3);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m2555F1EE8C9454409BCB25D8E11BD5C92B1ABD6F (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_AxisExists_m2555F1EE8C9454409BCB25D8E11BD5C92B1ABD6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.AxisExists(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtualInput_AxisExists_m0B1E0317ACA3E372D9EDE15104BD1E91AE23AB97(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_m45ACF99988AACA1305F01CE03AAF64E3DD16F41A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_ButtonExists_m45ACF99988AACA1305F01CE03AAF64E3DD16F41A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.ButtonExists(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtualInput_ButtonExists_m90030223A969B2C1D9D89CE1E6120138C11C99E3(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualAxis(axis);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_mBFDFA749ADE0D71301A116F3EFEA838509ED3858(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m9328F88674AC82B9533679DF13293AB9B740E05A (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualButton_m9328F88674AC82B9533679DF13293AB9B740E05A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualButton(button);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_mB98A166A0B2DC0CB5E8E9D93D5FAD96E85D64CED(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == null)
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("name");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786_RuntimeMethod_var);
	}

IL_000e:
	{
		// activeInput.UnRegisterVirtualAxis(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_2 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_mE2924D6992E3EEFEDA1AEF811153DBADDC3452A8(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m39C6B8D4EBC061653F870C41113CE6AC97A7210A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualButton_m39C6B8D4EBC061653F870C41113CE6AC97A7210A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.UnRegisterVirtualButton(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m63841A01BFA1821938092302A45CA8B2E7FC82BE(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * CrossPlatformInputManager_VirtualAxisReference_mED7126401F6AE52717A6A1F7B7D159D9B87E3D31 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_VirtualAxisReference_mED7126401F6AE52717A6A1F7B7D159D9B87E3D31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.VirtualAxisReference(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_2 = VirtualInput_VirtualAxisReference_mBF50EC42C985094F411FAB3494BCBC1FE916827C(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m0FBACA184EB6060C98F45C0AD1D488CBB740027B (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m0FBACA184EB6060C98F45C0AD1D488CBB740027B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, false);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_mF379E8ACAD65A62F181C585F8A2316B541E3203A(L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_mD130E9B085649C0942ACCEC7F689A7E250BE3E06 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxisRaw_mD130E9B085649C0942ACCEC7F689A7E250BE3E06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, true);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_mF379E8ACAD65A62F181C585F8A2316B541E3203A(L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mF379E8ACAD65A62F181C585F8A2316B541E3203A (String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_mF379E8ACAD65A62F181C585F8A2316B541E3203A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetAxis(name, raw);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3 = VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_m799CF89850D68282AFC554FE8FAAC308B43590A7 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButton_m799CF89850D68282AFC554FE8FAAC308B43590A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButton(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m5BC3728E612F3889D7CD69F37271115907D70491 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonDown_m5BC3728E612F3889D7CD69F37271115907D70491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonDown(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_m7EA441DEBF67FF26FEE632BBC8C17439031795DF (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonUp_m7EA441DEBF67FF26FEE632BBC8C17439031795DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonUp(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m2BE5D97A12FFE0C0BDC84BD6B3C681450885DF7D (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonDown_m2BE5D97A12FFE0C0BDC84BD6B3C681450885DF7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonDown(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_mB991430DEBA2A4F5E6D9EA239933B1E4FBDA6FE0 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonUp_mB991430DEBA2A4F5E6D9EA239933B1E4FBDA6FE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonUp(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m33BA0850E8ED0346EADA2BAD3D8C9A5987CD7F87 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisPositive_m33BA0850E8ED0346EADA2BAD3D8C9A5987CD7F87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisPositive(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_m041BC238E99449C11C7E5124EB38D12AAE905100 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisNegative_m041BC238E99449C11C7E5124EB38D12AAE905100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisNegative(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mD48811838B227E88BB5367C5E8D01CCE57F65F4A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisZero_mD48811838B227E88BB5367C5E8D01CCE57F65F4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisZero(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_mC0AB8D6E72D9A9F147A25DCFD2DA4D132A30837D (String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxis_mC0AB8D6E72D9A9F147A25DCFD2DA4D132A30837D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxis(name, value);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CrossPlatformInputManager_get_mousePosition_mC886FC2F654E91F06407FDB891DF3201ED576DCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_get_mousePosition_mC886FC2F654E91F06407FDB891DF3201ED576DCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return activeInput.MousePosition(); }
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = VirtFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m61D906BA46E06A613FC8E46A5668951F61AF1F61 (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionX_m61D906BA46E06A613FC8E46A5668951F61AF1F61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionX(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m0F52B866977E941510EB9AF88585C390FF123529(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5B4D33BFD1D491E18DA9B97FDC127859B2B1A0C1 (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionY_m5B4D33BFD1D491E18DA9B97FDC127859B2B1A0C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionY(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_mDF8ECB3534F832D20B5A8DF9F886CD9DC563E09F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mD177608F5B9E3DEB620ED1D624496D76B40B11AA (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionZ_mD177608F5B9E3DEB620ED1D624496D76B40B11AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionZ(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * L_0 = ((CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m5EB52471A45F3F64B6ED80B0D6E44267246358D1(L_0, L_1, /*hidden argument*/NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m9765BA7FB19530B2CFBD719EBED55AE776D0281B (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m6B22383F798AD25A70F3BA3DC72D9C0FABCF104E (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mA99391FED2F2655BC0835D0C3E9F0D81CC65895A (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m343A6645DC80203B5A0915482BA2C90B65F0CE51 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m0D9CAD919859F9F02A6447BDC91901DEA05E1D6C(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m0D9CAD919859F9F02A6447BDC91901DEA05E1D6C (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_m6B22383F798AD25A70F3BA3DC72D9C0FABCF104E(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m343A6645DC80203B5A0915482BA2C90B65F0CE51(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0 = VirtualAxis_get_name_m9765BA7FB19530B2CFBD719EBED55AE776D0281B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mE35EF2EA2B32232CA0B3310F33B9E8A4364FC387 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_m12D5D3E4B1B386F9223C5AE3048F3190ECD93D35 (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m21CF24E17EEE67F1C2DFBA7FE62CCCFAE1E3C1CA (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_mA2B1719ADEC970BCC329ECC2F05FEE4C4DABF737 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m5930428BD9EC8703482B0927C884705A9A7FCD5C (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_mD61A760780F6B5E9FB93A45A6F6EDF6270B1A4BC (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m6DBB942F85E55582B325C5D952573CE5056B78B4 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m4A1E5951D30ACD680DF32C2B5D4DA2B959FA6F25(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m4A1E5951D30ACD680DF32C2B5D4DA2B959FA6F25 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// private int m_LastPressedFrame = -5;
		__this->set_m_LastPressedFrame_2(((int32_t)-5));
		// private int m_ReleasedFrame = -5;
		__this->set_m_ReleasedFrame_3(((int32_t)-5));
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_mA2B1719ADEC970BCC329ECC2F05FEE4C4DABF737(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_mD61A760780F6B5E9FB93A45A6F6EDF6270B1A4BC(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mE619AB45867F940E5B9696588071EA3C0ED031CF (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	{
		// if (m_Pressed)
		bool L_0 = __this->get_m_Pressed_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->set_m_Pressed_4((bool)1);
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1 = Time_get_frameCount_m97573E267B487B8FD4BF37615AFC19BED7B4E436(/*hidden argument*/NULL);
		__this->set_m_LastPressedFrame_2(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mC63B27B875625CD65DC0E9956B8F6993650E8BCC (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	{
		// m_Pressed = false;
		__this->set_m_Pressed_4((bool)0);
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0 = Time_get_frameCount_m97573E267B487B8FD4BF37615AFC19BED7B4E436(/*hidden argument*/NULL);
		__this->set_m_ReleasedFrame_3(L_0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m3F055827A2E7DFACA548E482337E80C50F1EABD6 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButton_Remove_m3F055827A2E7DFACA548E482337E80C50F1EABD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0 = VirtualButton_get_name_m21CF24E17EEE67F1C2DFBA7FE62CCCFAE1E3C1CA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m39C6B8D4EBC061653F870C41113CE6AC97A7210A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mDB070B042D45F554246F739C77963ABF8DE7C2CA (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m736D5FEBCC135D9EBE2B1077301461F73811C876 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->get_m_LastPressedFrame_2();
		int32_t L_1 = Time_get_frameCount_m97573E267B487B8FD4BF37615AFC19BED7B4E436(/*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_mA76B4A0A9319F7E93587B47840FF6B021F659252 (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * __this, const RuntimeMethod* method)
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->get_m_ReleasedFrame_3();
		int32_t L_1 = Time_get_frameCount_m97573E267B487B8FD4BF37615AFC19BED7B4E436(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_Update_m52564813F44AD169EB7306C31EBCE8CE5F90506D (InputAxisScrollbar_t935C2FEF06530E3578BBC8CF2C9871CF2BBCF7F7 * __this, const RuntimeMethod* method)
{
	{
		// void Update() { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_HandleInput_m2B581FDD829C18EC992DC470B9DCFBDF7B918C7E (InputAxisScrollbar_t935C2FEF06530E3578BBC8CF2C9871CF2BBCF7F7 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAxisScrollbar_HandleInput_m2B581FDD829C18EC992DC470B9DCFBDF7B918C7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxis(axis, (value*2f) - 1f);
		String_t* L_0 = __this->get_axis_4();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_mC0AB8D6E72D9A9F147A25DCFD2DA4D132A30837D(L_0, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f))), (float)(1.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar__ctor_m6DF3F5C0D8AD0A2006590CD1C8692BC48F22FA3D (InputAxisScrollbar_t935C2FEF06530E3578BBC8CF2C9871CF2BBCF7F7 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m86F4DF9F1A22108F31C58BD4875A93B89FB9666C (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_Start_m86F4DF9F1A22108F31C58BD4875A93B89FB9666C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateVirtualAxes();
		Joystick_CreateVirtualAxes_mFD176229174244D4473E795326E86C872B66385C(__this, /*hidden argument*/NULL);
		// m_StartPos =  transform.position; //LEO changed
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		__this->set_m_StartPos_8(L_1);
		// Debug.Log(transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// UpdateVirtualAxes(m_StartPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_m_StartPos_8();
		Joystick_UpdateVirtualAxes_mFBA91C320D783A3B497B7ED19E5DF00DC2C59F36(__this, L_6, /*hidden argument*/NULL);
		// Debug.Log(m_StartPos.y);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_7 = __this->get_address_of_m_StartPos_8();
		float L_8 = L_7->get_y_3();
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_9);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_mFBA91C320D783A3B497B7ED19E5DF00DC2C59F36 (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_UpdateVirtualAxes_mFBA91C320D783A3B497B7ED19E5DF00DC2C59F36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var delta = m_StartPos - value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_StartPos_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// delta.y = -delta.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		float L_4 = L_3.get_y_3();
		(&V_0)->set_y_3(((-L_4)));
		// delta /= MovementRange;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		int32_t L_6 = __this->get_MovementRange_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_5, (((float)((float)L_6))), /*hidden argument*/NULL);
		V_0 = L_7;
		// if (m_UseX)
		bool L_8 = __this->get_m_UseX_9();
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(-delta.x);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_9 = __this->get_m_HorizontalVirtualAxis_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = L_10.get_x_2();
		NullCheck(L_9);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_9, ((-L_11)), /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if (m_UseY)
		bool L_12 = __this->get_m_UseY_10();
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(delta.y);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_13 = __this->get_m_VerticalVirtualAxis_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		float L_15 = L_14.get_y_3();
		NullCheck(L_13);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_13, L_15, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mFD176229174244D4473E795326E86C872B66385C (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_CreateVirtualAxes_mFD176229174244D4473E795326E86C872B66385C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * G_B2_0 = NULL;
	Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * G_B3_1 = NULL;
	Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * G_B5_0 = NULL;
	Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->get_axesToUse_5();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_5();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_9((bool)G_B3_0);
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->get_axesToUse_5();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_5();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_10((bool)G_B6_0);
		// if (m_UseX)
		bool L_4 = __this->get_m_UseX_9();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->get_horizontalAxisName_6();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)il2cpp_codegen_object_new(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_11(L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_7 = __this->get_m_HorizontalVirtualAxis_11();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->get_m_UseY_10();
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->get_verticalAxisName_7();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_10 = (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)il2cpp_codegen_object_new(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_12(L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_11 = __this->get_m_VerticalVirtualAxis_12();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720(L_11, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m397CD3849713FB162041D209A1D989F217E90E68 (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnDrag_m397CD3849713FB162041D209A1D989F217E90E68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 newPos = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->get_m_UseX_9();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		// float delta = (int)(data.position.x - m_StartPos.x)/100.0F;
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___data0;
		NullCheck(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_m_StartPos_8();
		float L_6 = L_5->get_x_2();
		V_1 = ((float)((float)(((float)((float)(((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6))))))))/(float)(100.0f)));
		// delta = Mathf.Clamp(delta, - MovementRange, MovementRange);
		float L_7 = V_1;
		int32_t L_8 = __this->get_MovementRange_4();
		int32_t L_9 = __this->get_MovementRange_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_7, (((float)((float)((-L_8))))), (((float)((float)L_9))), /*hidden argument*/NULL);
		V_1 = L_10;
		// newPos.x = delta;
		float L_11 = V_1;
		(&V_0)->set_x_2(L_11);
	}

IL_004c:
	{
		// if (m_UseY)
		bool L_12 = __this->get_m_UseY_10();
		if (!L_12)
		{
			goto IL_00a3;
		}
	}
	{
		// float delta = (data.position.y - m_StartPos.y)/50.0F - MovementRange;
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_13 = ___data0;
		NullCheck(L_13);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_16 = __this->get_address_of_m_StartPos_8();
		float L_17 = L_16->get_y_3();
		int32_t L_18 = __this->get_MovementRange_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17))/(float)(50.0f))), (float)(((float)((float)L_18)))));
		// delta = Mathf.Clamp(delta, -MovementRange, MovementRange);
		float L_19 = V_2;
		int32_t L_20 = __this->get_MovementRange_4();
		int32_t L_21 = __this->get_MovementRange_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_19, (((float)((float)((-L_20))))), (((float)((float)L_21))), /*hidden argument*/NULL);
		V_2 = L_22;
		// Debug.Log(delta);
		float L_23 = V_2;
		float L_24 = L_23;
		RuntimeObject * L_25 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_25, /*hidden argument*/NULL);
		// newPos.y = delta;
		float L_26 = V_2;
		(&V_0)->set_y_3(L_26);
	}

IL_00a3:
	{
		// transform.position = new Vector3(m_StartPos.x + newPos.x, m_StartPos.y + newPos.y, m_StartPos.z + newPos.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_28 = __this->get_address_of_m_StartPos_8();
		float L_29 = L_28->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_0;
		float L_31 = L_30.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_32 = __this->get_address_of_m_StartPos_8();
		float L_33 = L_32->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_0;
		float L_35 = L_34.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_36 = __this->get_address_of_m_StartPos_8();
		float L_37 = L_36->get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_0;
		float L_39 = L_38.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_40), ((float)il2cpp_codegen_add((float)L_29, (float)L_31)), ((float)il2cpp_codegen_add((float)L_33, (float)L_35)), ((float)il2cpp_codegen_add((float)L_37, (float)L_39)), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_27, L_40, /*hidden argument*/NULL);
		// UpdateVirtualAxes(transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_41, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_mFBA91C320D783A3B497B7ED19E5DF00DC2C59F36(__this, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mC475C6728CC1D973B157FC54A39FF1C3979ABEFA (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	{
		// transform.position = m_StartPos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_m_StartPos_8();
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
		// UpdateVirtualAxes(m_StartPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_m_StartPos_8();
		Joystick_UpdateVirtualAxes_mFBA91C320D783A3B497B7ED19E5DF00DC2C59F36(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m81D77A3C7228BADE0A0F0DD94D8798CD2CF5A2B4 (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(PointerEventData data) { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDisable_m252171B4692B98F6E5C6F2A8E165ED5D124E8DFE (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, const RuntimeMethod* method)
{
	{
		// if (m_UseX)
		bool L_0 = __this->get_m_UseX_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_HorizontalVirtualAxis.Remove();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_1 = __this->get_m_HorizontalVirtualAxis_11();
		NullCheck(L_1);
		VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (m_UseY)
		bool L_2 = __this->get_m_UseY_10();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_VerticalVirtualAxis.Remove();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_3 = __this->get_m_VerticalVirtualAxis_12();
		NullCheck(L_3);
		VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m332CD5B18419E231B7E9D5248A72FA1D7A63109D (Joystick_t56ABC51716722ABB9F06ADACA11FE44B502E4300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m332CD5B18419E231B7E9D5248A72FA1D7A63109D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MovementRange = 100;
		__this->set_MovementRange_4(((int32_t)100));
		// public AxisOption axesToUse = AxisOption.OnlyVertical; // The options for the axes that the still will use
		__this->set_axesToUse_5(2);
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->set_horizontalAxisName_6(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->set_verticalAxisName_7(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_OnEnable_m62211ED3294E549C54AAD0AD588EB46666990FC9 (MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418 * __this, const RuntimeMethod* method)
{
	{
		// CheckEnableControlRig();
		MobileControlRig_CheckEnableControlRig_m9405AD022E4DDE90DF0F4D9CBF92A4D02078B43C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_Start_m24380C27FCFA9820B8D4BE992F7FEC3720D2BBE1 (MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileControlRig_Start_m24380C27FCFA9820B8D4BE992F7FEC3720D2BBE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.EventSystems.EventSystem system = GameObject.FindObjectOfType<UnityEngine.EventSystems.EventSystem>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A(/*hidden argument*/Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A_RuntimeMethod_var);
		// if (system == null)
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject o = new GameObject("EventSystem");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteral68DEF667D36D69C74A4858297D53552058192BC2, /*hidden argument*/NULL);
		// o.AddComponent<UnityEngine.EventSystems.EventSystem>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
		NullCheck(L_3);
		GameObject_AddComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m937909825E8A75FEACE3210C9BC7E336B92349AD(L_3, /*hidden argument*/GameObject_AddComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m937909825E8A75FEACE3210C9BC7E336B92349AD_RuntimeMethod_var);
		// o.AddComponent<UnityEngine.EventSystems.StandaloneInputModule>();
		NullCheck(L_3);
		GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677(L_3, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m9405AD022E4DDE90DF0F4D9CBF92A4D02078B43C (MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418 * __this, const RuntimeMethod* method)
{
	{
		// EnableControlRig(true);
		MobileControlRig_EnableControlRig_mBA84D82A6E4F60B0B2D3AA7E7F77FEFE02DDED6E(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_mBA84D82A6E4F60B0B2D3AA7E7F77FEFE02DDED6E (MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileControlRig_EnableControlRig_mBA84D82A6E4F60B0B2D3AA7E7F77FEFE02DDED6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Transform t in transform)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_000e:
		{
			// foreach (Transform t in transform)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_2);
			// t.gameObject.SetActive(enabled);
			NullCheck(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_3, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_3, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			bool L_5 = ___enabled0;
			NullCheck(L_4);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, L_5, /*hidden argument*/NULL);
		}

IL_0024:
		{
			// foreach (Transform t in transform)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
		}

IL_003e:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig__ctor_m6B2B73F40018E1A5795CD0B1FB8F89AEB965CDAE (MobileControlRig_tD348E6259B1A94E95D09BD393ADAC945B3515418 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualButton(new CrossPlatformInputManager.VirtualButton(name));
		String_t* L_0 = ___name0;
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_1 = (VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA *)il2cpp_codegen_object_new(VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m6DBB942F85E55582B325C5D952573CE5056B78B4(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m9328F88674AC82B9533679DF13293AB9B740E05A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualAxis(new CrossPlatformInputManager.VirtualAxis(name));
		String_t* L_0 = ___name0;
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_1 = (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)il2cpp_codegen_object_new(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MobileInput_GetAxis_mE316AE075BA94A7C62B3985A839475F6F38B088F (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetAxis_mE316AE075BA94A7C62B3985A839475F6F38B088F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// return m_VirtualAxes[name].GetValue;
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_4 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = VirtualAxis_get_GetValue_mE35EF2EA2B32232CA0B3310F33B9E8A4364FC387(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_m060490DB53BF2F23D72BF67E1B3D80CBAF301AFC (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonDown_m060490DB53BF2F23D72BF67E1B3D80CBAF301AFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Pressed();
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_4 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_6 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_mE619AB45867F940E5B9696588071EA3C0ED031CF(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_m4BE0DD26B379C478825F3265623063F77EC6384C (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonUp_m4BE0DD26B379C478825F3265623063F77EC6384C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Released();
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_4 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_6 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Released_mC63B27B875625CD65DC0E9956B8F6993650E8BCC(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_m8DC57D188C1494B0AD00E54550654EE618A7AE1A (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisPositive_m8DC57D188C1494B0AD00E54550654EE618A7AE1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(1f);
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_4 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_6, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_m279C577D7ACDBF75ACC5CFEB0710DF2265B174BA (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisNegative_m279C577D7ACDBF75ACC5CFEB0710DF2265B174BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(-1f);
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_4 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_6, (-1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_mE84A959667DE1094CF2CB37A9F8787DD8C8AA3CF (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisZero_mE84A959667DE1094CF2CB37A9F8787DD8C8AA3CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(0f);
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_4 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_6, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxis_mA22742A53FA38E2FEBEA1FFFE7A5B9E07062173F (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxis_mA22742A53FA38E2FEBEA1FFFE7A5B9E07062173F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m0D9A91391FDBB1F600B759E5D56653E5EE8E0023(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(value);
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_4 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_m8824A493A92DBDB2CA4F5DF9584A732D37D0D30D (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonDown_m8824A493A92DBDB2CA4F5DF9584A732D37D0D30D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_3 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_5 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m736D5FEBCC135D9EBE2B1077301461F73811C876(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_8 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_10 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m736D5FEBCC135D9EBE2B1077301461F73811C876(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_mAEEE8DD2BD384EB512F76848A9A44BC0CBE3BC27 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonUp_mAEEE8DD2BD384EB512F76848A9A44BC0CBE3BC27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_3 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_5 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_mA76B4A0A9319F7E93587B47840FF6B021F659252(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_8 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_10 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_mA76B4A0A9319F7E93587B47840FF6B021F659252(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButton_mC50BFCD2B591106CD826A30637E74C6A4BE531AE (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButton_mC50BFCD2B591106CD826A30637E74C6A4BE531AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_3 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_5 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_mDB070B042D45F554246F739C77963ABF8DE7C2CA(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC746E80C3841E7DD433A02932485B74959799977(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_8 = ((VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_10 = Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m034F9CEC183DBCB25A494FFE5EA32229D2BA6B4C_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_mDB070B042D45F554246F739C77963ABF8DE7C2CA(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MobileInput_MousePosition_m655B9F793060E92EEAFC358ED5A612124F71B234 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, const RuntimeMethod* method)
{
	{
		// return virtualMousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m988DD75209D609FA6C82BD344C741ED1CE85B0D4 (MobileInput_t219DDF915FF54DBE73004E0163F8BFCB4DA3BA44 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m1DD186B3107C12E45D9FE0C9959C163F9EE6F1B9(__this, /*hidden argument*/NULL);
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
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_m8759AA71AE0E98B8861051F9865A493538FE52D9 (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	{
		// return raw ? Input.GetAxisRaw(name) : Input.GetAxis(name);
		bool L_0 = ___raw1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name0;
		float L_2 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___name0;
		float L_4 = Input_GetAxisRaw_m35430CD9260C960DFE19F809D5410BA0DBFDE0F7(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_mA0A8AC3284535AADEB8C727B62FAB37A45FB833F (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButton(name);
		String_t* L_0 = ___name0;
		bool L_1 = Input_GetButton_m5CF1A504E539DE122B548AA3E15A7DC0918DE06A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_mE33FD1EACD7436E4DE61D18915F97FEE54DF9713 (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButtonDown(name);
		String_t* L_0 = ___name0;
		bool L_1 = Input_GetButtonDown_mBCFF01DD979D2BE061A8F47082060258F2C4458B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_m1106F799A782321322183328E258BDE2CA27679E (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButtonUp(name);
		String_t* L_0 = ___name0;
		bool L_1 = Input_GetButtonUp_m4A4FE2D2191747FE5181289A0C99FEA307E0238C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_m8E5E75EA89C2E68EAF6655D8A10168AD5CC60ED2 (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonDown_m8E5E75EA89C2E68EAF6655D8A10168AD5CC60ED2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_0, _stringLiteralAB98224D7A16DAFCAED1BC6025B0F35E8517B068, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, StandaloneInput_SetButtonDown_m8E5E75EA89C2E68EAF6655D8A10168AD5CC60ED2_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_mD50C17D111F22EFF2806C19800EFC25411F182DF (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonUp_mD50C17D111F22EFF2806C19800EFC25411F182DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_0, _stringLiteralAB98224D7A16DAFCAED1BC6025B0F35E8517B068, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, StandaloneInput_SetButtonUp_mD50C17D111F22EFF2806C19800EFC25411F182DF_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_m93BE5FFBF94EDD51FB8A1447F355087F702D19D2 (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisPositive_m93BE5FFBF94EDD51FB8A1447F355087F702D19D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_0, _stringLiteralAB98224D7A16DAFCAED1BC6025B0F35E8517B068, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, StandaloneInput_SetAxisPositive_m93BE5FFBF94EDD51FB8A1447F355087F702D19D2_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_m8A573DD3B4F7F3843CB846C8FD334FEA434BF6A1 (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisNegative_m8A573DD3B4F7F3843CB846C8FD334FEA434BF6A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_0, _stringLiteralAB98224D7A16DAFCAED1BC6025B0F35E8517B068, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, StandaloneInput_SetAxisNegative_m8A573DD3B4F7F3843CB846C8FD334FEA434BF6A1_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_m07C55C091E0947804138093A3E56212FA64C1D4F (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisZero_m07C55C091E0947804138093A3E56212FA64C1D4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_0, _stringLiteralAB98224D7A16DAFCAED1BC6025B0F35E8517B068, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, StandaloneInput_SetAxisZero_m07C55C091E0947804138093A3E56212FA64C1D4F_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_m9235E0F0BB5F8DC0B3D3F759DB2678EC8AA9CE97 (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxis_m9235E0F0BB5F8DC0B3D3F759DB2678EC8AA9CE97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_0, _stringLiteralAB98224D7A16DAFCAED1BC6025B0F35E8517B068, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, StandaloneInput_SetAxis_m9235E0F0BB5F8DC0B3D3F759DB2678EC8AA9CE97_RuntimeMethod_var);
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StandaloneInput_MousePosition_m7D158ACA958E8C1101AFF4B3282E12B1A6EF7C82 (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, const RuntimeMethod* method)
{
	{
		// return Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m08DA2F07EF8A6F7CB270D89ADAB244715BCB4D0D (StandaloneInput_t9BFD53669697FC88D0D237110D8D1DF76400AFEB * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m1DD186B3107C12E45D9FE0C9959C163F9EE6F1B9(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnEnable_mC700FE8904F578419643E75395BE99DA39F88A63 (TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltInput_OnEnable_mC700FE8904F578419643E75395BE99DA39F88A63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mapping.type == AxisMapping.MappingType.NamedAxis)
		AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E * L_0 = __this->get_mapping_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_0();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_SteerAxis = new CrossPlatformInputManager.VirtualAxis(mapping.axisName);
		AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E * L_2 = __this->get_mapping_4();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_axisName_1();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_4 = (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)il2cpp_codegen_object_new(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_SteerAxis_8(L_4);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_SteerAxis);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_5 = __this->get_m_SteerAxis_8();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720(L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_Update_m7E40FC0C58A61EC874C2BCE505D19456C5724D1F (TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltInput_Update_m7E40FC0C58A61EC874C2BCE505D19456C5724D1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float angle = 0;
		V_0 = (0.0f);
		// if (Input.acceleration != Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Input_get_acceleration_m053AF82D2844276A2E896A87EB70F6F4ABBBCF7B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		// switch (tiltAroundAxis)
		int32_t L_3 = __this->get_tiltAroundAxis_5();
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0079;
	}

IL_0027:
	{
		// angle = Mathf.Atan2(Input.acceleration.x, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Input_get_acceleration_m053AF82D2844276A2E896A87EB70F6F4ABBBCF7B(/*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Input_get_acceleration_m053AF82D2844276A2E896A87EB70F6F4ABBBCF7B(/*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->get_centreAngleOffset_7();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)(57.29578f))), (float)L_11));
		// break;
		goto IL_0079;
	}

IL_0051:
	{
		// angle = Mathf.Atan2(Input.acceleration.z, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Input_get_acceleration_m053AF82D2844276A2E896A87EB70F6F4ABBBCF7B(/*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Input_get_acceleration_m053AF82D2844276A2E896A87EB70F6F4ABBBCF7B(/*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->get_centreAngleOffset_7();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(57.29578f))), (float)L_17));
	}

IL_0079:
	{
		// float axisValue = Mathf.InverseLerp(-fullTiltAngle, fullTiltAngle, angle)*2 - 1;
		float L_18 = __this->get_fullTiltAngle_6();
		float L_19 = __this->get_fullTiltAngle_6();
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_21 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31(((-L_18)), L_19, L_20, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f)));
		// switch (mapping.type)
		AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E * L_22 = __this->get_mapping_4();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_type_0();
		V_3 = L_23;
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00e5;
			}
		}
	}
	{
		return;
	}

IL_00bc:
	{
		// m_SteerAxis.Update(axisValue);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_25 = __this->get_m_SteerAxis_8();
		float L_26 = V_1;
		NullCheck(L_25);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_25, L_26, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionX(axisValue*Screen.width);
		float L_27 = V_1;
		int32_t L_28 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m61D906BA46E06A613FC8E46A5668951F61AF1F61(((float)il2cpp_codegen_multiply((float)L_27, (float)(((float)((float)L_28))))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d7:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionY(axisValue*Screen.width);
		float L_29 = V_1;
		int32_t L_30 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m5B4D33BFD1D491E18DA9B97FDC127859B2B1A0C1(((float)il2cpp_codegen_multiply((float)L_29, (float)(((float)((float)L_30))))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e5:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionZ(axisValue*Screen.width);
		float L_31 = V_1;
		int32_t L_32 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_mD177608F5B9E3DEB620ED1D624496D76B40B11AA(((float)il2cpp_codegen_multiply((float)L_31, (float)(((float)((float)L_32))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnDisable_m7DD7EE4B2382B689FC34AD59EA82CCF33294FD1D (TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53 * __this, const RuntimeMethod* method)
{
	{
		// m_SteerAxis.Remove();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_0 = __this->get_m_SteerAxis_8();
		NullCheck(L_0);
		VirtualAxis_Remove_m42F92D74A17F78601ED7C726FE6AB2757C570B28(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput__ctor_m43E65D305FB93863728A8873EC5EB7B566D8D490 (TiltInput_t51C59191ECAB38039EF5E5E19B0F04983EAC3D53 * __this, const RuntimeMethod* method)
{
	{
		// public float fullTiltAngle = 25;
		__this->set_fullTiltAngle_6((25.0f));
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput_AxisMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisMapping__ctor_m1098FD3C9ECF6240F79246369708790E406B8A78 (AxisMapping_t9B9CB140F322262AC1E126846B4BD1C92586923E * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnEnable_m5D26A192E7075A00277A02EEC53E9C166078EE7C (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, const RuntimeMethod* method)
{
	{
		// CreateVirtualAxes();
		TouchPad_CreateVirtualAxes_m9D15A5DE4C7A00B54C146EC36D98D6A0C80B8609(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Start_mA4222D895E69B4F61852765584B35C0F8D98099C (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_Start_mA4222D895E69B4F61852765584B35C0F8D98099C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Image = GetComponent<Image>();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_mE35687928423C6384AFA5449298B1140012832A8(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_mE35687928423C6384AFA5449298B1140012832A8_RuntimeMethod_var);
		__this->set_m_Image_21(L_0);
		// m_Center = m_Image.transform.position;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = __this->get_m_Image_21();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m9D15A5DE4C7A00B54C146EC36D98D6A0C80B8609 (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_CreateVirtualAxes_m9D15A5DE4C7A00B54C146EC36D98D6A0C80B8609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * G_B2_0 = NULL;
	TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * G_B3_1 = NULL;
	TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * G_B5_0 = NULL;
	TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->get_axesToUse_4();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_13((bool)G_B3_0);
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->get_axesToUse_4();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_4();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_14((bool)G_B6_0);
		// if (m_UseX)
		bool L_4 = __this->get_m_UseX_13();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->get_horizontalAxisName_6();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)il2cpp_codegen_object_new(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_15(L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_7 = __this->get_m_HorizontalVirtualAxis_15();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->get_m_UseY_14();
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->get_verticalAxisName_7();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_10 = (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)il2cpp_codegen_object_new(VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m757E083FB74CA4D4DB532D61709FD4939308AF73(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_16(L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_11 = __this->get_m_VerticalVirtualAxis_16();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m91709010935DB02EAE268665C32587362ABF5720(L_11, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m180C82A370D651BC4E65B14421A281AA27F69D12 (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// value = value.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___value0), /*hidden argument*/NULL);
		___value0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->get_m_UseX_13();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(value.x);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_2 = __this->get_m_HorizontalVirtualAxis_15();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		float L_4 = L_3.get_x_2();
		NullCheck(L_2);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (m_UseY)
		bool L_5 = __this->get_m_UseY_14();
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(value.y);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_6 = __this->get_m_VerticalVirtualAxis_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___value0;
		float L_8 = L_7.get_y_3();
		NullCheck(L_6);
		VirtualAxis_Update_m8115FCF31CBD45EA60A039BCE32D2F968A5CF07B(L_6, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerDown_mF07C1E0A747C3076DB1569BE07BF328CA3F6F6AB (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnPointerDown_mF07C1E0A747C3076DB1569BE07BF328CA3F6F6AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Dragging = true;
		__this->set_m_Dragging_17((bool)1);
		// m_Id = data.pointerId;
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_pointerId_m2E7B8CD923977019C2697ED57519F14E4F2ADB3F(L_0, /*hidden argument*/NULL);
		__this->set_m_Id_18(L_1);
		// if (controlStyle != ControlStyle.Absolute )
		int32_t L_2 = __this->get_controlStyle_5();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Center = data.position;
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_4, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Update_m7CB85940E39EC3B27A780405D14D5C8D62FE1A67 (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_Update_m7CB85940E39EC3B27A780405D14D5C8D62FE1A67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!m_Dragging)
		bool L_0 = __this->get_m_Dragging_17();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Input.touchCount >= m_Id + 1 && m_Id != -1)
		int32_t L_1 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_Id_18();
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_3 = __this->get_m_Id_18();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (controlStyle == ControlStyle.Swipe)
		int32_t L_4 = __this->get_controlStyle_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		// m_Center = m_PreviousTouchPos;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = __this->get_m_PreviousTouchPos_19();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_5, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_6);
		// m_PreviousTouchPos = Input.touches[m_Id].position;
		TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571* L_7 = Input_get_touches_m605F63342DC3C26E74843F9CE2F4C191C9151B12(/*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_Id_18();
		NullCheck(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		__this->set_m_PreviousTouchPos_19(L_9);
	}

IL_005c:
	{
		// Vector2 pointerDelta = new Vector2(Input.touches[m_Id].position.x - m_Center.x , Input.touches[m_Id].position.y - m_Center.y).normalized;
		TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571* L_10 = Input_get_touches_m605F63342DC3C26E74843F9CE2F4C191C9151B12(/*hidden argument*/NULL);
		int32_t L_11 = __this->get_m_Id_18();
		NullCheck(L_10);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_14 = __this->get_address_of_m_Center_20();
		float L_15 = L_14->get_x_2();
		TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571* L_16 = Input_get_touches_m605F63342DC3C26E74843F9CE2F4C191C9151B12(/*hidden argument*/NULL);
		int32_t L_17 = __this->get_m_Id_18();
		NullCheck(L_16);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_20 = __this->get_address_of_m_Center_20();
		float L_21 = L_20->get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_22), ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), ((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), /*hidden argument*/NULL);
		V_1 = L_22;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_23;
		// pointerDelta.x *= Xsensitivity;
		float* L_24 = (&V_0)->get_address_of_x_0();
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = __this->get_Xsensitivity_8();
		*((float*)L_25) = (float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27));
		// pointerDelta.y *= Ysensitivity;
		float* L_28 = (&V_0)->get_address_of_y_1();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = __this->get_Ysensitivity_9();
		*((float*)L_29) = (float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31));
		// UpdateVirtualAxes(new Vector3(pointerDelta.x, pointerDelta.y, 0));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = V_0;
		float L_33 = L_32.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = V_0;
		float L_35 = L_34.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_36), L_33, L_35, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m180C82A370D651BC4E65B14421A281AA27F69D12(__this, L_36, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerUp_mAB17D2EAABB83955F29E4DB701A19C731F41D36F (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnPointerUp_mAB17D2EAABB83955F29E4DB701A19C731F41D36F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Dragging = false;
		__this->set_m_Dragging_17((bool)0);
		// m_Id = -1;
		__this->set_m_Id_18((-1));
		// UpdateVirtualAxes(Vector3.zero);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m180C82A370D651BC4E65B14421A281AA27F69D12(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnDisable_m8006C26AE5AF35F59B479F9CF95AB80598EF0172 (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnDisable_m8006C26AE5AF35F59B479F9CF95AB80598EF0172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CrossPlatformInputManager.AxisExists(horizontalAxisName))
		String_t* L_0 = __this->get_horizontalAxisName_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m2555F1EE8C9454409BCB25D8E11BD5C92B1ABD6F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(horizontalAxisName);
		String_t* L_2 = __this->get_horizontalAxisName_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (CrossPlatformInputManager.AxisExists(verticalAxisName))
		String_t* L_3 = __this->get_verticalAxisName_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		bool L_4 = CrossPlatformInputManager_AxisExists_m2555F1EE8C9454409BCB25D8E11BD5C92B1ABD6F(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(verticalAxisName);
		String_t* L_5 = __this->get_verticalAxisName_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t538BC5CB3009F635C0D8B708E339CE82E4C6152E_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_mB1098EE4850318B6DAA18DD9FB1A0A8D83ED6786(L_5, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad__ctor_m79B5115AD776BA462A7C580C2F5BEFD4CE5A2F52 (TouchPad_tAD361C39C471A260BFA37D565706AADF3528BC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad__ctor_m79B5115AD776BA462A7C580C2F5BEFD4CE5A2F52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->set_horizontalAxisName_6(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->set_verticalAxisName_7(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5);
		// public float Xsensitivity = 1f;
		__this->set_Xsensitivity_8((1.0f));
		// public float Ysensitivity = 1f;
		__this->set_Ysensitivity_9((1.0f));
		// int m_Id = -1;
		__this->set_m_Id_18((-1));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3073C72F081E04E1C0A03A7CF67BDAF196358314 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m0B1E0317ACA3E372D9EDE15104BD1E91AE23AB97 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_AxisExists_m0B1E0317ACA3E372D9EDE15104BD1E91AE23AB97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m90030223A969B2C1D9D89CE1E6120138C11C99E3 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_ButtonExists_m90030223A969B2C1D9D89CE1E6120138C11C99E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_mBFDFA749ADE0D71301A116F3EFEA838509ED3858 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualAxis_mBFDFA749ADE0D71301A116F3EFEA838509ED3858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = __this->get_m_VirtualAxes_1();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m9765BA7FB19530B2CFBD719EBED55AE776D0281B(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m9765BA7FB19530B2CFBD719EBED55AE776D0281B(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral1B7D4D8BDD2801B7F33B04B9B6937978FB7E75C6, L_5, _stringLiteral048803BFDF77BE1B67FFF11B00E027D28F715E74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_7 = __this->get_m_VirtualAxes_1();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m9765BA7FB19530B2CFBD719EBED55AE776D0281B(L_8, /*hidden argument*/NULL);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m4B4D8B22E09ABBDC7B0F403018AC64AA1AA94ED3(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m4B4D8B22E09ABBDC7B0F403018AC64AA1AA94ED3_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_mA99391FED2F2655BC0835D0C3E9F0D81CC65895A(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m9765BA7FB19530B2CFBD719EBED55AE776D0281B(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_13, L_15, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_mB98A166A0B2DC0CB5E8E9D93D5FAD96E85D64CED (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualButton_mB98A166A0B2DC0CB5E8E9D93D5FAD96E85D64CED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = __this->get_m_VirtualButtons_2();
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m21CF24E17EEE67F1C2DFBA7FE62CCCFAE1E3C1CA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m21CF24E17EEE67F1C2DFBA7FE62CCCFAE1E3C1CA(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralBC48007F419FB366764A3F684CEAC85680E6A914, L_5, _stringLiteral048803BFDF77BE1B67FFF11B00E027D28F715E74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_7 = __this->get_m_VirtualButtons_2();
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m21CF24E17EEE67F1C2DFBA7FE62CCCFAE1E3C1CA(L_8, /*hidden argument*/NULL);
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_m66D6CA46FAFECDEDDD6C552DFF539E703FB57B0A(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m66D6CA46FAFECDEDDD6C552DFF539E703FB57B0A_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m5930428BD9EC8703482B0927C884705A9A7FCD5C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualButton_tD2E44C8028D8B58E3AA9D65D2F45CF8518022EEA * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m21CF24E17EEE67F1C2DFBA7FE62CCCFAE1E3C1CA(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_13, L_15, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mE2924D6992E3EEFEDA1AEF811153DBADDC3452A8 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualAxis_mE2924D6992E3EEFEDA1AEF811153DBADDC3452A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m9D7482B3D27794500FB33065A6EB0200193A9639(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m9D7482B3D27794500FB33065A6EB0200193A9639_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_m63841A01BFA1821938092302A45CA8B2E7FC82BE (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualButton_m63841A01BFA1821938092302A45CA8B2E7FC82BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m845068095FC7B21433BBA23E31039C2E62AA1B65_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_3 = __this->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m280FAFFEFA24FD4ACF7DB87DB1B208D873BE88DC(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m280FAFFEFA24FD4ACF7DB87DB1B208D873BE88DC_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager_VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * VirtualInput_VirtualAxisReference_mBF50EC42C985094F411FAB3494BCBC1FE916827C (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_VirtualAxisReference_mBF50EC42C985094F411FAB3494BCBC1FE916827C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6F88D3C726ED004B64A95B874514EB34DC281599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B *)NULL;
	}

IL_0010:
	{
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_tE5A7DABB0F0E4877C97C3C45615CCDE552A02A1B * L_5 = Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m947D261FFF032512CA47625B060425A053A3ABF5_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m0F52B866977E941510EB9AF88585C390FF123529 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___f0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD(__this, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3073C72F081E04E1C0A03A7CF67BDAF196358314(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_mDF8ECB3534F832D20B5A8DF9F886CD9DC563E09F (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		float L_2 = ___f0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3073C72F081E04E1C0A03A7CF67BDAF196358314(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m5EB52471A45F3F64B6ED80B0D6E44267246358D1 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = VirtualInput_get_virtualMousePosition_m897C50683722D1C3DF4FA9801524E7BF310B24BD(__this, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		float L_4 = ___f0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3073C72F081E04E1C0A03A7CF67BDAF196358314(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m1DD186B3107C12E45D9FE0C9959C163F9EE6F1B9 (VirtualInput_tCCB9F78E94F5E3C6E5162E7AA746292D827BAF39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput__ctor_m1DD186B3107C12E45D9FE0C9959C163F9EE6F1B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 * L_0 = (Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3 *)il2cpp_codegen_object_new(Dictionary_2_t9CB40DA291556AD6A0449B52E9BB70FCA14CC1B3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m600A45698661FFAB823F245812FC9D7C56FF2624(L_0, /*hidden argument*/Dictionary_2__ctor_m600A45698661FFAB823F245812FC9D7C56FF2624_RuntimeMethod_var);
		__this->set_m_VirtualAxes_1(L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E * L_1 = (Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E *)il2cpp_codegen_object_new(Dictionary_2_t687EE995160D28585A45E2513C0F20E2CBE1626E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF51080BFED2E908F713E9A1B43DE1D8166A47FBD(L_1, /*hidden argument*/Dictionary_2__ctor_mF51080BFED2E908F713E9A1B43DE1D8166A47FBD_RuntimeMethod_var);
		__this->set_m_VirtualButtons_2(L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_2, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_m_AlwaysUseVirtual_3(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
