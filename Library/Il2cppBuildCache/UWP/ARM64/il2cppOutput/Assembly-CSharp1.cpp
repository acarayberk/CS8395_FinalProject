#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_t4820C8F8192DA491FDCD59B55F9D9CDEFE6866E4;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t7628C79979ECE33C758FA5C52526761CA20F2167;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// MRTK.Tutorials.GettingStarted.PartAssemblyController[]
struct PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Microsoft.Azure.SpatialAnchors.AnchorLocateCriteria
struct AnchorLocateCriteria_tC93E8C009F30E93B3D02EBF37AA794A02C8CE9F4;
// AnchorModuleScript
struct AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t740A2CF09372CCB63CA42B4D57BFA21529B321FE;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher
struct CloudSpatialAnchorWatcher_t8F8567E2A8E37D9FB2A53AF9C9F9012201958BB8;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// MRTK.Tutorials.AzureSpatialAnchors.DebugWindow
struct DebugWindow_tB19C2A730DE1A4857642DAFC0FD13BCAC9ED372F;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// MRTK.Tutorials.GettingStarted.DirectionalIndicatorController
struct DirectionalIndicatorController_t243D1BAD97AEFF6B9C785EBAD5DCA6618C965637;
// MRTK.Tutorials.AzureSpatialAnchors.DisableDiagnosticsSystem
struct DisableDiagnosticsSystem_t3D0D4049C1A224689A18F6764A3DD3E5A6D448A3;
// MRTK.Tutorials.GettingStarted.ExplodeViewController
struct ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MRTK.Tutorials.MultiUserCapabilities.MonitorPlaneParent
struct MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE;
// MRTK.Tutorials.MultiUserCapabilities.PhotonUser
struct PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042;
// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B;
// MRTK.Tutorials.GettingStarted.PlacementHintsController
struct PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// MRTK.Tutorials.MultiUserCapabilities.PunPlacementHintsController
struct PunPlacementHintsController_tA56B1FBA4CD01C0FC9E8E2B5ECE5F7A3156C0018;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// MRTK.Tutorials.MultiUserCapabilities.SharingModuleScript
struct SharingModuleScript_t9E93E8CF85ECF587C35C61A253029930DA3521AA;
// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager
struct SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// MRTK.Tutorials.MultiUserCapabilities.TableAnchor
struct TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58;
// MRTK.Tutorials.MultiUserCapabilities.TableAnchorAsParent
struct TableAnchorAsParent_t43802A81F5D2EA220B4B941D8CBB5C90BB99FDB2;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner
struct ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// AnchorModuleScript/AnchorLocatedDelegate
struct AnchorLocatedDelegate_tF76FBC9591FFCD46DC71573664482B00FAFBAAE7;
// AnchorModuleScript/CreateAnchorDelegate
struct CreateAnchorDelegate_tBC40AF3C6B885AB2333347D3526890D5F66E2117;
// AnchorModuleScript/CreateLocalAnchorDelegate
struct CreateLocalAnchorDelegate_t11062A0E1175F79B1FFBD909133AC033E07A3292;
// AnchorModuleScript/DeleteASAAnchorDelegate
struct DeleteASAAnchorDelegate_tFF946318B03F6D73A752EDE75EFFAC286DECEFA8;
// AnchorModuleScript/EndASASessionDelegate
struct EndASASessionDelegate_tC46479E86C1DBECE7D35F314534C9F5EDE1EB994;
// AnchorModuleScript/FindAnchorDelegate
struct FindAnchorDelegate_t56B2B4D1EA095F17A9E5CC974E46AB7B6557687E;
// AnchorModuleScript/RemoveLocalAnchorDelegate
struct RemoveLocalAnchorDelegate_tF1DC8BDDB784C0B9D780ADBC4D8BC03636863D77;
// AnchorModuleScript/StartASASessionDelegate
struct StartASASessionDelegate_tA3390EE7BC3493DA762318BB70A8C168D38AD72B;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234;
// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2DD4688ED6B1B14D93CB0302D8D428754CE57E89;
IL2CPP_EXTERN_C String_t* _stringLiteral42A81C7648296D8C125770F34A698F0B875DE341;
IL2CPP_EXTERN_C String_t* _stringLiteral57956D78F237A2BA6CB114C514B95EFEE1AB1FAC;
IL2CPP_EXTERN_C String_t* _stringLiteral7E1C30D1FCB1028FDB6C90C051AB92B08B179FBB;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD;
IL2CPP_EXTERN_C String_t* _stringLiteralC67717E1019C9EB8951B04893EABB384C8E96B7A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D040E3E6474BF74ACC71F4E380EF245C8178AD;
IL2CPP_EXTERN_C String_t* _stringLiteralCD670DDF52D848D4D6B6BF52AA02C81C700EEAC2;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m95140C4F2B2F1379BA960CA9DDF7E4BBF867EEA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A_m5ED4BB8AF17AC4ECD439BBC517691E42B583BE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96_mE2AC261BFA404D87D43F2E2009164B74E158BD67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18_m841A193BE6EC6353C4085D87E886E76B38AA8E45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugWindow_HandleLog_m979E071474C595A8B1848C110C45F0B946EE5BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF72EB90F5A2301B23240CBB789CBA4F317421D88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m35D71A8A79F545B713EF6E24F15B9D6654408F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9756C2866F1DFEC79B1A3C953F57647890B4AB5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042_mF8384376B34D6CAEDFB976C9ED3E73C51E96CD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5EE30B0C859E3ADAF95D722B3400D79217295937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m40198C5063A7F93D81D837F7EF845E891D3554E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72E5788DCB0BA71D5C75CC306AE9754ACADFA2D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE_mB370EA26C93CDDA46AA06C507A87D20CD31020D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PunPlacementHintsController_OnTogglePlacementHintsHandler_m996C6D94D9756C75BB948C5A0BE0FADDBE878A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m9CFCADBFA8E2719A5D2EAED052816115B65083D4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4  : public RuntimeObject
{
	// System.Int32 MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>4__this
	PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* ___U3CU3E4__this_2;
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<trans>5__1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtransU3E5__1_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>
struct Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320  : public MulticastDelegate_t
{
};

// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234  : public MulticastDelegate_t
{
};

// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnchorModuleScript
struct AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AnchorModuleScript::publicSharingPin
	String_t* ___publicSharingPin_4;
	// System.String AnchorModuleScript::currentAzureAnchorID
	String_t* ___currentAzureAnchorID_5;
	// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager AnchorModuleScript::cloudManager
	SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* ___cloudManager_6;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor AnchorModuleScript::currentCloudAnchor
	CloudSpatialAnchor_t740A2CF09372CCB63CA42B4D57BFA21529B321FE* ___currentCloudAnchor_7;
	// Microsoft.Azure.SpatialAnchors.AnchorLocateCriteria AnchorModuleScript::anchorLocateCriteria
	AnchorLocateCriteria_tC93E8C009F30E93B3D02EBF37AA794A02C8CE9F4* ___anchorLocateCriteria_8;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher AnchorModuleScript::currentWatcher
	CloudSpatialAnchorWatcher_t8F8567E2A8E37D9FB2A53AF9C9F9012201958BB8* ___currentWatcher_9;
	// System.Collections.Generic.Queue`1<System.Action> AnchorModuleScript::dispatchQueue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___dispatchQueue_10;
	// AnchorModuleScript/StartASASessionDelegate AnchorModuleScript::OnStartASASession
	StartASASessionDelegate_tA3390EE7BC3493DA762318BB70A8C168D38AD72B* ___OnStartASASession_11;
	// AnchorModuleScript/EndASASessionDelegate AnchorModuleScript::OnEndASASession
	EndASASessionDelegate_tC46479E86C1DBECE7D35F314534C9F5EDE1EB994* ___OnEndASASession_12;
	// AnchorModuleScript/CreateAnchorDelegate AnchorModuleScript::OnCreateAnchorStarted
	CreateAnchorDelegate_tBC40AF3C6B885AB2333347D3526890D5F66E2117* ___OnCreateAnchorStarted_13;
	// AnchorModuleScript/CreateAnchorDelegate AnchorModuleScript::OnCreateAnchorSucceeded
	CreateAnchorDelegate_tBC40AF3C6B885AB2333347D3526890D5F66E2117* ___OnCreateAnchorSucceeded_14;
	// AnchorModuleScript/CreateAnchorDelegate AnchorModuleScript::OnCreateAnchorFailed
	CreateAnchorDelegate_tBC40AF3C6B885AB2333347D3526890D5F66E2117* ___OnCreateAnchorFailed_15;
	// AnchorModuleScript/CreateLocalAnchorDelegate AnchorModuleScript::OnCreateLocalAnchor
	CreateLocalAnchorDelegate_t11062A0E1175F79B1FFBD909133AC033E07A3292* ___OnCreateLocalAnchor_16;
	// AnchorModuleScript/RemoveLocalAnchorDelegate AnchorModuleScript::OnRemoveLocalAnchor
	RemoveLocalAnchorDelegate_tF1DC8BDDB784C0B9D780ADBC4D8BC03636863D77* ___OnRemoveLocalAnchor_17;
	// AnchorModuleScript/FindAnchorDelegate AnchorModuleScript::OnFindASAAnchor
	FindAnchorDelegate_t56B2B4D1EA095F17A9E5CC974E46AB7B6557687E* ___OnFindASAAnchor_18;
	// AnchorModuleScript/AnchorLocatedDelegate AnchorModuleScript::OnASAAnchorLocated
	AnchorLocatedDelegate_tF76FBC9591FFCD46DC71573664482B00FAFBAAE7* ___OnASAAnchorLocated_19;
	// AnchorModuleScript/DeleteASAAnchorDelegate AnchorModuleScript::OnDeleteASAAnchor
	DeleteASAAnchorDelegate_tFF946318B03F6D73A752EDE75EFFAC286DECEFA8* ___OnDeleteASAAnchor_20;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler
struct BaseFocusHandler_t0284328574DB62EAD1FD9D62C3F45C82DB4F6BA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::focusEnabled
	bool ___focusEnabled_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::<Focusers>k__BackingField
	List_1_t4820C8F8192DA491FDCD59B55F9D9CDEFE6866E4* ___U3CFocusersU3Ek__BackingField_5;
};

