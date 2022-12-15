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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.GameManager>
struct SingletonMonoBase_1_tD108DDB198D8BAE568E4E110BBE0D7BE1722B89A;
// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.LoadManager>
struct SingletonMonoBase_1_t9306D10DD302447B308A475F76CC5E96F6B70196;
// EveryWhere.Base.SingletonMonoBase`1<System.Object>
struct SingletonMonoBase_1_tEFA0264445C46671E45EB1FD01432884B667C391;
// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.ScheduleManager>
struct SingletonMonoBase_1_t99DE7028036F8E8834A681CA79E6C6BF0E89805F;
// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.UIManager>
struct SingletonMonoBase_1_t26C94AAA0472861AF15EC1C8811ED72442005BCC;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
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
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
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
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;
// TimelineCell[,]
struct TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// BackController
struct BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraResolution
struct CameraResolution_t34B94895C50F3AD7C0DC9CD85F29B90AA45AD212;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// EveryWhere.Manger.FlipManager
struct FlipManager_tEC9A146F0654FA05AE865F73945CDC6A4511E61E;
// GameEnd
struct GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0;
// EveryWhere.Manger.GameManager
struct GameManager_t1F29E5BC33A3307224E954F21E44292F002BFD52;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GenderSwipe
struct GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HotsixController
struct HotsixController_t7BC9D89A845B8FB07CE54EB116466A4964CFF335;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Lecture
struct Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298;
// EveryWhere.Manger.LoadManager
struct LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MonsterController
struct MonsterController_t244780C765AF448D05CF38CCE482669DBDD516E7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// QuitGame
struct QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// EveryWhere.Manger.ScheduleManager
struct ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350;
// ScheduleSelectWindow
struct ScheduleSelectWindow_tA04BA952EB827DEBEA7B86F9B242486FB519B51E;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// ScrollViewLectureContent
struct ScrollViewLectureContent_t30010B18D9AF27FA62AB34C4DAD09559580CD874;
// SelectTimelineCell
struct SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// Stat
struct Stat_t347C80C1BA9D0F03E87EA478FF9E0234B28F8505;
// StatDistribute
struct StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808;
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
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TimelineCell
struct TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738;
// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// EveryWhere.Manger.UIManager
struct UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VitaController
struct VitaController_t23097902CAAA8FF3B9E547240579EB31CF311E55;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// EveryWhere.Manger.LoadManager/<CLoadScene>d__4
struct U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// SelectTimelineCell/<WaitScheduleSelect>d__12
struct U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// StatDistribute/<ChangeEconomicAbility>d__34
struct U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18;
// StatDistribute/<ChangeLearningAbility>d__31
struct U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38;
// StatDistribute/<ChangeSociability>d__28
struct U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05;
// StatDistribute/<ChangeSpecAbility>d__37
struct U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral006EC833FC26DF32AD8DE527A0ED0C848DA7DC88;
IL2CPP_EXTERN_C String_t* _stringLiteral1A52C3C9D37BBFD5E5121B35BC4AF16D9B8BA0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1D17CBCDF6F3DE7989E82BA55AA79588E8762C53;
IL2CPP_EXTERN_C String_t* _stringLiteral2780E4EB1B1050EFBFEFAE21270FECF17B3CF6D0;
IL2CPP_EXTERN_C String_t* _stringLiteral34FB8AD3F8DABF14F758801CD07F057318E3D42F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F378F94E5C9D34E2134126A0885331C391796AF;
IL2CPP_EXTERN_C String_t* _stringLiteral44F684FC778985947FD31634E8F6E357AEAA894B;
IL2CPP_EXTERN_C String_t* _stringLiteral501842043820AC9BF7DD3836734ED0EFD69AF6DD;
IL2CPP_EXTERN_C String_t* _stringLiteral553BC459CCF831FB0574EBE7D62C4C2499A4B690;
IL2CPP_EXTERN_C String_t* _stringLiteral576AB4EBE28F721B484E313B51CCCA508D2100FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD758BB7CBC1063322EA116819A8D428EA112AA;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC848228B7AB9B32AF453A14E1B6AC49F53A659;
IL2CPP_EXTERN_C String_t* _stringLiteral758E1223E37DB498BF4E25C1DC407152FAF71C71;
IL2CPP_EXTERN_C String_t* _stringLiteral844334E4E5EF48A979C37113BBF808A42D7F65BC;
IL2CPP_EXTERN_C String_t* _stringLiteral8A3B2AF1F9C73F61FC21BA00F35CA471C5C10CDD;
IL2CPP_EXTERN_C String_t* _stringLiteral8DF4A5CC048B66E56D0FA93A89A2183EED8E18AC;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral9390A33E5B008C3FD02173CBAB6FC47ADBF822E9;
IL2CPP_EXTERN_C String_t* _stringLiteral9973A7DFA585FFB7C3C3EDD14DE4E47B10BCB4D8;
IL2CPP_EXTERN_C String_t* _stringLiteralAC08F80B02178233785A13F085F53E618793F9C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC25DF7C0E5D246FB981257D11F3802F36E00BB;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5F11DF64FA77051719845F79A628A6F332269B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAABD36D150F5E976A6D9F75BBEB80944551CFF2;
IL2CPP_EXTERN_C String_t* _stringLiteralCF86584F08FE8B1ACA6B9E8BEB5E4B8E5F7EE088;
IL2CPP_EXTERN_C String_t* _stringLiteralD3002A071D316CA22CE041B68B1C05BBD27C9911;
IL2CPP_EXTERN_C String_t* _stringLiteralD32BB0D7803CFE652F6D46F4EF92233E22A9EA65;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEDB2230D1C41F4EF9EC569EF918EB2426E50222D;
IL2CPP_EXTERN_C String_t* _stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3;
IL2CPP_EXTERN_C const RuntimeMethod* BackController_ShowBPanel_m6CCEC26EBCAF356DE26EA829087FEFFA81D6EFB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F_mF0D6FF30D56C3AFB55C6A5ACAEAF56C41F737148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HotsixController_ShowHPanel_m6D7A00512CC1C14F2785349AE61864593A498E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonsterController_ShowMPanel_m080D8529608B5EA1722E58F4C47545B396A03232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBase_1__ctor_m15DAAA832F15C4497F6DA6A493DF8091AF0652FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBase_1__ctor_m658270AAF606AD85DAB020F2251EEE6AC8C439ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBase_1__ctor_mEBEE0579EDDAAD6CB4AE50B7F24D621BD85EA269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBase_1_get_Instance_mB33341E0E9BF7EC5E683C24298637F4548FA66FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCLoadSceneU3Ed__4_System_Collections_IEnumerator_Reset_mCFD87FF19FF6F8CECCC8353173B10BFB04D32B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeEconomicAbilityU3Ed__34_System_Collections_IEnumerator_Reset_mE523CCA957810957969AD0F584539A2285D4DDEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeLearningAbilityU3Ed__31_System_Collections_IEnumerator_Reset_m333F6E1BF61913DAD5C3B23B2090E949D35DE10C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeSociabilityU3Ed__28_System_Collections_IEnumerator_Reset_mA393048EA4BE167909BB1ED2911F00FD0C44A546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeSpecAbilityU3Ed__37_System_Collections_IEnumerator_Reset_m520B8FC188E2F2E7388F12CE823B18C966E6EFD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitScheduleSelectU3Ed__12_System_Collections_IEnumerator_Reset_m4E28F79ECF4B35810961C40A05174C5A32CD1804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VitaController_ShowVPanel_m4182D4E046A4E737203B48CC934F29DB00F9E1C2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;
struct TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public RuntimeObject
{
	// System.Single Player::<Sociability>k__BackingField
	float ___U3CSociabilityU3Ek__BackingField_0;
	// System.Single Player::<LearningAbility>k__BackingField
	float ___U3CLearningAbilityU3Ek__BackingField_1;
	// System.Single Player::<EconomicAbility>k__BackingField
	float ___U3CEconomicAbilityU3Ek__BackingField_2;
	// System.Single Player::<SpecAbility>k__BackingField
	float ___U3CSpecAbilityU3Ek__BackingField_3;
	// System.String Player::<Nickname>k__BackingField
	String_t* ___U3CNicknameU3Ek__BackingField_4;
	// System.Boolean Player::<Gender>k__BackingField
	bool ___U3CGenderU3Ek__BackingField_5;
};

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

// TimelineCell
struct TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738  : public RuntimeObject
{
	// System.Boolean TimelineCell::<isAllocated>k__BackingField
	bool ___U3CisAllocatedU3Ek__BackingField_0;
	// EScheduleType TimelineCell::<scheduleType>k__BackingField
	int32_t ___U3CscheduleTypeU3Ek__BackingField_1;
	// System.Single TimelineCell::<tiredness>k__BackingField
	float ___U3CtirednessU3Ek__BackingField_2;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// EveryWhere.Manger.LoadManager/<CLoadScene>d__4
struct U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E  : public RuntimeObject
{
	// System.Int32 EveryWhere.Manger.LoadManager/<CLoadScene>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EveryWhere.Manger.LoadManager/<CLoadScene>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EveryWhere.Manger.LoadManager EveryWhere.Manger.LoadManager/<CLoadScene>d__4::<>4__this
	LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation EveryWhere.Manger.LoadManager/<CLoadScene>d__4::<op>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CopU3E5__2_3;
	// System.Single EveryWhere.Manger.LoadManager/<CLoadScene>d__4::<timer>5__3
	float ___U3CtimerU3E5__3_4;
};

// SelectTimelineCell/<WaitScheduleSelect>d__12
struct U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613  : public RuntimeObject
{
	// System.Int32 SelectTimelineCell/<WaitScheduleSelect>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SelectTimelineCell/<WaitScheduleSelect>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SelectTimelineCell SelectTimelineCell/<WaitScheduleSelect>d__12::<>4__this
	SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* ___U3CU3E4__this_2;
	// UnityEngine.UI.Toggle[] SelectTimelineCell/<WaitScheduleSelect>d__12::<toggles>5__2
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___U3CtogglesU3E5__2_3;
};

// StatDistribute/<ChangeEconomicAbility>d__34
struct U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18  : public RuntimeObject
{
	// System.Int32 StatDistribute/<ChangeEconomicAbility>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StatDistribute/<ChangeEconomicAbility>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// StatDistribute StatDistribute/<ChangeEconomicAbility>d__34::<>4__this
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* ___U3CU3E4__this_2;
	// System.Single StatDistribute/<ChangeEconomicAbility>d__34::<timer>5__2
	float ___U3CtimerU3E5__2_3;
	// System.Single StatDistribute/<ChangeEconomicAbility>d__34::<destination>5__3
	float ___U3CdestinationU3E5__3_4;
};

// StatDistribute/<ChangeLearningAbility>d__31
struct U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38  : public RuntimeObject
{
	// System.Int32 StatDistribute/<ChangeLearningAbility>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StatDistribute/<ChangeLearningAbility>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// StatDistribute StatDistribute/<ChangeLearningAbility>d__31::<>4__this
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* ___U3CU3E4__this_2;
	// System.Single StatDistribute/<ChangeLearningAbility>d__31::<timer>5__2
	float ___U3CtimerU3E5__2_3;
	// System.Single StatDistribute/<ChangeLearningAbility>d__31::<destination>5__3
	float ___U3CdestinationU3E5__3_4;
};

// StatDistribute/<ChangeSociability>d__28
struct U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05  : public RuntimeObject
{
	// System.Int32 StatDistribute/<ChangeSociability>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StatDistribute/<ChangeSociability>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// StatDistribute StatDistribute/<ChangeSociability>d__28::<>4__this
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* ___U3CU3E4__this_2;
	// System.Single StatDistribute/<ChangeSociability>d__28::<timer>5__2
	float ___U3CtimerU3E5__2_3;
	// System.Single StatDistribute/<ChangeSociability>d__28::<destination>5__3
	float ___U3CdestinationU3E5__3_4;
};

// StatDistribute/<ChangeSpecAbility>d__37
struct U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7  : public RuntimeObject
{
	// System.Int32 StatDistribute/<ChangeSpecAbility>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StatDistribute/<ChangeSpecAbility>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// StatDistribute StatDistribute/<ChangeSpecAbility>d__37::<>4__this
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* ___U3CU3E4__this_2;
	// System.Single StatDistribute/<ChangeSpecAbility>d__37::<timer>5__2
	float ___U3CtimerU3E5__2_3;
	// System.Single StatDistribute/<ChangeSpecAbility>d__37::<destination>5__3
	float ___U3CdestinationU3E5__3_4;
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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Lecture
struct Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// EScheduleType Lecture::scheduleType
	int32_t ___scheduleType_4;
	// System.Boolean[] Lecture::days
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___days_5;
	// System.Boolean[] Lecture::times
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___times_6;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Stat
struct Stat_t347C80C1BA9D0F03E87EA478FF9E0234B28F8505  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 Stat::sociability
	int32_t ___sociability_4;
	// System.Int32 Stat::learningAbility
	int32_t ___learningAbility_5;
	// System.Int32 Stat::economicAbility
	int32_t ___economicAbility_6;
	// System.Int32 Stat::specAbility
	int32_t ___specAbility_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.GameManager>
struct SingletonMonoBase_1_tD108DDB198D8BAE568E4E110BBE0D7BE1722B89A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonMonoBase_1_tD108DDB198D8BAE568E4E110BBE0D7BE1722B89A_StaticFields
{
	// T EveryWhere.Base.SingletonMonoBase`1::instance
	GameManager_t1F29E5BC33A3307224E954F21E44292F002BFD52* ___instance_4;
};

// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.LoadManager>
struct SingletonMonoBase_1_t9306D10DD302447B308A475F76CC5E96F6B70196  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonMonoBase_1_t9306D10DD302447B308A475F76CC5E96F6B70196_StaticFields
{
	// T EveryWhere.Base.SingletonMonoBase`1::instance
	LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* ___instance_4;
};

// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.ScheduleManager>
struct SingletonMonoBase_1_t99DE7028036F8E8834A681CA79E6C6BF0E89805F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonMonoBase_1_t99DE7028036F8E8834A681CA79E6C6BF0E89805F_StaticFields
{
	// T EveryWhere.Base.SingletonMonoBase`1::instance
	ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* ___instance_4;
};

// EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.UIManager>
struct SingletonMonoBase_1_t26C94AAA0472861AF15EC1C8811ED72442005BCC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonMonoBase_1_t26C94AAA0472861AF15EC1C8811ED72442005BCC_StaticFields
{
	// T EveryWhere.Base.SingletonMonoBase`1::instance
	UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* ___instance_4;
};

// BackController
struct BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BackController::BackPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BackPanel_4;
	// UnityEngine.UI.Button BackController::Back
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Back_5;
};

// CameraResolution
struct CameraResolution_t34B94895C50F3AD7C0DC9CD85F29B90AA45AD212  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameEnd
struct GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GenderSwipe
struct GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI GenderSwipe::RChangetext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___RChangetext_4;
	// TMPro.TextMeshProUGUI GenderSwipe::LChangetext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___LChangetext_5;
	// TMPro.TextMeshProUGUI GenderSwipe::RMChangetext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___RMChangetext_6;
	// TMPro.TextMeshProUGUI GenderSwipe::LMChangetext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___LMChangetext_7;
	// TMPro.TextMeshProUGUI GenderSwipe::RHChangetext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___RHChangetext_8;
	// TMPro.TextMeshProUGUI GenderSwipe::LHChangetext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___LHChangetext_9;
};

// HotsixController
struct HotsixController_t7BC9D89A845B8FB07CE54EB116466A4964CFF335  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject HotsixController::HotsixPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HotsixPanel_4;
	// UnityEngine.UI.Button HotsixController::Hotsix
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Hotsix_5;
};

// MonsterController
struct MonsterController_t244780C765AF448D05CF38CCE482669DBDD516E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MonsterController::MonsterPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MonsterPanel_4;
	// UnityEngine.UI.Button MonsterController::Monster
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Monster_5;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D PlayerController::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_5;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// UnityEngine.SpriteRenderer PlayerController::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_7;
	// UnityEngine.Vector3 PlayerController::mousePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mousePos_8;
	// UnityEngine.Vector3 PlayerController::transPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___transPos_9;
	// UnityEngine.Vector3 PlayerController::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_10;
};

// QuitGame
struct QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ScheduleSelectWindow
struct ScheduleSelectWindow_tA04BA952EB827DEBEA7B86F9B242486FB519B51E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle ScheduleSelectWindow::toggle0
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle0_4;
	// UnityEngine.UI.Toggle ScheduleSelectWindow::toggle1
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle1_5;
	// UnityEngine.UI.Toggle ScheduleSelectWindow::toggle2
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle2_6;
	// UnityEngine.UI.Toggle ScheduleSelectWindow::toggle3
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle3_7;
	// UnityEngine.UI.Toggle ScheduleSelectWindow::toggle4
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle4_8;
	// UnityEngine.UI.Toggle ScheduleSelectWindow::toggle5
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle5_9;
};

// ScrollViewLectureContent
struct ScrollViewLectureContent_t30010B18D9AF27FA62AB34C4DAD09559580CD874  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SelectTimelineCell
struct SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SelectTimelineCell::scheduleSelectWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scheduleSelectWindow_4;
	// System.Int32 SelectTimelineCell::<DayNumber>k__BackingField
	int32_t ___U3CDayNumberU3Ek__BackingField_5;
	// System.Int32 SelectTimelineCell::<TimeNumber>k__BackingField
	int32_t ___U3CTimeNumberU3Ek__BackingField_6;
	// System.Single SelectTimelineCell::clickTime
	float ___clickTime_7;
	// System.Boolean SelectTimelineCell::isSelected
	bool ___isSelected_8;
};

// StatDistribute
struct StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text StatDistribute::statsText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___statsText_4;
	// TMPro.TMP_Text StatDistribute::sociabilityText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___sociabilityText_5;
	// TMPro.TMP_Text StatDistribute::learningAbilityText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___learningAbilityText_6;
	// TMPro.TMP_Text StatDistribute::economicAbilityText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___economicAbilityText_7;
	// TMPro.TMP_Text StatDistribute::specAbilityText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___specAbilityText_8;
	// UnityEngine.UI.Slider StatDistribute::sociabilitySlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sociabilitySlider_9;
	// UnityEngine.UI.Slider StatDistribute::learningAbilitySlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___learningAbilitySlider_10;
	// UnityEngine.UI.Slider StatDistribute::economicAbilitySlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___economicAbilitySlider_11;
	// UnityEngine.UI.Slider StatDistribute::specAbilitySlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___specAbilitySlider_12;
	// System.Single StatDistribute::<Sociability>k__BackingField
	float ___U3CSociabilityU3Ek__BackingField_13;
	// System.Single StatDistribute::<LearningAbility>k__BackingField
	float ___U3CLearningAbilityU3Ek__BackingField_14;
	// System.Single StatDistribute::<EconomicAbility>k__BackingField
	float ___U3CEconomicAbilityU3Ek__BackingField_15;
	// System.Single StatDistribute::<SpecAbility>k__BackingField
	float ___U3CSpecAbilityU3Ek__BackingField_16;
	// System.Int32 StatDistribute::stats
	int32_t ___stats_17;
};

// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VitaController
struct VitaController_t23097902CAAA8FF3B9E547240579EB31CF311E55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject VitaController::VitaPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___VitaPanel_4;
	// UnityEngine.UI.Button VitaController::Vita
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Vita_5;
};

// EveryWhere.Manger.FlipManager
struct FlipManager_tEC9A146F0654FA05AE865F73945CDC6A4511E61E  : public SingletonMonoBase_1_t9306D10DD302447B308A475F76CC5E96F6B70196
{
};

// EveryWhere.Manger.GameManager
struct GameManager_t1F29E5BC33A3307224E954F21E44292F002BFD52  : public SingletonMonoBase_1_tD108DDB198D8BAE568E4E110BBE0D7BE1722B89A
{
	// Player EveryWhere.Manger.GameManager::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_5;
	// TMPro.TMP_Text EveryWhere.Manger.GameManager::nickname
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___nickname_6;
	// UnityEngine.UI.Toggle EveryWhere.Manger.GameManager::genderMale
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___genderMale_7;
	// StatDistribute EveryWhere.Manger.GameManager::stat
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* ___stat_8;
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

// EveryWhere.Manger.LoadManager
struct LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB  : public SingletonMonoBase_1_t9306D10DD302447B308A475F76CC5E96F6B70196
{
	// UnityEngine.UI.Image EveryWhere.Manger.LoadManager::sliderBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___sliderBar_6;
};

struct LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_StaticFields
{
	// System.String EveryWhere.Manger.LoadManager::nextScene
	String_t* ___nextScene_5;
};

// EveryWhere.Manger.ScheduleManager
struct ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350  : public SingletonMonoBase_1_t99DE7028036F8E8834A681CA79E6C6BF0E89805F
{
	// UnityEngine.GameObject EveryWhere.Manger.ScheduleManager::scheduleSelectWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scheduleSelectWindow_5;
	// System.Int32 EveryWhere.Manger.ScheduleManager::MINIMUM_WEEK_SLEEP_TIMES
	int32_t ___MINIMUM_WEEK_SLEEP_TIMES_9;
	// System.Int32 EveryWhere.Manger.ScheduleManager::MAX_CREDIT
	int32_t ___MAX_CREDIT_10;
	// System.Int32 EveryWhere.Manger.ScheduleManager::MIN_CREDIT
	int32_t ___MIN_CREDIT_11;
	// System.Int32 EveryWhere.Manger.ScheduleManager::currentCredit
	int32_t ___currentCredit_12;
	// System.Single EveryWhere.Manger.ScheduleManager::tiredness
	float ___tiredness_13;
};

struct ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields
{
	// System.Int32 EveryWhere.Manger.ScheduleManager::MAX_WEEK_DAYS
	int32_t ___MAX_WEEK_DAYS_6;
	// System.Int32 EveryWhere.Manger.ScheduleManager::MAX_DAY_TIMES
	int32_t ___MAX_DAY_TIMES_7;
	// TimelineCell[,] EveryWhere.Manger.ScheduleManager::timeline
	TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* ___timeline_8;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// EveryWhere.Manger.UIManager
struct UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50  : public SingletonMonoBase_1_t26C94AAA0472861AF15EC1C8811ED72442005BCC
{
	// UnityEngine.Animator EveryWhere.Manger.UIManager::SideMenuAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___SideMenuAnimator_5;
	// UnityEngine.UI.Button EveryWhere.Manger.UIManager::sideMenuButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___sideMenuButton_6;
	// UnityEngine.GameObject EveryWhere.Manger.UIManager::timeline
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___timeline_7;
	// UnityEngine.GameObject[,] EveryWhere.Manger.UIManager::timelineUI
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ___timelineUI_8;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098  : public RuntimeArray
{
	ALIGN_FIELD (8) Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* m_Items[1];

	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TimelineCell[,]
struct TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D  : public RuntimeArray
{
	ALIGN_FIELD (8) TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* m_Items[1];

	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E  : public RuntimeArray
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
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T EveryWhere.Base.SingletonMonoBase`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBase_1_get_Instance_m43F1DF8F9468417383A9478A234777400C7F364F_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void EveryWhere.Base.SingletonMonoBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBase_1__ctor_mF7DA0C08BAAC795337872E8F69EE4ADC16AFAF01_gshared (SingletonMonoBase_1_tEFA0264445C46671E45EB1FD01432884B667C391* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void PlayerController::CalTargetPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CalTargetPos_mFC5759C658E7D4419DF07BD2FA500E7A825AEC07 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveToTarget_mE2D8A8F893BE78BF0F60560F04FA1F02C4DC2096 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Player::set_Nickname(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Nickname_m950E22FE429F539314D49236DB02E1EF4C6679E1_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Player::set_Gender(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Gender_mB155B863A4717CDFE7A4697905AEC26DD229A797_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Player::set_Sociability(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Sociability_m7860F54891CE6CB268091EB3E16A3ACA2C748725_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Player::set_LearningAbility(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_LearningAbility_m142E296E0857D3F97FA40B755995A4FE8169FF8A_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Player::set_EconomicAbility(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_EconomicAbility_m5577522206B3A6E2543AD8A74CA175E01B283503_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Player::set_SpecAbility(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_SpecAbility_m8908411EACC74856D153B55EDF7BEB93439D15B7_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SelectTimelineCell::WaitScheduleSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectTimelineCell_WaitScheduleSelect_m76BBEA4869BF3CF54878B282B75ABE8BF114CE04 (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void SelectTimelineCell/<WaitScheduleSelect>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitScheduleSelectU3Ed__12__ctor_mBD8846E80F87B8709ABD8E648847878CEAA2024B (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.ScheduleManager>::get_Instance()
inline ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE (const RuntimeMethod* method)
{
	return ((  ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* (*) (const RuntimeMethod*))SingletonMonoBase_1_get_Instance_m43F1DF8F9468417383A9478A234777400C7F364F_gshared)(method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Toggle>()
inline ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Int32 SelectTimelineCell::get_DayNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectTimelineCell_get_DayNumber_mF5BA819740C68380A56A64EA5E00956DE692FE56_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) ;
// System.Int32 SelectTimelineCell::get_TimeNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectTimelineCell_get_TimeNumber_m68836D8BE71B756C3EB84759D5D3E0F44933925B_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) ;
// TimelineCell EveryWhere.Manger.ScheduleManager::GetTimelineCell(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* ScheduleManager_GetTimelineCell_m82B03FA7A4C20FA915FA489BF8047D9B415527AC (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, int32_t ___day0, int32_t ___time1, const RuntimeMethod* method) ;
// System.Void TimelineCell::AllocateCell(System.Boolean,EScheduleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell_AllocateCell_m7E1D84D31247539BD4B1D5F5BABF63EFBCEE9759 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, bool ___isAllocated0, int32_t ___scheduleType1, const RuntimeMethod* method) ;
// T EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.UIManager>::get_Instance()
inline UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* SingletonMonoBase_1_get_Instance_mB33341E0E9BF7EC5E683C24298637F4548FA66FC (const RuntimeMethod* method)
{
	return ((  UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* (*) (const RuntimeMethod*))SingletonMonoBase_1_get_Instance_m43F1DF8F9468417383A9478A234777400C7F364F_gshared)(method);
}
// System.Void EveryWhere.Manger.UIManager::UpdateTimeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateTimeline_m6445A1D5C21BE1D21D17F15F305D3A93A644FB6B (UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void TimelineCell::set_isAllocated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineCell_set_isAllocated_m41CDA2C32C2748C316F081FC71F38C41FF954A0B_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TimelineCell::set_scheduleType(EScheduleType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineCell_set_scheduleType_mAFCEF23FED2F40627DC3D99F22CEF43788C05BF5_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TimelineCell::set_tiredness(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void EveryWhere.Manger.LoadManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadManager_LoadScene_mDAE947C6CBEC9AFE2F643ACDBFB8AF95AAF91168 (String_t* ___otherScene0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.Camera::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single StatDistribute::get_Sociability()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute::set_Sociability(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_Sociability_mA663ECC1F58B57D20C7117CEF481672CC117E95F_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator StatDistribute::ChangeSociability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeSociability_m662B3CCAEE76C2F6B956994346946073169C0FAB (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute/<ChangeSociability>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSociabilityU3Ed__28__ctor_m8A7B1E059920D52EEF3CC7A6E8AF9B49078900BD (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single StatDistribute::get_LearningAbility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute::set_LearningAbility(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_LearningAbility_mC47E4A874A6EB39601BF8E36D3CA3035CD223E38_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator StatDistribute::ChangeLearningAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeLearningAbility_m28C6BF5FF5E2ABFE173D936E39B738496D0A7D5D (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute/<ChangeLearningAbility>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeLearningAbilityU3Ed__31__ctor_mC01E854EF7C9AB34612D0B977F81E1E0DA283178 (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single StatDistribute::get_EconomicAbility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute::set_EconomicAbility(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_EconomicAbility_m5312F7B9BA316EAE1419E7F266DF5EAF352EBC4F_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator StatDistribute::ChangeEconomicAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeEconomicAbility_mA1D32C0B031AF1DCCF849AFC14116634545BC92A (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute/<ChangeEconomicAbility>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeEconomicAbilityU3Ed__34__ctor_m942D8E2BFE8CCF3BB3C2F27E947744279D98968D (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single StatDistribute::get_SpecAbility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute::set_SpecAbility(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_SpecAbility_mF2964848D7514F0A0D15882DD0F8EB02139188F8_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator StatDistribute::ChangeSpecAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeSpecAbility_m600199FAD19261074A2B4E583748824FB5BBD992 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) ;
// System.Void StatDistribute/<ChangeSpecAbility>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSpecAbilityU3Ed__37__ctor_m649805C6E3CA8E12329F8C0B4D58B58122CFEFB1 (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Player::.ctor(System.String,System.Boolean,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m8421A36B5E4C466901E3ABE67E7FF47DCF58131C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___nickname0, bool ___gender1, float ___Sociability2, float ___LearningAbility3, float ___EconomicAbility4, float ___SpecAbility5, const RuntimeMethod* method) ;
// System.Void EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.GameManager>::.ctor()
inline void SingletonMonoBase_1__ctor_m658270AAF606AD85DAB020F2251EEE6AC8C439ED (SingletonMonoBase_1_tD108DDB198D8BAE568E4E110BBE0D7BE1722B89A* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBase_1_tD108DDB198D8BAE568E4E110BBE0D7BE1722B89A*, const RuntimeMethod*))SingletonMonoBase_1__ctor_mF7DA0C08BAAC795337872E8F69EE4ADC16AFAF01_gshared)(__this, method);
}
// System.Collections.IEnumerator EveryWhere.Manger.LoadManager::CLoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadManager_CLoadScene_m5F824FCCB3DFEDCFD4E2D1FC98BFF8D27075E181 (LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* __this, const RuntimeMethod* method) ;
// System.Void EveryWhere.Manger.LoadManager/<CLoadScene>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCLoadSceneU3Ed__4__ctor_mC382EFD4BE817B88DBE46CC4BD9A1C7C4DB144E0 (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.LoadManager>::.ctor()
inline void SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5 (SingletonMonoBase_1_t9306D10DD302447B308A475F76CC5E96F6B70196* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBase_1_t9306D10DD302447B308A475F76CC5E96F6B70196*, const RuntimeMethod*))SingletonMonoBase_1__ctor_mF7DA0C08BAAC795337872E8F69EE4ADC16AFAF01_gshared)(__this, method);
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void EveryWhere.Manger.ScheduleManager::InitializeTimeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleManager_InitializeTimeline_m23184F1A837AC1BC20ABD7BC18179073E123CA8A (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, const RuntimeMethod* method) ;
// System.Boolean TimelineCell::get_isAllocated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineCell_get_isAllocated_m4EF9CA8CAD2290E1A68E6508281DDB6FBBE5ADA4_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) ;
// System.Void TimelineCell::DeallocateCell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell_DeallocateCell_mA0BB5DCDAF97B721C95026BB81DFB8A0982E71D8 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) ;
// System.Void TimelineCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell__ctor_mC5DE4E16030D7A0FBF911D3745788A693E53FCF1 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) ;
// System.Void EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.ScheduleManager>::.ctor()
inline void SingletonMonoBase_1__ctor_mEBEE0579EDDAAD6CB4AE50B7F24D621BD85EA269 (SingletonMonoBase_1_t99DE7028036F8E8834A681CA79E6C6BF0E89805F* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBase_1_t99DE7028036F8E8834A681CA79E6C6BF0E89805F*, const RuntimeMethod*))SingletonMonoBase_1__ctor_mF7DA0C08BAAC795337872E8F69EE4ADC16AFAF01_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void EveryWhere.Manger.UIManager::InitializeTimeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_InitializeTimeline_m125CBD4DDE68425664004F9F1E58F0EC99054E55 (UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// EScheduleType TimelineCell::get_scheduleType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineCell_get_scheduleType_m7715BE1EA17C7649C07492746A8E52C98B246368_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SelectTimelineCell>()
inline SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* GameObject_GetComponent_TisSelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F_mF0D6FF30D56C3AFB55C6A5ACAEAF56C41F737148 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SelectTimelineCell::set_DayNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectTimelineCell_set_DayNumber_mE21998DF19B79E07ACC9ADD17576C0C36181E9E0_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SelectTimelineCell::set_TimeNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectTimelineCell_set_TimeNumber_mCA7C6F283D576E299BB3F6542780CBCB20B0D6B5_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void EveryWhere.Base.SingletonMonoBase`1<EveryWhere.Manger.UIManager>::.ctor()
inline void SingletonMonoBase_1__ctor_m15DAAA832F15C4497F6DA6A493DF8091AF0652FB (SingletonMonoBase_1_t26C94AAA0472861AF15EC1C8811ED72442005BCC* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBase_1_t26C94AAA0472861AF15EC1C8811ED72442005BCC*, const RuntimeMethod*))SingletonMonoBase_1__ctor_mF7DA0C08BAAC795337872E8F69EE4ADC16AFAF01_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>(); //???????? ??
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_0);
		// rigid = GetComponent<Rigidbody2D>(); //???? ????
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigid_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_5), (void*)L_1);
		// spriteRenderer = GetComponent<SpriteRenderer>(); //?????????
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButton(0)) //GetMouseButton(0)
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// CalTargetPos();
		PlayerController_CalTargetPos_mFC5759C658E7D4419DF07BD2FA500E7A825AEC07(__this, NULL);
		// MoveToTarget();
		PlayerController_MoveToTarget_mE2D8A8F893BE78BF0F60560F04FA1F02C4DC2096(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void PlayerController::CalTargetPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CalTargetPos_mFC5759C658E7D4419DF07BD2FA500E7A825AEC07 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// mousePos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___mousePos_8 = L_0;
		// transPos = Camera.main.ScreenToWorldPoint(mousePos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___mousePos_8;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		__this->___transPos_9 = L_3;
		// targetPos = new Vector3(transPos.x, transPos.y, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___transPos_9);
		float L_5 = L_4->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___transPos_9);
		float L_7 = L_6->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_5, L_7, (0.0f), /*hidden argument*/NULL);
		__this->___targetPos_10 = L_8;
		// }
		return;
	}
}
// System.Void PlayerController::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveToTarget_mE2D8A8F893BE78BF0F60560F04FA1F02C4DC2096 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCC25DF7C0E5D246FB981257D11F3802F36E00BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, targetPos, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___targetPos_10;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// if (transPos.x != 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___transPos_9);
		float L_8 = L_7->___x_2;
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_00c8;
		}
	}
	{
		// if (transPos.x > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___transPos_9);
		float L_10 = L_9->___x_2;
		if ((!(((float)L_10) > ((float)(0.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		// animator.SetInteger("WalkDirection", 3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___animator_6;
		NullCheck(L_11);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_11, _stringLiteralBCC25DF7C0E5D246FB981257D11F3802F36E00BB, 3, NULL);
		// transform.localScale = new Vector3(0.35f, 0.33f, 0);   // Right flip
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.349999994f), (0.330000013f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		goto IL_00c8;
	}

IL_0086:
	{
		// else if (transPos.x < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___transPos_9);
		float L_15 = L_14->___x_2;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00c8;
		}
	}
	{
		// animator.SetInteger("WalkDirection", 3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___animator_6;
		NullCheck(L_16);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_16, _stringLiteralBCC25DF7C0E5D246FB981257D11F3802F36E00BB, 3, NULL);
		// transform.localScale = new Vector3(-0.35f, 0.33f, 0);   // Left flip
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (-0.349999994f), (0.330000013f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_17, L_18, NULL);
	}

IL_00c8:
	{
		// if (transPos.y != 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___transPos_9);
		float L_20 = L_19->___y_3;
		if ((((float)L_20) == ((float)(0.0f))))
		{
			goto IL_0122;
		}
	}
	{
		// if (transPos.y > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___transPos_9);
		float L_22 = L_21->___y_3;
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_00fe;
		}
	}
	{
		// animator.SetInteger("WalkDirection", 4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_6;
		NullCheck(L_23);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_23, _stringLiteralBCC25DF7C0E5D246FB981257D11F3802F36E00BB, 4, NULL);
		return;
	}