// MRTK.Tutorials.AzureSpatialAnchors.DebugWindow
struct DebugWindow_tB19C2A730DE1A4857642DAFC0FD13BCAC9ED372F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI MRTK.Tutorials.AzureSpatialAnchors.DebugWindow::debugText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___debugText_4;
	// UnityEngine.UI.ScrollRect MRTK.Tutorials.AzureSpatialAnchors.DebugWindow::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_5;
};

// MRTK.Tutorials.GettingStarted.DirectionalIndicatorController
struct DirectionalIndicatorController_t243D1BAD97AEFF6B9C785EBAD5DCA6618C965637  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MRTK.Tutorials.AzureSpatialAnchors.DisableDiagnosticsSystem
struct DisableDiagnosticsSystem_t3D0D4049C1A224689A18F6764A3DD3E5A6D448A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MRTK.Tutorials.GettingStarted.ExplodeViewController
struct ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MRTK.Tutorials.GettingStarted.ExplodeViewController::speed
	float ___speed_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MRTK.Tutorials.GettingStarted.ExplodeViewController::defaultPositions
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___defaultPositions_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MRTK.Tutorials.GettingStarted.ExplodeViewController::explodedPositions
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___explodedPositions_6;
	// System.Boolean MRTK.Tutorials.GettingStarted.ExplodeViewController::isPunEnabled
	bool ___isPunEnabled_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MRTK.Tutorials.GettingStarted.ExplodeViewController::explodedPos
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___explodedPos_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MRTK.Tutorials.GettingStarted.ExplodeViewController::startingPos
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___startingPos_9;
	// System.Boolean MRTK.Tutorials.GettingStarted.ExplodeViewController::isInDefaultPosition
	bool ___isInDefaultPosition_10;
	// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate MRTK.Tutorials.GettingStarted.ExplodeViewController::OnToggleExplodedView
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* ___OnToggleExplodedView_11;
};

// MRTK.Tutorials.MultiUserCapabilities.GenericNetworkManager
struct GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MRTK.Tutorials.MultiUserCapabilities.GenericNetworkManager::azureAnchorId
	String_t* ___azureAnchorId_5;
	// Photon.Pun.PhotonView MRTK.Tutorials.MultiUserCapabilities.GenericNetworkManager::localUser
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___localUser_6;
	// System.Boolean MRTK.Tutorials.MultiUserCapabilities.GenericNetworkManager::isConnected
	bool ___isConnected_7;
};

struct GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_StaticFields
{
	// MRTK.Tutorials.MultiUserCapabilities.GenericNetworkManager MRTK.Tutorials.MultiUserCapabilities.GenericNetworkManager::Instance
	GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788* ___Instance_4;
	// System.Action MRTK.Tutorials.MultiUserCapabilities.GenericNetworkManager::OnReadyToStartNetwork
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnReadyToStartNetwork_8;
};

// MRTK.Tutorials.MultiUserCapabilities.MonitorPlaneParent
struct MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_StaticFields
{
	// UnityEngine.GameObject MRTK.Tutorials.MultiUserCapabilities.MonitorPlaneParent::monitorPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___monitorPlane_4;
	// UnityEngine.GameObject MRTK.Tutorials.MultiUserCapabilities.MonitorPlaneParent::sphereChild
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sphereChild_5;
};

// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pvCache_4;
};

// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::locationToPlace
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___locationToPlace_4;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPunEnabled
	bool ___isPunEnabled_7;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::shouldCheckPlacement
	bool ___shouldCheckPlacement_8;
	// UnityEngine.AudioSource MRTK.Tutorials.GettingStarted.PartAssemblyController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_9;
	// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner MRTK.Tutorials.GettingStarted.PartAssemblyController::toolTipSpawner
	ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18* ___toolTipSpawner_10;
	// System.Collections.Generic.List`1<UnityEngine.Collider> MRTK.Tutorials.GettingStarted.PartAssemblyController::colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders_11;
	// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController> MRTK.Tutorials.GettingStarted.PartAssemblyController::partAssemblyControllers
	List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* ___partAssemblyControllers_12;
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::originalParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___originalParent_13;
	// UnityEngine.Vector3 MRTK.Tutorials.GettingStarted.PartAssemblyController::originalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalPosition_14;
	// UnityEngine.Quaternion MRTK.Tutorials.GettingStarted.PartAssemblyController::originalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___originalRotation_15;
	// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::checkPlacementCoroutine
	RuntimeObject* ___checkPlacementCoroutine_16;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasAudioSource
	bool ___hasAudioSource_17;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasToolTip
	bool ___hasToolTip_18;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPlaced
	bool ___isPlaced_19;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isResetting
	bool ___isResetting_20;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnResetPlacement
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* ___OnResetPlacement_21;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnSetPlacement
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* ___OnSetPlacement_22;
};

// MRTK.Tutorials.MultiUserCapabilities.PhotonUser
struct PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Color> MRTK.Tutorials.MultiUserCapabilities.PhotonUser::colorList
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___colorList_4;
	// UnityEngine.GameObject MRTK.Tutorials.MultiUserCapabilities.PhotonUser::temp_user_name
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___temp_user_name_5;
	// System.Int32 MRTK.Tutorials.MultiUserCapabilities.PhotonUser::user_num
	int32_t ___user_num_6;
	// Photon.Pun.PhotonView MRTK.Tutorials.MultiUserCapabilities.PhotonUser::pv
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pv_7;
	// System.String MRTK.Tutorials.MultiUserCapabilities.PhotonUser::username
	String_t* ___username_8;
};

// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B* ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181* ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t7628C79979ECE33C758FA5C52526761CA20F2167* ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F* ___OnControllerChangeCallbacks_31;
};

// MRTK.Tutorials.GettingStarted.PlacementHintsController
struct PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MRTK.Tutorials.GettingStarted.PlacementHintsController::activeAtStart
	bool ___activeAtStart_4;
	// UnityEngine.GameObject[] MRTK.Tutorials.GettingStarted.PlacementHintsController::placementHints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___placementHints_5;
	// System.Boolean MRTK.Tutorials.GettingStarted.PlacementHintsController::isPunEnabled
	bool ___isPunEnabled_6;
	// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate MRTK.Tutorials.GettingStarted.PlacementHintsController::OnTogglePlacementHints
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* ___OnTogglePlacementHints_7;
};

// MRTK.Tutorials.MultiUserCapabilities.SharingModuleScript
struct SharingModuleScript_t9E93E8CF85ECF587C35C61A253029930DA3521AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AnchorModuleScript MRTK.Tutorials.MultiUserCapabilities.SharingModuleScript::anchorModuleScript
	AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A* ___anchorModuleScript_4;
};

// MRTK.Tutorials.MultiUserCapabilities.TableAnchor
struct TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields
{
	// MRTK.Tutorials.MultiUserCapabilities.TableAnchor MRTK.Tutorials.MultiUserCapabilities.TableAnchor::Instance
	TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* ___Instance_4;
};