IL_00fe:
	{
		// else if (transPos.y < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___transPos_9);
		float L_25 = L_24->___y_3;
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		// animator.SetInteger("WalkDirection", 1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___animator_6;
		NullCheck(L_26);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_26, _stringLiteralBCC25DF7C0E5D246FB981257D11F3802F36E00BB, 1, NULL);
		return;
	}

IL_0122:
	{
		// else animator.SetInteger("WalkDirection", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_6;
		NullCheck(L_27);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_27, _stringLiteralBCC25DF7C0E5D246FB981257D11F3802F36E00BB, 0, NULL);
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float speed = 10f;
		__this->___speed_4 = (10.0f);
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
// System.Void GameEnd::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnd_LoadScene_m7C2C6B561ACCBE0F302287D219059D07FEA71340 (GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0* __this, String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(otherScene);
		String_t* L_0 = ___otherScene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameEnd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnd__ctor_m613F3208BFEBDAD86589CF3B83C0F32BDB991A75 (GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0* __this, const RuntimeMethod* method) 
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
// System.Void GenderSwipe::RChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenderSwipe_RChangeText_mB298A324C0C8E028F9575E0769886E41FDAAA469 (GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD32BB0D7803CFE652F6D46F4EF92233E22A9EA65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RChangetext.text = "??";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___RChangetext_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralD32BB0D7803CFE652F6D46F4EF92233E22A9EA65);
		// }
		return;
	}
}
// System.Void GenderSwipe::LChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenderSwipe_LChangeText_mA31200A3E9DAAB303D165B60071652C853A347D2 (GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD758BB7CBC1063322EA116819A8D428EA112AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LChangetext.text = "??";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___LChangetext_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral5BD758BB7CBC1063322EA116819A8D428EA112AA);
		// }
		return;
	}
}
// System.Void GenderSwipe::RMChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenderSwipe_RMChangeText_m98E7902A2EAF6FAB0CF93AE8B5383C59D85E274A (GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2780E4EB1B1050EFBFEFAE21270FECF17B3CF6D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RMChangetext.text = "??";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___RMChangetext_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral2780E4EB1B1050EFBFEFAE21270FECF17B3CF6D0);
		// }
		return;
	}
}
// System.Void GenderSwipe::LMChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenderSwipe_LMChangeText_mBAC48670130D88BFB47F417AAF8A9B2025CF0D28 (GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DF4A5CC048B66E56D0FA93A89A2183EED8E18AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LMChangetext.text = "??";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___LMChangetext_7;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral8DF4A5CC048B66E56D0FA93A89A2183EED8E18AC);
		// }
		return;
	}
}
// System.Void GenderSwipe::RHChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenderSwipe_RHChangeText_mD6F775EEF3C4D2844E7194AE65BB6DCD005BBAD7 (GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5F11DF64FA77051719845F79A628A6F332269B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RHChangetext.text = "?????";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___RHChangetext_8;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralBE5F11DF64FA77051719845F79A628A6F332269B);
		// }
		return;
	}
}
// System.Void GenderSwipe::LHChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenderSwipe_LHChangeText_m6557ECEC02DDF3647DBABF1C4F1A704885BAB747 (GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF86584F08FE8B1ACA6B9E8BEB5E4B8E5F7EE088);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LHChangetext.text = "????";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___LHChangetext_9;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralCF86584F08FE8B1ACA6B9E8BEB5E4B8E5F7EE088);
		// }
		return;
	}
}
// System.Void GenderSwipe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenderSwipe__ctor_m56258B51C34537AAB14B40A77B4544BC1D170735 (GenderSwipe_t86DD20DAE47A516EDCCB2D9733B7987E49C59723* __this, const RuntimeMethod* method) 
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
// System.Single Player::get_Sociability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_Sociability_mE67E2B71CED24512B6CD99CE53F5EE3C8C68A021 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float Sociability { get; private set; } = 0.0f;
		float L_0 = __this->___U3CSociabilityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Player::set_Sociability(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Sociability_m7860F54891CE6CB268091EB3E16A3ACA2C748725 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Sociability { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CSociabilityU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Single Player::get_LearningAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_LearningAbility_mACAFF30C43C73D864B7582B3A941B676DC0E9FF4 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float LearningAbility { get; private set; } = 0.0f;
		float L_0 = __this->___U3CLearningAbilityU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Player::set_LearningAbility(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_LearningAbility_m142E296E0857D3F97FA40B755995A4FE8169FF8A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float LearningAbility { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CLearningAbilityU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Player::get_EconomicAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_EconomicAbility_m7DE5693DC2B018D6A49E41DEF210507A7E4F77AB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float EconomicAbility { get; private set; } = 0.0f;
		float L_0 = __this->___U3CEconomicAbilityU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Player::set_EconomicAbility(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_EconomicAbility_m5577522206B3A6E2543AD8A74CA175E01B283503 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EconomicAbility { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CEconomicAbilityU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single Player::get_SpecAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_SpecAbility_m20FD0C9E6EFDF79D3BDFE2B0C088CCB97A5AAD17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float SpecAbility { get; private set; } = 0.0f;
		float L_0 = __this->___U3CSpecAbilityU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Player::set_SpecAbility(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_SpecAbility_m8908411EACC74856D153B55EDF7BEB93439D15B7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SpecAbility { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CSpecAbilityU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String Player::get_Nickname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_Nickname_mF5B4EE1BD0DB5740FBBA4513343A38C2AECFD9A4 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public string Nickname { get; private set; } = "NULL";
		String_t* L_0 = __this->___U3CNicknameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Player::set_Nickname(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Nickname_m950E22FE429F539314D49236DB02E1EF4C6679E1 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Nickname { get; private set; } = "NULL";
		String_t* L_0 = ___value0;
		__this->___U3CNicknameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNicknameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Player::get_Gender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_get_Gender_m112CE0A0052B14CA12E459B284C3BA69AF0AF776 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// private bool Gender { get; set; }
		bool L_0 = __this->___U3CGenderU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Player::set_Gender(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Gender_mB155B863A4717CDFE7A4697905AEC26DD229A797 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private bool Gender { get; set; }
		bool L_0 = ___value0;
		__this->___U3CGenderU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Player::.ctor(System.String,System.Boolean,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m8421A36B5E4C466901E3ABE67E7FF47DCF58131C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___nickname0, bool ___gender1, float ___Sociability2, float ___LearningAbility3, float ___EconomicAbility4, float ___SpecAbility5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Nickname { get; private set; } = "NULL";
		__this->___U3CNicknameU3Ek__BackingField_4 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNicknameU3Ek__BackingField_4), (void*)_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		// public Player(string nickname, bool gender, float Sociability, float LearningAbility, float EconomicAbility, float SpecAbility)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Nickname = nickname;
		String_t* L_0 = ___nickname0;
		Player_set_Nickname_m950E22FE429F539314D49236DB02E1EF4C6679E1_inline(__this, L_0, NULL);
		// Gender = gender;
		bool L_1 = ___gender1;
		Player_set_Gender_mB155B863A4717CDFE7A4697905AEC26DD229A797_inline(__this, L_1, NULL);
		// this.Sociability = Sociability;
		float L_2 = ___Sociability2;
		Player_set_Sociability_m7860F54891CE6CB268091EB3E16A3ACA2C748725_inline(__this, L_2, NULL);
		// this.LearningAbility = LearningAbility;
		float L_3 = ___LearningAbility3;
		Player_set_LearningAbility_m142E296E0857D3F97FA40B755995A4FE8169FF8A_inline(__this, L_3, NULL);
		// this.EconomicAbility = EconomicAbility;
		float L_4 = ___EconomicAbility4;
		Player_set_EconomicAbility_m5577522206B3A6E2543AD8A74CA175E01B283503_inline(__this, L_4, NULL);
		// this.SpecAbility = SpecAbility;
		float L_5 = ___SpecAbility5;
		Player_set_SpecAbility_m8908411EACC74856D153B55EDF7BEB93439D15B7_inline(__this, L_5, NULL);
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
// System.Void QuitGame::GameQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGame_GameQuit_m4B79F9E4740E5A38AF7698D363756C37D211C2D5 (QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void QuitGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGame__ctor_m33EF586CADC312B694613ABE4EC72575701B4CE9 (QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD* __this, const RuntimeMethod* method) 
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
// System.Int32 SelectTimelineCell::get_DayNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SelectTimelineCell_get_DayNumber_mF5BA819740C68380A56A64EA5E00956DE692FE56 (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) 
{
	{
		// public int DayNumber { get; set; }
		int32_t L_0 = __this->___U3CDayNumberU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SelectTimelineCell::set_DayNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectTimelineCell_set_DayNumber_mE21998DF19B79E07ACC9ADD17576C0C36181E9E0 (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int DayNumber { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CDayNumberU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Int32 SelectTimelineCell::get_TimeNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SelectTimelineCell_get_TimeNumber_m68836D8BE71B756C3EB84759D5D3E0F44933925B (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) 
{
	{
		// public int TimeNumber { get; set; }
		int32_t L_0 = __this->___U3CTimeNumberU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SelectTimelineCell::set_TimeNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectTimelineCell_set_TimeNumber_mCA7C6F283D576E299BB3F6542780CBCB20B0D6B5 (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TimeNumber { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTimeNumberU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void SelectTimelineCell::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectTimelineCell_OnPointerClick_m41E932440C6F8303B1955460409F2C6416949A09 (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDB2230D1C41F4EF9EC569EF918EB2426E50222D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Time.time - clickTime) < 0.3f)
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___clickTime_7;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) < ((float)(0.300000012f)))))
		{
			goto IL_0042;
		}
	}
	{
		// scheduleSelectWindow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___scheduleSelectWindow_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// StartCoroutine(WaitScheduleSelect());
		RuntimeObject* L_3;
		L_3 = SelectTimelineCell_WaitScheduleSelect_m76BBEA4869BF3CF54878B282B75ABE8BF114CE04(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// Debug.Log("double clicked");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEDB2230D1C41F4EF9EC569EF918EB2426E50222D, NULL);
		// clickTime = 0.0f;
		__this->___clickTime_7 = (0.0f);
		return;
	}

IL_0042:
	{
		// clickTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___clickTime_7 = L_5;
		// }
		return;
	}
}
// System.Collections.IEnumerator SelectTimelineCell::WaitScheduleSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectTimelineCell_WaitScheduleSelect_m76BBEA4869BF3CF54878B282B75ABE8BF114CE04 (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* L_0 = (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613*)il2cpp_codegen_object_new(U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitScheduleSelectU3Ed__12__ctor_mBD8846E80F87B8709ABD8E648847878CEAA2024B(L_0, 0, NULL);
		U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SelectTimelineCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectTimelineCell__ctor_m0E9AE0F8B7B09462447212FCCB41E7C4F83B2421 (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) 
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
// System.Void SelectTimelineCell/<WaitScheduleSelect>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitScheduleSelectU3Ed__12__ctor_mBD8846E80F87B8709ABD8E648847878CEAA2024B (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SelectTimelineCell/<WaitScheduleSelect>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitScheduleSelectU3Ed__12_System_IDisposable_Dispose_mEAD5BB0CD1A46843BD009BEF94CF7A3C1A109FE8 (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SelectTimelineCell/<WaitScheduleSelect>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitScheduleSelectU3Ed__12_MoveNext_mA2ECE29A4275F94A8C190CE4672BEB906D186525 (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1_get_Instance_mB33341E0E9BF7EC5E683C24298637F4548FA66FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0090;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Toggle[] toggles = ScheduleManager.Instance.scheduleSelectWindow.GetComponentsInChildren<Toggle>();
		ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* L_4;
		L_4 = SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE(SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___scheduleSelectWindow_5;
		NullCheck(L_5);
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_6;
		L_6 = GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA(L_5, GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var);
		__this->___U3CtogglesU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtogglesU3E5__2_3), (void*)L_6);
		goto IL_0097;
	}

IL_0035:
	{
		// for (int i = 0; i < (int)EScheduleType.Length - 2; i++) // ?????? ?? None, Length ????
		V_2 = 0;
		goto IL_007c;
	}

IL_0039:
	{
		// if (toggles[i].isOn)
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_7 = __this->___U3CtogglesU3E5__2_3;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11;
		L_11 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		// ScheduleManager.Instance.GetTimelineCell(DayNumber, TimeNumber).AllocateCell(true, (EScheduleType)(i+1));
		ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* L_12;
		L_12 = SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE(SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE_RuntimeMethod_var);
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SelectTimelineCell_get_DayNumber_mF5BA819740C68380A56A64EA5E00956DE692FE56_inline(L_13, NULL);
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = SelectTimelineCell_get_TimeNumber_m68836D8BE71B756C3EB84759D5D3E0F44933925B_inline(L_15, NULL);
		NullCheck(L_12);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_17;
		L_17 = ScheduleManager_GetTimelineCell_m82B03FA7A4C20FA915FA489BF8047D9B415527AC(L_12, L_14, L_16, NULL);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		TimelineCell_AllocateCell_m7E1D84D31247539BD4B1D5F5BABF63EFBCEE9759(L_17, (bool)1, ((int32_t)il2cpp_codegen_add(L_18, 1)), NULL);
		// UIManager.Instance.UpdateTimeline();
		UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* L_19;
		L_19 = SingletonMonoBase_1_get_Instance_mB33341E0E9BF7EC5E683C24298637F4548FA66FC(SingletonMonoBase_1_get_Instance_mB33341E0E9BF7EC5E683C24298637F4548FA66FC_RuntimeMethod_var);
		NullCheck(L_19);
		UIManager_UpdateTimeline_m6445A1D5C21BE1D21D17F15F305D3A93A644FB6B(L_19, NULL);
		// isSelected = true;
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_20 = V_1;
		NullCheck(L_20);
		L_20->___isSelected_8 = (bool)1;
	}

IL_0078:
	{
		// for (int i = 0; i < (int)EScheduleType.Length - 2; i++) // ?????? ?? None, Length ????
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < (int)EScheduleType.Length - 2; i++) // ?????? ?? None, Length ????
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) < ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0097:
	{
		// while (isSelected == false)
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = L_23->___isSelected_8;
		if (!L_24)
		{
			goto IL_0035;
		}
	}
	{
		// isSelected = false;
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_25 = V_1;
		NullCheck(L_25);
		L_25->___isSelected_8 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object SelectTimelineCell/<WaitScheduleSelect>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitScheduleSelectU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4A6AF0F299B65F93032E21088A31DC9887CD17A3 (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SelectTimelineCell/<WaitScheduleSelect>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitScheduleSelectU3Ed__12_System_Collections_IEnumerator_Reset_m4E28F79ECF4B35810961C40A05174C5A32CD1804 (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitScheduleSelectU3Ed__12_System_Collections_IEnumerator_Reset_m4E28F79ECF4B35810961C40A05174C5A32CD1804_RuntimeMethod_var)));
	}
}
// System.Object SelectTimelineCell/<WaitScheduleSelect>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitScheduleSelectU3Ed__12_System_Collections_IEnumerator_get_Current_m489F71451AA6A27EE9F3610F2FA30229BBD248A5 (U3CWaitScheduleSelectU3Ed__12_t00F1E592358E2C0C4AC6AF771526198ABD3C7613* __this, const RuntimeMethod* method) 
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
// System.Boolean TimelineCell::get_isAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimelineCell_get_isAllocated_m4EF9CA8CAD2290E1A68E6508281DDB6FBBE5ADA4 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) 
{
	{
		// public bool isAllocated { get; private set; }
		bool L_0 = __this->___U3CisAllocatedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TimelineCell::set_isAllocated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell_set_isAllocated_m41CDA2C32C2748C316F081FC71F38C41FF954A0B (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isAllocated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisAllocatedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// EScheduleType TimelineCell::get_scheduleType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineCell_get_scheduleType_m7715BE1EA17C7649C07492746A8E52C98B246368 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) 
{
	{
		// public EScheduleType scheduleType { get; private set; }
		int32_t L_0 = __this->___U3CscheduleTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TimelineCell::set_scheduleType(EScheduleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell_set_scheduleType_mAFCEF23FED2F40627DC3D99F22CEF43788C05BF5 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public EScheduleType scheduleType { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CscheduleTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single TimelineCell::get_tiredness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimelineCell_get_tiredness_m89148002E9437541F761553850B85F304A34B08A (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) 
{
	{
		// public float tiredness { get; private set; }
		float L_0 = __this->___U3CtirednessU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TimelineCell::set_tiredness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float tiredness { get; private set; }
		float L_0 = ___value0;
		__this->___U3CtirednessU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void TimelineCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell__ctor_mC5DE4E16030D7A0FBF911D3745788A693E53FCF1 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) 
{
	{
		// public TimelineCell()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// isAllocated = false;
		TimelineCell_set_isAllocated_m41CDA2C32C2748C316F081FC71F38C41FF954A0B_inline(__this, (bool)0, NULL);
		// scheduleType = EScheduleType.None;
		TimelineCell_set_scheduleType_mAFCEF23FED2F40627DC3D99F22CEF43788C05BF5_inline(__this, 0, NULL);
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void TimelineCell::AllocateCell(System.Boolean,EScheduleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell_AllocateCell_m7E1D84D31247539BD4B1D5F5BABF63EFBCEE9759 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, bool ___isAllocated0, int32_t ___scheduleType1, const RuntimeMethod* method) 
{
	{
		// this.isAllocated = isAllocated;
		bool L_0 = ___isAllocated0;
		TimelineCell_set_isAllocated_m41CDA2C32C2748C316F081FC71F38C41FF954A0B_inline(__this, L_0, NULL);
		// this.scheduleType = scheduleType;
		int32_t L_1 = ___scheduleType1;
		TimelineCell_set_scheduleType_mAFCEF23FED2F40627DC3D99F22CEF43788C05BF5_inline(__this, L_1, NULL);
		int32_t L_2 = ___scheduleType1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0059;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_0071;
			}
			case 6:
			{
				goto IL_007d;
			}
			case 7:
			{
				goto IL_0089;
			}
		}
	}
	{
		return;
	}

IL_0035:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// break;
		return;
	}

IL_0041:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// break;
		return;
	}

IL_004d:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// break;
		return;
	}

IL_0059:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// break;
		return;
	}

IL_0065:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// break;
		return;
	}

IL_0071:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// break;
		return;
	}

IL_007d:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// break;
		return;
	}

IL_0089:
	{
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void TimelineCell::DeallocateCell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineCell_DeallocateCell_mA0BB5DCDAF97B721C95026BB81DFB8A0982E71D8 (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) 
{
	{
		// isAllocated = false;
		TimelineCell_set_isAllocated_m41CDA2C32C2748C316F081FC71F38C41FF954A0B_inline(__this, (bool)0, NULL);
		// scheduleType = EScheduleType.None;
		TimelineCell_set_scheduleType_mAFCEF23FED2F40627DC3D99F22CEF43788C05BF5_inline(__this, 0, NULL);
		// tiredness = 0;
		TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline(__this, (0.0f), NULL);
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
// System.Void Lecture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lecture__ctor_m9D91025456A737A585A9601EAC49C29816593F80 (Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* __this, const RuntimeMethod* method) 
{
	{
		// public EScheduleType scheduleType = EScheduleType.Lecture;
		__this->___scheduleType_4 = 1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Stat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stat__ctor_m4814ABD26C467B0AEB93CE49BB088AC91761F4FB (Stat_t347C80C1BA9D0F03E87EA478FF9E0234B28F8505* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Title::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title_LoadScene_m04C12D193E823A95493C012D09A193C80A42F68F (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, String_t* ___otherScene0, const RuntimeMethod* method) 
{
	{
		// LoadManager.LoadScene(otherScene);
		String_t* L_0 = ___otherScene0;
		LoadManager_LoadScene_mDAE947C6CBEC9AFE2F643ACDBFB8AF95AAF91168(L_0, NULL);
		// }
		return;
	}
}
// System.Void Title::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title__ctor_mD048B1928FB56935584ECB8B23993B2F8ED77772 (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
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
// System.Void CameraResolution::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraResolution_Awake_m08E8B8B2DEE074C82414E0E93E8E33EEA70136D9 (CameraResolution_t34B94895C50F3AD7C0DC9CD85F29B90AA45AD212* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B2_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B1_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B3_0 = NULL;
	{
		// Camera camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		// Rect rect = camera.rect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = Camera_get_rect_m848C23B32814D1351E43F0A0110DB8ECA19C6772(L_1, NULL);
		V_0 = L_2;
		// float scaleHeight = ((float)Screen.width / Screen.height) / ((float)9 / 16);
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_1 = ((float)(((float)(((float)L_3)/((float)L_4)))/(0.5625f)));
		// float scaleWidth = 1.0f / scaleHeight;
		float L_5 = V_1;
		V_2 = ((float)((1.0f)/L_5));
		// if (scaleHeight < 1)
		float L_6 = V_1;
		G_B1_0 = L_1;
		if ((!(((float)L_6) < ((float)(1.0f)))))
		{
			G_B2_0 = L_1;
			goto IL_004f;
		}
	}
	{
		// rect.height = scaleHeight;
		float L_7 = V_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_0), L_7, NULL);
		// rect.y = (1.0f - scaleHeight) / 2.0f;
		float L_8 = V_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&V_0), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_8))/(2.0f))), NULL);
		G_B3_0 = G_B1_0;
		goto IL_006b;
	}

IL_004f:
	{
		// rect.width = scaleWidth;
		float L_9 = V_2;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_0), L_9, NULL);
		// rect.x = (1.0f - scaleWidth) / 2.0f;
		float L_10 = V_2;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_0), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_10))/(2.0f))), NULL);
		G_B3_0 = G_B2_0;
	}