// MRTK.Tutorials.MultiUserCapabilities.TableAnchorAsParent
struct TableAnchorAsParent_t43802A81F5D2EA220B4B941D8CBB5C90BB99FDB2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner
struct PrefabSpawner_t8153EC1384263C64AFCAF5092A99EB674549A2CB  : public BaseFocusHandler_t0284328574DB62EAD1FD9D62C3F45C82DB4F6BA3
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_6;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::tooltipToggleAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___tooltipToggleAction_7;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/AppearType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::appearType
	int32_t ___appearType_8;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/VanishType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::vanishType
	int32_t ___vanishType_9;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/RemainType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::remainType
	int32_t ___remainType_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::appearDelay
	float ___appearDelay_11;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::vanishDelay
	float ___vanishDelay_12;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::lifetime
	float ___lifetime_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::keepWorldRotation
	bool ___keepWorldRotation_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::focusEnterTime
	float ___focusEnterTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::focusExitTime
	float ___focusExitTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::tappedTime
	float ___tappedTime_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::spawnable
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnable_18;
};

// MRTK.Tutorials.MultiUserCapabilities.PunPlacementHintsController
struct PunPlacementHintsController_tA56B1FBA4CD01C0FC9E8E2B5ECE5F7A3156C0018  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// MRTK.Tutorials.GettingStarted.PlacementHintsController MRTK.Tutorials.MultiUserCapabilities.PunPlacementHintsController::placementHintsController
	PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* ___placementHintsController_5;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner
struct ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18  : public PrefabSpawner_t8153EC1384263C64AFCAF5092A99EB674549A2CB
{
	// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::settingsMode
	int32_t ___settingsMode_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showBackground
	bool ___showBackground_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showOutline
	bool ___showOutline_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showConnector
	bool ___showConnector_22;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorFollowType Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::followType
	int32_t ___followType_23;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotMode Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotMode
	int32_t ___pivotMode_24;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotDirection Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDirection
	int32_t ___pivotDirection_25;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorOrientType Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDirectionOrient
	int32_t ___pivotDirectionOrient_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::manualPivotDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___manualPivotDirection_27;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::manualPivotLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___manualPivotLocalPosition_28;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDistance
	float ___pivotDistance_29;
	// System.String Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::toolTipText
	String_t* ___toolTipText_30;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::anchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___anchor_31;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MRTK.Tutorials.GettingStarted.PartAssemblyController[]
struct PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267  : public RuntimeArray
{
	ALIGN_FIELD (8) PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* m_Items[1];