IL_006b:
	{
		// camera.rect = rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11 = V_0;
		NullCheck(G_B3_0);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(G_B3_0, L_11, NULL);
		// }
		return;
	}
}
// System.Void CameraResolution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraResolution__ctor_m1FA4F67A2C8074255FDC5789997F4A8BA503244A (CameraResolution_t34B94895C50F3AD7C0DC9CD85F29B90AA45AD212* __this, const RuntimeMethod* method) 
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
// System.Void BackController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackController_Start_m3C35FEBDB3D6111F9C1B1642FECA0F1E784184DE (BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackController_ShowBPanel_m6CCEC26EBCAF356DE26EA829087FEFFA81D6EFB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BackPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BackPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Back.onClick.AddListener(ShowBPanel);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___Back_5;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)BackController_ShowBPanel_m6CCEC26EBCAF356DE26EA829087FEFFA81D6EFB6_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void BackController::ShowBPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackController_ShowBPanel_m6CCEC26EBCAF356DE26EA829087FEFFA81D6EFB6 (BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral006EC833FC26DF32AD8DE527A0ED0C848DA7DC88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BackPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BackPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Invoke("HideBPanel", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral006EC833FC26DF32AD8DE527A0ED0C848DA7DC88, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void BackController::HideBPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackController_HideBPanel_mC9BE02D13C917E6EA366D04DED5D1CC5DB201D4A (BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511* __this, const RuntimeMethod* method) 
{
	{
		// BackPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BackPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BackController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackController__ctor_mDCDA29E6AAF9A55B9164A6388C100822CF1DE147 (BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511* __this, const RuntimeMethod* method) 
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
// System.Void HotsixController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotsixController_Start_mC8922BADBB7F264562A4D0F17EA90E4C9B40C8CC (HotsixController_t7BC9D89A845B8FB07CE54EB116466A4964CFF335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HotsixController_ShowHPanel_m6D7A00512CC1C14F2785349AE61864593A498E32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HotsixPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___HotsixPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Hotsix.onClick.AddListener(ShowHPanel);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___Hotsix_5;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)HotsixController_ShowHPanel_m6D7A00512CC1C14F2785349AE61864593A498E32_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void HotsixController::ShowHPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotsixController_ShowHPanel_m6D7A00512CC1C14F2785349AE61864593A498E32 (HotsixController_t7BC9D89A845B8FB07CE54EB116466A4964CFF335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9390A33E5B008C3FD02173CBAB6FC47ADBF822E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HotsixPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___HotsixPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Invoke("HideHPanel", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral9390A33E5B008C3FD02173CBAB6FC47ADBF822E9, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void HotsixController::HideHPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotsixController_HideHPanel_m785E5BCB63A73E8475E14FD50B02DACB50347427 (HotsixController_t7BC9D89A845B8FB07CE54EB116466A4964CFF335* __this, const RuntimeMethod* method) 
{
	{
		// HotsixPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___HotsixPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HotsixController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotsixController__ctor_m4DDCCFCEAADB30C0C48B5317C954C221ECCE8AC0 (HotsixController_t7BC9D89A845B8FB07CE54EB116466A4964CFF335* __this, const RuntimeMethod* method) 
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
// System.Void MonsterController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_Start_m910705F9A11A18C2AB9203CB39BEB4FC20E1BF13 (MonsterController_t244780C765AF448D05CF38CCE482669DBDD516E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_ShowMPanel_m080D8529608B5EA1722E58F4C47545B396A03232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonsterPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MonsterPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Monster.onClick.AddListener(ShowMPanel);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___Monster_5;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)MonsterController_ShowMPanel_m080D8529608B5EA1722E58F4C47545B396A03232_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void MonsterController::ShowMPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_ShowMPanel_m080D8529608B5EA1722E58F4C47545B396A03232 (MonsterController_t244780C765AF448D05CF38CCE482669DBDD516E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F684FC778985947FD31634E8F6E357AEAA894B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonsterPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MonsterPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Invoke("HideMPanel", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral44F684FC778985947FD31634E8F6E357AEAA894B, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void MonsterController::HideMPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_HideMPanel_m4C04E93798DAF57CF1A9623EB291F2660C17375B (MonsterController_t244780C765AF448D05CF38CCE482669DBDD516E7* __this, const RuntimeMethod* method) 
{
	{
		// MonsterPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MonsterPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MonsterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController__ctor_mFC56EA40326173311DB16C76A9205CDD2976F02A (MonsterController_t244780C765AF448D05CF38CCE482669DBDD516E7* __this, const RuntimeMethod* method) 
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
// System.Void VitaController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitaController_Start_m551F592929AEC07A48A87D4F38D6F3ECC3CA4135 (VitaController_t23097902CAAA8FF3B9E547240579EB31CF311E55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VitaController_ShowVPanel_m4182D4E046A4E737203B48CC934F29DB00F9E1C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VitaPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___VitaPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Vita.onClick.AddListener(ShowVPanel);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___Vita_5;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)VitaController_ShowVPanel_m4182D4E046A4E737203B48CC934F29DB00F9E1C2_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VitaController::ShowVPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitaController_ShowVPanel_m4182D4E046A4E737203B48CC934F29DB00F9E1C2 (VitaController_t23097902CAAA8FF3B9E547240579EB31CF311E55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC08F80B02178233785A13F085F53E618793F9C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VitaPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___VitaPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Invoke("HideVPanel", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralAC08F80B02178233785A13F085F53E618793F9C9, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void VitaController::HideVPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitaController_HideVPanel_m2FA5E9894E74DC159F8316D9808FDB39BF719FEE (VitaController_t23097902CAAA8FF3B9E547240579EB31CF311E55* __this, const RuntimeMethod* method) 
{
	{
		// VitaPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___VitaPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VitaController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitaController__ctor_mAB3E59844E9E10820A19923BB65E5A7008200154 (VitaController_t23097902CAAA8FF3B9E547240579EB31CF311E55* __this, const RuntimeMethod* method) 
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
// System.Void ScheduleSelectWindow::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleSelectWindow_OnEnable_m35B653BA79D613E129079F1FDF05F26914E0D443 (ScheduleSelectWindow_tA04BA952EB827DEBEA7B86F9B242486FB519B51E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScheduleSelectWindow::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleSelectWindow_OnDisable_m995A2AACB38D999D9069763823150B13C25B4D17 (ScheduleSelectWindow_tA04BA952EB827DEBEA7B86F9B242486FB519B51E* __this, const RuntimeMethod* method) 
{
	{
		// toggle0.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle0_4;
		NullCheck(L_0);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_0, (bool)0, NULL);
		// toggle1.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle1_5;
		NullCheck(L_1);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_1, (bool)0, NULL);
		// toggle2.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___toggle2_6;
		NullCheck(L_2);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_2, (bool)0, NULL);
		// toggle3.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___toggle3_7;
		NullCheck(L_3);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_3, (bool)0, NULL);
		// toggle4.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___toggle4_8;
		NullCheck(L_4);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_4, (bool)0, NULL);
		// toggle5.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5 = __this->___toggle5_9;
		NullCheck(L_5);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ScheduleSelectWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleSelectWindow__ctor_m20410EAF52F6A9E7ABD1A2BA11D7E2E76CCA5432 (ScheduleSelectWindow_tA04BA952EB827DEBEA7B86F9B242486FB519B51E* __this, const RuntimeMethod* method) 
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
// System.Void ScrollViewLectureContent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollViewLectureContent_Awake_m251A3485417B57C34D3F0F19B39AFC0921B11709 (ScrollViewLectureContent_t30010B18D9AF27FA62AB34C4DAD09559580CD874* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// Vector2 sizeDelta = rectTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = L_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_1, NULL);
		V_0 = L_2;
		// sizeDelta.y = this.transform.childCount * 150;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		(&V_0)->___y_1 = ((float)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)150))));
		// rectTransform.sizeDelta = sizeDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		NullCheck(L_1);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void ScrollViewLectureContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollViewLectureContent__ctor_m14B6C5BA526FDDC09AE461C07209ABBF29BDC4E1 (ScrollViewLectureContent_t30010B18D9AF27FA62AB34C4DAD09559580CD874* __this, const RuntimeMethod* method) 
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
// System.Single StatDistribute::get_Sociability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float Sociability { get; private set; } = 0f;
		float L_0 = __this->___U3CSociabilityU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void StatDistribute::set_Sociability(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_set_Sociability_mA663ECC1F58B57D20C7117CEF481672CC117E95F (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Sociability { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CSociabilityU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Single StatDistribute::get_LearningAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float LearningAbility { get; private set; } = 0f;
		float L_0 = __this->___U3CLearningAbilityU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void StatDistribute::set_LearningAbility(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_set_LearningAbility_mC47E4A874A6EB39601BF8E36D3CA3035CD223E38 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float LearningAbility { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CLearningAbilityU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Single StatDistribute::get_EconomicAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float EconomicAbility { get; private set; } = 0f;
		float L_0 = __this->___U3CEconomicAbilityU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void StatDistribute::set_EconomicAbility(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_set_EconomicAbility_m5312F7B9BA316EAE1419E7F266DF5EAF352EBC4F (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EconomicAbility { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CEconomicAbilityU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Single StatDistribute::get_SpecAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float SpecAbility { get; private set; } = 0f;
		float L_0 = __this->___U3CSpecAbilityU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void StatDistribute::set_SpecAbility(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_set_SpecAbility_mF2964848D7514F0A0D15882DD0F8EB02139188F8 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SpecAbility { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CSpecAbilityU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void StatDistribute::OnClickPlusSociability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickPlusSociability_m90FBF164650D2E1FE5736CE10D3FD501A20DBD87 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (Sociability < 10 && 0 < stats)
		float L_0;
		L_0 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(__this, NULL);
		if ((!(((float)L_0) < ((float)(10.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_1 = __this->___stats_17;
		if ((((int32_t)0) >= ((int32_t)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// stats--;
		int32_t L_2 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// Sociability++;
		float L_3;
		L_3 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(__this, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		StatDistribute_set_Sociability_mA663ECC1F58B57D20C7117CEF481672CC117E95F_inline(__this, ((float)il2cpp_codegen_add(L_4, (1.0f))), NULL);
	}

IL_0038:
	{
		// if (stats <= 0)
		int32_t L_5 = __this->___stats_17;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		// stats = 0;
		__this->___stats_17 = 0;
	}

IL_0048:
	{
		// StartCoroutine(ChangeSociability());
		RuntimeObject* L_6;
		L_6 = StatDistribute_ChangeSociability_m662B3CCAEE76C2F6B956994346946073169C0FAB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// sociabilityText.text = Sociability.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___sociabilityText_5;
		float L_9;
		L_9 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(__this, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___statsText_4;
		int32_t* L_12 = (&__this->___stats_17);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void StatDistribute::OnClickMinusSociability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickMinusSociability_mB99F610E26DD251E7D5BAEDB4ACB79ED3803AE7A (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (0 < Sociability)
		float L_0;
		L_0 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(__this, NULL);
		if ((!(((float)(0.0f)) < ((float)L_0))))
		{
			goto IL_002f;
		}
	}
	{
		// stats++;
		int32_t L_1 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// Sociability--;
		float L_2;
		L_2 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(__this, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		StatDistribute_set_Sociability_mA663ECC1F58B57D20C7117CEF481672CC117E95F_inline(__this, ((float)il2cpp_codegen_subtract(L_3, (1.0f))), NULL);
	}

IL_002f:
	{
		// if (12 <= stats)
		int32_t L_4 = __this->___stats_17;
		if ((((int32_t)((int32_t)12)) > ((int32_t)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		// stats = 12;
		__this->___stats_17 = ((int32_t)12);
	}

IL_0041:
	{
		// StartCoroutine(ChangeSociability());
		RuntimeObject* L_5;
		L_5 = StatDistribute_ChangeSociability_m662B3CCAEE76C2F6B956994346946073169C0FAB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// sociabilityText.text = Sociability.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___sociabilityText_5;
		float L_8;
		L_8 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(__this, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___statsText_4;
		int32_t* L_11 = (&__this->___stats_17);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Collections.IEnumerator StatDistribute::ChangeSociability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeSociability_m662B3CCAEE76C2F6B956994346946073169C0FAB (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* L_0 = (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05*)il2cpp_codegen_object_new(U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeSociabilityU3Ed__28__ctor_m8A7B1E059920D52EEF3CC7A6E8AF9B49078900BD(L_0, 0, NULL);
		U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void StatDistribute::OnClickPlusLearningAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickPlusLearningAbility_m610D6C1360C0DB4EB0B79177C5F862189763B847 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (LearningAbility < 10 && 0 < stats)
		float L_0;
		L_0 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(__this, NULL);
		if ((!(((float)L_0) < ((float)(10.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_1 = __this->___stats_17;
		if ((((int32_t)0) >= ((int32_t)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// stats--;
		int32_t L_2 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// LearningAbility++;
		float L_3;
		L_3 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(__this, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		StatDistribute_set_LearningAbility_mC47E4A874A6EB39601BF8E36D3CA3035CD223E38_inline(__this, ((float)il2cpp_codegen_add(L_4, (1.0f))), NULL);
	}

IL_0038:
	{
		// if (stats <= 0)
		int32_t L_5 = __this->___stats_17;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		// stats = 0;
		__this->___stats_17 = 0;
	}

IL_0048:
	{
		// StartCoroutine(ChangeLearningAbility());
		RuntimeObject* L_6;
		L_6 = StatDistribute_ChangeLearningAbility_m28C6BF5FF5E2ABFE173D936E39B738496D0A7D5D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// learningAbilityText.text = LearningAbility.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___learningAbilityText_6;
		float L_9;
		L_9 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(__this, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___statsText_4;
		int32_t* L_12 = (&__this->___stats_17);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void StatDistribute::OnClickMinusLearningAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickMinusLearningAbility_m278638817FEFB2ACE50053EA81D9B9281F6BA9AE (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (0 < LearningAbility)
		float L_0;
		L_0 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(__this, NULL);
		if ((!(((float)(0.0f)) < ((float)L_0))))
		{
			goto IL_002f;
		}
	}
	{
		// stats++;
		int32_t L_1 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// LearningAbility--;
		float L_2;
		L_2 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(__this, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		StatDistribute_set_LearningAbility_mC47E4A874A6EB39601BF8E36D3CA3035CD223E38_inline(__this, ((float)il2cpp_codegen_subtract(L_3, (1.0f))), NULL);
	}

IL_002f:
	{
		// if (12 <= stats)
		int32_t L_4 = __this->___stats_17;
		if ((((int32_t)((int32_t)12)) > ((int32_t)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		// stats = 12;
		__this->___stats_17 = ((int32_t)12);
	}

IL_0041:
	{
		// StartCoroutine(ChangeLearningAbility());
		RuntimeObject* L_5;
		L_5 = StatDistribute_ChangeLearningAbility_m28C6BF5FF5E2ABFE173D936E39B738496D0A7D5D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// learningAbilityText.text = LearningAbility.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___learningAbilityText_6;
		float L_8;
		L_8 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(__this, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___statsText_4;
		int32_t* L_11 = (&__this->___stats_17);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Collections.IEnumerator StatDistribute::ChangeLearningAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeLearningAbility_m28C6BF5FF5E2ABFE173D936E39B738496D0A7D5D (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* L_0 = (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38*)il2cpp_codegen_object_new(U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeLearningAbilityU3Ed__31__ctor_mC01E854EF7C9AB34612D0B977F81E1E0DA283178(L_0, 0, NULL);
		U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void StatDistribute::OnClickPlusEconomicAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickPlusEconomicAbility_mA445232257EC6496989CE737812B0DD518E143C8 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (EconomicAbility < 10 && 0 < stats)
		float L_0;
		L_0 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(__this, NULL);
		if ((!(((float)L_0) < ((float)(10.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_1 = __this->___stats_17;
		if ((((int32_t)0) >= ((int32_t)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// stats--;
		int32_t L_2 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// EconomicAbility++;
		float L_3;
		L_3 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(__this, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		StatDistribute_set_EconomicAbility_m5312F7B9BA316EAE1419E7F266DF5EAF352EBC4F_inline(__this, ((float)il2cpp_codegen_add(L_4, (1.0f))), NULL);
	}

IL_0038:
	{
		// if (stats <= 0)
		int32_t L_5 = __this->___stats_17;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		// stats = 0;
		__this->___stats_17 = 0;
	}

IL_0048:
	{
		// StartCoroutine(ChangeEconomicAbility());
		RuntimeObject* L_6;
		L_6 = StatDistribute_ChangeEconomicAbility_mA1D32C0B031AF1DCCF849AFC14116634545BC92A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// economicAbilityText.text = EconomicAbility.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___economicAbilityText_7;
		float L_9;
		L_9 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(__this, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___statsText_4;
		int32_t* L_12 = (&__this->___stats_17);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void StatDistribute::OnClickMinusEconomicAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickMinusEconomicAbility_mC4E6FF9A5C0A8D3A0567904DAD7A0D71B31E024E (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (0 < EconomicAbility)
		float L_0;
		L_0 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(__this, NULL);
		if ((!(((float)(0.0f)) < ((float)L_0))))
		{
			goto IL_002f;
		}
	}
	{
		// stats++;
		int32_t L_1 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// EconomicAbility--;
		float L_2;
		L_2 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(__this, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		StatDistribute_set_EconomicAbility_m5312F7B9BA316EAE1419E7F266DF5EAF352EBC4F_inline(__this, ((float)il2cpp_codegen_subtract(L_3, (1.0f))), NULL);
	}

IL_002f:
	{
		// if (12 <= stats)
		int32_t L_4 = __this->___stats_17;
		if ((((int32_t)((int32_t)12)) > ((int32_t)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		// stats = 12;
		__this->___stats_17 = ((int32_t)12);
	}

IL_0041:
	{
		// StartCoroutine(ChangeEconomicAbility());
		RuntimeObject* L_5;
		L_5 = StatDistribute_ChangeEconomicAbility_mA1D32C0B031AF1DCCF849AFC14116634545BC92A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// economicAbilityText.text = EconomicAbility.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___economicAbilityText_7;
		float L_8;
		L_8 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(__this, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___statsText_4;
		int32_t* L_11 = (&__this->___stats_17);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Collections.IEnumerator StatDistribute::ChangeEconomicAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeEconomicAbility_mA1D32C0B031AF1DCCF849AFC14116634545BC92A (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* L_0 = (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18*)il2cpp_codegen_object_new(U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeEconomicAbilityU3Ed__34__ctor_m942D8E2BFE8CCF3BB3C2F27E947744279D98968D(L_0, 0, NULL);
		U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void StatDistribute::OnClickPlusSpecAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickPlusSpecAbility_m4BBF21D95FC69951B14FB2349BC5D4F05A342855 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (SpecAbility < 10 && 0 < stats)
		float L_0;
		L_0 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(__this, NULL);
		if ((!(((float)L_0) < ((float)(10.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_1 = __this->___stats_17;
		if ((((int32_t)0) >= ((int32_t)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// stats--;
		int32_t L_2 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// SpecAbility++;
		float L_3;
		L_3 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(__this, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		StatDistribute_set_SpecAbility_mF2964848D7514F0A0D15882DD0F8EB02139188F8_inline(__this, ((float)il2cpp_codegen_add(L_4, (1.0f))), NULL);
	}

IL_0038:
	{
		// if (stats <= 0)
		int32_t L_5 = __this->___stats_17;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		// stats = 0;
		__this->___stats_17 = 0;
	}

IL_0048:
	{
		// StartCoroutine(ChangeSpecAbility());
		RuntimeObject* L_6;
		L_6 = StatDistribute_ChangeSpecAbility_m600199FAD19261074A2B4E583748824FB5BBD992(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// specAbilityText.text = SpecAbility.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___specAbilityText_8;
		float L_9;
		L_9 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(__this, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___statsText_4;
		int32_t* L_12 = (&__this->___stats_17);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void StatDistribute::OnClickMinusSpecAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute_OnClickMinusSpecAbility_m279DA8245B973A4235C54922BF1AF0F0EDFE5402 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (0 < SpecAbility)
		float L_0;
		L_0 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(__this, NULL);
		if ((!(((float)(0.0f)) < ((float)L_0))))
		{
			goto IL_002f;
		}
	}
	{
		// stats++;
		int32_t L_1 = __this->___stats_17;
		__this->___stats_17 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// SpecAbility--;
		float L_2;
		L_2 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(__this, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		StatDistribute_set_SpecAbility_mF2964848D7514F0A0D15882DD0F8EB02139188F8_inline(__this, ((float)il2cpp_codegen_subtract(L_3, (1.0f))), NULL);
	}

IL_002f:
	{
		// if (12 <= stats)
		int32_t L_4 = __this->___stats_17;
		if ((((int32_t)((int32_t)12)) > ((int32_t)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		// stats = 12;
		__this->___stats_17 = ((int32_t)12);
	}

IL_0041:
	{
		// StartCoroutine(ChangeSpecAbility());
		RuntimeObject* L_5;
		L_5 = StatDistribute_ChangeSpecAbility_m600199FAD19261074A2B4E583748824FB5BBD992(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// specAbilityText.text = SpecAbility.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___specAbilityText_8;
		float L_8;
		L_8 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(__this, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// statsText.text = stats.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___statsText_4;
		int32_t* L_11 = (&__this->___stats_17);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Collections.IEnumerator StatDistribute::ChangeSpecAbility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatDistribute_ChangeSpecAbility_m600199FAD19261074A2B4E583748824FB5BBD992 (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* L_0 = (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7*)il2cpp_codegen_object_new(U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeSpecAbilityU3Ed__37__ctor_m649805C6E3CA8E12329F8C0B4D58B58122CFEFB1(L_0, 0, NULL);
		U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void StatDistribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDistribute__ctor_m38AE57D6D7EA2315736FF1F1B70B5CC607A065FB (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// private int stats = 12;
		__this->___stats_17 = ((int32_t)12);
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
// System.Void StatDistribute/<ChangeSociability>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSociabilityU3Ed__28__ctor_m8A7B1E059920D52EEF3CC7A6E8AF9B49078900BD (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void StatDistribute/<ChangeSociability>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSociabilityU3Ed__28_System_IDisposable_Dispose_m2AC8D67A1E268728B3142D5FC559F1AECD9E064B (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean StatDistribute/<ChangeSociability>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeSociabilityU3Ed__28_MoveNext_mB9F14C07733E0DB6C2AD694BAA49960BECCED534 (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		// float destination = Sociability * 10f;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_4 = V_1;
		NullCheck(L_4);
		float L_5;
		L_5 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(L_4, NULL);
		__this->___U3CdestinationU3E5__3_4 = ((float)il2cpp_codegen_multiply(L_5, (10.0f)));
		goto IL_008d;
	}

IL_003d:
	{
		// timer += Time.deltaTime;
		float L_6 = __this->___U3CtimerU3E5__2_3;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		// sociabilitySlider.value = Mathf.Lerp(sociabilitySlider.value, destination, timer);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_8 = V_1;
		NullCheck(L_8);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = L_8->___sociabilitySlider_9;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_10 = V_1;
		NullCheck(L_10);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = L_10->___sociabilitySlider_9;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		float L_13 = __this->___U3CdestinationU3E5__3_4;
		float L_14 = __this->___U3CtimerU3E5__2_3;
		float L_15;
		L_15 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_12, L_13, L_14, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_15);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008d:
	{
		// while (timer <= 0.3f)
		float L_16 = __this->___U3CtimerU3E5__2_3;
		if ((((float)L_16) <= ((float)(0.300000012f))))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object StatDistribute/<ChangeSociability>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeSociabilityU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE1BE9C2172A06A69C0E15C91871D87E43F9B304C (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void StatDistribute/<ChangeSociability>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSociabilityU3Ed__28_System_Collections_IEnumerator_Reset_mA393048EA4BE167909BB1ED2911F00FD0C44A546 (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeSociabilityU3Ed__28_System_Collections_IEnumerator_Reset_mA393048EA4BE167909BB1ED2911F00FD0C44A546_RuntimeMethod_var)));
	}
}
// System.Object StatDistribute/<ChangeSociability>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeSociabilityU3Ed__28_System_Collections_IEnumerator_get_Current_mAB72480684E00B72F861E9DE671DC2AD0AF46174 (U3CChangeSociabilityU3Ed__28_tFE76E9EDAEEFA0CF7936E88432CDD0567C9D0C05* __this, const RuntimeMethod* method) 
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
// System.Void StatDistribute/<ChangeLearningAbility>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeLearningAbilityU3Ed__31__ctor_mC01E854EF7C9AB34612D0B977F81E1E0DA283178 (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void StatDistribute/<ChangeLearningAbility>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeLearningAbilityU3Ed__31_System_IDisposable_Dispose_m809976E71AF8D0816044A128A3413373D3CE129C (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean StatDistribute/<ChangeLearningAbility>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeLearningAbilityU3Ed__31_MoveNext_m9D343B5A7231F21313F0319117A488E80679E552 (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		// float destination = LearningAbility * 10f;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_4 = V_1;
		NullCheck(L_4);
		float L_5;
		L_5 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(L_4, NULL);
		__this->___U3CdestinationU3E5__3_4 = ((float)il2cpp_codegen_multiply(L_5, (10.0f)));
		goto IL_008d;
	}

IL_003d:
	{
		// timer += Time.deltaTime;
		float L_6 = __this->___U3CtimerU3E5__2_3;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		// learningAbilitySlider.value = Mathf.Lerp(learningAbilitySlider.value, destination, timer);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_8 = V_1;
		NullCheck(L_8);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = L_8->___learningAbilitySlider_10;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_10 = V_1;
		NullCheck(L_10);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = L_10->___learningAbilitySlider_10;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		float L_13 = __this->___U3CdestinationU3E5__3_4;
		float L_14 = __this->___U3CtimerU3E5__2_3;
		float L_15;
		L_15 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_12, L_13, L_14, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_15);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008d:
	{
		// while (timer <= 0.3f)
		float L_16 = __this->___U3CtimerU3E5__2_3;
		if ((((float)L_16) <= ((float)(0.300000012f))))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object StatDistribute/<ChangeLearningAbility>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeLearningAbilityU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m23278B802F0E159E17386BCEA38270388B383D1F (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void StatDistribute/<ChangeLearningAbility>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeLearningAbilityU3Ed__31_System_Collections_IEnumerator_Reset_m333F6E1BF61913DAD5C3B23B2090E949D35DE10C (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeLearningAbilityU3Ed__31_System_Collections_IEnumerator_Reset_m333F6E1BF61913DAD5C3B23B2090E949D35DE10C_RuntimeMethod_var)));
	}
}
// System.Object StatDistribute/<ChangeLearningAbility>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeLearningAbilityU3Ed__31_System_Collections_IEnumerator_get_Current_m116F015AB7D60EECCC76A9FE0E1541D68E7CDB4D (U3CChangeLearningAbilityU3Ed__31_tF17256D2732B8028B1DFF8EE853DA234F73FBF38* __this, const RuntimeMethod* method) 
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
// System.Void StatDistribute/<ChangeEconomicAbility>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeEconomicAbilityU3Ed__34__ctor_m942D8E2BFE8CCF3BB3C2F27E947744279D98968D (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void StatDistribute/<ChangeEconomicAbility>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeEconomicAbilityU3Ed__34_System_IDisposable_Dispose_m3365A249AC5B49E62AD285A9A48531DA642AC791 (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean StatDistribute/<ChangeEconomicAbility>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeEconomicAbilityU3Ed__34_MoveNext_mC42749E4225429F61A26CCF77BDA4561045462BB (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		// float destination = EconomicAbility * 10f;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_4 = V_1;
		NullCheck(L_4);
		float L_5;
		L_5 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(L_4, NULL);
		__this->___U3CdestinationU3E5__3_4 = ((float)il2cpp_codegen_multiply(L_5, (10.0f)));
		goto IL_008d;
	}

IL_003d:
	{
		// timer += Time.deltaTime;
		float L_6 = __this->___U3CtimerU3E5__2_3;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		// economicAbilitySlider.value = Mathf.Lerp(economicAbilitySlider.value, destination, timer);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_8 = V_1;
		NullCheck(L_8);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = L_8->___economicAbilitySlider_11;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_10 = V_1;
		NullCheck(L_10);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = L_10->___economicAbilitySlider_11;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		float L_13 = __this->___U3CdestinationU3E5__3_4;
		float L_14 = __this->___U3CtimerU3E5__2_3;
		float L_15;
		L_15 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_12, L_13, L_14, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_15);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008d:
	{
		// while (timer <= 0.3f)
		float L_16 = __this->___U3CtimerU3E5__2_3;
		if ((((float)L_16) <= ((float)(0.300000012f))))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object StatDistribute/<ChangeEconomicAbility>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeEconomicAbilityU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1A017EE93D78009CD1C78D2486EE48F2723A6980 (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void StatDistribute/<ChangeEconomicAbility>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeEconomicAbilityU3Ed__34_System_Collections_IEnumerator_Reset_mE523CCA957810957969AD0F584539A2285D4DDEF (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeEconomicAbilityU3Ed__34_System_Collections_IEnumerator_Reset_mE523CCA957810957969AD0F584539A2285D4DDEF_RuntimeMethod_var)));
	}
}
// System.Object StatDistribute/<ChangeEconomicAbility>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeEconomicAbilityU3Ed__34_System_Collections_IEnumerator_get_Current_m24C60DD836BD40FE6BEB29F418F4A9FF091344E6 (U3CChangeEconomicAbilityU3Ed__34_tF3EDF40BF0B12F4BB545B0915F715AB2F1F64C18* __this, const RuntimeMethod* method) 
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
// System.Void StatDistribute/<ChangeSpecAbility>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSpecAbilityU3Ed__37__ctor_m649805C6E3CA8E12329F8C0B4D58B58122CFEFB1 (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void StatDistribute/<ChangeSpecAbility>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSpecAbilityU3Ed__37_System_IDisposable_Dispose_m07D08A9055AB0E864256C74935C7B74676DE6148 (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean StatDistribute/<ChangeSpecAbility>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeSpecAbilityU3Ed__37_MoveNext_mFF5387FCFBFC7357600E1C27078B8F8D39C5F30C (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		// float destination = SpecAbility * 10f;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_4 = V_1;
		NullCheck(L_4);
		float L_5;
		L_5 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(L_4, NULL);
		__this->___U3CdestinationU3E5__3_4 = ((float)il2cpp_codegen_multiply(L_5, (10.0f)));
		goto IL_008d;
	}

IL_003d:
	{
		// timer += Time.deltaTime;
		float L_6 = __this->___U3CtimerU3E5__2_3;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		// specAbilitySlider.value = Mathf.Lerp(specAbilitySlider.value, destination, timer);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_8 = V_1;
		NullCheck(L_8);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = L_8->___specAbilitySlider_12;
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_10 = V_1;
		NullCheck(L_10);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = L_10->___specAbilitySlider_12;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		float L_13 = __this->___U3CdestinationU3E5__3_4;
		float L_14 = __this->___U3CtimerU3E5__2_3;
		float L_15;
		L_15 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_12, L_13, L_14, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_15);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008d:
	{
		// while (timer <= 0.3f)
		float L_16 = __this->___U3CtimerU3E5__2_3;
		if ((((float)L_16) <= ((float)(0.300000012f))))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object StatDistribute/<ChangeSpecAbility>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeSpecAbilityU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m348F3F3BE12E883F8E04A3D3C3ACB66D8D11BDC2 (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void StatDistribute/<ChangeSpecAbility>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSpecAbilityU3Ed__37_System_Collections_IEnumerator_Reset_m520B8FC188E2F2E7388F12CE823B18C966E6EFD7 (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeSpecAbilityU3Ed__37_System_Collections_IEnumerator_Reset_m520B8FC188E2F2E7388F12CE823B18C966E6EFD7_RuntimeMethod_var)));
	}
}
// System.Object StatDistribute/<ChangeSpecAbility>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeSpecAbilityU3Ed__37_System_Collections_IEnumerator_get_Current_m05F918E63EC98843D250F095FC071ED302DD807D (U3CChangeSpecAbilityU3Ed__37_t5434E182BBF3E23BC8E071CE45E1630D6A2E2CD7* __this, const RuntimeMethod* method) 
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
// System.Void EveryWhere.Manger.GameManager::InitalizePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitalizePlayer_m6F5B9B755F03AEF86C7914E9DF1AA670AD9A4FAB (GameManager_t1F29E5BC33A3307224E954F21E44292F002BFD52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = new Player(nickname.text, genderMale.isOn, stat.Sociability, stat.LearningAbility, stat.EconomicAbility, stat.SpecAbility);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___nickname_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___genderMale_7;
		NullCheck(L_2);
		bool L_3;
		L_3 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_2, NULL);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_4 = __this->___stat_8;
		NullCheck(L_4);
		float L_5;
		L_5 = StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline(L_4, NULL);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_6 = __this->___stat_8;
		NullCheck(L_6);
		float L_7;
		L_7 = StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline(L_6, NULL);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_8 = __this->___stat_8;
		NullCheck(L_8);
		float L_9;
		L_9 = StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline(L_8, NULL);
		StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* L_10 = __this->___stat_8;
		NullCheck(L_10);
		float L_11;
		L_11 = StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline(L_10, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)il2cpp_codegen_object_new(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Player__ctor_m8421A36B5E4C466901E3ABE67E7FF47DCF58131C(L_12, L_1, L_3, L_5, L_7, L_9, L_11, NULL);
		__this->___player_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_12);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m970160F1DA3CD1A130F000E791E4F2E8B268BA06 (GameManager_t1F29E5BC33A3307224E954F21E44292F002BFD52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1__ctor_m658270AAF606AD85DAB020F2251EEE6AC8C439ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonMonoBase_1__ctor_m658270AAF606AD85DAB020F2251EEE6AC8C439ED(__this, SingletonMonoBase_1__ctor_m658270AAF606AD85DAB020F2251EEE6AC8C439ED_RuntimeMethod_var);
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
// System.Void EveryWhere.Manger.LoadManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadManager_Awake_m938CFDCD0D9DE170FE95C98937FABC895A0951B1 (LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CLoadScene());
		RuntimeObject* L_0;
		L_0 = LoadManager_CLoadScene_m5F824FCCB3DFEDCFD4E2D1FC98BFF8D27075E181(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.LoadManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadManager_LoadScene_mDAE947C6CBEC9AFE2F643ACDBFB8AF95AAF91168 (String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A52C3C9D37BBFD5E5121B35BC4AF16D9B8BA0AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nextScene = otherScene;
		String_t* L_0 = ___otherScene0;
		((LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_StaticFields*)il2cpp_codegen_static_fields_for(LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_il2cpp_TypeInfo_var))->___nextScene_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_StaticFields*)il2cpp_codegen_static_fields_for(LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_il2cpp_TypeInfo_var))->___nextScene_5), (void*)L_0);
		// SceneManager.LoadScene("LoadingScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral1A52C3C9D37BBFD5E5121B35BC4AF16D9B8BA0AA, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EveryWhere.Manger.LoadManager::CLoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadManager_CLoadScene_m5F824FCCB3DFEDCFD4E2D1FC98BFF8D27075E181 (LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* L_0 = (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E*)il2cpp_codegen_object_new(U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCLoadSceneU3Ed__4__ctor_mC382EFD4BE817B88DBE46CC4BD9A1C7C4DB144E0(L_0, 0, NULL);
		U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EveryWhere.Manger.LoadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadManager__ctor_mC90217C28A1678FED3D22EC394A19883B0FC264E (LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5(__this, SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5_RuntimeMethod_var);
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
// System.Void EveryWhere.Manger.LoadManager/<CLoadScene>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCLoadSceneU3Ed__4__ctor_mC382EFD4BE817B88DBE46CC4BD9A1C7C4DB144E0 (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EveryWhere.Manger.LoadManager/<CLoadScene>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCLoadSceneU3Ed__4_System_IDisposable_Dispose_m2770A740778908F53ED197D1812D5AC2D3B16730 (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EveryWhere.Manger.LoadManager/<CLoadScene>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCLoadSceneU3Ed__4_MoveNext_m0D36B2EB100384E06E7A37A88E2C9E134B0D9370 (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_00fe;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation op = SceneManager.LoadSceneAsync(nextScene);
		String_t* L_3 = ((LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_StaticFields*)il2cpp_codegen_static_fields_for(LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB_il2cpp_TypeInfo_var))->___nextScene_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(L_3, NULL);
		__this->___U3CopU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CopU3E5__2_3), (void*)L_4);
		// op.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CopU3E5__2_3;
		NullCheck(L_5);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_5, (bool)0, NULL);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__3_4 = (0.0f);
		goto IL_0105;
	}

IL_006c:
	{
		// if (op.progress < 0.9f)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = __this->___U3CopU3E5__2_3;
		NullCheck(L_6);
		float L_7;
		L_7 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_6, NULL);
		if ((!(((float)L_7) < ((float)(0.899999976f)))))
		{
			goto IL_0096;
		}
	}
	{
		// sliderBar.fillAmount = op.progress;
		LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* L_8 = V_1;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = L_8->___sliderBar_6;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_10 = __this->___U3CopU3E5__2_3;
		NullCheck(L_10);
		float L_11;
		L_11 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_10, NULL);
		NullCheck(L_9);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_9, L_11, NULL);
		goto IL_00ee;
	}

IL_0096:
	{
		// timer += Time.deltaTime;
		float L_12 = __this->___U3CtimerU3E5__3_4;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__3_4 = ((float)il2cpp_codegen_add(L_12, L_13));
		// sliderBar.fillAmount = Mathf.Lerp(sliderBar.fillAmount, 1f, timer);
		LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* L_14 = V_1;
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = L_14->___sliderBar_6;
		LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* L_16 = V_1;
		NullCheck(L_16);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = L_16->___sliderBar_6;
		NullCheck(L_17);
		float L_18;
		L_18 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_17, NULL);
		float L_19 = __this->___U3CtimerU3E5__3_4;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_18, (1.0f), L_19, NULL);
		NullCheck(L_15);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_15, L_20, NULL);
		// if (1.0f <= sliderBar.fillAmount)
		LoadManager_tC23A8690485527768BE973DF0053835A5237C9EB* L_21 = V_1;
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = L_21->___sliderBar_6;
		NullCheck(L_22);
		float L_23;
		L_23 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_22, NULL);
		if ((!(((float)(1.0f)) <= ((float)L_23))))
		{
			goto IL_00ee;
		}
	}
	{
		// op.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_24 = __this->___U3CopU3E5__2_3;
		NullCheck(L_24);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_24, (bool)1, NULL);
		// yield break;
		return (bool)0;
	}

IL_00ee:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00fe:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0105:
	{
		// while (op.isDone == false)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_25 = __this->___U3CopU3E5__2_3;
		NullCheck(L_25);
		bool L_26;
		L_26 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_25, NULL);
		if (!L_26)
		{
			goto IL_006c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EveryWhere.Manger.LoadManager/<CLoadScene>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCLoadSceneU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8CD076AF1A31052F1370812208B2CFFDC51E22C (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EveryWhere.Manger.LoadManager/<CLoadScene>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCLoadSceneU3Ed__4_System_Collections_IEnumerator_Reset_mCFD87FF19FF6F8CECCC8353173B10BFB04D32B3C (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCLoadSceneU3Ed__4_System_Collections_IEnumerator_Reset_mCFD87FF19FF6F8CECCC8353173B10BFB04D32B3C_RuntimeMethod_var)));
	}
}
// System.Object EveryWhere.Manger.LoadManager/<CLoadScene>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCLoadSceneU3Ed__4_System_Collections_IEnumerator_get_Current_mFDF310E77FAC046D3B3CD3C064EB84DC6019A78E (U3CCLoadSceneU3Ed__4_t24CDAD57F74D8D3557E20D2821738DDE8BA88A5E* __this, const RuntimeMethod* method) 
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
// System.Void EveryWhere.Manger.ScheduleManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleManager_Awake_m24724DB317F8C5A7DC92E4F6F943CA8561A04E5D (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeline = new TimelineCell[MAX_WEEK_DAYS, MAX_DAY_TIMES + 1];
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6;
		int32_t L_1 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)((int32_t)il2cpp_codegen_add(L_1, 1)) };
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_2 = (TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D*)GenArrayNew(TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D_il2cpp_TypeInfo_var, L_3);
		((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8), (void*)L_2);
		// InitializeTimeline();
		ScheduleManager_InitializeTimeline_m23184F1A837AC1BC20ABD7BC18179073E123CA8A(__this, NULL);
		// }
		return;
	}
}
// TimelineCell[,] EveryWhere.Manger.ScheduleManager::GetTimeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* ScheduleManager_GetTimeline_m5477617FF9BBC22005235C8C028638E215C161B8 (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return timeline;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_0 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		return L_0;
	}
}
// TimelineCell EveryWhere.Manger.ScheduleManager::GetTimelineCell(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* ScheduleManager_GetTimelineCell_m82B03FA7A4C20FA915FA489BF8047D9B415527AC (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, int32_t ___day0, int32_t ___time1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return timeline[day, time];
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_0 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_1 = ___day0;
		int32_t L_2 = ___time1;
		NullCheck(L_0);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		return L_3;
	}
}
// System.Void EveryWhere.Manger.ScheduleManager::AddTimeline(Lecture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleManager_AddTimeline_m35F7BA3FDCDB75A8F164BB2A09E2485B97407458 (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* ___lecture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		V_0 = 0;
		goto IL_008c;
	}

IL_0007:
	{
		// if (lecture.days[day] == true)
		Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* L_0 = ___lecture0;
		NullCheck(L_0);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0->___days_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0088;
		}
	}
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		V_1 = 1;
		goto IL_007e;
	}

IL_0015:
	{
		// if (lecture.times[time] == true && timeline[day, time].isAllocated == false)
		Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* L_5 = ___lecture0;
		NullCheck(L_5);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___times_6;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_10 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_13;
		L_13 = (L_10)->GetAt(L_11, L_12);
		NullCheck(L_13);
		bool L_14;
		L_14 = TimelineCell_get_isAllocated_m4EF9CA8CAD2290E1A68E6508281DDB6FBBE5ADA4_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_004c;
		}
	}
	{
		// timeline[day, time].AllocateCell(true, lecture.scheduleType);
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_15 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_18;
		L_18 = (L_15)->GetAt(L_16, L_17);
		Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* L_19 = ___lecture0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___scheduleType_4;
		NullCheck(L_18);
		TimelineCell_AllocateCell_m7E1D84D31247539BD4B1D5F5BABF63EFBCEE9759(L_18, (bool)1, L_20, NULL);
		goto IL_007a;
	}

IL_004c:
	{
		// else if (lecture.times[time] == true && timeline[day, time].isAllocated == true)
		Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* L_21 = ___lecture0;
		NullCheck(L_21);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_22 = L_21->___times_6;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (uint8_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if (!L_25)
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_26 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_26);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_29;
		L_29 = (L_26)->GetAt(L_27, L_28);
		NullCheck(L_29);
		bool L_30;
		L_30 = TimelineCell_get_isAllocated_m4EF9CA8CAD2290E1A68E6508281DDB6FBBE5ADA4_inline(L_29, NULL);
		if (!L_30)
		{
			goto IL_007a;
		}
	}
	{
		// timeline[day, time].DeallocateCell();
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_31 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_31);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_34;
		L_34 = (L_31)->GetAt(L_32, L_33);
		NullCheck(L_34);
		TimelineCell_DeallocateCell_mA0BB5DCDAF97B721C95026BB81DFB8A0982E71D8(L_34, NULL);
	}

IL_007a:
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_007e:
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		int32_t L_36 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)))))
		{
			goto IL_0015;
		}
	}

IL_0088:
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_008c:
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		int32_t L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_40 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0007;
		}
	}
	{
		// currentCredit += 3;
		int32_t L_41 = __this->___currentCredit_12;
		__this->___currentCredit_12 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.ScheduleManager::DeleteTimeline(Lecture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleManager_DeleteTimeline_mF1FE2EF3E9774A72442E2D9FB4CD7EE35973A2ED (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* ___lecture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		V_0 = 0;
		goto IL_0052;
	}

IL_0004:
	{
		// if (lecture.days[day] == true)
		Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* L_0 = ___lecture0;
		NullCheck(L_0);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0->___days_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		V_1 = 1;
		goto IL_0044;
	}

IL_0012:
	{
		// if (lecture.times[time] == true && timeline[day, time].isAllocated == true)
		Lecture_t4493E623371D1036C9E08826C5B80547CDEBD298* L_5 = ___lecture0;
		NullCheck(L_5);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___times_6;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_10 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_13;
		L_13 = (L_10)->GetAt(L_11, L_12);
		NullCheck(L_13);
		bool L_14;
		L_14 = TimelineCell_get_isAllocated_m4EF9CA8CAD2290E1A68E6508281DDB6FBBE5ADA4_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_0040;
		}
	}
	{
		// timeline[day, time].DeallocateCell();
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_15 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_18;
		L_18 = (L_15)->GetAt(L_16, L_17);
		NullCheck(L_18);
		TimelineCell_DeallocateCell_mA0BB5DCDAF97B721C95026BB81DFB8A0982E71D8(L_18, NULL);
	}

IL_0040:
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0044:
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		int32_t L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_21 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_add(L_21, 1)))))
		{
			goto IL_0012;
		}
	}

IL_004e:
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0052:
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		int32_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_24 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		// currentCredit -= 3;
		int32_t L_25 = __this->___currentCredit_12;
		__this->___currentCredit_12 = ((int32_t)il2cpp_codegen_subtract(L_25, 3));
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.ScheduleManager::InitializeTimeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleManager_InitializeTimeline_m23184F1A837AC1BC20ABD7BC18179073E123CA8A (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		V_1 = 1;
		goto IL_001d;
	}

IL_0008:
	{
		// timeline[day, time] = new TimelineCell();
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		TimelineCellU5BU2CU5D_t4A8D50BD33226D9525C20A10C477248A07A5C70D* L_0 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___timeline_8;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_3 = (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738*)il2cpp_codegen_object_new(TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TimelineCell__ctor_mC5DE4E16030D7A0FBF911D3745788A693E53FCF1(L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_3);
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001d:
	{
		// for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
		int32_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_add(L_6, 1)))))
		{
			goto IL_0008;
		}
	}
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002b:
	{
		// for (int day = 0; day < MAX_WEEK_DAYS; day++)
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_9 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.ScheduleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleManager__ctor_m41081A3CCCF45FECC5A05A5DB09CEF7F81781DC3 (ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1__ctor_mEBEE0579EDDAAD6CB4AE50B7F24D621BD85EA269_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int MINIMUM_WEEK_SLEEP_TIMES = 42; // ??? ??? ???? ???
		__this->___MINIMUM_WEEK_SLEEP_TIMES_9 = ((int32_t)42);
		// private readonly int MAX_CREDIT = 21;               // ??? ????
		__this->___MAX_CREDIT_10 = ((int32_t)21);
		// private readonly int MIN_CREDIT = 12;               // ??? ????
		__this->___MIN_CREDIT_11 = ((int32_t)12);
		// private float tiredness = 100.0f;
		__this->___tiredness_13 = (100.0f);
		SingletonMonoBase_1__ctor_mEBEE0579EDDAAD6CB4AE50B7F24D621BD85EA269(__this, SingletonMonoBase_1__ctor_mEBEE0579EDDAAD6CB4AE50B7F24D621BD85EA269_RuntimeMethod_var);
		return;
	}
}
// System.Void EveryWhere.Manger.ScheduleManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduleManager__cctor_m60038B4143AD2BEB7B2223166D889D44FDC52CAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int MAX_WEEK_DAYS = 7;
		((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6 = 7;
		// public static readonly int MAX_DAY_TIMES = 24;
		((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7 = ((int32_t)24);
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
// System.Void EveryWhere.Manger.UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_m46415287CB285130542AD422CC2F1BB3CBFC4173 (UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC848228B7AB9B32AF453A14E1B6AC49F53A659);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "ScheduleScene")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral5FC848228B7AB9B32AF453A14E1B6AC49F53A659, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// InitializeTimeline();
		UIManager_InitializeTimeline_m125CBD4DDE68425664004F9F1E58F0EC99054E55(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.UIManager::UpdateTimeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateTimeline_m6445A1D5C21BE1D21D17F15F305D3A93A644FB6B (UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D17CBCDF6F3DE7989E82BA55AA79588E8762C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34FB8AD3F8DABF14F758801CD07F057318E3D42F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral501842043820AC9BF7DD3836734ED0EFD69AF6DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral576AB4EBE28F721B484E313B51CCCA508D2100FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral844334E4E5EF48A979C37113BBF808A42D7F65BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9973A7DFA585FFB7C3C3EDD14DE4E47B10BCB4D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3002A071D316CA22CE041B68B1C05BBD27C9911);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
		V_0 = 0;
		goto IL_0151;
	}

IL_0007:
	{
		// for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
		V_1 = 1;
		goto IL_0140;
	}

IL_000e:
	{
		// if (ScheduleManager.Instance.GetTimelineCell(day, time).isAllocated == true)
		ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* L_0;
		L_0 = SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE(SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE_RuntimeMethod_var);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_3;
		L_3 = ScheduleManager_GetTimelineCell_m82B03FA7A4C20FA915FA489BF8047D9B415527AC(L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = TimelineCell_get_isAllocated_m4EF9CA8CAD2290E1A68E6508281DDB6FBBE5ADA4_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0114;
		}
	}
	{
		// TimelineCell timeLineCell = ScheduleManager.Instance.GetTimelineCell(day, time);
		ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350* L_5;
		L_5 = SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE(SingletonMonoBase_1_get_Instance_m03FB21250F94D751B6028AC95A48BB3FF18D6EFE_RuntimeMethod_var);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* L_8;
		L_8 = ScheduleManager_GetTimelineCell_m82B03FA7A4C20FA915FA489BF8047D9B415527AC(L_5, L_6, L_7, NULL);
		// Button button = timelineUI[day, time].GetComponent<Button>();
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_9 = __this->___timelineUI_8;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		NullCheck(L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13;
		L_13 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_12, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		V_2 = L_13;
		// button.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = V_2;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)0, NULL);
		// switch (timeLineCell.scheduleType)
		NullCheck(L_8);
		int32_t L_15;
		L_15 = TimelineCell_get_scheduleType_m7715BE1EA17C7649C07492746A8E52C98B246368_inline(L_8, NULL);
		V_3 = L_15;
		int32_t L_16 = V_3;
		switch (L_16)
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_00a5;
			}
			case 3:
			{
				goto IL_00ba;
			}
			case 4:
			{
				goto IL_00cc;
			}
			case 5:
			{
				goto IL_00de;
			}
			case 6:
			{
				goto IL_00f0;
			}
			case 7:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_013c;
	}

IL_007b:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = V_2;
		NullCheck(L_17);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18;
		L_18 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_17, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// break;
		goto IL_013c;
	}

IL_0090:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "????";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = V_2;
		NullCheck(L_19);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_20;
		L_20 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_19, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, _stringLiteral9973A7DFA585FFB7C3C3EDD14DE4E47B10BCB4D8);
		// break;
		goto IL_013c;
	}

IL_00a5:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "????";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = V_2;
		NullCheck(L_21);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_22;
		L_22 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_21, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, _stringLiteral1D17CBCDF6F3DE7989E82BA55AA79588E8762C53);
		// break;
		goto IL_013c;
	}

IL_00ba:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "???";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = V_2;
		NullCheck(L_23);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_24;
		L_24 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_23, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, _stringLiteral501842043820AC9BF7DD3836734ED0EFD69AF6DD);
		// break;
		goto IL_013c;
	}

IL_00cc:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "???";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = V_2;
		NullCheck(L_25);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_26;
		L_26 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_25, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, _stringLiteral34FB8AD3F8DABF14F758801CD07F057318E3D42F);
		// break;
		goto IL_013c;
	}

IL_00de:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "???";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = V_2;
		NullCheck(L_27);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_28;
		L_28 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_27, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, _stringLiteral576AB4EBE28F721B484E313B51CCCA508D2100FF);
		// break;
		goto IL_013c;
	}

IL_00f0:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "???";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = V_2;
		NullCheck(L_29);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_30;
		L_30 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_29, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_30, _stringLiteral844334E4E5EF48A979C37113BBF808A42D7F65BC);
		// break;
		goto IL_013c;
	}

IL_0102:
	{
		// button.GetComponentInChildren<TMP_Text>().text = "????";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31 = V_2;
		NullCheck(L_31);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_32;
		L_32 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_31, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_32, _stringLiteralD3002A071D316CA22CE041B68B1C05BBD27C9911);
		// break;
		goto IL_013c;
	}

IL_0114:
	{
		// Button button = timelineUI[day, time].GetComponent<Button>();
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_33 = __this->___timelineUI_8;
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = (L_33)->GetAt(L_34, L_35);
		NullCheck(L_36);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37;
		L_37 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_36, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		// button.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_38 = L_37;
		NullCheck(L_38);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_38, (bool)1, NULL);
		// button.GetComponentInChildren<TMP_Text>().text = "";
		NullCheck(L_38);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_39;
		L_39 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_38, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_39, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_013c:
	{
		// for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0140:
	{
		// for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
		int32_t L_41 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_42 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)il2cpp_codegen_add(L_42, 1)))))
		{
			goto IL_000e;
		}
	}
	{
		// for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0151:
	{
		// for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
		int32_t L_44 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_45 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.UIManager::InitializeTimeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_InitializeTimeline_m125CBD4DDE68425664004F9F1E58F0EC99054E55 (UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F_mF0D6FF30D56C3AFB55C6A5ACAEAF56C41F737148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// GameObject dayGrid = null;  // Timeline ?????? ?????? DayGrid ???
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// this.timelineUI = new GameObject[ScheduleManager.MAX_WEEK_DAYS, ScheduleManager.MAX_DAY_TIMES + 1];
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6;
		int32_t L_1 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)((int32_t)il2cpp_codegen_add(L_1, 1)) };
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_2 = (GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E*)GenArrayNew(GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var, L_3);
		__this->___timelineUI_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timelineUI_8), (void*)L_2);
		// for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
		V_1 = 0;
		goto IL_0089;
	}

IL_001d:
	{
		// dayGrid = timeline.transform.GetChild(day).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___timeline_7;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		V_0 = L_8;
		// for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
		V_2 = 1;
		goto IL_007b;
	}

IL_0038:
	{
		// this.timelineUI[day, time] = dayGrid.transform.GetChild(time - 1).gameObject;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_9 = __this->___timelineUI_8;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(L_10, L_11, L_16);
		// var cell = timelineUI[day, time].GetComponent<SelectTimelineCell>();
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_17 = __this->___timelineUI_8;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = (L_17)->GetAt(L_18, L_19);
		NullCheck(L_20);
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_21;
		L_21 = GameObject_GetComponent_TisSelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F_mF0D6FF30D56C3AFB55C6A5ACAEAF56C41F737148(L_20, GameObject_GetComponent_TisSelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F_mF0D6FF30D56C3AFB55C6A5ACAEAF56C41F737148_RuntimeMethod_var);
		// cell.DayNumber = day;
		SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* L_22 = L_21;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		SelectTimelineCell_set_DayNumber_mE21998DF19B79E07ACC9ADD17576C0C36181E9E0_inline(L_22, L_23, NULL);
		// cell.TimeNumber = time;
		int32_t L_24 = V_2;
		NullCheck(L_22);
		SelectTimelineCell_set_TimeNumber_mCA7C6F283D576E299BB3F6542780CBCB20B0D6B5_inline(L_22, L_24, NULL);
		// for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007b:
	{
		// for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
		int32_t L_26 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_27 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_DAY_TIMES_7;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_add(L_27, 1)))))
		{
			goto IL_0038;
		}
	}
	{
		// for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0089:
	{
		// for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
		int32_t L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_StaticFields*)il2cpp_codegen_static_fields_for(ScheduleManager_tD46025B990E181E9DB2E9DE3EAF13B18C8EF9350_il2cpp_TypeInfo_var))->___MAX_WEEK_DAYS_6;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.UIManager::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnButtonClick_m473F89739C192E1269EE47F00303C7BE0B4F02A7 (UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAABD36D150F5E976A6D9F75BBEB80944551CFF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SideMenuAnimator.GetBool("isOpened") == false)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___SideMenuAnimator_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_0, _stringLiteralCAABD36D150F5E976A6D9F75BBEB80944551CFF2, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// SideMenuAnimator.SetBool("isOpened", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___SideMenuAnimator_5;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteralCAABD36D150F5E976A6D9F75BBEB80944551CFF2, (bool)1, NULL);
		return;
	}

IL_0024:
	{
		// SideMenuAnimator.SetBool("isOpened", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___SideMenuAnimator_5;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralCAABD36D150F5E976A6D9F75BBEB80944551CFF2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_m894F0FDC10927720625598A94E2A934E095A9E20 (UIManager_t9DCA8C3B535BCD0498E7B30B7D3C3798BECA8A50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1__ctor_m15DAAA832F15C4497F6DA6A493DF8091AF0652FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonMonoBase_1__ctor_m15DAAA832F15C4497F6DA6A493DF8091AF0652FB(__this, SingletonMonoBase_1__ctor_m15DAAA832F15C4497F6DA6A493DF8091AF0652FB_RuntimeMethod_var);
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
// System.Void EveryWhere.Manger.FlipManager::InvLoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipManager_InvLoadScene_mD6E4987261AE5A6A23B21860719D7084A10F1FEA (String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral553BC459CCF831FB0574EBE7D62C4C2499A4B690);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("InventoryScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral553BC459CCF831FB0574EBE7D62C4C2499A4B690, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.FlipManager::StoreLoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipManager_StoreLoadScene_mA0FF19682C183F576034608BAC19B07735366099 (String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F378F94E5C9D34E2134126A0885331C391796AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StoreScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F378F94E5C9D34E2134126A0885331C391796AF, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.FlipManager::ScheduleLoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipManager_ScheduleLoadScene_mB0641F7237688C196021641D9DCFFE89C84C6A76 (String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC848228B7AB9B32AF453A14E1B6AC49F53A659);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ScheduleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5FC848228B7AB9B32AF453A14E1B6AC49F53A659, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.FlipManager::MainLoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipManager_MainLoadScene_m1A8C5EB05773804D00B61EE7662E6F238F1D33FB (String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758E1223E37DB498BF4E25C1DC407152FAF71C71);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainGameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral758E1223E37DB498BF4E25C1DC407152FAF71C71, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.FlipManager::CharacterLoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipManager_CharacterLoadScene_m7225AEB9C9B3F765A3B82E43951EDF235AA1FF97 (String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3B2AF1F9C73F61FC21BA00F35CA471C5C10CDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CreateCharacterScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8A3B2AF1F9C73F61FC21BA00F35CA471C5C10CDD, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.FlipManager::TitleLoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipManager_TitleLoadScene_m90A6CEE5550844AF3813EBB001C6CAFDC4CB7910 (String_t* ___otherScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TitleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3, NULL);
		// }
		return;
	}
}
// System.Void EveryWhere.Manger.FlipManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipManager__ctor_mF7BB8E542F6D4F1823964B7E376CE349E992E36D (FlipManager_tEC9A146F0654FA05AE865F73945CDC6A4511E61E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5(__this, SingletonMonoBase_1__ctor_m282D341A6C0ADDA58AB887B3E183F5FB3B1135A5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Nickname_m950E22FE429F539314D49236DB02E1EF4C6679E1_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Nickname { get; private set; } = "NULL";
		String_t* L_0 = ___value0;
		__this->___U3CNicknameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNicknameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Gender_mB155B863A4717CDFE7A4697905AEC26DD229A797_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private bool Gender { get; set; }
		bool L_0 = ___value0;
		__this->___U3CGenderU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Sociability_m7860F54891CE6CB268091EB3E16A3ACA2C748725_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Sociability { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CSociabilityU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_LearningAbility_m142E296E0857D3F97FA40B755995A4FE8169FF8A_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float LearningAbility { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CLearningAbilityU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_EconomicAbility_m5577522206B3A6E2543AD8A74CA175E01B283503_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EconomicAbility { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CEconomicAbilityU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_SpecAbility_m8908411EACC74856D153B55EDF7BEB93439D15B7_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SpecAbility { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CSpecAbilityU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectTimelineCell_get_DayNumber_mF5BA819740C68380A56A64EA5E00956DE692FE56_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) 
{
	{
		// public int DayNumber { get; set; }
		int32_t L_0 = __this->___U3CDayNumberU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectTimelineCell_get_TimeNumber_m68836D8BE71B756C3EB84759D5D3E0F44933925B_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, const RuntimeMethod* method) 
{
	{
		// public int TimeNumber { get; set; }
		int32_t L_0 = __this->___U3CTimeNumberU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineCell_set_isAllocated_m41CDA2C32C2748C316F081FC71F38C41FF954A0B_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isAllocated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisAllocatedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineCell_set_scheduleType_mAFCEF23FED2F40627DC3D99F22CEF43788C05BF5_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public EScheduleType scheduleType { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CscheduleTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineCell_set_tiredness_m81461A9FA0D441E06429E0FA1CBCB193C7A92DA8_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float tiredness { get; private set; }
		float L_0 = ___value0;
		__this->___U3CtirednessU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_Sociability_mBA6FCD4E263BE6C4AB3BF8038379E3C85BE0DD0B_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float Sociability { get; private set; } = 0f;
		float L_0 = __this->___U3CSociabilityU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_Sociability_mA663ECC1F58B57D20C7117CEF481672CC117E95F_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Sociability { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CSociabilityU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_LearningAbility_m9D4D02B5EF0348DBC16E5E3D8A9FBBCD139F778F_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float LearningAbility { get; private set; } = 0f;
		float L_0 = __this->___U3CLearningAbilityU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_LearningAbility_mC47E4A874A6EB39601BF8E36D3CA3035CD223E38_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float LearningAbility { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CLearningAbilityU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_EconomicAbility_m66BE78F9B5B5B44F165F04070D75CEB756CD3ADB_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float EconomicAbility { get; private set; } = 0f;
		float L_0 = __this->___U3CEconomicAbilityU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_EconomicAbility_m5312F7B9BA316EAE1419E7F266DF5EAF352EBC4F_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EconomicAbility { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CEconomicAbilityU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float StatDistribute_get_SpecAbility_m8079A63E6FA4A9689775EAAEA6F4E40608B26316_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, const RuntimeMethod* method) 
{
	{
		// public float SpecAbility { get; private set; } = 0f;
		float L_0 = __this->___U3CSpecAbilityU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StatDistribute_set_SpecAbility_mF2964848D7514F0A0D15882DD0F8EB02139188F8_inline (StatDistribute_tA84B4D26FABAC1CAD9F94FD3BF055982C936E808* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SpecAbility { get; private set; } = 0f;
		float L_0 = ___value0;
		__this->___U3CSpecAbilityU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineCell_get_isAllocated_m4EF9CA8CAD2290E1A68E6508281DDB6FBBE5ADA4_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) 
{
	{
		// public bool isAllocated { get; private set; }
		bool L_0 = __this->___U3CisAllocatedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineCell_get_scheduleType_m7715BE1EA17C7649C07492746A8E52C98B246368_inline (TimelineCell_tD07DA3901538D9DC84A17734012B43FD10159738* __this, const RuntimeMethod* method) 
{
	{
		// public EScheduleType scheduleType { get; private set; }
		int32_t L_0 = __this->___U3CscheduleTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectTimelineCell_set_DayNumber_mE21998DF19B79E07ACC9ADD17576C0C36181E9E0_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int DayNumber { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CDayNumberU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectTimelineCell_set_TimeNumber_mCA7C6F283D576E299BB3F6542780CBCB20B0D6B5_inline (SelectTimelineCell_t3B5E846A26279DCC5FB0C2118E1FBDDDB577DC6F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TimeNumber { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTimeNumberU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
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