	inline PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<MRTK.Tutorials.GettingStarted.PlacementHintsController>()
inline PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* Component_GetComponent_TisPlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96_mE2AC261BFA404D87D43F2E2009164B74E158BD67 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate__ctor_m6483805F57E4800C0D83C9D905A5C2CE71432B84 (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::add_OnTogglePlacementHints(MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_add_OnTogglePlacementHints_m4BE517DA85E4BC9F742A80F7863D428A2F4DC931 (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* ___value0, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::set_IsPunEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementHintsController_set_IsPunEnabled_m1364F13B088427C7258B0AED579757B594B74A0E_inline (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, bool ___value0, const RuntimeMethod* method) ;
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Pun.RpcTarget,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Toggle_m5285332F7C240D90986D60F15827EC5718A9FE7D (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AnchorModuleScript>()
inline AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A* Component_GetComponent_TisAnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A_m5ED4BB8AF17AC4ECD439BBC517691E42B583BE2B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MRTK.Tutorials.MultiUserCapabilities.PhotonUser>()
inline PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* GameObject_GetComponent_TisPhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042_mF8384376B34D6CAEDFB976C9ED3E73C51E96CD6E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.PhotonUser::ShareAzureAnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonUser_ShareAzureAnchorId_m910369151F19B41C34ED5ACAD2AEDA28874CA43A (PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.MultiUserCapabilities.PhotonUser::PunRPC_SetNickName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonUser_PunRPC_SetNickName_m87B5FA50CD2E706F57FE08630654B47E6A23FE5D (PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* __this, String_t* ___nName0, const RuntimeMethod* method) ;
// System.Void AnchorModuleScript::FindAzureAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorModuleScript_FindAzureAnchor_m196572032AD1ABFDC99646EB5EC5CADE8B2E33F8 (AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_inline (ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Toggle_mC19D29CA70BFBE320678DC27565EED8AE3775011 (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner>()
inline ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18* Component_GetComponent_TisToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18_m841A193BE6EC6353C4085D87E886E76B38AA8E45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(T)
inline void List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::.ctor()
inline void List_1__ctor_m72E5788DCB0BA71D5C75CC306AE9754ACADFA2D3 (List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<MRTK.Tutorials.GettingStarted.PartAssemblyController>()
inline PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* Object_FindObjectsOfType_TisPartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE_mB370EA26C93CDDA46AA06C507A87D20CD31020D0 (const RuntimeMethod* method)
{
	return ((  PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::Add(T)
inline void List_1_Add_m5EE30B0C859E3ADAF95D722B3400D79217295937_inline (List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* __this, PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE*, PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::CheckPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyController_CheckPlacement_mCD2226DB9D0976415A580C7B4D161A5B0C087D96 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_inline (PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Set_m78C7CE4286BD0961DA1318A24C6EA8692CAF18CF (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Collider>::GetEnumerator()
inline Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::Dispose()
inline void Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::get_Current()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_inline (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::MoveNext()
inline bool Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1 (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::GetEnumerator()
inline Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80 List_1_GetEnumerator_m40198C5063A7F93D81D837F7EF845E891D3554E1 (List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80 (*) (List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::Dispose()
inline void Enumerator_Dispose_mF72EB90F5A2301B23240CBB789CBA4F317421D88 (Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::get_Current()
inline PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* Enumerator_get_Current_m9756C2866F1DFEC79B1A3C953F57647890B4AB5F_inline (Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80* __this, const RuntimeMethod* method)
{
	return ((  PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* (*) (Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Reset_m3F1C2A8DEC7F886D75DB1B37F406AA7932399AB5 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::MoveNext()
inline bool Enumerator_MoveNext_m35D71A8A79F545B713EF6E24F15B9D6654408F4F (Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25__ctor_mD99D1F68A1B42D45D5E0303134EB8CDEF442F9B0 (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::SetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_SetPlacement_m3753B2A0342CD8A54914FFAD1B38D887F1C504C9 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_inline (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m95140C4F2B2F1379BA960CA9DDF7E4BBF867EEA0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_m9185431F0B315A8CE2AA6D7B8DA764BDA350918B (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m44CDFD932D3A105FD92D6DEC0592F1E5285631C6 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_ForceUpdateCanvases_m29B1B008CA6C4A3CF623A0A86ACE5C8AA4C2B0C1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.MultiUserCapabilities.PunPlacementHintsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunPlacementHintsController_Start_mE7D16B33CC0CE5EB89CF257D41103843580FF6FB (PunPlacementHintsController_tA56B1FBA4CD01C0FC9E8E2B5ECE5F7A3156C0018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96_mE2AC261BFA404D87D43F2E2009164B74E158BD67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunPlacementHintsController_OnTogglePlacementHintsHandler_m996C6D94D9756C75BB948C5A0BE0FADDBE878A2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placementHintsController = GetComponent<PlacementHintsController>();
		PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* L_0;
		L_0 = Component_GetComponent_TisPlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96_mE2AC261BFA404D87D43F2E2009164B74E158BD67(__this, Component_GetComponent_TisPlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96_mE2AC261BFA404D87D43F2E2009164B74E158BD67_RuntimeMethod_var);
		__this->___placementHintsController_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placementHintsController_5), (void*)L_0);
		// placementHintsController.OnTogglePlacementHints += OnTogglePlacementHintsHandler;
		PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* L_1 = __this->___placementHintsController_5;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_2 = (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*)il2cpp_codegen_object_new(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PlacementHintsControllerDelegate__ctor_m6483805F57E4800C0D83C9D905A5C2CE71432B84(L_2, __this, (intptr_t)((void*)PunPlacementHintsController_OnTogglePlacementHintsHandler_m996C6D94D9756C75BB948C5A0BE0FADDBE878A2B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		PlacementHintsController_add_OnTogglePlacementHints_m4BE517DA85E4BC9F742A80F7863D428A2F4DC931(L_1, L_2, NULL);
		// placementHintsController.IsPunEnabled = true;
		PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* L_3 = __this->___placementHintsController_5;
		NullCheck(L_3);
		PlacementHintsController_set_IsPunEnabled_m1364F13B088427C7258B0AED579757B594B74A0E_inline(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.PunPlacementHintsController::OnTogglePlacementHintsHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunPlacementHintsController_OnTogglePlacementHintsHandler_m996C6D94D9756C75BB948C5A0BE0FADDBE878A2B (PunPlacementHintsController_tA56B1FBA4CD01C0FC9E8E2B5ECE5F7A3156C0018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DD4688ED6B1B14D93CB0302D8D428754CE57E89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// photonView.RPC("PunRPC_TogglePlacementHints", RpcTarget.All);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_0, _stringLiteral2DD4688ED6B1B14D93CB0302D8D428754CE57E89, 0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.PunPlacementHintsController::PunRPC_TogglePlacementHints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunPlacementHintsController_PunRPC_TogglePlacementHints_m1EE5D1BC90F1ABA327BB5B9EE6E54960D5E34E7D (PunPlacementHintsController_tA56B1FBA4CD01C0FC9E8E2B5ECE5F7A3156C0018* __this, const RuntimeMethod* method) 
{
	{
		// placementHintsController.Toggle();
		PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* L_0 = __this->___placementHintsController_5;
		NullCheck(L_0);
		PlacementHintsController_Toggle_m5285332F7C240D90986D60F15827EC5718A9FE7D(L_0, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.PunPlacementHintsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunPlacementHintsController__ctor_m25D34B67F3F65FFCF2D9388ED64E4782D47C85BD (PunPlacementHintsController_tA56B1FBA4CD01C0FC9E8E2B5ECE5F7A3156C0018* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
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
// System.Void MRTK.Tutorials.MultiUserCapabilities.SharingModuleScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharingModuleScript_Start_m8D9EFA8AE976FD1E3F5AAB0CAF9F450EC89FDEFD (SharingModuleScript_t9E93E8CF85ECF587C35C61A253029930DA3521AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A_m5ED4BB8AF17AC4ECD439BBC517691E42B583BE2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anchorModuleScript = GetComponent<AnchorModuleScript>();
		AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A* L_0;
		L_0 = Component_GetComponent_TisAnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A_m5ED4BB8AF17AC4ECD439BBC517691E42B583BE2B(__this, Component_GetComponent_TisAnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A_m5ED4BB8AF17AC4ECD439BBC517691E42B583BE2B_RuntimeMethod_var);
		__this->___anchorModuleScript_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anchorModuleScript_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.SharingModuleScript::ShareAzureAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharingModuleScript_ShareAzureAnchor_m73B37BE8A539134BA65F68BF6B6F49EBCF3A5E63 (SharingModuleScript_t9E93E8CF85ECF587C35C61A253029930DA3521AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042_mF8384376B34D6CAEDFB976C9ED3E73C51E96CD6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC67717E1019C9EB8951B04893EABB384C8E96B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD670DDF52D848D4D6B6BF52AA02C81C700EEAC2);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* V_1 = NULL;
	{
		// Debug.Log("\nSharingModuleScript.ShareAzureAnchor()");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC67717E1019C9EB8951B04893EABB384C8E96B7A, NULL);
		// GenericNetworkManager.Instance.azureAnchorId = anchorModuleScript.currentAzureAnchorID;
		GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788* L_0 = ((GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_StaticFields*)il2cpp_codegen_static_fields_for(GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var))->___Instance_4;
		AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A* L_1 = __this->___anchorModuleScript_4;
		NullCheck(L_1);
		String_t* L_2 = L_1->___currentAzureAnchorID_5;
		NullCheck(L_0);
		L_0->___azureAnchorId_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___azureAnchorId_5), (void*)L_2);
		// Debug.Log("GenericNetworkManager.Instance.azureAnchorId: " + GenericNetworkManager.Instance.azureAnchorId);
		GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788* L_3 = ((GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_StaticFields*)il2cpp_codegen_static_fields_for(GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_3);
		String_t* L_4 = L_3->___azureAnchorId_5;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCD670DDF52D848D4D6B6BF52AA02C81C700EEAC2, L_4, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// var pvLocalUser = GenericNetworkManager.Instance.localUser.gameObject;
		GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788* L_6 = ((GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_StaticFields*)il2cpp_codegen_static_fields_for(GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_7 = L_6->___localUser_6;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		V_0 = L_8;
		// var pu = pvLocalUser.gameObject.GetComponent<PhotonUser>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		NullCheck(L_10);
		PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* L_11;
		L_11 = GameObject_GetComponent_TisPhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042_mF8384376B34D6CAEDFB976C9ED3E73C51E96CD6E(L_10, GameObject_GetComponent_TisPhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042_mF8384376B34D6CAEDFB976C9ED3E73C51E96CD6E_RuntimeMethod_var);
		V_1 = L_11;
		// pu.ShareAzureAnchorId();
		PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* L_12 = V_1;
		NullCheck(L_12);
		PhotonUser_ShareAzureAnchorId_m910369151F19B41C34ED5ACAD2AEDA28874CA43A(L_12, NULL);
		// pu.PunRPC_SetNickName(pvLocalUser.gameObject.name);
		PhotonUser_t4AA0EE76EFF9D59245AD9D093E841AFBFBE38042* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		NullCheck(L_13);
		PhotonUser_PunRPC_SetNickName_m87B5FA50CD2E706F57FE08630654B47E6A23FE5D(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.SharingModuleScript::GetAzureAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharingModuleScript_GetAzureAnchor_m9938982B48681155E742702DFFFA9BD3D9CD5DBE (SharingModuleScript_t9E93E8CF85ECF587C35C61A253029930DA3521AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D040E3E6474BF74ACC71F4E380EF245C8178AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD670DDF52D848D4D6B6BF52AA02C81C700EEAC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("\nSharingModuleScript.GetAzureAnchor()");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC9D040E3E6474BF74ACC71F4E380EF245C8178AD, NULL);
		// Debug.Log("GenericNetworkManager.Instance.azureAnchorId: " + GenericNetworkManager.Instance.azureAnchorId);
		GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788* L_0 = ((GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_StaticFields*)il2cpp_codegen_static_fields_for(GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___azureAnchorId_5;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCD670DDF52D848D4D6B6BF52AA02C81C700EEAC2, L_1, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// anchorModuleScript.FindAzureAnchor(GenericNetworkManager.Instance.azureAnchorId);
		AnchorModuleScript_t724D0A3CA986BD02DA5124BA2A7AF8A4A315862A* L_3 = __this->___anchorModuleScript_4;
		GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788* L_4 = ((GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_StaticFields*)il2cpp_codegen_static_fields_for(GenericNetworkManager_t3B888F60941618AE9682C35B97713669DAE38788_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___azureAnchorId_5;
		NullCheck(L_3);
		AnchorModuleScript_FindAzureAnchor_m196572032AD1ABFDC99646EB5EC5CADE8B2E33F8(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.SharingModuleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharingModuleScript__ctor_m2FC786A8C54B112A1761EB2DED0CCE8A39E77084 (SharingModuleScript_t9E93E8CF85ECF587C35C61A253029930DA3521AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MRTK.Tutorials.MultiUserCapabilities.TableAnchor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAnchor_Start_mF65A440305B856A0A94D64F6DBB6B093C1AB05F0 (TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Instance == null)
		TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* L_0 = ((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Instance = this;
		((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		goto IL_0043;
	}

IL_001a:
	{
		// if (Instance == this) return;
		TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* L_3 = ((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, __this, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// if (Instance == this) return;
		goto IL_0043;
	}

IL_002c:
	{
		// Destroy(Instance.gameObject);
		TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* L_6 = ((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// Instance = this;
		((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.TableAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAnchor__ctor_m3FACEBBBFCF7420F9323334982F4B5B12866C431 (TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MRTK.Tutorials.MultiUserCapabilities.TableAnchorAsParent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAnchorAsParent_Start_mCC08E4F424E6F3727E85E02BAF0AE3005158FE4D (TableAnchorAsParent_t43802A81F5D2EA220B4B941D8CBB5C90BB99FDB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (TableAnchor.Instance != null) transform.parent = TableAnchor.Instance.transform;
		TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* L_0 = ((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (TableAnchor.Instance != null) transform.parent = TableAnchor.Instance.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* L_4 = ((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, L_5, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.TableAnchorAsParent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAnchorAsParent__ctor_mF63002CDBE242F55F9542752DC7E1FC4BDB1801A (TableAnchorAsParent_t43802A81F5D2EA220B4B941D8CBB5C90BB99FDB2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MRTK.Tutorials.MultiUserCapabilities.MonitorPlaneParent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorPlaneParent_Start_mEC85F5F527930D5F171BED43D582A84593F29CFD (MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E1C30D1FCB1028FDB6C90C051AB92B08B179FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// monitorPlane = GameObject.Find("Monitor_Plane(Clone)") as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral7E1C30D1FCB1028FDB6C90C051AB92B08B179FBB, NULL);
		((MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_StaticFields*)il2cpp_codegen_static_fields_for(MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_il2cpp_TypeInfo_var))->___monitorPlane_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_StaticFields*)il2cpp_codegen_static_fields_for(MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_il2cpp_TypeInfo_var))->___monitorPlane_4), (void*)L_0);
		// sphereChild = GameObject.Find("Sphere");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD, NULL);
		((MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_StaticFields*)il2cpp_codegen_static_fields_for(MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_il2cpp_TypeInfo_var))->___sphereChild_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_StaticFields*)il2cpp_codegen_static_fields_for(MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_il2cpp_TypeInfo_var))->___sphereChild_5), (void*)L_1);
		// if (TableAnchor.Instance != null) transform.parent = monitorPlane.transform;
		TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58* L_2 = ((TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_StaticFields*)il2cpp_codegen_static_fields_for(TableAnchor_tE82452ABCC5157276614894F6F5230375BDD8F58_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// if (TableAnchor.Instance != null) transform.parent = monitorPlane.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_StaticFields*)il2cpp_codegen_static_fields_for(MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5_il2cpp_TypeInfo_var))->___monitorPlane_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_7, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.MultiUserCapabilities.MonitorPlaneParent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorPlaneParent__ctor_mAD93A4A56925107886C9405AAB2D2B8B606359AB (MonitorPlaneParent_t0B40BD6FF8F4AA94BE1838A3604498A3F9295BB5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MRTK.Tutorials.GettingStarted.DirectionalIndicatorController::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalIndicatorController_OnBecameInvisible_m81BAC96F24A8B8FD38A5A1B399194F4E2E9CF353 (DirectionalIndicatorController_t243D1BAD97AEFF6B9C785EBAD5DCA6618C965637* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.DirectionalIndicatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalIndicatorController__ctor_mAF93D393485CD7937E4F0A049CAE0D80D17AA0C2 (DirectionalIndicatorController_t243D1BAD97AEFF6B9C785EBAD5DCA6618C965637* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_set_IsPunEnabled_m9B9F54E404B03478F23B116EBDA6D22729947B1C (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->___isPunEnabled_7 = L_0;
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Start_mEBCA23758FC99609617CEE99E5CC6AD1A8E8DD28 (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___defaultPositions_5;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_0010_1:
			{
				// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___startingPos_9;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				NullCheck(L_4);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
				NullCheck(L_3);
				List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_3, L_6, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
			}

IL_002f_1:
			{
				// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
				bool L_7;
				L_7 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___explodedPositions_6;
		NullCheck(L_8);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_9;
		L_9 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_8, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0077_1;
			}

IL_0058_1:
			{
				// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_10;
				// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = __this->___explodedPos_8;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_3;
				NullCheck(L_12);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
				NullCheck(L_13);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
				NullCheck(L_11);
				List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_11, L_14, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
			}

IL_0077_1:
			{
				// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
				bool L_15;
				L_15 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Update_m68272F7CABAE057B7402902EACC742A5FD11B266 (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// if (isInDefaultPosition)
		bool L_0 = __this->___isInDefaultPosition_10;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		V_1 = 0;
		goto IL_0057;
	}

IL_000f:
	{
		// defaultPositions[i].transform.localPosition = Vector3.Lerp(
		//     defaultPositions[i].transform.localPosition,
		//     explodedPos[i], speed);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___defaultPositions_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___defaultPositions_5;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = __this->___explodedPos_8;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_11, L_12, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		float L_14 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_10, L_13, L_14, NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_15, NULL);
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0057:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_17 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->___defaultPositions_5;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_18, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_00cb;
	}

IL_006b:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		V_3 = 0;
		goto IL_00b7;
	}

IL_006f:
	{
		// defaultPositions[i].transform.localPosition = Vector3.Lerp(
		//     defaultPositions[i].transform.localPosition,
		//     startingPos[i], speed);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = __this->___defaultPositions_5;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_21, L_22, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->___defaultPositions_5;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_25, L_26, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_30 = __this->___startingPos_9;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_30, L_31, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		float L_33 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_29, L_32, L_33, NULL);
		NullCheck(L_24);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_24, L_34, NULL);
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b7:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_36 = V_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_37 = __this->___defaultPositions_5;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_37, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_36) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_4;
		if (L_39)
		{
			goto IL_006f;
		}
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::ToggleExplodedView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_ToggleExplodedView_m59FB613ADA832339B088AF41B27DF25C59EB6E68 (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* G_B3_0 = NULL;
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->___isPunEnabled_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnToggleExplodedView?.Invoke();
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_2 = __this->___OnToggleExplodedView_11;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_001d;
	}

IL_0017:
	{
		NullCheck(G_B3_0);
		ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_inline(G_B3_0, NULL);
	}

IL_001d:
	{
		goto IL_0026;
	}

IL_001f:
	{
		// Toggle();
		ExplodeViewController_Toggle_mC19D29CA70BFBE320678DC27565EED8AE3775011(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Toggle_mC19D29CA70BFBE320678DC27565EED8AE3775011 (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, const RuntimeMethod* method) 
{
	{
		// isInDefaultPosition = !isInDefaultPosition;
		bool L_0 = __this->___isInDefaultPosition_10;
		__this->___isInDefaultPosition_10 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::add_OnToggleExplodedView(MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_add_OnToggleExplodedView_m7B7C12027D19E16A6E136FB760FB843493F87FB5 (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* V_0 = NULL;
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* V_1 = NULL;
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* V_2 = NULL;
	{
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_0 = __this->___OnToggleExplodedView_11;
		V_0 = L_0;
	}

IL_0007:
	{
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_1 = V_0;
		V_1 = L_1;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_2 = V_1;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*)CastclassSealed((RuntimeObject*)L_4, ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320_il2cpp_TypeInfo_var));
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320** L_5 = (&__this->___OnToggleExplodedView_11);
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_6 = V_2;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_7 = V_1;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_8;
		L_8 = InterlockedCompareExchangeImpl<ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*>(L_5, L_6, L_7);
		V_0 = L_8;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_9 = V_0;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_10 = V_1;
		if ((!(((RuntimeObject*)(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*)L_9) == ((RuntimeObject*)(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::remove_OnToggleExplodedView(MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_remove_OnToggleExplodedView_m6D5BED15516C033624058FA746BD3E7A630B738B (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* V_0 = NULL;
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* V_1 = NULL;
	ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* V_2 = NULL;
	{
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_0 = __this->___OnToggleExplodedView_11;
		V_0 = L_0;
	}

IL_0007:
	{
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_1 = V_0;
		V_1 = L_1;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_2 = V_1;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*)CastclassSealed((RuntimeObject*)L_4, ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320_il2cpp_TypeInfo_var));
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320** L_5 = (&__this->___OnToggleExplodedView_11);
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_6 = V_2;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_7 = V_1;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_8;
		L_8 = InterlockedCompareExchangeImpl<ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*>(L_5, L_6, L_7);
		V_0 = L_8;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_9 = V_0;
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* L_10 = V_1;
		if ((!(((RuntimeObject*)(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*)L_9) == ((RuntimeObject*)(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController__ctor_m6B9698AB8508AB45BA9EFE8C003A368F956A39C9 (ExplodeViewController_t09FF7120BFDB798987DF2CA5F3456F0DEB76DAF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float speed = 0.1f;
		__this->___speed_4 = (0.100000001f);
		// [SerializeField] private List<GameObject> defaultPositions = default;
		__this->___defaultPositions_5 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultPositions_5), (void*)(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL);
		// [SerializeField] private List<GameObject> explodedPositions = default;
		__this->___explodedPositions_6 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___explodedPositions_6), (void*)(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL);
		// private readonly List<Vector3> explodedPos = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___explodedPos_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___explodedPos_8), (void*)L_0);
		// private readonly List<Vector3> startingPos = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___startingPos_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startingPos_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_Multicast(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* currentDelegate = reinterpret_cast<ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_OpenInst(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_OpenStatic(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_OpenStaticInvoker(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_ClosedStaticInvoker(ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320 (ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate__ctor_m00CF199628C294EC4C78DB6BCFE9CA99F31E1187 (ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_Multicast;
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16 (ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExplodeViewControllerDelegate_BeginInvoke_m4CE6E375D997DAAA0E3FAFF36F4700838C51D958 (ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_EndInvoke_m073ACDB10BEA116E55E112E082F114D15ADECD76 (ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_set_IsPunEnabled_m3B2755FC9F412A9A80F00E881A43C9E3D71259BD (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->___isPunEnabled_7 = L_0;
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Start_m7662EBE3717584F93527DFF47EBFF7B17E3CAE74 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18_m841A193BE6EC6353C4085D87E886E76B38AA8E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5EE30B0C859E3ADAF95D722B3400D79217295937_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72E5788DCB0BA71D5C75CC306AE9754ACADFA2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE_mB370EA26C93CDDA46AA06C507A87D20CD31020D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_3 = NULL;
	int32_t V_4 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_5 = NULL;
	PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* V_6 = NULL;
	int32_t V_7 = 0;
	PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* V_8 = NULL;
	bool V_9 = false;
	{
		// if (locationToPlace != transform) shouldCheckPlacement = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___locationToPlace_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// if (locationToPlace != transform) shouldCheckPlacement = true;
		__this->___shouldCheckPlacement_8 = (bool)1;
	}

IL_001d:
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_9), (void*)L_4);
		// toolTipSpawner = GetComponent<ToolTipSpawner>();
		ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18* L_5;
		L_5 = Component_GetComponent_TisToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18_m841A193BE6EC6353C4085D87E886E76B38AA8E45(__this, Component_GetComponent_TisToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18_m841A193BE6EC6353C4085D87E886E76B38AA8E45_RuntimeMethod_var);
		__this->___toolTipSpawner_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toolTipSpawner_10), (void*)L_5);
		// colliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_6, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		__this->___colliders_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colliders_11), (void*)L_6);
		// if (shouldCheckPlacement)
		bool L_7 = __this->___shouldCheckPlacement_8;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// foreach (var col in GetComponents<Collider>())
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_9;
		L_9 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C(__this, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		V_3 = L_9;
		V_4 = 0;
		goto IL_0071;
	}

IL_0057:
	{
		// foreach (var col in GetComponents<Collider>())
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// colliders.Add(col);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_14 = __this->___colliders_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15 = V_5;
		NullCheck(L_14);
		List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline(L_14, L_15, List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0071:
	{
		// foreach (var col in GetComponents<Collider>())
		int32_t L_17 = V_4;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_18 = V_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_0078:
	{
		// partAssemblyControllers = new List<PartAssemblyController>();
		List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* L_19 = (List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE*)il2cpp_codegen_object_new(List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_m72E5788DCB0BA71D5C75CC306AE9754ACADFA2D3(L_19, List_1__ctor_m72E5788DCB0BA71D5C75CC306AE9754ACADFA2D3_RuntimeMethod_var);
		__this->___partAssemblyControllers_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___partAssemblyControllers_12), (void*)L_19);
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* L_20;
		L_20 = Object_FindObjectsOfType_TisPartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE_mB370EA26C93CDDA46AA06C507A87D20CD31020D0(Object_FindObjectsOfType_TisPartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE_mB370EA26C93CDDA46AA06C507A87D20CD31020D0_RuntimeMethod_var);
		V_6 = L_20;
		V_7 = 0;
		goto IL_00ab;
	}

IL_0090:
	{
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* L_21 = V_6;
		int32_t L_22 = V_7;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		// partAssemblyControllers.Add(controller);
		List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* L_25 = __this->___partAssemblyControllers_12;
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_26 = V_8;
		NullCheck(L_25);
		List_1_Add_m5EE30B0C859E3ADAF95D722B3400D79217295937_inline(L_25, L_26, List_1_Add_m5EE30B0C859E3ADAF95D722B3400D79217295937_RuntimeMethod_var);
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00ab:
	{
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		int32_t L_28 = V_7;
		PartAssemblyControllerU5BU5D_tD9A82B559182FE5342BBD51BFBC3EC00848FC267* L_29 = V_6;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0090;
		}
	}
	{
		// var trans = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_30;
		// originalParent = trans.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_0;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_31, NULL);
		__this->___originalParent_13 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalParent_13), (void*)L_32);
		// originalPosition = trans.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_33, NULL);
		__this->___originalPosition_14 = L_34;
		// originalRotation = trans.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_0;
		NullCheck(L_35);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_35, NULL);
		__this->___originalRotation_15 = L_36;
		// checkPlacementCoroutine = CheckPlacement();
		RuntimeObject* L_37;
		L_37 = PartAssemblyController_CheckPlacement_mCD2226DB9D0976415A580C7B4D161A5B0C087D96(__this, NULL);
		__this->___checkPlacementCoroutine_16 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkPlacementCoroutine_16), (void*)L_37);
		// hasAudioSource = audioSource != null;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38 = __this->___audioSource_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___hasAudioSource_17 = L_39;
		// hasToolTip = toolTipSpawner != null;
		ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18* L_40 = __this->___toolTipSpawner_10;
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___hasToolTip_18 = L_41;
		// if (shouldCheckPlacement) StartCoroutine(checkPlacementCoroutine);
		bool L_42 = __this->___shouldCheckPlacement_8;
		V_9 = L_42;
		bool L_43 = V_9;
		if (!L_43)
		{
			goto IL_0127;
		}
	}
	{
		// if (shouldCheckPlacement) StartCoroutine(checkPlacementCoroutine);
		RuntimeObject* L_44 = __this->___checkPlacementCoroutine_16;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_45;
		L_45 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_44, NULL);
	}

IL_0127:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::SetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_SetPlacement_m3753B2A0342CD8A54914FFAD1B38D887F1C504C9 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* G_B3_0 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->___isPunEnabled_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnSetPlacement?.Invoke();
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_2 = __this->___OnSetPlacement_22;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_001d;
	}

IL_0017:
	{
		NullCheck(G_B3_0);
		PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_inline(G_B3_0, NULL);
	}

IL_001d:
	{
		goto IL_0026;
	}

IL_001f:
	{
		// Set();
		PartAssemblyController_Set_m78C7CE4286BD0961DA1318A24C6EA8692CAF18CF(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Set_m78C7CE4286BD0961DA1318A24C6EA8692CAF18CF (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_3 = NULL;
	bool V_4 = false;
	{
		// isPlaced = true;
		__this->___isPlaced_19 = (bool)1;
		// if (hasAudioSource) audioSource.Play();
		bool L_0 = __this->___hasAudioSource_17;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (hasAudioSource) audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_9;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
	}

IL_001e:
	{
		// foreach (var col in colliders) col.enabled = false;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_3 = __this->___colliders_11;
		NullCheck(L_3);
		Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A L_4;
		L_4 = List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420(L_3, List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D((&V_2), Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_002d_1:
			{
				// foreach (var col in colliders) col.enabled = false;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
				L_5 = Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_inline((&V_2), Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var);
				V_3 = L_5;
				// foreach (var col in colliders) col.enabled = false;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = V_3;
				NullCheck(L_6);
				Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_6, (bool)0, NULL);
			}

IL_003d_1:
			{
				// foreach (var col in colliders) col.enabled = false;
				bool L_7;
				L_7 = Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1((&V_2), Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// if (hasToolTip) toolTipSpawner.enabled = false;
		bool L_8 = __this->___hasToolTip_18;
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		// if (hasToolTip) toolTipSpawner.enabled = false;
		ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18* L_10 = __this->___toolTipSpawner_10;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)0, NULL);
	}

IL_0070:
	{
		// var trans = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_11;
		// trans.SetParent(locationToPlace.parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___locationToPlace_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
		NullCheck(L_12);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_12, L_14, NULL);
		// trans.position = locationToPlace.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___locationToPlace_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_17, NULL);
		// trans.rotation = locationToPlace.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___locationToPlace_4;
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_20, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::ResetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_ResetPlacement_m87A7AB3C4C5D3C539EDAB43011E775BC5C6D1646 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF72EB90F5A2301B23240CBB789CBA4F317421D88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m35D71A8A79F545B713EF6E24F15B9D6654408F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9756C2866F1DFEC79B1A3C953F57647890B4AB5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m40198C5063A7F93D81D837F7EF845E891D3554E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* V_1 = NULL;
	bool V_2 = false;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* G_B5_0 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* G_B4_0 = NULL;
	{
		// foreach (var controller in partAssemblyControllers)
		List_1_t5759A4AD835F9BDB22B18DAFB728D96EE3F8F1BE* L_0 = __this->___partAssemblyControllers_12;
		NullCheck(L_0);
		Enumerator_t685E2886E56A41361C7A41B62F034DC0D1A43D80 L_1;
		L_1 = List_1_GetEnumerator_m40198C5063A7F93D81D837F7EF845E891D3554E1(L_0, List_1_GetEnumerator_m40198C5063A7F93D81D837F7EF845E891D3554E1_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF72EB90F5A2301B23240CBB789CBA4F317421D88((&V_0), Enumerator_Dispose_mF72EB90F5A2301B23240CBB789CBA4F317421D88_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_0010_1:
			{
				// foreach (var controller in partAssemblyControllers)
				PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_2;
				L_2 = Enumerator_get_Current_m9756C2866F1DFEC79B1A3C953F57647890B4AB5F_inline((&V_0), Enumerator_get_Current_m9756C2866F1DFEC79B1A3C953F57647890B4AB5F_RuntimeMethod_var);
				V_1 = L_2;
				// if (isPunEnabled)
				bool L_3 = __this->___isPunEnabled_7;
				V_2 = L_3;
				bool L_4 = V_2;
				if (!L_4)
				{
					goto IL_0036_1;
				}
			}
			{
				// controller.OnResetPlacement?.Invoke();
				PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_5 = V_1;
				NullCheck(L_5);
				PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_6 = L_5->___OnResetPlacement_21;
				PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_7 = L_6;
				G_B4_0 = L_7;
				if (L_7)
				{
					G_B5_0 = L_7;
					goto IL_002e_1;
				}
			}
			{
				goto IL_0034_1;
			}

IL_002e_1:
			{
				NullCheck(G_B5_0);
				PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_inline(G_B5_0, NULL);
			}

IL_0034_1:
			{
				goto IL_003d_1;
			}

IL_0036_1:
			{
				// controller.Reset();
				PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_8 = V_1;
				NullCheck(L_8);
				PartAssemblyController_Reset_m3F1C2A8DEC7F886D75DB1B37F406AA7932399AB5(L_8, NULL);
			}

IL_003d_1:
			{
				// foreach (var controller in partAssemblyControllers)
				bool L_9;
				L_9 = Enumerator_MoveNext_m35D71A8A79F545B713EF6E24F15B9D6654408F4F((&V_0), Enumerator_MoveNext_m35D71A8A79F545B713EF6E24F15B9D6654408F4F_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Reset_m3F1C2A8DEC7F886D75DB1B37F406AA7932399AB5 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_2 = NULL;
	bool V_3 = false;
	{
		// isPlaced = false;
		__this->___isPlaced_19 = (bool)0;
		// foreach (var col in colliders) col.enabled = true;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = __this->___colliders_11;
		NullCheck(L_0);
		Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A L_1;
		L_1 = List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420(L_0, List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D((&V_1), Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0017_1:
			{
				// foreach (var col in colliders) col.enabled = true;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
				L_2 = Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_inline((&V_1), Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var);
				V_2 = L_2;
				// foreach (var col in colliders) col.enabled = true;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = V_2;
				NullCheck(L_3);
				Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_3, (bool)1, NULL);
			}

IL_0027_1:
			{
				// foreach (var col in colliders) col.enabled = true;
				bool L_4;
				L_4 = Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1((&V_1), Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// if (hasToolTip) toolTipSpawner.enabled = true;
		bool L_5 = __this->___hasToolTip_18;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// if (hasToolTip) toolTipSpawner.enabled = true;
		ToolTipSpawner_t05CB19E05CCD223DDEB97E4F7D93F213291E9E18* L_7 = __this->___toolTipSpawner_10;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
	}

IL_0058:
	{
		// var trans = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_8;
		// trans.SetParent(originalParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___originalParent_13;
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_10, NULL);
		// trans.localPosition = originalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___originalPosition_14;
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_12, NULL);
		// trans.localRotation = originalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___originalRotation_15;
		NullCheck(L_13);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::CheckPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyController_CheckPlacement_mCD2226DB9D0976415A580C7B4D161A5B0C087D96 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* L_0 = (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4*)il2cpp_codegen_object_new(U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckPlacementU3Ed__25__ctor_mD99D1F68A1B42D45D5E0303134EB8CDEF442F9B0(L_0, 0, NULL);
		U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::add_OnResetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_add_OnResetPlacement_m05594F373CAAF81B52DCE6B53F7080535AF36A6C (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_0 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_1 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_0 = __this->___OnResetPlacement_21;
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_2 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234** L_5 = (&__this->___OnResetPlacement_21);
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_6 = V_2;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_7 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*>(L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_9 = V_0;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::remove_OnResetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_remove_OnResetPlacement_mED257FFBB650024D91B8441D3BD45A8173FCFED2 (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_0 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_1 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_0 = __this->___OnResetPlacement_21;
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_2 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234** L_5 = (&__this->___OnResetPlacement_21);
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_6 = V_2;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_7 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*>(L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_9 = V_0;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::add_OnSetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_add_OnSetPlacement_mB02D746A05D3A8CF8260832887C55D53D74649DC (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_0 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_1 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_0 = __this->___OnSetPlacement_22;
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_2 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234** L_5 = (&__this->___OnSetPlacement_22);
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_6 = V_2;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_7 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*>(L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_9 = V_0;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::remove_OnSetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_remove_OnSetPlacement_m6EDB130CABBA27EF6539D4A22EF2B451462458BA (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_0 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_1 = NULL;
	PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_0 = __this->___OnSetPlacement_22;
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_2 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234** L_5 = (&__this->___OnSetPlacement_22);
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_6 = V_2;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_7 = V_1;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*>(L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_9 = V_0;
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController__ctor_m4C1B83FE2E3CF9F06A2AF8F5D366BBCDECA4B5AC (PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform locationToPlace = default;
		__this->___locationToPlace_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___locationToPlace_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_Multicast(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* currentDelegate = reinterpret_cast<PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_OpenInst(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_OpenStatic(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_OpenStaticInvoker(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_ClosedStaticInvoker(PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234 (PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate__ctor_m7F2B8D7A6D04834696B8F6F71E84D644D99B68EF (PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_Multicast;
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C (PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyControllerDelegate_BeginInvoke_m7671440389FDAA059E71ADFF712A82E1AD7B8CEB (PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_EndInvoke_m09C63B12E14C3681A69C6DC62AFFE9C77685B03C (PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25__ctor_mD99D1F68A1B42D45D5E0303134EB8CDEF442F9B0 (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_IDisposable_Dispose_m0A3FD3FF6019150BD5AA2392C53BC217DB95477F (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckPlacementU3Ed__25_MoveNext_mBEFDAA4E1B5E6C090C1C516910FE692C516319AE (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_016b;
	}

IL_0025:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!isPlaced)
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		bool L_5 = L_4->___isPlaced_19;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_00ca;
		}
	}
	{
		// if (Vector3.Distance(transform.position, locationToPlace.position) > MinDistance &&
		//     Vector3.Distance(transform.position, locationToPlace.position) < MaxDistance)
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10->___locationToPlace_4;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13;
		L_13 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_9, L_12, NULL);
		if ((!(((float)L_13) > ((float)(0.00100000005f)))))
		{
			goto IL_00b3;
		}
	}
	{
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17->___locationToPlace_4;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20;
		L_20 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_16, L_19, NULL);
		G_B13_0 = ((((float)L_20) < ((float)(0.100000001f)))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B13_0 = 0;
	}

IL_00b4:
	{
		V_2 = (bool)G_B13_0;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00c4;
		}
	}
	{
		// SetPlacement();
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		PartAssemblyController_SetPlacement_m3753B2A0342CD8A54914FFAD1B38D887F1C504C9(L_22, NULL);
	}

IL_00c4:
	{
		goto IL_016a;
	}

IL_00ca:
	{
		// else if (isPlaced)
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		bool L_24 = L_23->___isPlaced_19;
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_0167;
		}
	}
	{
		// if (!(Vector3.Distance(transform.position, locationToPlace.position) > MinDistance)) continue;
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_29 = __this->___U3CU3E4__this_2;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29->___locationToPlace_4;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32;
		L_32 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_28, L_31, NULL);
		V_4 = (bool)((((int32_t)((((float)L_32) > ((float)(0.00100000005f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		// if (!(Vector3.Distance(transform.position, locationToPlace.position) > MinDistance)) continue;
		goto IL_016b;
	}

IL_0114:
	{
		// var trans = transform;
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		__this->___U3CtransU3E5__1_3 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransU3E5__1_3), (void*)L_35);
		// trans.position = locationToPlace.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___U3CtransU3E5__1_3;
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_37 = __this->___U3CU3E4__this_2;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = L_37->___locationToPlace_4;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		NullCheck(L_36);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_39, NULL);
		// trans.rotation = locationToPlace.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___U3CtransU3E5__1_3;
		PartAssemblyController_t00AAF8EF2E3AE3D5492E12D16939D2883C66A0DE* L_41 = __this->___U3CU3E4__this_2;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = L_41->___locationToPlace_4;
		NullCheck(L_42);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_42, NULL);
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_43, NULL);
		__this->___U3CtransU3E5__1_3 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransU3E5__1_3), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		goto IL_016a;
	}

IL_0167:
	{
		// break;
		goto IL_0173;
	}

IL_016a:
	{
	}

IL_016b:
	{
		// while (true)
		V_5 = (bool)1;
		goto IL_0025;
	}

IL_0173:
	{
		// }
		return (bool)0;
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckPlacementU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE0F540979B60424322B424EC85CC6A7F660C014C (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m9CFCADBFA8E2719A5D2EAED052816115B65083D4 (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m9CFCADBFA8E2719A5D2EAED052816115B65083D4_RuntimeMethod_var)));
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_get_Current_mC1774CBAA3E10DA18E8343A526ACBA70553C607B (U3CCheckPlacementU3Ed__25_t8FB585FAD97221077B9EC4492A407AB451593FB4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_set_IsPunEnabled_m1364F13B088427C7258B0AED579757B594B74A0E (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->___isPunEnabled_6 = L_0;
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Start_m306723AF3759666445826208B8BD76902741002F (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___placementHints_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		bool L_6 = __this->___activeAtStart_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::TogglePlacementHints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_TogglePlacementHints_mF5A22F14A17D362A2FAE71EFD314A4BB14D7A28E (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* G_B3_0 = NULL;
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->___isPunEnabled_6;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnTogglePlacementHints?.Invoke();
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_2 = __this->___OnTogglePlacementHints_7;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_001d;
	}

IL_0017:
	{
		NullCheck(G_B3_0);
		PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_inline(G_B3_0, NULL);
	}

IL_001d:
	{
		goto IL_0026;
	}

IL_001f:
	{
		// Toggle();
		PlacementHintsController_Toggle_m5285332F7C240D90986D60F15827EC5718A9FE7D(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Toggle_m5285332F7C240D90986D60F15827EC5718A9FE7D (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___placementHints_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0025;
	}

IL_000d:
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::add_OnTogglePlacementHints(MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_add_OnTogglePlacementHints_m4BE517DA85E4BC9F742A80F7863D428A2F4DC931 (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* V_0 = NULL;
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* V_1 = NULL;
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* V_2 = NULL;
	{
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_0 = __this->___OnTogglePlacementHints_7;
		V_0 = L_0;
	}

IL_0007:
	{
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_1 = V_0;
		V_1 = L_1;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_2 = V_1;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*)CastclassSealed((RuntimeObject*)L_4, PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD_il2cpp_TypeInfo_var));
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD** L_5 = (&__this->___OnTogglePlacementHints_7);
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_6 = V_2;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_7 = V_1;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_9 = V_0;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*)L_9) == ((RuntimeObject*)(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::remove_OnTogglePlacementHints(MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_remove_OnTogglePlacementHints_mED93E45F3C670BA58DDF275DE9C576B48D51024C (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* V_0 = NULL;
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* V_1 = NULL;
	PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* V_2 = NULL;
	{
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_0 = __this->___OnTogglePlacementHints_7;
		V_0 = L_0;
	}

IL_0007:
	{
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_1 = V_0;
		V_1 = L_1;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_2 = V_1;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*)CastclassSealed((RuntimeObject*)L_4, PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD_il2cpp_TypeInfo_var));
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD** L_5 = (&__this->___OnTogglePlacementHints_7);
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_6 = V_2;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_7 = V_1;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_9 = V_0;
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*)L_9) == ((RuntimeObject*)(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController__ctor_m789398D4FEC0B3548A616A086A9CD5121B51DED0 (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool activeAtStart = true;
		__this->___activeAtStart_4 = (bool)1;
		// [SerializeField] private GameObject[] placementHints = default;
		__this->___placementHints_5 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placementHints_5), (void*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_Multicast(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* currentDelegate = reinterpret_cast<PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_OpenInst(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_OpenStatic(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_OpenStaticInvoker(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_ClosedStaticInvoker(PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate__ctor_m6483805F57E4800C0D83C9D905A5C2CE71432B84 (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_Multicast;
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554 (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlacementHintsControllerDelegate_BeginInvoke_m29B9BE46FFF16EF20BC950660E42F1E0FE71F841 (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_EndInvoke_m158B6288E2B765CD86F64CB51EBE247426631117 (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.AzureSpatialAnchors.DebugWindow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugWindow_Start_mE4DB4982DB85A70C2B2E0DB3528249AC0F326FA2 (DebugWindow_tB19C2A730DE1A4857642DAFC0FD13BCAC9ED372F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m95140C4F2B2F1379BA960CA9DDF7E4BBF867EEA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugWindow_HandleLog_m979E071474C595A8B1848C110C45F0B946EE5BBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57956D78F237A2BA6CB114C514B95EFEE1AB1FAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scrollRect = GetComponentInChildren<ScrollRect>();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m95140C4F2B2F1379BA960CA9DDF7E4BBF867EEA0(__this, Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m95140C4F2B2F1379BA960CA9DDF7E4BBF867EEA0_RuntimeMethod_var);
		__this->___scrollRect_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scrollRect_5), (void*)L_0);
		// Application.logMessageReceived += HandleLog;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_1 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_1, __this, (intptr_t)((void*)DebugWindow_HandleLog_m979E071474C595A8B1848C110C45F0B946EE5BBC_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_m9185431F0B315A8CE2AA6D7B8DA764BDA350918B(L_1, NULL);
		// debugText.text = "Debug messages will appear here.\n\n";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___debugText_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral57956D78F237A2BA6CB114C514B95EFEE1AB1FAC);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.AzureSpatialAnchors.DebugWindow::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugWindow_OnDestroy_mCF6E877DFC0EFBA82A32169CAA288EC49FDA5775 (DebugWindow_tB19C2A730DE1A4857642DAFC0FD13BCAC9ED372F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugWindow_HandleLog_m979E071474C595A8B1848C110C45F0B946EE5BBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived -= HandleLog;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)DebugWindow_HandleLog_m979E071474C595A8B1848C110C45F0B946EE5BBC_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m44CDFD932D3A105FD92D6DEC0592F1E5285631C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.AzureSpatialAnchors.DebugWindow::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugWindow_HandleLog_m979E071474C595A8B1848C110C45F0B946EE5BBC (DebugWindow_tB19C2A730DE1A4857642DAFC0FD13BCAC9ED372F* __this, String_t* ___message0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A81C7648296D8C125770F34A698F0B875DE341);
		s_Il2CppMethodInitialized = true;
	}
	{
		// debugText.text += message + " \n";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___debugText_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_1);
		String_t* L_3 = ___message0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, L_3, _stringLiteral42A81C7648296D8C125770F34A698F0B875DE341, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// Canvas.ForceUpdateCanvases();
		Canvas_ForceUpdateCanvases_m29B1B008CA6C4A3CF623A0A86ACE5C8AA4C2B0C1(NULL);
		// scrollRect.verticalNormalizedPosition = 0;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_5 = __this->___scrollRect_5;
		NullCheck(L_5);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_5, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.AzureSpatialAnchors.DebugWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugWindow__ctor_m283AC06C16E0FB054BF57249D8CB64F24E82FA2D (DebugWindow_tB19C2A730DE1A4857642DAFC0FD13BCAC9ED372F* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private TextMeshProUGUI debugText = default;
		__this->___debugText_4 = (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugText_4), (void*)(TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MRTK.Tutorials.AzureSpatialAnchors.DisableDiagnosticsSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableDiagnosticsSystem__ctor_m586116B337F12DF5FE5CB804EECAD6D504D33DB6 (DisableDiagnosticsSystem_t3D0D4049C1A224689A18F6764A3DD3E5A6D448A3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementHintsController_set_IsPunEnabled_m1364F13B088427C7258B0AED579757B594B74A0E_inline (PlacementHintsController_t17341E12473ED135C1A9883BE9D7FD50E316FD96* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->___isPunEnabled_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_m9475EC90F8EABC05D3124071E6AC55FA93C56D16_inline (ExplodeViewControllerDelegate_t70DCF81A446C75795393F0D8B7B6194A78AC1320* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_mC5F3437F064E32947FFAB510C33A36A1AD8A059C_inline (PartAssemblyControllerDelegate_t0C189ECDE805E73BED1C56D9658B066A09F32234* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mFB26FE30BE1AE37EF71E6B55861A49F1125F9554_inline (PlacementHintsControllerDelegate_t86FBBCE3089865C01B210E1A640592F9ED7403CD* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
