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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// AlmostEngine.Screenshot.ScreenshotCamera
struct ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842;
// AlmostEngine.Screenshot.ScreenshotCamera[]
struct ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E;
// AlmostEngine.Screenshot.ScreenshotOverlay
struct ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F;
// AlmostEngine.Screenshot.ScreenshotOverlay[]
struct ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34;
// AlmostEngine.Screenshot.ScreenshotResolution
struct ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA;
// AlmostEngine.Screenshot.ScreenshotResolution[]
struct ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F;
// AlmostEngine.Screenshot.ScreenshotTaker
struct ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6;
// AlmostEngine.Screenshot.SimpleScreenshotCapture/<CaptureToTextureCoroutine>d__10
struct U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C;
// AlmostEngine.Screenshot.TextureExporter
struct TextureExporter_t263F6E6733F3AE3EBB9B131B317327639E61FA94;
// AlmostEngine.Screenshot.TextureExporter/ImageFile
struct ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA;
// AlmostEngine.Screenshot.TextureExporter/ImageFile[]
struct ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D;
// AlmostEngine.Screenshot.UltimateScreenshotCreator
struct UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962;
// AlmostEngine.Screenshot.iOsUtils
struct iOsUtils_t838D817FDE14DDFF92830AF2CB26FB5A70483E60;
// AlmostEngine.SerializableDictionary`2<System.Object,System.Object>
struct SerializableDictionary_2_tBD233BFC385BC3EF472FAB2E59EF43D915CC8666;
// AlmostEngine.SerializableDictionary`2<System.String,System.String>
struct SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563;
// AlmostEngine.SerializableDictionary`2<System.String,UnityEngine.Texture>
struct SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3;
// AlmostEngine.SimpleLocalization.ISimpleLocalizer
struct ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349;
// AlmostEngine.SimpleLocalization.ISimpleLocalizer[]
struct ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9;
// AlmostEngine.SimpleLocalization.LanguageSwitcher
struct LanguageSwitcher_t3894F3FEE6ABA2301667D758DF3BC7CC1821A8FB;
// AlmostEngine.SimpleLocalization.SimpleImageLocalizer
struct SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180;
// AlmostEngine.SimpleLocalization.SimpleImageLocalizer/Localization
struct Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD;
// AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset
struct SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68;
// AlmostEngine.SimpleLocalization.SimpleTextLocalizer
struct SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB;
// AlmostEngine.SimpleLocalization.SimpleTextLocalizer/Localization
struct Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E;
// AlmostEngine.UnityVersion
struct UnityVersion_t81B629B57941E0D6D609EFCF9F02CB6AD80D5E31;
// AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS
struct NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21;
// AlmostEngineDependencies.NativeShare.NativeShare
struct NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275;
// AlmostEngineDependencies.NativeShare.NativeShare/ShareResultCallback
struct ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Texture>[]
struct EntryU5BU5D_t0EF622B2F6FDB160BCF5B08E80F8902D1395504A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Texture>
struct KeyCollection_tD9CD1730FB6882D2ADF95CA8D40D144491CDA2A6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Texture>
struct ValueCollection_t85B74BB1410393D028F247A15A120E099030B661;
// System.Collections.Generic.Dictionary`2<AlmostEngine.Screenshot.ScreenshotResolution,UnityEngine.RenderTexture>
struct Dictionary_2_t61E04123E3AF37D31B7D619B743C005C0B6B9978;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture>
struct Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotCamera>
struct List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54;
// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotOverlay>
struct List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2;
// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotResolution>
struct List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A;
// System.Collections.Generic.List`1<AlmostEngine.Screenshot.TextureExporter/ImageFile>
struct List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14;
// System.Collections.Generic.List`1<UnityEngine.Texture>
struct List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF;
// System.Collections.Generic.Stack`1<AlmostEngine.Screenshot.ScreenshotCamera/Settings>
struct Stack_1_tDED5BA81EFEAE5E42E25F7C0C125ECBA7A96C1E1;
// System.Collections.Generic.Stack`1<AlmostEngine.Screenshot.ScreenshotOverlay/Settings>
struct Stack_1_t11538A06136CD44F33ADFCCDB7CB9919645EEC15;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileInfo
struct FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88;
// System.IO.FileSystemInfo
struct FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<AlmostEngine.Screenshot.ScreenshotResolution>
struct UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B;
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
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RawImage
struct RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShareResult_t6608DA24F381D18F7C040C07B7F2844AF0391166_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0733E025EA45E35F9BA089DE36023516E8FD1E84;
IL2CPP_EXTERN_C String_t* _stringLiteral09EC3DE4DECDAF14C64FD72D13D3CEC670938CD9;
IL2CPP_EXTERN_C String_t* _stringLiteral0AB64501048BA8E48FAD5628B13B2CB4C9D8B390;
IL2CPP_EXTERN_C String_t* _stringLiteral0AE88E088C5BDEE5C02B05298B7BED8DAA2FBEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral1908039BF8CFD9828122171F33446B3D4AF510A8;
IL2CPP_EXTERN_C String_t* _stringLiteral225D623BB123F6969E06EA9481CF05435FAB0ED0;
IL2CPP_EXTERN_C String_t* _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0;
IL2CPP_EXTERN_C String_t* _stringLiteral34D71611DCE9C30419B3C3EA42DC9426E931CDDE;
IL2CPP_EXTERN_C String_t* _stringLiteral365E0981A2EB5C0BB9FD7716CC89469869DEA2C0;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral452E516DC251DCE80C63726D70CDB94E1D48BEC3;
IL2CPP_EXTERN_C String_t* _stringLiteral5DEEFF80039DD66E38E4F84454D9B596B3F4C3B3;
IL2CPP_EXTERN_C String_t* _stringLiteral60C283FF6EF6CAD8B67415AE1A3C6BABD3477040;
IL2CPP_EXTERN_C String_t* _stringLiteral7B250C4499507689DEDCFAF44330C282AD1F9257;
IL2CPP_EXTERN_C String_t* _stringLiteral801DC5C3610D303D73C37E27B3D6F5AC9F7661DC;
IL2CPP_EXTERN_C String_t* _stringLiteral80DDDCF7769FD87FE76A1EB974A67FE543FB90AC;
IL2CPP_EXTERN_C String_t* _stringLiteral93E5D65B98CC759FA9367339593CA5B7213AAC7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA4CD2AB840E08A5CBEE3BD3D914E8C4145DD58E5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE6503ADAA787D2F29BA065AFFEAC5C7B3F63B1F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD53AF209D51661C55D94DC712DCA7891CF20671;
IL2CPP_EXTERN_C String_t* _stringLiteralCFFAEC319EAA09570193BA1A749CB57E4F381C3B;
IL2CPP_EXTERN_C String_t* _stringLiteralD0E84C408F06997E6D835E949DA6D57389448023;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCDFD41CB6E96E78736DEB5F5ADD6F6311DA8E80;
IL2CPP_EXTERN_C String_t* _stringLiteralF3B8E4FE06130C492BED475E5201F106B84474A4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3DA781196364ECCEAFCB84E59E5CEB8DE61CAFF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m203B7674788FC1E83144C56F6604B5BA9A7CF53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m26A17E3A613622E615C5AC5139DB1866277C2C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6662AB2F19D38E82C8A3951BE3DF9A8DFE70A34D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m97208387B39CAE7B8746234E80F8C8554BFCBE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA73B37591E60EDFC7C0E3FC03B165D84BC0E0875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B9AC2C81EBDB83324E90B4A419EE6DEE636DF88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF441D4B876FCA94E8BEDAFF87571000E83BC2504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_m3D8CE54363A373E54A7C1DB82C01C0AEE8E14D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E67DF595C350BF674B667F4BA0C1C9E7204F73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5464A52A49D5B944EC2ED4CCABBCC125204DF590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F6FDD156758C09A9F73B30E6DFDD495BA880CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF9C3319A585A471E2B432C6813F422D4BAEA118F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9166536DB8A2B0793867BAACA7A84477017D98FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD45B8F64E321ECB2F6BA81B78030B12E693B39E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E3946F29FEADF069EDBA13A52948902FC8B762F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m400E5F7350321292ACC7E6D206BDDEC84A0D7025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m96FD1A8AEE15F9D1753DB8C413CD6BE90DF1A79A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB89128F33E1D7340F8421201382AF51398002600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349_mB245EB43CD8DCA2160A04282CAD2E48D5679F684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_m65B321E5FD96263C472D985E73F36FF487F95F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_mC23513C0655F79490C8EA6A055E2F687319D1471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCaptureToTextureCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m7D326BD72795FCC2F785AE7A7F29DC156021D0E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t LanguageSwitcher_Set_m0D8DFBD4E5FECC2C17361EB5E65BFDE66402C21B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Localization__ctor_m77CB5D9E956D313443586AE7584EBBA4828D6F66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Localization__ctor_mC4FD93F2CAEA8BFD2C4D8C5A9F0BA9582F7F962A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NSShareResultCallbackiOS_Initialize_mAEDA086743E5BB6B95175F260DFB9FE7E74419A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_AddFile_m1427851A2ED59DCAAF4FE30B4841CEC365FB2303_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_AddFile_mE4A4C67F18816539D9255C1C6E22069C73421909_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_GetTextureBytesFromCopy_m92BB02ED836FB88843570321401EBE9F9FB78BD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_GetTextureBytes_mAE9D060163BE5C1CF3DFF385AB8E932853EDC7EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_SetSubject_m8FA269D2A06F23A4D2850ED2DBB862FE43660F22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_SetText_m77F73B106A0478DAD2A547E469F1451D64EC9B6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_SetTitle_mC622BF36893DB9259135CC21534A34A50DFFC5DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare_Share_mD25C0BF9747B12BD5D556415F2BE3865D1E9560B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeShare__ctor_m289BC16707830C1D84234E1CA442A6D89E884C92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShareResultCallback_BeginInvoke_m8D065AEFFADA62B4793BC9EA39B5CDE35CA57B95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleImageLocalizer_OnEnable_m95EBC93B16626354F9F7E0C51051E9663EB34ED3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleImageLocalizer_OnLanguageChanged_m6ABD928B7680FDD5B08FF146752804FAD80F3F80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleImageLocalizer_Restore_mB9D0D789E78D745AF1F4AEDA3D67A766CCEEFECD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleImageLocalizer__ctor_m0B28473BA4B96C6B75E4B8821CAA7A6D9B25BF48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleLocalizationLanguagesAsset_SetLanguage_m6C9F233C93A9C77A4CF3DF1A95907E6B3C345310_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleLocalizationLanguagesAsset__cctor_m4BB7D255898E08B701E891F3BE217A15A9D843D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleLocalizationLanguagesAsset__ctor_m725344535A5F36DAB7900D86C685F95806F1ADCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleTextLocalizer_OnEnable_mCAD7FBE49C3280A28DE84DE688AB1BD9CF4CD982_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleTextLocalizer_OnLanguageChanged_mD05687E4FA8CDC97DEC9592B1D84CC33D70FC773_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleTextLocalizer_Restore_m0DF57E9B36E36E1834E1AE21B3DA8AD27EC6CD77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleTextLocalizer__ctor_m0849EE2FE6E739B8C4A689EAAC8517ABA58FAA3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExporter_ExportToFile_m691ABD648867F4AC2ECEEB3F520FF4A51E6A3971_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExporter_LoadFromFile_m2766765EE19EDB36F7654D6477F5E1345AC9F099_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExporter_LoadFromPath_m07E8210B597BC0A7CDCE42E5500AD77D19448833_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCaptureToTextureCoroutineU3Ed__10_MoveNext_m5F91D2F4B1AC6132A91DCEC985ACBCD26B21CDA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCaptureToTextureCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m7D326BD72795FCC2F785AE7A7F29DC156021D0E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UltimateScreenshotCreator__cctor_mD8F6F3C4FD48EF19D0C4BCBC2FDDA647903CEDCC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// AlmostEngine.Screenshot.ScreenshotOverlay
struct  ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F  : public RuntimeObject
{
public:
	// UnityEngine.Canvas AlmostEngine.Screenshot.ScreenshotOverlay::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_0;
	// System.Boolean AlmostEngine.Screenshot.ScreenshotOverlay::m_Active
	bool ___m_Active_1;
	// System.Collections.Generic.Stack`1<AlmostEngine.Screenshot.ScreenshotOverlay_Settings> AlmostEngine.Screenshot.ScreenshotOverlay::m_SettingStack
	Stack_1_t11538A06136CD44F33ADFCCDB7CB9919645EEC15 * ___m_SettingStack_2;
	// UnityEngine.Canvas AlmostEngine.Screenshot.ScreenshotOverlay::m_Instance
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Instance_3;

public:
	inline static int32_t get_offset_of_m_Canvas_0() { return static_cast<int32_t>(offsetof(ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F, ___m_Canvas_0)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_0() const { return ___m_Canvas_0; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_0() { return &___m_Canvas_0; }
	inline void set_m_Canvas_0(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_SettingStack_2() { return static_cast<int32_t>(offsetof(ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F, ___m_SettingStack_2)); }
	inline Stack_1_t11538A06136CD44F33ADFCCDB7CB9919645EEC15 * get_m_SettingStack_2() const { return ___m_SettingStack_2; }
	inline Stack_1_t11538A06136CD44F33ADFCCDB7CB9919645EEC15 ** get_address_of_m_SettingStack_2() { return &___m_SettingStack_2; }
	inline void set_m_SettingStack_2(Stack_1_t11538A06136CD44F33ADFCCDB7CB9919645EEC15 * value)
	{
		___m_SettingStack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SettingStack_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_3() { return static_cast<int32_t>(offsetof(ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F, ___m_Instance_3)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Instance_3() const { return ___m_Instance_3; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Instance_3() { return &___m_Instance_3; }
	inline void set_m_Instance_3(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_3), (void*)value);
	}
};


// AlmostEngine.Screenshot.SimpleScreenshotCapture
struct  SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024  : public RuntimeObject
{
public:

public:
};

struct SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024_StaticFields
{
public:
	// AlmostEngine.Screenshot.ScreenshotTaker AlmostEngine.Screenshot.SimpleScreenshotCapture::m_ScreenshotTaker
	ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6 * ___m_ScreenshotTaker_0;

public:
	inline static int32_t get_offset_of_m_ScreenshotTaker_0() { return static_cast<int32_t>(offsetof(SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024_StaticFields, ___m_ScreenshotTaker_0)); }
	inline ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6 * get_m_ScreenshotTaker_0() const { return ___m_ScreenshotTaker_0; }
	inline ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6 ** get_address_of_m_ScreenshotTaker_0() { return &___m_ScreenshotTaker_0; }
	inline void set_m_ScreenshotTaker_0(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6 * value)
	{
		___m_ScreenshotTaker_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScreenshotTaker_0), (void*)value);
	}
};


// AlmostEngine.Screenshot.TextureExporter
struct  TextureExporter_t263F6E6733F3AE3EBB9B131B317327639E61FA94  : public RuntimeObject
{
public:

public:
};


// AlmostEngine.Screenshot.UltimateScreenshotCreator
struct  UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962  : public RuntimeObject
{
public:

public:
};

struct UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_StaticFields
{
public:
	// System.String AlmostEngine.Screenshot.UltimateScreenshotCreator::VERSION
	String_t* ___VERSION_0;
	// System.String AlmostEngine.Screenshot.UltimateScreenshotCreator::AUTHOR
	String_t* ___AUTHOR_1;

public:
	inline static int32_t get_offset_of_VERSION_0() { return static_cast<int32_t>(offsetof(UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_StaticFields, ___VERSION_0)); }
	inline String_t* get_VERSION_0() const { return ___VERSION_0; }
	inline String_t** get_address_of_VERSION_0() { return &___VERSION_0; }
	inline void set_VERSION_0(String_t* value)
	{
		___VERSION_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VERSION_0), (void*)value);
	}

	inline static int32_t get_offset_of_AUTHOR_1() { return static_cast<int32_t>(offsetof(UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_StaticFields, ___AUTHOR_1)); }
	inline String_t* get_AUTHOR_1() const { return ___AUTHOR_1; }
	inline String_t** get_address_of_AUTHOR_1() { return &___AUTHOR_1; }
	inline void set_AUTHOR_1(String_t* value)
	{
		___AUTHOR_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AUTHOR_1), (void*)value);
	}
};


// AlmostEngine.Screenshot.iOsUtils
struct  iOsUtils_t838D817FDE14DDFF92830AF2CB26FB5A70483E60  : public RuntimeObject
{
public:

public:
};


// AlmostEngine.UnityVersion
struct  UnityVersion_t81B629B57941E0D6D609EFCF9F02CB6AD80D5E31  : public RuntimeObject
{
public:

public:
};


// AlmostEngineDependencies.NativeShare.NativeShare
struct  NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275  : public RuntimeObject
{
public:
	// System.String AlmostEngineDependencies.NativeShare.NativeShare::subject
	String_t* ___subject_0;
	// System.String AlmostEngineDependencies.NativeShare.NativeShare::text
	String_t* ___text_1;
	// System.String AlmostEngineDependencies.NativeShare.NativeShare::title
	String_t* ___title_2;
	// System.Collections.Generic.List`1<System.String> AlmostEngineDependencies.NativeShare.NativeShare::files
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___files_3;
	// System.Collections.Generic.List`1<System.String> AlmostEngineDependencies.NativeShare.NativeShare::mimes
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___mimes_4;
	// AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback AlmostEngineDependencies.NativeShare.NativeShare::callback
	ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * ___callback_5;

public:
	inline static int32_t get_offset_of_subject_0() { return static_cast<int32_t>(offsetof(NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275, ___subject_0)); }
	inline String_t* get_subject_0() const { return ___subject_0; }
	inline String_t** get_address_of_subject_0() { return &___subject_0; }
	inline void set_subject_0(String_t* value)
	{
		___subject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_2), (void*)value);
	}

	inline static int32_t get_offset_of_files_3() { return static_cast<int32_t>(offsetof(NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275, ___files_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_files_3() const { return ___files_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_files_3() { return &___files_3; }
	inline void set_files_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___files_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___files_3), (void*)value);
	}

	inline static int32_t get_offset_of_mimes_4() { return static_cast<int32_t>(offsetof(NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275, ___mimes_4)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_mimes_4() const { return ___mimes_4; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_mimes_4() { return &___mimes_4; }
	inline void set_mimes_4(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___mimes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimes_4), (void*)value);
	}

	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275, ___callback_5)); }
	inline ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * get_callback_5() const { return ___callback_5; }
	inline ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
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
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture>
struct  Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0EF622B2F6FDB160BCF5B08E80F8902D1395504A* ___entries_1;
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
	KeyCollection_tD9CD1730FB6882D2ADF95CA8D40D144491CDA2A6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t85B74BB1410393D028F247A15A120E099030B661 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___entries_1)); }
	inline EntryU5BU5D_t0EF622B2F6FDB160BCF5B08E80F8902D1395504A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0EF622B2F6FDB160BCF5B08E80F8902D1395504A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0EF622B2F6FDB160BCF5B08E80F8902D1395504A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___keys_7)); }
	inline KeyCollection_tD9CD1730FB6882D2ADF95CA8D40D144491CDA2A6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD9CD1730FB6882D2ADF95CA8D40D144491CDA2A6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD9CD1730FB6882D2ADF95CA8D40D144491CDA2A6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ___values_8)); }
	inline ValueCollection_t85B74BB1410393D028F247A15A120E099030B661 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t85B74BB1410393D028F247A15A120E099030B661 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t85B74BB1410393D028F247A15A120E099030B661 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotCamera>
struct  List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54, ____items_1)); }
	inline ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E* get__items_1() const { return ____items_1; }
	inline ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54_StaticFields, ____emptyArray_5)); }
	inline ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScreenshotCameraU5BU5D_t801E61F98286248B0C8B68C9454756101FAF0D1E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotOverlay>
struct  List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2, ____items_1)); }
	inline ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34* get__items_1() const { return ____items_1; }
	inline ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2_StaticFields, ____emptyArray_5)); }
	inline ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScreenshotOverlayU5BU5D_t822CE2A36DAEE918C7ACB1B660DC644F79CC8C34* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotResolution>
struct  List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A, ____items_1)); }
	inline ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F* get__items_1() const { return ____items_1; }
	inline ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A_StaticFields, ____emptyArray_5)); }
	inline ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScreenshotResolutionU5BU5D_tE5D916EFB00D2A1ED313DA050EB7E129A9E8E08F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<AlmostEngine.Screenshot.TextureExporter_ImageFile>
struct  List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8, ____items_1)); }
	inline ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D* get__items_1() const { return ____items_1; }
	inline ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8_StaticFields, ____emptyArray_5)); }
	inline ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImageFileU5BU5D_tD7929CFBD316AB63702E9AFBD411E05A97252A5D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1<UnityEngine.Camera>
struct  List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6, ____items_1)); }
	inline CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* get__items_1() const { return ____items_1; }
	inline CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6_StaticFields, ____emptyArray_5)); }
	inline CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct  List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14, ____items_1)); }
	inline CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129* get__items_1() const { return ____items_1; }
	inline CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14_StaticFields, ____emptyArray_5)); }
	inline CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CanvasU5BU5D_t69253447FFB59DF7EE8408C1DB31C3E6CF80C129* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// AlmostEngine.SerializableDictionary`2<System.String,System.String>
struct  SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563  : public Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC
{
public:
	// System.Collections.Generic.List`1<TKey> AlmostEngine.SerializableDictionary`2::keys
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___keys_14;
	// System.Collections.Generic.List`1<TValue> AlmostEngine.SerializableDictionary`2::values
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___values_15;
	// System.Collections.Generic.List`1<TValue> AlmostEngine.SerializableDictionary`2::nulls
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___nulls_16;

public:
	inline static int32_t get_offset_of_keys_14() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563, ___keys_14)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_keys_14() const { return ___keys_14; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_keys_14() { return &___keys_14; }
	inline void set_keys_14(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___keys_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_14), (void*)value);
	}

	inline static int32_t get_offset_of_values_15() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563, ___values_15)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_values_15() const { return ___values_15; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_values_15() { return &___values_15; }
	inline void set_values_15(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___values_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_15), (void*)value);
	}

	inline static int32_t get_offset_of_nulls_16() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563, ___nulls_16)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_nulls_16() const { return ___nulls_16; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_nulls_16() { return &___nulls_16; }
	inline void set_nulls_16(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___nulls_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nulls_16), (void*)value);
	}
};


// AlmostEngine.SerializableDictionary`2<System.String,UnityEngine.Texture>
struct  SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3  : public Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA
{
public:
	// System.Collections.Generic.List`1<TKey> AlmostEngine.SerializableDictionary`2::keys
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___keys_14;
	// System.Collections.Generic.List`1<TValue> AlmostEngine.SerializableDictionary`2::values
	List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF * ___values_15;
	// System.Collections.Generic.List`1<TValue> AlmostEngine.SerializableDictionary`2::nulls
	List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF * ___nulls_16;

public:
	inline static int32_t get_offset_of_keys_14() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3, ___keys_14)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_keys_14() const { return ___keys_14; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_keys_14() { return &___keys_14; }
	inline void set_keys_14(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___keys_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_14), (void*)value);
	}

	inline static int32_t get_offset_of_values_15() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3, ___values_15)); }
	inline List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF * get_values_15() const { return ___values_15; }
	inline List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF ** get_address_of_values_15() { return &___values_15; }
	inline void set_values_15(List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF * value)
	{
		___values_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_15), (void*)value);
	}

	inline static int32_t get_offset_of_nulls_16() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3, ___nulls_16)); }
	inline List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF * get_nulls_16() const { return ___nulls_16; }
	inline List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF ** get_address_of_nulls_16() { return &___nulls_16; }
	inline void set_nulls_16(List_1_tEF7F74C3647DBAC58F0F161A249A7F24D281BABF * value)
	{
		___nulls_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nulls_16), (void*)value);
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Camera>
struct  Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752, ___list_0)); }
	inline List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * get_list_0() const { return ___list_0; }
	inline List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752, ___current_3)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_current_3() const { return ___current_3; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Canvas>
struct  Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23, ___list_0)); }
	inline List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * get_list_0() const { return ___list_0; }
	inline List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23, ___current_3)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_current_3() const { return ___current_3; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// AlmostEngine.Screenshot.ScreenshotCamera_CustomSettings
struct  CustomSettings_t6932E222D36C582E63617645791BA7D711C90816 
{
public:
	// System.Int32 AlmostEngine.Screenshot.ScreenshotCamera_CustomSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomSettings_t6932E222D36C582E63617645791BA7D711C90816, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AlmostEngine.Screenshot.ScreenshotResolution_Orientation
struct  Orientation_t73D8498E0B50C0D0E7D122143E4E74D49701ADC6 
{
public:
	// System.Int32 AlmostEngine.Screenshot.ScreenshotResolution_Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t73D8498E0B50C0D0E7D122143E4E74D49701ADC6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AlmostEngine.Screenshot.ScreenshotTaker_CaptureMode
struct  CaptureMode_t7FDBF681F6B40464527253A66533D76C0EA935BE 
{
public:
	// System.Int32 AlmostEngine.Screenshot.ScreenshotTaker_CaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureMode_t7FDBF681F6B40464527253A66533D76C0EA935BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AlmostEngine.Screenshot.ScreenshotTaker_ColorFormat
struct  ColorFormat_t7771DA2A32820E77AC7CB5CF7DC9A274A75FEF89 
{
public:
	// System.Int32 AlmostEngine.Screenshot.ScreenshotTaker_ColorFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorFormat_t7771DA2A32820E77AC7CB5CF7DC9A274A75FEF89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AlmostEngine.Screenshot.ScreenshotTaker_GameViewResizingWaitingMode
struct  GameViewResizingWaitingMode_tE1CCE98C4A70C0C919CE471224479E17BFF71771 
{
public:
	// System.Int32 AlmostEngine.Screenshot.ScreenshotTaker_GameViewResizingWaitingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameViewResizingWaitingMode_tE1CCE98C4A70C0C919CE471224479E17BFF71771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AlmostEngine.Screenshot.TextureExporter_ImageFile
struct  ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D AlmostEngine.Screenshot.TextureExporter_ImageFile::m_Texture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Texture_0;
	// System.String AlmostEngine.Screenshot.TextureExporter_ImageFile::m_Name
	String_t* ___m_Name_1;
	// System.String AlmostEngine.Screenshot.TextureExporter_ImageFile::m_Fullname
	String_t* ___m_Fullname_2;
	// System.DateTime AlmostEngine.Screenshot.TextureExporter_ImageFile::m_CreationDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_CreationDate_3;

public:
	inline static int32_t get_offset_of_m_Texture_0() { return static_cast<int32_t>(offsetof(ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA, ___m_Texture_0)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Texture_0() const { return ___m_Texture_0; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Texture_0() { return &___m_Texture_0; }
	inline void set_m_Texture_0(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Fullname_2() { return static_cast<int32_t>(offsetof(ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA, ___m_Fullname_2)); }
	inline String_t* get_m_Fullname_2() const { return ___m_Fullname_2; }
	inline String_t** get_address_of_m_Fullname_2() { return &___m_Fullname_2; }
	inline void set_m_Fullname_2(String_t* value)
	{
		___m_Fullname_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Fullname_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreationDate_3() { return static_cast<int32_t>(offsetof(ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA, ___m_CreationDate_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_CreationDate_3() const { return ___m_CreationDate_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_CreationDate_3() { return &___m_CreationDate_3; }
	inline void set_m_CreationDate_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_CreationDate_3 = value;
	}
};


// AlmostEngine.Screenshot.TextureExporter_ImageFileFormat
struct  ImageFileFormat_t4DFA7316FA5097F545BB6307CF58041D1D7E93FE 
{
public:
	// System.Int32 AlmostEngine.Screenshot.TextureExporter_ImageFileFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageFileFormat_t4DFA7316FA5097F545BB6307CF58041D1D7E93FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AlmostEngine.SimpleLocalization.SimpleImageLocalizer_Localization
struct  Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD  : public SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3
{
public:

public:
};


// AlmostEngine.SimpleLocalization.SimpleTextLocalizer_Localization
struct  Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E  : public SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563
{
public:

public:
};


// AlmostEngineDependencies.NativeShare.NativeShare_ShareResult
struct  ShareResult_t6608DA24F381D18F7C040C07B7F2844AF0391166 
{
public:
	// System.Int32 AlmostEngineDependencies.NativeShare.NativeShare_ShareResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareResult_t6608DA24F381D18F7C040C07B7F2844AF0391166, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraClearFlags
struct  CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AlmostEngine.Screenshot.ScreenshotCamera
struct  ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842  : public RuntimeObject
{
public:
	// System.Boolean AlmostEngine.Screenshot.ScreenshotCamera::m_Active
	bool ___m_Active_0;
	// UnityEngine.Camera AlmostEngine.Screenshot.ScreenshotCamera::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_1;
	// AlmostEngine.Screenshot.ScreenshotCamera_CustomSettings AlmostEngine.Screenshot.ScreenshotCamera::m_ClearSettings
	int32_t ___m_ClearSettings_2;
	// UnityEngine.CameraClearFlags AlmostEngine.Screenshot.ScreenshotCamera::m_ClearFlags
	int32_t ___m_ClearFlags_3;
	// UnityEngine.Color AlmostEngine.Screenshot.ScreenshotCamera::m_BackgroundColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_BackgroundColor_4;
	// AlmostEngine.Screenshot.ScreenshotCamera_CustomSettings AlmostEngine.Screenshot.ScreenshotCamera::m_CullingSettings
	int32_t ___m_CullingSettings_5;
	// System.Int32 AlmostEngine.Screenshot.ScreenshotCamera::m_CullingMask
	int32_t ___m_CullingMask_6;
	// AlmostEngine.Screenshot.ScreenshotCamera_CustomSettings AlmostEngine.Screenshot.ScreenshotCamera::m_FOVSettings
	int32_t ___m_FOVSettings_7;
	// System.Single AlmostEngine.Screenshot.ScreenshotCamera::m_FOV
	float ___m_FOV_8;
	// System.Collections.Generic.Stack`1<AlmostEngine.Screenshot.ScreenshotCamera_Settings> AlmostEngine.Screenshot.ScreenshotCamera::m_SettingStack
	Stack_1_tDED5BA81EFEAE5E42E25F7C0C125ECBA7A96C1E1 * ___m_SettingStack_9;

public:
	inline static int32_t get_offset_of_m_Active_0() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_Active_0)); }
	inline bool get_m_Active_0() const { return ___m_Active_0; }
	inline bool* get_address_of_m_Active_0() { return &___m_Active_0; }
	inline void set_m_Active_0(bool value)
	{
		___m_Active_0 = value;
	}

	inline static int32_t get_offset_of_m_Camera_1() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_Camera_1)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_1() const { return ___m_Camera_1; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_1() { return &___m_Camera_1; }
	inline void set_m_Camera_1(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClearSettings_2() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_ClearSettings_2)); }
	inline int32_t get_m_ClearSettings_2() const { return ___m_ClearSettings_2; }
	inline int32_t* get_address_of_m_ClearSettings_2() { return &___m_ClearSettings_2; }
	inline void set_m_ClearSettings_2(int32_t value)
	{
		___m_ClearSettings_2 = value;
	}

	inline static int32_t get_offset_of_m_ClearFlags_3() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_ClearFlags_3)); }
	inline int32_t get_m_ClearFlags_3() const { return ___m_ClearFlags_3; }
	inline int32_t* get_address_of_m_ClearFlags_3() { return &___m_ClearFlags_3; }
	inline void set_m_ClearFlags_3(int32_t value)
	{
		___m_ClearFlags_3 = value;
	}

	inline static int32_t get_offset_of_m_BackgroundColor_4() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_BackgroundColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_BackgroundColor_4() const { return ___m_BackgroundColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_BackgroundColor_4() { return &___m_BackgroundColor_4; }
	inline void set_m_BackgroundColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_BackgroundColor_4 = value;
	}

	inline static int32_t get_offset_of_m_CullingSettings_5() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_CullingSettings_5)); }
	inline int32_t get_m_CullingSettings_5() const { return ___m_CullingSettings_5; }
	inline int32_t* get_address_of_m_CullingSettings_5() { return &___m_CullingSettings_5; }
	inline void set_m_CullingSettings_5(int32_t value)
	{
		___m_CullingSettings_5 = value;
	}

	inline static int32_t get_offset_of_m_CullingMask_6() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_CullingMask_6)); }
	inline int32_t get_m_CullingMask_6() const { return ___m_CullingMask_6; }
	inline int32_t* get_address_of_m_CullingMask_6() { return &___m_CullingMask_6; }
	inline void set_m_CullingMask_6(int32_t value)
	{
		___m_CullingMask_6 = value;
	}

	inline static int32_t get_offset_of_m_FOVSettings_7() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_FOVSettings_7)); }
	inline int32_t get_m_FOVSettings_7() const { return ___m_FOVSettings_7; }
	inline int32_t* get_address_of_m_FOVSettings_7() { return &___m_FOVSettings_7; }
	inline void set_m_FOVSettings_7(int32_t value)
	{
		___m_FOVSettings_7 = value;
	}

	inline static int32_t get_offset_of_m_FOV_8() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_FOV_8)); }
	inline float get_m_FOV_8() const { return ___m_FOV_8; }
	inline float* get_address_of_m_FOV_8() { return &___m_FOV_8; }
	inline void set_m_FOV_8(float value)
	{
		___m_FOV_8 = value;
	}

	inline static int32_t get_offset_of_m_SettingStack_9() { return static_cast<int32_t>(offsetof(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842, ___m_SettingStack_9)); }
	inline Stack_1_tDED5BA81EFEAE5E42E25F7C0C125ECBA7A96C1E1 * get_m_SettingStack_9() const { return ___m_SettingStack_9; }
	inline Stack_1_tDED5BA81EFEAE5E42E25F7C0C125ECBA7A96C1E1 ** get_address_of_m_SettingStack_9() { return &___m_SettingStack_9; }
	inline void set_m_SettingStack_9(Stack_1_tDED5BA81EFEAE5E42E25F7C0C125ECBA7A96C1E1 * value)
	{
		___m_SettingStack_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SettingStack_9), (void*)value);
	}
};


// AlmostEngine.Screenshot.ScreenshotResolution
struct  ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA  : public RuntimeObject
{
public:
	// System.Boolean AlmostEngine.Screenshot.ScreenshotResolution::m_Active
	bool ___m_Active_0;
	// System.Int32 AlmostEngine.Screenshot.ScreenshotResolution::m_Width
	int32_t ___m_Width_1;
	// System.Int32 AlmostEngine.Screenshot.ScreenshotResolution::m_Height
	int32_t ___m_Height_2;
	// System.Single AlmostEngine.Screenshot.ScreenshotResolution::m_Scale
	float ___m_Scale_3;
	// AlmostEngine.Screenshot.ScreenshotResolution_Orientation AlmostEngine.Screenshot.ScreenshotResolution::m_Orientation
	int32_t ___m_Orientation_4;
	// System.String AlmostEngine.Screenshot.ScreenshotResolution::m_ResolutionName
	String_t* ___m_ResolutionName_5;
	// System.String AlmostEngine.Screenshot.ScreenshotResolution::m_Category
	String_t* ___m_Category_6;
	// System.String AlmostEngine.Screenshot.ScreenshotResolution::m_Platform
	String_t* ___m_Platform_7;
	// System.Int32 AlmostEngine.Screenshot.ScreenshotResolution::m_PPI
	int32_t ___m_PPI_8;
	// System.Int32 AlmostEngine.Screenshot.ScreenshotResolution::m_ForcedUnityPPI
	int32_t ___m_ForcedUnityPPI_9;
	// UnityEngine.Canvas AlmostEngine.Screenshot.ScreenshotResolution::m_DeviceCanvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_DeviceCanvas_10;
	// System.String AlmostEngine.Screenshot.ScreenshotResolution::m_Ratio
	String_t* ___m_Ratio_11;
	// System.String AlmostEngine.Screenshot.ScreenshotResolution::m_FileName
	String_t* ___m_FileName_12;
	// UnityEngine.Texture2D AlmostEngine.Screenshot.ScreenshotResolution::m_Texture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Texture_13;
	// System.Boolean AlmostEngine.Screenshot.ScreenshotResolution::m_IgnoreOrientation
	bool ___m_IgnoreOrientation_14;
	// System.Boolean AlmostEngine.Screenshot.ScreenshotResolution::m_HasNotche
	bool ___m_HasNotche_15;
	// UnityEngine.Rect AlmostEngine.Screenshot.ScreenshotResolution::m_SafeAreaPortrait
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_SafeAreaPortrait_16;
	// UnityEngine.Rect AlmostEngine.Screenshot.ScreenshotResolution::m_SafeAreaLandscapeLeft
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_SafeAreaLandscapeLeft_17;

public:
	inline static int32_t get_offset_of_m_Active_0() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Active_0)); }
	inline bool get_m_Active_0() const { return ___m_Active_0; }
	inline bool* get_address_of_m_Active_0() { return &___m_Active_0; }
	inline void set_m_Active_0(bool value)
	{
		___m_Active_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_Scale_3() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Scale_3)); }
	inline float get_m_Scale_3() const { return ___m_Scale_3; }
	inline float* get_address_of_m_Scale_3() { return &___m_Scale_3; }
	inline void set_m_Scale_3(float value)
	{
		___m_Scale_3 = value;
	}

	inline static int32_t get_offset_of_m_Orientation_4() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Orientation_4)); }
	inline int32_t get_m_Orientation_4() const { return ___m_Orientation_4; }
	inline int32_t* get_address_of_m_Orientation_4() { return &___m_Orientation_4; }
	inline void set_m_Orientation_4(int32_t value)
	{
		___m_Orientation_4 = value;
	}

	inline static int32_t get_offset_of_m_ResolutionName_5() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_ResolutionName_5)); }
	inline String_t* get_m_ResolutionName_5() const { return ___m_ResolutionName_5; }
	inline String_t** get_address_of_m_ResolutionName_5() { return &___m_ResolutionName_5; }
	inline void set_m_ResolutionName_5(String_t* value)
	{
		___m_ResolutionName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResolutionName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Category_6() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Category_6)); }
	inline String_t* get_m_Category_6() const { return ___m_Category_6; }
	inline String_t** get_address_of_m_Category_6() { return &___m_Category_6; }
	inline void set_m_Category_6(String_t* value)
	{
		___m_Category_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Category_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Platform_7() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Platform_7)); }
	inline String_t* get_m_Platform_7() const { return ___m_Platform_7; }
	inline String_t** get_address_of_m_Platform_7() { return &___m_Platform_7; }
	inline void set_m_Platform_7(String_t* value)
	{
		___m_Platform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Platform_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PPI_8() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_PPI_8)); }
	inline int32_t get_m_PPI_8() const { return ___m_PPI_8; }
	inline int32_t* get_address_of_m_PPI_8() { return &___m_PPI_8; }
	inline void set_m_PPI_8(int32_t value)
	{
		___m_PPI_8 = value;
	}

	inline static int32_t get_offset_of_m_ForcedUnityPPI_9() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_ForcedUnityPPI_9)); }
	inline int32_t get_m_ForcedUnityPPI_9() const { return ___m_ForcedUnityPPI_9; }
	inline int32_t* get_address_of_m_ForcedUnityPPI_9() { return &___m_ForcedUnityPPI_9; }
	inline void set_m_ForcedUnityPPI_9(int32_t value)
	{
		___m_ForcedUnityPPI_9 = value;
	}

	inline static int32_t get_offset_of_m_DeviceCanvas_10() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_DeviceCanvas_10)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_DeviceCanvas_10() const { return ___m_DeviceCanvas_10; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_DeviceCanvas_10() { return &___m_DeviceCanvas_10; }
	inline void set_m_DeviceCanvas_10(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_DeviceCanvas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceCanvas_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ratio_11() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Ratio_11)); }
	inline String_t* get_m_Ratio_11() const { return ___m_Ratio_11; }
	inline String_t** get_address_of_m_Ratio_11() { return &___m_Ratio_11; }
	inline void set_m_Ratio_11(String_t* value)
	{
		___m_Ratio_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Ratio_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_FileName_12() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_FileName_12)); }
	inline String_t* get_m_FileName_12() const { return ___m_FileName_12; }
	inline String_t** get_address_of_m_FileName_12() { return &___m_FileName_12; }
	inline void set_m_FileName_12(String_t* value)
	{
		___m_FileName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FileName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_13() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_Texture_13)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Texture_13() const { return ___m_Texture_13; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Texture_13() { return &___m_Texture_13; }
	inline void set_m_Texture_13(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Texture_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_IgnoreOrientation_14() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_IgnoreOrientation_14)); }
	inline bool get_m_IgnoreOrientation_14() const { return ___m_IgnoreOrientation_14; }
	inline bool* get_address_of_m_IgnoreOrientation_14() { return &___m_IgnoreOrientation_14; }
	inline void set_m_IgnoreOrientation_14(bool value)
	{
		___m_IgnoreOrientation_14 = value;
	}

	inline static int32_t get_offset_of_m_HasNotche_15() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_HasNotche_15)); }
	inline bool get_m_HasNotche_15() const { return ___m_HasNotche_15; }
	inline bool* get_address_of_m_HasNotche_15() { return &___m_HasNotche_15; }
	inline void set_m_HasNotche_15(bool value)
	{
		___m_HasNotche_15 = value;
	}

	inline static int32_t get_offset_of_m_SafeAreaPortrait_16() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_SafeAreaPortrait_16)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_SafeAreaPortrait_16() const { return ___m_SafeAreaPortrait_16; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_SafeAreaPortrait_16() { return &___m_SafeAreaPortrait_16; }
	inline void set_m_SafeAreaPortrait_16(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_SafeAreaPortrait_16 = value;
	}

	inline static int32_t get_offset_of_m_SafeAreaLandscapeLeft_17() { return static_cast<int32_t>(offsetof(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA, ___m_SafeAreaLandscapeLeft_17)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_SafeAreaLandscapeLeft_17() const { return ___m_SafeAreaLandscapeLeft_17; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_SafeAreaLandscapeLeft_17() { return &___m_SafeAreaLandscapeLeft_17; }
	inline void set_m_SafeAreaLandscapeLeft_17(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_SafeAreaLandscapeLeft_17 = value;
	}
};


// AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10
struct  U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C  : public RuntimeObject
{
public:
	// System.Int32 AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::width
	int32_t ___width_2;
	// System.Int32 AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::height
	int32_t ___height_3;
	// System.Collections.Generic.List`1<UnityEngine.Camera> AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::cameras
	List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * ___cameras_4;
	// System.Collections.Generic.List`1<UnityEngine.Canvas> AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::canvas
	List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * ___canvas_5;
	// AlmostEngine.Screenshot.ScreenshotTaker_CaptureMode AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::captureMode
	int32_t ___captureMode_6;
	// System.Int32 AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::antiAliasing
	int32_t ___antiAliasing_7;
	// System.Boolean AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::captureGameUI
	bool ___captureGameUI_8;
	// AlmostEngine.Screenshot.ScreenshotTaker_ColorFormat AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::colorFormat
	int32_t ___colorFormat_9;
	// System.Boolean AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::recomputeAlphaMask
	bool ___recomputeAlphaMask_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_cameras_4() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___cameras_4)); }
	inline List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * get_cameras_4() const { return ___cameras_4; }
	inline List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 ** get_address_of_cameras_4() { return &___cameras_4; }
	inline void set_cameras_4(List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * value)
	{
		___cameras_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameras_4), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___canvas_5)); }
	inline List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * get_canvas_5() const { return ___canvas_5; }
	inline List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_captureMode_6() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___captureMode_6)); }
	inline int32_t get_captureMode_6() const { return ___captureMode_6; }
	inline int32_t* get_address_of_captureMode_6() { return &___captureMode_6; }
	inline void set_captureMode_6(int32_t value)
	{
		___captureMode_6 = value;
	}

	inline static int32_t get_offset_of_antiAliasing_7() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___antiAliasing_7)); }
	inline int32_t get_antiAliasing_7() const { return ___antiAliasing_7; }
	inline int32_t* get_address_of_antiAliasing_7() { return &___antiAliasing_7; }
	inline void set_antiAliasing_7(int32_t value)
	{
		___antiAliasing_7 = value;
	}

	inline static int32_t get_offset_of_captureGameUI_8() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___captureGameUI_8)); }
	inline bool get_captureGameUI_8() const { return ___captureGameUI_8; }
	inline bool* get_address_of_captureGameUI_8() { return &___captureGameUI_8; }
	inline void set_captureGameUI_8(bool value)
	{
		___captureGameUI_8 = value;
	}

	inline static int32_t get_offset_of_colorFormat_9() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___colorFormat_9)); }
	inline int32_t get_colorFormat_9() const { return ___colorFormat_9; }
	inline int32_t* get_address_of_colorFormat_9() { return &___colorFormat_9; }
	inline void set_colorFormat_9(int32_t value)
	{
		___colorFormat_9 = value;
	}

	inline static int32_t get_offset_of_recomputeAlphaMask_10() { return static_cast<int32_t>(offsetof(U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C, ___recomputeAlphaMask_10)); }
	inline bool get_recomputeAlphaMask_10() const { return ___recomputeAlphaMask_10; }
	inline bool* get_address_of_recomputeAlphaMask_10() { return &___recomputeAlphaMask_10; }
	inline void set_recomputeAlphaMask_10(bool value)
	{
		___recomputeAlphaMask_10 = value;
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset
struct  SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.String AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset::m_DefaultLanguage
	String_t* ___m_DefaultLanguage_4;
	// System.Collections.Generic.List`1<System.String> AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset::m_Languages
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_Languages_5;

public:
	inline static int32_t get_offset_of_m_DefaultLanguage_4() { return static_cast<int32_t>(offsetof(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68, ___m_DefaultLanguage_4)); }
	inline String_t* get_m_DefaultLanguage_4() const { return ___m_DefaultLanguage_4; }
	inline String_t** get_address_of_m_DefaultLanguage_4() { return &___m_DefaultLanguage_4; }
	inline void set_m_DefaultLanguage_4(String_t* value)
	{
		___m_DefaultLanguage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultLanguage_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Languages_5() { return static_cast<int32_t>(offsetof(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68, ___m_Languages_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_Languages_5() const { return ___m_Languages_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_Languages_5() { return &___m_Languages_5; }
	inline void set_m_Languages_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_Languages_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Languages_5), (void*)value);
	}
};

struct SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_StaticFields
{
public:
	// System.String AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset::m_CurrentLanguageID
	String_t* ___m_CurrentLanguageID_6;

public:
	inline static int32_t get_offset_of_m_CurrentLanguageID_6() { return static_cast<int32_t>(offsetof(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_StaticFields, ___m_CurrentLanguageID_6)); }
	inline String_t* get_m_CurrentLanguageID_6() const { return ___m_CurrentLanguageID_6; }
	inline String_t** get_address_of_m_CurrentLanguageID_6() { return &___m_CurrentLanguageID_6; }
	inline void set_m_CurrentLanguageID_6(String_t* value)
	{
		___m_CurrentLanguageID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentLanguageID_6), (void*)value);
	}
};


// AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback
struct  ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885  : public MulticastDelegate_t
{
public:

public:
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


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// UnityEngine.RenderTexture
struct  RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileInfo
struct  FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.FileInfo::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_6), (void*)value);
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// AlmostEngine.Screenshot.ScreenshotTaker
struct  ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Texture2D AlmostEngine.Screenshot.ScreenshotTaker::m_Texture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Texture_4;
	// AlmostEngine.Screenshot.ScreenshotTaker_GameViewResizingWaitingMode AlmostEngine.Screenshot.ScreenshotTaker::m_GameViewResizingWaitingMode
	int32_t ___m_GameViewResizingWaitingMode_5;
	// System.Single AlmostEngine.Screenshot.ScreenshotTaker::m_GameViewResizingWaitingTime
	float ___m_GameViewResizingWaitingTime_6;
	// System.Int32 AlmostEngine.Screenshot.ScreenshotTaker::m_GameViewResizingWaitingFrames
	int32_t ___m_GameViewResizingWaitingFrames_7;
	// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotCamera> AlmostEngine.Screenshot.ScreenshotTaker::m_Cameras
	List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * ___m_Cameras_9;
	// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotCamera> AlmostEngine.Screenshot.ScreenshotTaker::m_SceneCameras
	List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * ___m_SceneCameras_10;
	// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotOverlay> AlmostEngine.Screenshot.ScreenshotTaker::m_Overlays
	List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * ___m_Overlays_11;
	// System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotOverlay> AlmostEngine.Screenshot.ScreenshotTaker::m_SceneOverlays
	List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * ___m_SceneOverlays_12;
	// System.Collections.Generic.Dictionary`2<AlmostEngine.Screenshot.ScreenshotResolution,UnityEngine.RenderTexture> AlmostEngine.Screenshot.ScreenshotTaker::m_RenderTextureCache
	Dictionary_2_t61E04123E3AF37D31B7D619B743C005C0B6B9978 * ___m_RenderTextureCache_16;
	// System.Single AlmostEngine.Screenshot.ScreenshotTaker::m_PreviousTimeScale
	float ___m_PreviousTimeScale_17;

public:
	inline static int32_t get_offset_of_m_Texture_4() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_Texture_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Texture_4() const { return ___m_Texture_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Texture_4() { return &___m_Texture_4; }
	inline void set_m_Texture_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Texture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_GameViewResizingWaitingMode_5() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_GameViewResizingWaitingMode_5)); }
	inline int32_t get_m_GameViewResizingWaitingMode_5() const { return ___m_GameViewResizingWaitingMode_5; }
	inline int32_t* get_address_of_m_GameViewResizingWaitingMode_5() { return &___m_GameViewResizingWaitingMode_5; }
	inline void set_m_GameViewResizingWaitingMode_5(int32_t value)
	{
		___m_GameViewResizingWaitingMode_5 = value;
	}

	inline static int32_t get_offset_of_m_GameViewResizingWaitingTime_6() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_GameViewResizingWaitingTime_6)); }
	inline float get_m_GameViewResizingWaitingTime_6() const { return ___m_GameViewResizingWaitingTime_6; }
	inline float* get_address_of_m_GameViewResizingWaitingTime_6() { return &___m_GameViewResizingWaitingTime_6; }
	inline void set_m_GameViewResizingWaitingTime_6(float value)
	{
		___m_GameViewResizingWaitingTime_6 = value;
	}

	inline static int32_t get_offset_of_m_GameViewResizingWaitingFrames_7() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_GameViewResizingWaitingFrames_7)); }
	inline int32_t get_m_GameViewResizingWaitingFrames_7() const { return ___m_GameViewResizingWaitingFrames_7; }
	inline int32_t* get_address_of_m_GameViewResizingWaitingFrames_7() { return &___m_GameViewResizingWaitingFrames_7; }
	inline void set_m_GameViewResizingWaitingFrames_7(int32_t value)
	{
		___m_GameViewResizingWaitingFrames_7 = value;
	}

	inline static int32_t get_offset_of_m_Cameras_9() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_Cameras_9)); }
	inline List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * get_m_Cameras_9() const { return ___m_Cameras_9; }
	inline List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 ** get_address_of_m_Cameras_9() { return &___m_Cameras_9; }
	inline void set_m_Cameras_9(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * value)
	{
		___m_Cameras_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cameras_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneCameras_10() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_SceneCameras_10)); }
	inline List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * get_m_SceneCameras_10() const { return ___m_SceneCameras_10; }
	inline List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 ** get_address_of_m_SceneCameras_10() { return &___m_SceneCameras_10; }
	inline void set_m_SceneCameras_10(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * value)
	{
		___m_SceneCameras_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneCameras_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overlays_11() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_Overlays_11)); }
	inline List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * get_m_Overlays_11() const { return ___m_Overlays_11; }
	inline List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 ** get_address_of_m_Overlays_11() { return &___m_Overlays_11; }
	inline void set_m_Overlays_11(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * value)
	{
		___m_Overlays_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overlays_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneOverlays_12() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_SceneOverlays_12)); }
	inline List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * get_m_SceneOverlays_12() const { return ___m_SceneOverlays_12; }
	inline List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 ** get_address_of_m_SceneOverlays_12() { return &___m_SceneOverlays_12; }
	inline void set_m_SceneOverlays_12(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * value)
	{
		___m_SceneOverlays_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneOverlays_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderTextureCache_16() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_RenderTextureCache_16)); }
	inline Dictionary_2_t61E04123E3AF37D31B7D619B743C005C0B6B9978 * get_m_RenderTextureCache_16() const { return ___m_RenderTextureCache_16; }
	inline Dictionary_2_t61E04123E3AF37D31B7D619B743C005C0B6B9978 ** get_address_of_m_RenderTextureCache_16() { return &___m_RenderTextureCache_16; }
	inline void set_m_RenderTextureCache_16(Dictionary_2_t61E04123E3AF37D31B7D619B743C005C0B6B9978 * value)
	{
		___m_RenderTextureCache_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderTextureCache_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousTimeScale_17() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6, ___m_PreviousTimeScale_17)); }
	inline float get_m_PreviousTimeScale_17() const { return ___m_PreviousTimeScale_17; }
	inline float* get_address_of_m_PreviousTimeScale_17() { return &___m_PreviousTimeScale_17; }
	inline void set_m_PreviousTimeScale_17(float value)
	{
		___m_PreviousTimeScale_17 = value;
	}
};

struct ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6_StaticFields
{
public:
	// System.Boolean AlmostEngine.Screenshot.ScreenshotTaker::m_IsRunning
	bool ___m_IsRunning_8;
	// UnityEngine.Events.UnityAction`1<AlmostEngine.Screenshot.ScreenshotResolution> AlmostEngine.Screenshot.ScreenshotTaker::onResolutionUpdateStartDelegate
	UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * ___onResolutionUpdateStartDelegate_13;
	// UnityEngine.Events.UnityAction`1<AlmostEngine.Screenshot.ScreenshotResolution> AlmostEngine.Screenshot.ScreenshotTaker::onResolutionUpdateEndDelegate
	UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * ___onResolutionUpdateEndDelegate_14;
	// UnityEngine.Events.UnityAction`1<AlmostEngine.Screenshot.ScreenshotResolution> AlmostEngine.Screenshot.ScreenshotTaker::onResolutionScreenResizedDelegate
	UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * ___onResolutionScreenResizedDelegate_15;

public:
	inline static int32_t get_offset_of_m_IsRunning_8() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6_StaticFields, ___m_IsRunning_8)); }
	inline bool get_m_IsRunning_8() const { return ___m_IsRunning_8; }
	inline bool* get_address_of_m_IsRunning_8() { return &___m_IsRunning_8; }
	inline void set_m_IsRunning_8(bool value)
	{
		___m_IsRunning_8 = value;
	}

	inline static int32_t get_offset_of_onResolutionUpdateStartDelegate_13() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6_StaticFields, ___onResolutionUpdateStartDelegate_13)); }
	inline UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * get_onResolutionUpdateStartDelegate_13() const { return ___onResolutionUpdateStartDelegate_13; }
	inline UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B ** get_address_of_onResolutionUpdateStartDelegate_13() { return &___onResolutionUpdateStartDelegate_13; }
	inline void set_onResolutionUpdateStartDelegate_13(UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * value)
	{
		___onResolutionUpdateStartDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResolutionUpdateStartDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_onResolutionUpdateEndDelegate_14() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6_StaticFields, ___onResolutionUpdateEndDelegate_14)); }
	inline UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * get_onResolutionUpdateEndDelegate_14() const { return ___onResolutionUpdateEndDelegate_14; }
	inline UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B ** get_address_of_onResolutionUpdateEndDelegate_14() { return &___onResolutionUpdateEndDelegate_14; }
	inline void set_onResolutionUpdateEndDelegate_14(UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * value)
	{
		___onResolutionUpdateEndDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResolutionUpdateEndDelegate_14), (void*)value);
	}

	inline static int32_t get_offset_of_onResolutionScreenResizedDelegate_15() { return static_cast<int32_t>(offsetof(ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6_StaticFields, ___onResolutionScreenResizedDelegate_15)); }
	inline UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * get_onResolutionScreenResizedDelegate_15() const { return ___onResolutionScreenResizedDelegate_15; }
	inline UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B ** get_address_of_onResolutionScreenResizedDelegate_15() { return &___onResolutionScreenResizedDelegate_15; }
	inline void set_onResolutionScreenResizedDelegate_15(UnityAction_1_tF20A851350A2654A956023F0E1242E776C0D9D2B * value)
	{
		___onResolutionScreenResizedDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResolutionScreenResizedDelegate_15), (void*)value);
	}
};


// AlmostEngine.SimpleLocalization.ISimpleLocalizer
struct  ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// AlmostEngine.SimpleLocalization.LanguageSwitcher
struct  LanguageSwitcher_t3894F3FEE6ABA2301667D758DF3BC7CC1821A8FB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS
struct  NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS::callback
	ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * ___callback_5;

public:
	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21, ___callback_5)); }
	inline ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * get_callback_5() const { return ___callback_5; }
	inline ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}
};

struct NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields
{
public:
	// AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS::instance
	NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields, ___instance_4)); }
	inline NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * get_instance_4() const { return ___instance_4; }
	inline NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// AlmostEngine.SimpleLocalization.SimpleImageLocalizer
struct  SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180  : public ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349
{
public:
	// UnityEngine.Texture AlmostEngine.SimpleLocalization.SimpleImageLocalizer::m_OriginalTexture
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_OriginalTexture_4;
	// AlmostEngine.SimpleLocalization.SimpleImageLocalizer_Localization AlmostEngine.SimpleLocalization.SimpleImageLocalizer::m_Localisations
	Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * ___m_Localisations_5;
	// UnityEngine.UI.RawImage AlmostEngine.SimpleLocalization.SimpleImageLocalizer::m_Image
	RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * ___m_Image_6;

public:
	inline static int32_t get_offset_of_m_OriginalTexture_4() { return static_cast<int32_t>(offsetof(SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180, ___m_OriginalTexture_4)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_OriginalTexture_4() const { return ___m_OriginalTexture_4; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_OriginalTexture_4() { return &___m_OriginalTexture_4; }
	inline void set_m_OriginalTexture_4(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_OriginalTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Localisations_5() { return static_cast<int32_t>(offsetof(SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180, ___m_Localisations_5)); }
	inline Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * get_m_Localisations_5() const { return ___m_Localisations_5; }
	inline Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD ** get_address_of_m_Localisations_5() { return &___m_Localisations_5; }
	inline void set_m_Localisations_5(Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * value)
	{
		___m_Localisations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Localisations_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_6() { return static_cast<int32_t>(offsetof(SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180, ___m_Image_6)); }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * get_m_Image_6() const { return ___m_Image_6; }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 ** get_address_of_m_Image_6() { return &___m_Image_6; }
	inline void set_m_Image_6(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * value)
	{
		___m_Image_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_6), (void*)value);
	}
};


// AlmostEngine.SimpleLocalization.SimpleTextLocalizer
struct  SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB  : public ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349
{
public:
	// System.String AlmostEngine.SimpleLocalization.SimpleTextLocalizer::m_OriginalText
	String_t* ___m_OriginalText_4;
	// AlmostEngine.SimpleLocalization.SimpleTextLocalizer_Localization AlmostEngine.SimpleLocalization.SimpleTextLocalizer::m_Localisations
	Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * ___m_Localisations_5;
	// UnityEngine.UI.Text AlmostEngine.SimpleLocalization.SimpleTextLocalizer::m_Text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_Text_6;

public:
	inline static int32_t get_offset_of_m_OriginalText_4() { return static_cast<int32_t>(offsetof(SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB, ___m_OriginalText_4)); }
	inline String_t* get_m_OriginalText_4() const { return ___m_OriginalText_4; }
	inline String_t** get_address_of_m_OriginalText_4() { return &___m_OriginalText_4; }
	inline void set_m_OriginalText_4(String_t* value)
	{
		___m_OriginalText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Localisations_5() { return static_cast<int32_t>(offsetof(SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB, ___m_Localisations_5)); }
	inline Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * get_m_Localisations_5() const { return ___m_Localisations_5; }
	inline Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E ** get_address_of_m_Localisations_5() { return &___m_Localisations_5; }
	inline void set_m_Localisations_5(Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * value)
	{
		___m_Localisations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Localisations_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_6() { return static_cast<int32_t>(offsetof(SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB, ___m_Text_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_Text_6() const { return ___m_Text_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_Text_6() { return &___m_Text_6; }
	inline void set_m_Text_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_Text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_6), (void*)value);
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
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

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

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.RawImage
struct  RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Texture_35;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_UVRect_36;

public:
	inline static int32_t get_offset_of_m_Texture_35() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_Texture_35)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_Texture_35() const { return ___m_Texture_35; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_Texture_35() { return &___m_Texture_35; }
	inline void set_m_Texture_35(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_Texture_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_36() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_UVRect_36)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_UVRect_36() const { return ___m_UVRect_36; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_UVRect_36() { return &___m_UVRect_36; }
	inline void set_m_UVRect_36(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_UVRect_36 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * m_Items[1];

public:
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// AlmostEngine.SimpleLocalization.ISimpleLocalizer[]
struct ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * m_Items[1];

public:
	inline ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void AlmostEngine.SerializableDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2__ctor_m9B03B335536DDCFA6A8DD0B03ACBFFE17B1B54F8_gshared (SerializableDictionary_2_tBD233BFC385BC3EF472FAB2E59EF43D915CC8666 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void AlmostEngine.Screenshot.SimpleScreenshotCapture::InitScreenshotTaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScreenshotCapture_InitScreenshotTaker_m314A67CC650522F4EC0B3A43A9E5F6AF4B516DD0 (const RuntimeMethod* method);
// System.Void AlmostEngine.Screenshot.ScreenshotResolution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotResolution__ctor_mC899BE0C6204CB717DE232EF3CDDD36F8B8838B1 (ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotCamera>::.ctor()
inline void List_1__ctor_mB89128F33E1D7340F8421201382AF51398002600 (List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Camera>::GetEnumerator()
inline Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752  List_1_GetEnumerator_mD45B8F64E321ECB2F6BA81B78030B12E693B39E5 (List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752  (*) (List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>::get_Current()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Enumerator_get_Current_mF441D4B876FCA94E8BEDAFF87571000E83BC2504_inline (Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void AlmostEngine.Screenshot.ScreenshotCamera::.ctor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotCamera__ctor_m1386A7F81F080F4E64940E0FF304B65571567823 (ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotCamera>::Add(!0)
inline void List_1_Add_mF9C3319A585A471E2B432C6813F422D4BAEA118F (List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * __this, ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 *, ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>::MoveNext()
inline bool Enumerator_MoveNext_mA73B37591E60EDFC7C0E3FC03B165D84BC0E0875 (Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Camera>::Dispose()
inline void Enumerator_Dispose_m6662AB2F19D38E82C8A3951BE3DF9A8DFE70A34D (Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotOverlay>::.ctor()
inline void List_1__ctor_m3E3946F29FEADF069EDBA13A52948902FC8B762F (List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Canvas>::GetEnumerator()
inline Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23  List_1_GetEnumerator_m9166536DB8A2B0793867BAACA7A84477017D98FD (List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23  (*) (List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>::get_Current()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Enumerator_get_Current_m9B9AC2C81EBDB83324E90B4A419EE6DEE636DF88_inline (Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void AlmostEngine.Screenshot.ScreenshotOverlay::.ctor(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotOverlay__ctor_mD2B5860360DB8A6DC463E81F6B5AC348C92664F1 (ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F * __this, Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___canvas0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotOverlay>::Add(!0)
inline void List_1_Add_m4E67DF595C350BF674B667F4BA0C1C9E7204F73F (List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * __this, ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 *, ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>::MoveNext()
inline bool Enumerator_MoveNext_m97208387B39CAE7B8746234E80F8C8554BFCBE56 (Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>::Dispose()
inline void Enumerator_Dispose_m26A17E3A613622E615C5AC5139DB1866277C2C4A (Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotResolution>::.ctor()
inline void List_1__ctor_m400E5F7350321292ACC7E6D206BDDEC84A0D7025 (List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotResolution>::Add(!0)
inline void List_1_Add_m5F6FDD156758C09A9F73B30E6DFDD495BA880CD7 (List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A * __this, ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A *, ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator AlmostEngine.Screenshot.ScreenshotTaker::CaptureAllCoroutine(System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotResolution>,System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotCamera>,System.Collections.Generic.List`1<AlmostEngine.Screenshot.ScreenshotOverlay>,AlmostEngine.Screenshot.ScreenshotTaker/CaptureMode,System.Int32,System.Boolean,AlmostEngine.Screenshot.ScreenshotTaker/ColorFormat,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenshotTaker_CaptureAllCoroutine_mA496611733C279809D0FDC4858AA985661E4D089 (ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6 * __this, List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A * ___resolutions0, List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * ___cameras1, List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * ___overlays2, int32_t ___captureMode3, int32_t ___antiAliasing4, bool ___captureGameUI5, int32_t ___colorFormat6, bool ___recomputeAlphaMask7, bool ___stopTime8, bool ___restore9, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ImageConversion_EncodeToJPG_mE289598FD45B6658A645B2CE359C4E6FC97BF875 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, int32_t ___quality1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, const RuntimeMethod* method);
// System.Boolean AlmostEngine.PathUtils::CreateExportDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtils_CreateExportDirectory_m1809A7712AAA895A0D8869491A801D2C6B37E3B0 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594 (String_t* ___path0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void AlmostEngine.Screenshot.iOsUtils::AddImageToGallery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils_AddImageToGallery_m8CBB53E433FBB39DF713C4BE2494A8F621CB075D (String_t* ___file0, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* ___path0, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* File_ReadAllBytes_mF29468CED0B7B3B7C0971ACEBB16A38683718BEC (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.TextureExporter/ImageFile>::.ctor()
inline void List_1__ctor_m96FD1A8AEE15F9D1753DB8C413CD6BE90DF1A79A (List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m00923CD8472B1FB220FAEE9D09CCCF9A96A021C6 (DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * __this, String_t* ___path0, const RuntimeMethod* method);
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* DirectoryInfo_GetFiles_m3E2F7B3AA18FE603D7746175A572298AD649DBF6 (DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * __this, const RuntimeMethod* method);
// System.String System.IO.FileSystemInfo::get_Extension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystemInfo_get_Extension_m03280A812F387828DB2E03862B65E4FD0854565C (FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void AlmostEngine.Screenshot.TextureExporter/ImageFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFile__ctor_m7056F5B887460A1C28033CECC6E312FC2B8D639E (ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * __this, const RuntimeMethod* method);
// System.DateTime System.IO.FileSystemInfo::get_CreationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  FileSystemInfo_get_CreationTime_mAB0EF469EA22A334F949E6EE693DB05FC99B2CC6 (FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D AlmostEngine.Screenshot.TextureExporter::LoadFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExporter_LoadFromFile_m2766765EE19EDB36F7654D6477F5E1345AC9F099 (String_t* ___fullname0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<AlmostEngine.Screenshot.TextureExporter/ImageFile>::Add(!0)
inline void List_1_Add_m5464A52A49D5B944EC2ED4CCABBCC125204DF590 (List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * __this, ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 *, ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void AlmostEngine.Screenshot.iOsUtils::_AddImageToGallery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils__AddImageToGallery_m6C2924D6CB2D30BD5DC3475FB75D039879768800 (String_t* ___file0, const RuntimeMethod* method);
// System.Boolean AlmostEngine.Screenshot.iOsUtils::_HasGalleryAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOsUtils__HasGalleryAuthorization_mE24C86A62BECB93B6AC1AF1466A1781A6523DA57 (const RuntimeMethod* method);
// System.Void AlmostEngine.Screenshot.iOsUtils::_RequestGalleryAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils__RequestGalleryAuthorization_mEBE6E91479D533A463A29EC8902458C567E6965B (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset::SetLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocalizationLanguagesAsset_SetLanguage_m6C9F233C93A9C77A4CF3DF1A95907E6B3C345310 (String_t* ___id0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3DA781196364ECCEAFCB84E59E5CEB8DE61CAFF0 (Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture>::get_Item(!0)
inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * Dictionary_2_get_Item_m203B7674788FC1E83144C56F6604B5BA9A7CF53A (Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * (*) (Dictionary_2_tCD9FA4ECBB07D8C66B9D35D2356B86CB83745EAA *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m63BC52D3B64A3BFD0EC182034FDD51E9A46F99F9 (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * RawImage_get_texture_m992AF81884D22B9ADC97A800AB931DCB4140954E_inline (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, const RuntimeMethod* method);
// System.Void AlmostEngine.SimpleLocalization.SimpleImageLocalizer/Localization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Localization__ctor_m77CB5D9E956D313443586AE7584EBBA4828D6F66 (Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * __this, const RuntimeMethod* method);
// System.Void AlmostEngine.SimpleLocalization.ISimpleLocalizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISimpleLocalizer__ctor_m3D63988CD4D33BA4212083B30E4E2F93116E1EE5 (ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * __this, const RuntimeMethod* method);
// System.Void AlmostEngine.SerializableDictionary`2<System.String,UnityEngine.Texture>::.ctor()
inline void SerializableDictionary_2__ctor_m65B321E5FD96263C472D985E73F36FF487F95F5C (SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_t3591B06334EF9DC12E41A6FB09007D0696EB36C3 *, const RuntimeMethod*))SerializableDictionary_2__ctor_m9B03B335536DDCFA6A8DD0B03ACBFFE17B1B54F8_gshared)(__this, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<AlmostEngine.SimpleLocalization.ISimpleLocalizer>()
inline ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9* Object_FindObjectsOfType_TisISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349_mB245EB43CD8DCA2160A04282CAD2E48D5679F684 (const RuntimeMethod* method)
{
	return ((  ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127 (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void AlmostEngine.SimpleLocalization.SimpleTextLocalizer/Localization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Localization__ctor_mC4FD93F2CAEA8BFD2C4D8C5A9F0BA9582F7F962A (Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * __this, const RuntimeMethod* method);
// System.Void AlmostEngine.SerializableDictionary`2<System.String,System.String>::.ctor()
inline void SerializableDictionary_2__ctor_mC23513C0655F79490C8EA6A055E2F687319D1471 (SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563 * __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tE28066C6CF340D1CE2C447D0AA3D8CDAE3BA3563 *, const RuntimeMethod*))SerializableDictionary_2__ctor_m9B03B335536DDCFA6A8DD0B03ACBFFE17B1B54F8_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS>()
inline NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * GameObject_AddComponent_TisNSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_m3D8CE54363A373E54A7C1DB82C01C0AEE8E14D84 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void AlmostEngineDependencies.NativeShare.NativeShare/ShareResultCallback::Invoke(AlmostEngineDependencies.NativeShare.NativeShare/ShareResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_mA703B009967B33641DA8DAF25C57A877ACEEE355 (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Byte[] AlmostEngineDependencies.NativeShare.NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeShare_GetTextureBytes_mAE9D060163BE5C1CF3DFF385AB8E932853EDC7EA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_AddFile_m1427851A2ED59DCAAF4FE30B4841CEC365FB2303 (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, String_t* ___filePath0, String_t* ___mime1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS::Initialize(AlmostEngineDependencies.NativeShare.NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS_Initialize_mAEDA086743E5BB6B95175F260DFB9FE7E74419A0 (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * ___callback0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Void AlmostEngineDependencies.NativeShare.NativeShare::_NativeShare_Share(System.String[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__NativeShare_Share_mF8D1772F6FD053A82DB373475981441497EB6657 (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___files0, int32_t ___filesCount1, String_t* ___subject2, String_t* ___text3, const RuntimeMethod* method);
// System.Byte[] AlmostEngineDependencies.NativeShare.NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeShare_GetTextureBytesFromCopy_m92BB02ED836FB88843570321401EBE9F9FB78BD7 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_GetTemporary_m02547EA84CDEB9038FCF1EEDD283AF24114C735F (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957 (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___source0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1 (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___temp0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureToTextureCoroutineU3Ed__10__ctor_m0178508639068A5D4360772F7C02BBFBB47C7266 (U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureToTextureCoroutineU3Ed__10_System_IDisposable_Dispose_mE99027DD4294718A02386B8B89F2F3D0BF7FAE4B (U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCaptureToTextureCoroutineU3Ed__10_MoveNext_m5F91D2F4B1AC6132A91DCEC985ACBCD26B21CDA3 (U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCaptureToTextureCoroutineU3Ed__10_MoveNext_m5F91D2F4B1AC6132A91DCEC985ACBCD26B21CDA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA * V_1 = NULL;
	List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * V_2 = NULL;
	List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * V_3 = NULL;
	Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842 * V_5 = NULL;
	Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0126;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// InitScreenshotTaker();
		SimpleScreenshotCapture_InitScreenshotTaker_m314A67CC650522F4EC0B3A43A9E5F6AF4B516DD0(/*hidden argument*/NULL);
		// ScreenshotResolution captureResolution = new ScreenshotResolution();
		ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA * L_3 = (ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA *)il2cpp_codegen_object_new(ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA_il2cpp_TypeInfo_var);
		ScreenshotResolution__ctor_mC899BE0C6204CB717DE232EF3CDDD36F8B8838B1(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		// captureResolution.m_Width = width;
		ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA * L_4 = V_1;
		int32_t L_5 = __this->get_width_2();
		NullCheck(L_4);
		L_4->set_m_Width_1(L_5);
		// captureResolution.m_Height = height;
		ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA * L_6 = V_1;
		int32_t L_7 = __this->get_height_3();
		NullCheck(L_6);
		L_6->set_m_Height_2(L_7);
		// List<ScreenshotCamera> screenshotCameras = new List<ScreenshotCamera>();
		List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * L_8 = (List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 *)il2cpp_codegen_object_new(List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54_il2cpp_TypeInfo_var);
		List_1__ctor_mB89128F33E1D7340F8421201382AF51398002600(L_8, /*hidden argument*/List_1__ctor_mB89128F33E1D7340F8421201382AF51398002600_RuntimeMethod_var);
		V_2 = L_8;
		// if (cameras != null)
		List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * L_9 = __this->get_cameras_4();
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// foreach (Camera camera in cameras)
		List_1_tBCCD79D8856B6659FEAA93388A85C5AF306364A6 * L_10 = __this->get_cameras_4();
		NullCheck(L_10);
		Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752  L_11 = List_1_GetEnumerator_mD45B8F64E321ECB2F6BA81B78030B12E693B39E5(L_10, /*hidden argument*/List_1_GetEnumerator_mD45B8F64E321ECB2F6BA81B78030B12E693B39E5_RuntimeMethod_var);
		V_4 = L_11;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_005a:
		{
			// foreach (Camera camera in cameras)
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_12 = Enumerator_get_Current_mF441D4B876FCA94E8BEDAFF87571000E83BC2504_inline((Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mF441D4B876FCA94E8BEDAFF87571000E83BC2504_RuntimeMethod_var);
			// ScreenshotCamera scamera = new ScreenshotCamera(camera);
			ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842 * L_13 = (ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842 *)il2cpp_codegen_object_new(ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842_il2cpp_TypeInfo_var);
			ScreenshotCamera__ctor_m1386A7F81F080F4E64940E0FF304B65571567823(L_13, L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			// screenshotCameras.Add(scamera);
			List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * L_14 = V_2;
			ScreenshotCamera_t650CFEEDD24736EC89669C7048F94DE8F0A6A842 * L_15 = V_5;
			NullCheck(L_14);
			List_1_Add_mF9C3319A585A471E2B432C6813F422D4BAEA118F(L_14, L_15, /*hidden argument*/List_1_Add_mF9C3319A585A471E2B432C6813F422D4BAEA118F_RuntimeMethod_var);
		}

IL_0070:
		{
			// foreach (Camera camera in cameras)
			bool L_16 = Enumerator_MoveNext_mA73B37591E60EDFC7C0E3FC03B165D84BC0E0875((Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mA73B37591E60EDFC7C0E3FC03B165D84BC0E0875_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_005a;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6662AB2F19D38E82C8A3951BE3DF9A8DFE70A34D((Enumerator_tA96C9ED04413D1DA0920CBE9DCCF96CEFB651752 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m6662AB2F19D38E82C8A3951BE3DF9A8DFE70A34D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(123)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		// List<ScreenshotOverlay> screenshotCanvas = new List<ScreenshotOverlay>();
		List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * L_17 = (List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 *)il2cpp_codegen_object_new(List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2_il2cpp_TypeInfo_var);
		List_1__ctor_m3E3946F29FEADF069EDBA13A52948902FC8B762F(L_17, /*hidden argument*/List_1__ctor_m3E3946F29FEADF069EDBA13A52948902FC8B762F_RuntimeMethod_var);
		V_3 = L_17;
		// if (canvas != null)
		List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * L_18 = __this->get_canvas_5();
		if (!L_18)
		{
			goto IL_00d5;
		}
	}
	{
		// foreach (Canvas c in canvas)
		List_1_tCA7EFB47D98458589D50AECEE448BDCDF1F6DF14 * L_19 = __this->get_canvas_5();
		NullCheck(L_19);
		Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23  L_20 = List_1_GetEnumerator_m9166536DB8A2B0793867BAACA7A84477017D98FD(L_19, /*hidden argument*/List_1_GetEnumerator_m9166536DB8A2B0793867BAACA7A84477017D98FD_RuntimeMethod_var);
		V_6 = L_20;
	}

IL_00a4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_00a6:
		{
			// foreach (Canvas c in canvas)
			Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_21 = Enumerator_get_Current_m9B9AC2C81EBDB83324E90B4A419EE6DEE636DF88_inline((Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m9B9AC2C81EBDB83324E90B4A419EE6DEE636DF88_RuntimeMethod_var);
			// ScreenshotOverlay scanvas = new ScreenshotOverlay(c);
			ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F * L_22 = (ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F *)il2cpp_codegen_object_new(ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F_il2cpp_TypeInfo_var);
			ScreenshotOverlay__ctor_mD2B5860360DB8A6DC463E81F6B5AC348C92664F1(L_22, L_21, /*hidden argument*/NULL);
			V_7 = L_22;
			// screenshotCanvas.Add(scanvas);
			List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * L_23 = V_3;
			ScreenshotOverlay_tB61A99839C2126C4B5FD9DB000D1C74302C1725F * L_24 = V_7;
			NullCheck(L_23);
			List_1_Add_m4E67DF595C350BF674B667F4BA0C1C9E7204F73F(L_23, L_24, /*hidden argument*/List_1_Add_m4E67DF595C350BF674B667F4BA0C1C9E7204F73F_RuntimeMethod_var);
		}

IL_00bc:
		{
			// foreach (Canvas c in canvas)
			bool L_25 = Enumerator_MoveNext_m97208387B39CAE7B8746234E80F8C8554BFCBE56((Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m97208387B39CAE7B8746234E80F8C8554BFCBE56_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00a6;
			}
		}

IL_00c5:
		{
			IL2CPP_LEAVE(0xD5, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m26A17E3A613622E615C5AC5139DB1866277C2C4A((Enumerator_t719079C279FE5F0A11EA889466A554F715F66D23 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m26A17E3A613622E615C5AC5139DB1866277C2C4A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(199)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_JUMP_TBL(0xD5, IL_00d5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d5:
	{
		// yield return m_ScreenshotTaker.StartCoroutine(m_ScreenshotTaker.CaptureAllCoroutine(new List<ScreenshotResolution> { captureResolution },
		//     screenshotCameras,
		//     screenshotCanvas,
		//     captureMode,
		//     antiAliasing,
		//     captureGameUI,
		//     colorFormat,
		//     recomputeAlphaMask));
		ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6 * L_26 = ((SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024_StaticFields*)il2cpp_codegen_static_fields_for(SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024_il2cpp_TypeInfo_var))->get_m_ScreenshotTaker_0();
		ScreenshotTaker_t047366711CCD67030EF59271A89B8723B38A9DC6 * L_27 = ((SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024_StaticFields*)il2cpp_codegen_static_fields_for(SimpleScreenshotCapture_t16390E01157707327419E8DF02CE718C9018E024_il2cpp_TypeInfo_var))->get_m_ScreenshotTaker_0();
		List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A * L_28 = (List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A *)il2cpp_codegen_object_new(List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A_il2cpp_TypeInfo_var);
		List_1__ctor_m400E5F7350321292ACC7E6D206BDDEC84A0D7025(L_28, /*hidden argument*/List_1__ctor_m400E5F7350321292ACC7E6D206BDDEC84A0D7025_RuntimeMethod_var);
		List_1_t9B9357BEA2E3383F964B3A839ABD1980E0F86D9A * L_29 = L_28;
		ScreenshotResolution_tB5AB3A4439E9F9D3EA65635668C73B09877751CA * L_30 = V_1;
		NullCheck(L_29);
		List_1_Add_m5F6FDD156758C09A9F73B30E6DFDD495BA880CD7(L_29, L_30, /*hidden argument*/List_1_Add_m5F6FDD156758C09A9F73B30E6DFDD495BA880CD7_RuntimeMethod_var);
		List_1_tC598B7E567E54C18AE752A175EF047ECF9B78D54 * L_31 = V_2;
		List_1_tE05AA3D308C8D547307D378109DEB9631618A9E2 * L_32 = V_3;
		int32_t L_33 = __this->get_captureMode_6();
		int32_t L_34 = __this->get_antiAliasing_7();
		bool L_35 = __this->get_captureGameUI_8();
		int32_t L_36 = __this->get_colorFormat_9();
		bool L_37 = __this->get_recomputeAlphaMask_10();
		NullCheck(L_27);
		RuntimeObject* L_38 = ScreenshotTaker_CaptureAllCoroutine_mA496611733C279809D0FDC4858AA985661E4D089(L_27, L_29, L_31, L_32, L_33, L_34, L_35, L_36, L_37, (bool)0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_26);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_39 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_26, L_38, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_39);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0126:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaptureToTextureCoroutineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m38E26AFFC1482F167D7C5E1B1CE5FCE5179FBDB8 (U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureToTextureCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m7D326BD72795FCC2F785AE7A7F29DC156021D0E1 (U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCaptureToTextureCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m7D326BD72795FCC2F785AE7A7F29DC156021D0E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CCaptureToTextureCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m7D326BD72795FCC2F785AE7A7F29DC156021D0E1_RuntimeMethod_var);
	}
}
// System.Object AlmostEngine.Screenshot.SimpleScreenshotCapture_<CaptureToTextureCoroutine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaptureToTextureCoroutineU3Ed__10_System_Collections_IEnumerator_get_Current_m56FC40BE822E766EB4E1178894353C015CC72E58 (U3CCaptureToTextureCoroutineU3Ed__10_tD8BBD77A7DC668F3343E3E45C9D90C16310B754C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Boolean AlmostEngine.Screenshot.TextureExporter::ExportToFile(UnityEngine.Texture2D,System.String,AlmostEngine.Screenshot.TextureExporter_ImageFileFormat,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureExporter_ExportToFile_m691ABD648867F4AC2ECEEB3F520FF4A51E6A3971 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, String_t* ___fullpath1, int32_t ___imageFormat2, int32_t ___JPGQuality3, bool ___addToGallery4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExporter_ExportToFile_m691ABD648867F4AC2ECEEB3F520FF4A51E6A3971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (texture == null)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___texture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("Can not export the texture to file " + fullpath + ", texture is empty.");
		String_t* L_2 = ___fullpath1;
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral225D623BB123F6969E06EA9481CF05435FAB0ED0, L_2, _stringLiteralD0E84C408F06997E6D835E949DA6D57389448023, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_3, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// byte[] bytes = null;
		V_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		// if (imageFormat == ImageFileFormat.JPG)
		int32_t L_4 = ___imageFormat2;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// bytes = texture.EncodeToJPG(JPGQuality);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = ___texture0;
		int32_t L_6 = ___JPGQuality3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ImageConversion_EncodeToJPG_mE289598FD45B6658A645B2CE359C4E6FC97BF875(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// }
		goto IL_0037;
	}

IL_0030:
	{
		// bytes = texture.EncodeToPNG();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = ___texture0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0037:
	{
		// if (!PathUtils.CreateExportDirectory(fullpath))
		String_t* L_10 = ___fullpath1;
		bool L_11 = PathUtils_CreateExportDirectory_m1809A7712AAA895A0D8869491A801D2C6B37E3B0(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0041:
	{
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		// System.IO.File.WriteAllBytes(fullpath, bytes);
		String_t* L_12 = ___fullpath1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594(L_12, L_13, /*hidden argument*/NULL);
		// }
		goto IL_0060;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004b;
		throw e;
	}

CATCH_004b:
	{ // begin catch(System.Object)
		// catch
		// Debug.LogError("Failed to create the file : " + fullpath);
		String_t* L_14 = ___fullpath1;
		String_t* L_15 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral80DDDCF7769FD87FE76A1EB974A67FE543FB90AC, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_15, /*hidden argument*/NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_007d;
	} // end catch (depth: 1)

IL_0060:
	{
		// if (addToGallery)
		bool L_16 = ___addToGallery4;
		if (!L_16)
		{
			goto IL_007b;
		}
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		// iOsUtils.AddImageToGallery(fullpath);
		String_t* L_17 = ___fullpath1;
		iOsUtils_AddImageToGallery_m8CBB53E433FBB39DF713C4BE2494A8F621CB075D(L_17, /*hidden argument*/NULL);
		// } catch {
		goto IL_007b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006c;
		throw e;
	}

CATCH_006c:
	{ // begin catch(System.Object)
		// } catch {
		// Debug.LogError ("Failed to update iOS Gallery");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral0AB64501048BA8E48FAD5628B13B2CB4C9D8B390, /*hidden argument*/NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_007d;
	} // end catch (depth: 1)

IL_007b:
	{
		// return true;
		return (bool)1;
	}

IL_007d:
	{
		// }
		bool L_18 = V_1;
		return L_18;
	}
}
// UnityEngine.Texture2D AlmostEngine.Screenshot.TextureExporter::LoadFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExporter_LoadFromFile_m2766765EE19EDB36F7654D6477F5E1345AC9F099 (String_t* ___fullname0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExporter_LoadFromFile_m2766765EE19EDB36F7654D6477F5E1345AC9F099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * G_B4_0 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * G_B3_0 = NULL;
	{
		// if (!System.IO.File.Exists(fullname))
		String_t* L_0 = ___fullname0;
		bool L_1 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Can not load texture from file " + fullname + ", file does not exists.");
		String_t* L_2 = ___fullname0;
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral1908039BF8CFD9828122171F33446B3D4AF510A8, L_2, _stringLiteral93E5D65B98CC759FA9367339593CA5B7213AAC7D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_3, /*hidden argument*/NULL);
		// return null;
		return (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
	}

IL_001f:
	{
		// byte[] bytes = System.IO.File.ReadAllBytes(fullname);
		String_t* L_4 = ___fullname0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = File_ReadAllBytes_mF29468CED0B7B3B7C0971ACEBB16A38683718BEC(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Texture2D texture = new Texture2D(2, 2);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_6, 2, 2, /*hidden argument*/NULL);
		// if (!texture.LoadImage(bytes))
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = L_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		bool L_9 = ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B(L_7, L_8, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		if (L_9)
		{
			G_B4_0 = L_7;
			goto IL_004b;
		}
	}
	{
		// Debug.LogError("Failed to load the texture " + fullname + ".");
		String_t* L_10 = ___fullname0;
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralCFFAEC319EAA09570193BA1A749CB57E4F381C3B, L_10, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_11, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_004b:
	{
		// return texture;
		return G_B4_0;
	}
}
// System.Collections.Generic.List`1<AlmostEngine.Screenshot.TextureExporter_ImageFile> AlmostEngine.Screenshot.TextureExporter::LoadFromPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * TextureExporter_LoadFromPath_m07E8210B597BC0A7CDCE42E5500AD77D19448833 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExporter_LoadFromPath_m07E8210B597BC0A7CDCE42E5500AD77D19448833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * V_0 = NULL;
	FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* V_1 = NULL;
	int32_t V_2 = 0;
	FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * V_3 = NULL;
	ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * V_4 = NULL;
	{
		// List<ImageFile> images = new List<ImageFile>();
		List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * L_0 = (List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 *)il2cpp_codegen_object_new(List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8_il2cpp_TypeInfo_var);
		List_1__ctor_m96FD1A8AEE15F9D1753DB8C413CD6BE90DF1A79A(L_0, /*hidden argument*/List_1__ctor_m96FD1A8AEE15F9D1753DB8C413CD6BE90DF1A79A_RuntimeMethod_var);
		V_0 = L_0;
		// if (!System.IO.Directory.Exists(path))
		String_t* L_1 = ___path0;
		bool L_2 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("Can not load images from directory " + path + ", directory does not exists.");
		String_t* L_3 = ___path0;
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralAE6503ADAA787D2F29BA065AFFEAC5C7B3F63B1F, L_3, _stringLiteralF3B8E4FE06130C492BED475E5201F106B84474A4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_4, /*hidden argument*/NULL);
		// return images;
		List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		// DirectoryInfo directory = new DirectoryInfo(path);
		String_t* L_6 = ___path0;
		DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * L_7 = (DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F *)il2cpp_codegen_object_new(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F_il2cpp_TypeInfo_var);
		DirectoryInfo__ctor_m00923CD8472B1FB220FAEE9D09CCCF9A96A021C6(L_7, L_6, /*hidden argument*/NULL);
		// FileInfo[] files = directory.GetFiles();
		NullCheck(L_7);
		FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* L_8 = DirectoryInfo_GetFiles_m3E2F7B3AA18FE603D7746175A572298AD649DBF6(L_7, /*hidden argument*/NULL);
		// foreach (FileInfo file in files)
		V_1 = L_8;
		V_2 = 0;
		goto IL_00a9;
	}

IL_0035:
	{
		// foreach (FileInfo file in files)
		FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// if (file.Extension == ".jpg" || file.Extension == ".png")
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14 = FileSystemInfo_get_Extension_m03280A812F387828DB2E03862B65E4FD0854565C(L_13, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_14, _stringLiteralDCDFD41CB6E96E78736DEB5F5ADD6F6311DA8E80, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_16 = V_3;
		NullCheck(L_16);
		String_t* L_17 = FileSystemInfo_get_Extension_m03280A812F387828DB2E03862B65E4FD0854565C(L_16, /*hidden argument*/NULL);
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a5;
		}
	}

IL_005d:
	{
		// ImageFile item = new ImageFile();
		ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * L_19 = (ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA *)il2cpp_codegen_object_new(ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA_il2cpp_TypeInfo_var);
		ImageFile__ctor_m7056F5B887460A1C28033CECC6E312FC2B8D639E(L_19, /*hidden argument*/NULL);
		V_4 = L_19;
		// item.m_Name = file.Name;
		ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * L_20 = V_4;
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_Name() */, L_21);
		NullCheck(L_20);
		L_20->set_m_Name_1(L_22);
		// item.m_Fullname = file.FullName;
		ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * L_23 = V_4;
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_24);
		NullCheck(L_23);
		L_23->set_m_Fullname_2(L_25);
		// item.m_CreationDate = file.CreationTime;
		ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * L_26 = V_4;
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_27 = V_3;
		NullCheck(L_27);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_28 = FileSystemInfo_get_CreationTime_mAB0EF469EA22A334F949E6EE693DB05FC99B2CC6(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_m_CreationDate_3(L_28);
		// item.m_Texture = TextureExporter.LoadFromFile(file.FullName);
		ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * L_29 = V_4;
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_30 = V_3;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_30);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_32 = TextureExporter_LoadFromFile_m2766765EE19EDB36F7654D6477F5E1345AC9F099(L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_m_Texture_0(L_32);
		// images.Add(item);
		List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * L_33 = V_0;
		ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * L_34 = V_4;
		NullCheck(L_33);
		List_1_Add_m5464A52A49D5B944EC2ED4CCABBCC125204DF590(L_33, L_34, /*hidden argument*/List_1_Add_m5464A52A49D5B944EC2ED4CCABBCC125204DF590_RuntimeMethod_var);
	}

IL_00a5:
	{
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00a9:
	{
		// foreach (FileInfo file in files)
		int32_t L_36 = V_2;
		FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* L_37 = V_1;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))))
		{
			goto IL_0035;
		}
	}
	{
		// return images;
		List_1_t1972961A19B3BC1FA50FDCD8BAC9457D48D586F8 * L_38 = V_0;
		return L_38;
	}
}
// System.Void AlmostEngine.Screenshot.TextureExporter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExporter__ctor_m8F755F18182592ADD4016C2257FB990EC3301852 (TextureExporter_t263F6E6733F3AE3EBB9B131B317327639E61FA94 * __this, const RuntimeMethod* method)
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
// System.Void AlmostEngine.Screenshot.TextureExporter_ImageFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFile__ctor_m7056F5B887460A1C28033CECC6E312FC2B8D639E (ImageFile_tC45AE76692A9125259C9578AF7BA9BF0A47F09CA * __this, const RuntimeMethod* method)
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
// System.Void AlmostEngine.Screenshot.UltimateScreenshotCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UltimateScreenshotCreator__ctor_m2F9A06B028CA3E8EB926B221E401C087DDADC322 (UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AlmostEngine.Screenshot.UltimateScreenshotCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UltimateScreenshotCreator__cctor_mD8F6F3C4FD48EF19D0C4BCBC2FDDA647903CEDCC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UltimateScreenshotCreator__cctor_mD8F6F3C4FD48EF19D0C4BCBC2FDDA647903CEDCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string VERSION = "Ultimate Screenshot Creator v1.8.0";
		((UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_StaticFields*)il2cpp_codegen_static_fields_for(UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_il2cpp_TypeInfo_var))->set_VERSION_0(_stringLiteral09EC3DE4DECDAF14C64FD72D13D3CEC670938CD9);
		// public static string AUTHOR = "(c)Arnaud Emilien - support@wildmagegames.com";
		((UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_StaticFields*)il2cpp_codegen_static_fields_for(UltimateScreenshotCreator_t5E4774A578C3B691246F9BF557D6654E53E4D962_il2cpp_TypeInfo_var))->set_AUTHOR_1(_stringLiteral7B250C4499507689DEDCFAF44330C282AD1F9257);
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
IL2CPP_EXTERN_C void DEFAULT_CALL _AddImageToGallery(char*);
// System.Void AlmostEngine.Screenshot.iOsUtils::_AddImageToGallery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils__AddImageToGallery_m6C2924D6CB2D30BD5DC3475FB75D039879768800 (String_t* ___file0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___file0' to native representation
	char* ____file0_marshaled = NULL;
	____file0_marshaled = il2cpp_codegen_marshal_string(___file0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_AddImageToGallery)(____file0_marshaled);

	// Marshaling cleanup of parameter '___file0' native representation
	il2cpp_codegen_marshal_free(____file0_marshaled);
	____file0_marshaled = NULL;

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _HasGalleryAuthorization();
// System.Boolean AlmostEngine.Screenshot.iOsUtils::_HasGalleryAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOsUtils__HasGalleryAuthorization_mE24C86A62BECB93B6AC1AF1466A1781A6523DA57 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_HasGalleryAuthorization)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL _RequestGalleryAuthorization();
// System.Void AlmostEngine.Screenshot.iOsUtils::_RequestGalleryAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils__RequestGalleryAuthorization_mEBE6E91479D533A463A29EC8902458C567E6965B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestGalleryAuthorization)();

}
// System.Void AlmostEngine.Screenshot.iOsUtils::AddImageToGallery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils_AddImageToGallery_m8CBB53E433FBB39DF713C4BE2494A8F621CB075D (String_t* ___file0, const RuntimeMethod* method)
{
	{
		// _AddImageToGallery (file);
		String_t* L_0 = ___file0;
		iOsUtils__AddImageToGallery_m6C2924D6CB2D30BD5DC3475FB75D039879768800(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean AlmostEngine.Screenshot.iOsUtils::HasGalleryAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOsUtils_HasGalleryAuthorization_mF2B7ED48C857A3928BA47D066D0418CFB3E598C1 (const RuntimeMethod* method)
{
	{
		// return _HasGalleryAuthorization();
		bool L_0 = iOsUtils__HasGalleryAuthorization_mE24C86A62BECB93B6AC1AF1466A1781A6523DA57(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AlmostEngine.Screenshot.iOsUtils::RequestGalleryAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils_RequestGalleryAuthorization_m45130E2FEBD380E9F996C975C37C4A2DFC24667D (const RuntimeMethod* method)
{
	{
		// _RequestGalleryAuthorization();
		iOsUtils__RequestGalleryAuthorization_mEBE6E91479D533A463A29EC8902458C567E6965B(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AlmostEngine.Screenshot.iOsUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOsUtils__ctor_m150FE2D11B132F8F761966767E75B86B1C2E15C2 (iOsUtils_t838D817FDE14DDFF92830AF2CB26FB5A70483E60 * __this, const RuntimeMethod* method)
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
// System.Void AlmostEngine.SimpleLocalization.ISimpleLocalizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISimpleLocalizer__ctor_m3D63988CD4D33BA4212083B30E4E2F93116E1EE5 (ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * __this, const RuntimeMethod* method)
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
// System.Void AlmostEngine.SimpleLocalization.LanguageSwitcher::Set(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSwitcher_Set_m0D8DFBD4E5FECC2C17361EB5E65BFDE66402C21B (LanguageSwitcher_t3894F3FEE6ABA2301667D758DF3BC7CC1821A8FB * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LanguageSwitcher_Set_m0D8DFBD4E5FECC2C17361EB5E65BFDE66402C21B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SimpleLocalizationLanguagesAsset.SetLanguage(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var);
		SimpleLocalizationLanguagesAsset_SetLanguage_m6C9F233C93A9C77A4CF3DF1A95907E6B3C345310(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.LanguageSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageSwitcher__ctor_m60F27AB1DB7B2D6F07ECEF76D2D743E8B71B8836 (LanguageSwitcher_t3894F3FEE6ABA2301667D758DF3BC7CC1821A8FB * __this, const RuntimeMethod* method)
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
// System.Void AlmostEngine.SimpleLocalization.SimpleImageLocalizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleImageLocalizer_OnEnable_m95EBC93B16626354F9F7E0C51051E9663EB34ED3 (SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleImageLocalizer_OnEnable_m95EBC93B16626354F9F7E0C51051E9663EB34ED3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Image == null) {
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_0 = __this->get_m_Image_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_Image = GetComponent<RawImage> ();
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_2 = Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1(__this, /*hidden argument*/Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1_RuntimeMethod_var);
		__this->set_m_Image_6(L_2);
	}

IL_001a:
	{
		// OnLanguageChanged (SimpleLocalizationLanguagesAsset.m_CurrentLanguageID);
		IL2CPP_RUNTIME_CLASS_INIT(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var);
		String_t* L_3 = ((SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_StaticFields*)il2cpp_codegen_static_fields_for(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var))->get_m_CurrentLanguageID_6();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void AlmostEngine.SimpleLocalization.ISimpleLocalizer::OnLanguageChanged(System.String) */, __this, L_3);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleImageLocalizer::OnLanguageChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleImageLocalizer_OnLanguageChanged_m6ABD928B7680FDD5B08FF146752804FAD80F3F80 (SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180 * __this, String_t* ___ID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleImageLocalizer_OnLanguageChanged_m6ABD928B7680FDD5B08FF146752804FAD80F3F80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Localisations.ContainsKey (ID) && m_Localisations [ID] != null) {
		Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * L_0 = __this->get_m_Localisations_5();
		String_t* L_1 = ___ID0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3DA781196364ECCEAFCB84E59E5CEB8DE61CAFF0(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3DA781196364ECCEAFCB84E59E5CEB8DE61CAFF0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * L_3 = __this->get_m_Localisations_5();
		String_t* L_4 = ___ID0;
		NullCheck(L_3);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_5 = Dictionary_2_get_Item_m203B7674788FC1E83144C56F6604B5BA9A7CF53A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m203B7674788FC1E83144C56F6604B5BA9A7CF53A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// m_Image.texture = m_Localisations [ID];
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_7 = __this->get_m_Image_6();
		Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * L_8 = __this->get_m_Localisations_5();
		String_t* L_9 = ___ID0;
		NullCheck(L_8);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_10 = Dictionary_2_get_Item_m203B7674788FC1E83144C56F6604B5BA9A7CF53A(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m203B7674788FC1E83144C56F6604B5BA9A7CF53A_RuntimeMethod_var);
		NullCheck(L_7);
		RawImage_set_texture_m63BC52D3B64A3BFD0EC182034FDD51E9A46F99F9(L_7, L_10, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_003a:
	{
		// Restore ();
		VirtActionInvoker0::Invoke(6 /* System.Void AlmostEngine.SimpleLocalization.ISimpleLocalizer::Restore() */, __this);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleImageLocalizer::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleImageLocalizer_Save_mB667014369FB4FEA4BF9FE830F8B36AEFCC8EB18 (SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180 * __this, const RuntimeMethod* method)
{
	{
		// m_OriginalTexture = m_Image.texture;
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_0 = __this->get_m_Image_6();
		NullCheck(L_0);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = RawImage_get_texture_m992AF81884D22B9ADC97A800AB931DCB4140954E_inline(L_0, /*hidden argument*/NULL);
		__this->set_m_OriginalTexture_4(L_1);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleImageLocalizer::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleImageLocalizer_Restore_mB9D0D789E78D745AF1F4AEDA3D67A766CCEEFECD (SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleImageLocalizer_Restore_mB9D0D789E78D745AF1F4AEDA3D67A766CCEEFECD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Image == null || m_OriginalTexture == null)
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_0 = __this->get_m_Image_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_2 = __this->get_m_OriginalTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// m_Image.texture = m_OriginalTexture;
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_4 = __this->get_m_Image_6();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_5 = __this->get_m_OriginalTexture_4();
		NullCheck(L_4);
		RawImage_set_texture_m63BC52D3B64A3BFD0EC182034FDD51E9A46F99F9(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleImageLocalizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleImageLocalizer__ctor_m0B28473BA4B96C6B75E4B8821CAA7A6D9B25BF48 (SimpleImageLocalizer_tA27D367F21358A65B1D84A43804E60B4F8266180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleImageLocalizer__ctor_m0B28473BA4B96C6B75E4B8821CAA7A6D9B25BF48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Localization m_Localisations = new  Localization ();
		Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * L_0 = (Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD *)il2cpp_codegen_object_new(Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD_il2cpp_TypeInfo_var);
		Localization__ctor_m77CB5D9E956D313443586AE7584EBBA4828D6F66(L_0, /*hidden argument*/NULL);
		__this->set_m_Localisations_5(L_0);
		ISimpleLocalizer__ctor_m3D63988CD4D33BA4212083B30E4E2F93116E1EE5(__this, /*hidden argument*/NULL);
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
// System.Void AlmostEngine.SimpleLocalization.SimpleImageLocalizer_Localization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Localization__ctor_m77CB5D9E956D313443586AE7584EBBA4828D6F66 (Localization_tB8C2CFE6DD04C19026C5F17A7A0FFFE78380FCCD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Localization__ctor_m77CB5D9E956D313443586AE7584EBBA4828D6F66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializableDictionary_2__ctor_m65B321E5FD96263C472D985E73F36FF487F95F5C(__this, /*hidden argument*/SerializableDictionary_2__ctor_m65B321E5FD96263C472D985E73F36FF487F95F5C_RuntimeMethod_var);
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
// System.Void AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset::SetLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocalizationLanguagesAsset_SetLanguage_m6C9F233C93A9C77A4CF3DF1A95907E6B3C345310 (String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleLocalizationLanguagesAsset_SetLanguage_m6C9F233C93A9C77A4CF3DF1A95907E6B3C345310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// m_CurrentLanguageID = id;
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var);
		((SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_StaticFields*)il2cpp_codegen_static_fields_for(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var))->set_m_CurrentLanguageID_6(L_0);
		// ISimpleLocalizer[] localizers = GameObject.FindObjectsOfType<ISimpleLocalizer> ();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9* L_1 = Object_FindObjectsOfType_TisISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349_mB245EB43CD8DCA2160A04282CAD2E48D5679F684(/*hidden argument*/Object_FindObjectsOfType_TisISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349_mB245EB43CD8DCA2160A04282CAD2E48D5679F684_RuntimeMethod_var);
		// foreach (var l in localizers) {
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_0010:
	{
		// foreach (var l in localizers) {
		ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ISimpleLocalizer_tE8A474F202DA9C177FFD76E431E3882E301F5349 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// l.OnLanguageChanged (id);
		String_t* L_6 = ___id0;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void AlmostEngine.SimpleLocalization.ISimpleLocalizer::OnLanguageChanged(System.String) */, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001d:
	{
		// foreach (var l in localizers) {
		int32_t L_8 = V_1;
		ISimpleLocalizerU5BU5D_t8F65ADAB2AFEDD0EE93108D5A040AF53F5DC1EB9* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocalizationLanguagesAsset__ctor_m725344535A5F36DAB7900D86C685F95806F1ADCA (SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleLocalizationLanguagesAsset__ctor_m725344535A5F36DAB7900D86C685F95806F1ADCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string m_DefaultLanguage = "eng";
		__this->set_m_DefaultLanguage_4(_stringLiteralA4CD2AB840E08A5CBEE3BD3D914E8C4145DD58E5);
		// public List<string> m_Languages = new List<string> ();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_m_Languages_5(L_0);
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleLocalizationLanguagesAsset::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocalizationLanguagesAsset__cctor_m4BB7D255898E08B701E891F3BE217A15A9D843D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleLocalizationLanguagesAsset__cctor_m4BB7D255898E08B701E891F3BE217A15A9D843D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string m_CurrentLanguageID = "";
		((SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_StaticFields*)il2cpp_codegen_static_fields_for(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var))->set_m_CurrentLanguageID_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void AlmostEngine.SimpleLocalization.SimpleTextLocalizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTextLocalizer_OnEnable_mCAD7FBE49C3280A28DE84DE688AB1BD9CF4CD982 (SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleTextLocalizer_OnEnable_mCAD7FBE49C3280A28DE84DE688AB1BD9CF4CD982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Text == null) {
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_m_Text_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_Text = GetComponent<Text> ();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(__this, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		__this->set_m_Text_6(L_2);
	}

IL_001a:
	{
		// OnLanguageChanged (SimpleLocalizationLanguagesAsset.m_CurrentLanguageID);
		IL2CPP_RUNTIME_CLASS_INIT(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var);
		String_t* L_3 = ((SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_StaticFields*)il2cpp_codegen_static_fields_for(SimpleLocalizationLanguagesAsset_t13C6BC044ABD422783C07B8DE09576936DC46B68_il2cpp_TypeInfo_var))->get_m_CurrentLanguageID_6();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void AlmostEngine.SimpleLocalization.ISimpleLocalizer::OnLanguageChanged(System.String) */, __this, L_3);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleTextLocalizer::OnLanguageChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTextLocalizer_OnLanguageChanged_mD05687E4FA8CDC97DEC9592B1D84CC33D70FC773 (SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB * __this, String_t* ___ID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleTextLocalizer_OnLanguageChanged_mD05687E4FA8CDC97DEC9592B1D84CC33D70FC773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Localisations.ContainsKey (ID) && m_Localisations [ID] != "") {
		Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * L_0 = __this->get_m_Localisations_5();
		String_t* L_1 = ___ID0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * L_3 = __this->get_m_Localisations_5();
		String_t* L_4 = ___ID0;
		NullCheck(L_3);
		String_t* L_5 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
		bool L_6 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// m_Text.text = m_Localisations [ID];
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = __this->get_m_Text_6();
		Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * L_8 = __this->get_m_Localisations_5();
		String_t* L_9 = ___ID0;
		NullCheck(L_8);
		String_t* L_10 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// } else {
		return;
	}

IL_003e:
	{
		// Restore ();
		VirtActionInvoker0::Invoke(6 /* System.Void AlmostEngine.SimpleLocalization.ISimpleLocalizer::Restore() */, __this);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleTextLocalizer::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTextLocalizer_Save_mE72C9FC00EDA9930420743586CBFA9BB90857070 (SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB * __this, const RuntimeMethod* method)
{
	{
		// m_OriginalText = m_Text.text;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_m_Text_6();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		__this->set_m_OriginalText_4(L_1);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleTextLocalizer::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTextLocalizer_Restore_m0DF57E9B36E36E1834E1AE21B3DA8AD27EC6CD77 (SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleTextLocalizer_Restore_m0DF57E9B36E36E1834E1AE21B3DA8AD27EC6CD77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Text == null || m_OriginalText == "")
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_m_Text_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = __this->get_m_OriginalText_4();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}

IL_0020:
	{
		// return;
		return;
	}

IL_0021:
	{
		// m_Text.text = m_OriginalText;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_m_Text_6();
		String_t* L_5 = __this->get_m_OriginalText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void AlmostEngine.SimpleLocalization.SimpleTextLocalizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTextLocalizer__ctor_m0849EE2FE6E739B8C4A689EAAC8517ABA58FAA3C (SimpleTextLocalizer_tF6A4D0E2C9EE1BF868BA131ED0A7A09C011E0CEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleTextLocalizer__ctor_m0849EE2FE6E739B8C4A689EAAC8517ABA58FAA3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string m_OriginalText = "";
		__this->set_m_OriginalText_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public Localization m_Localisations = new  Localization ();
		Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * L_0 = (Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E *)il2cpp_codegen_object_new(Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E_il2cpp_TypeInfo_var);
		Localization__ctor_mC4FD93F2CAEA8BFD2C4D8C5A9F0BA9582F7F962A(L_0, /*hidden argument*/NULL);
		__this->set_m_Localisations_5(L_0);
		ISimpleLocalizer__ctor_m3D63988CD4D33BA4212083B30E4E2F93116E1EE5(__this, /*hidden argument*/NULL);
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
// System.Void AlmostEngine.SimpleLocalization.SimpleTextLocalizer_Localization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Localization__ctor_mC4FD93F2CAEA8BFD2C4D8C5A9F0BA9582F7F962A (Localization_t79A7E64196703A992EB421D6C8EBF58A2B756F4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Localization__ctor_mC4FD93F2CAEA8BFD2C4D8C5A9F0BA9582F7F962A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializableDictionary_2__ctor_mC23513C0655F79490C8EA6A055E2F687319D1471(__this, /*hidden argument*/SerializableDictionary_2__ctor_mC23513C0655F79490C8EA6A055E2F687319D1471_RuntimeMethod_var);
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
// System.Boolean AlmostEngine.UnityVersion::HasPro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVersion_HasPro_m2353D381E6AC55F3297EFBDF03DA9A9BCDFE0B32 (const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AlmostEngine.UnityVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion__ctor_m17F88EF77176953B43C2258AF8B0750F62AA1431 (UnityVersion_t81B629B57941E0D6D609EFCF9F02CB6AD80D5E31 * __this, const RuntimeMethod* method)
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
// System.Void AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS::Initialize(AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS_Initialize_mAEDA086743E5BB6B95175F260DFB9FE7E74419A0 (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NSShareResultCallbackiOS_Initialize_mAEDA086743E5BB6B95175F260DFB9FE7E74419A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * L_0 = ((NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// instance = new GameObject( "NSShareResultCallbackiOS" ).AddComponent<NSShareResultCallbackiOS>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteral0733E025EA45E35F9BA089DE36023516E8FD1E84, /*hidden argument*/NULL);
		NullCheck(L_2);
		NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * L_3 = GameObject_AddComponent_TisNSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_m3D8CE54363A373E54A7C1DB82C01C0AEE8E14D84(L_2, /*hidden argument*/GameObject_AddComponent_TisNSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_m3D8CE54363A373E54A7C1DB82C01C0AEE8E14D84_RuntimeMethod_var);
		((NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_il2cpp_TypeInfo_var))->set_instance_4(L_3);
		// DontDestroyOnLoad( instance.gameObject );
		NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * L_4 = ((NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		// }
		goto IL_004f;
	}

IL_0032:
	{
		// else if( instance.callback != null )
		NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * L_6 = ((NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_7 = L_6->get_callback_5();
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// instance.callback( NativeShare.ShareResult.Unknown, null );
		NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * L_8 = ((NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_8);
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_9 = L_8->get_callback_5();
		NullCheck(L_9);
		ShareResultCallback_Invoke_mA703B009967B33641DA8DAF25C57A877ACEEE355(L_9, 0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// instance.callback = callback;
		NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * L_10 = ((NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21_il2cpp_TypeInfo_var))->get_instance_4();
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_11 = ___callback0;
		NullCheck(L_10);
		L_10->set_callback_5(L_11);
		// }
		return;
	}
}
// System.Void AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS::OnShareCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS_OnShareCompleted_m42420CD59C83372FC80DA325F0DB947598B3C4B3 (NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// NativeShare.ShareResultCallback _callback = callback;
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_0 = __this->get_callback_5();
		V_0 = L_0;
		// callback = null;
		__this->set_callback_5((ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 *)NULL);
		// if( _callback != null )
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if( string.IsNullOrEmpty( message ) )
		String_t* L_2 = ___message0;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// _callback( NativeShare.ShareResult.Unknown, null );
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_4 = V_0;
		NullCheck(L_4);
		ShareResultCallback_Invoke_mA703B009967B33641DA8DAF25C57A877ACEEE355(L_4, 0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		// NativeShare.ShareResult result = (NativeShare.ShareResult) ( message[0] - '0' ); // Convert first char to digit and then to ShareResult
		String_t* L_5 = ___message0;
		NullCheck(L_5);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_5, 0, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)48)));
		// string shareTarget = message.Length > 1 ? message.Substring( 1 ) : null;
		String_t* L_7 = ___message0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) > ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		goto IL_0040;
	}

IL_0039:
	{
		String_t* L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_9, 1, /*hidden argument*/NULL);
		G_B6_0 = L_10;
	}

IL_0040:
	{
		V_2 = G_B6_0;
		// _callback( result, shareTarget );
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_11 = V_0;
		int32_t L_12 = V_1;
		String_t* L_13 = V_2;
		NullCheck(L_11);
		ShareResultCallback_Invoke_mA703B009967B33641DA8DAF25C57A877ACEEE355(L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void AlmostEngineDependencies.NativeShare.NSShareResultCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS__ctor_mB90AFCE1D21711587E1A8530117FEAF462C1F231 (NSShareResultCallbackiOS_t81FCDA3857DE3949A671B3B093583205D4618F21 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeShare_Share(char**, int32_t, char*, char*);
// System.Void AlmostEngineDependencies.NativeShare.NativeShare::_NativeShare_Share(System.String[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__NativeShare_Share_mF8D1772F6FD053A82DB373475981441497EB6657 (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___files0, int32_t ___filesCount1, String_t* ___subject2, String_t* ___text3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t, char*, char*);

	// Marshaling of parameter '___files0' to native representation
	char** ____files0_marshaled = NULL;
	if (___files0 != NULL)
	{
		il2cpp_array_size_t ____files0_Length = (___files0)->max_length;
		____files0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____files0_Length + 1);
		(____files0_marshaled)[____files0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____files0_Length); i++)
		{
			(____files0_marshaled)[i] = il2cpp_codegen_marshal_string((___files0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____files0_marshaled = NULL;
	}

	// Marshaling of parameter '___subject2' to native representation
	char* ____subject2_marshaled = NULL;
	____subject2_marshaled = il2cpp_codegen_marshal_string(___subject2);

	// Marshaling of parameter '___text3' to native representation
	char* ____text3_marshaled = NULL;
	____text3_marshaled = il2cpp_codegen_marshal_string(___text3);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeShare_Share)(____files0_marshaled, ___filesCount1, ____subject2_marshaled, ____text3_marshaled);

	// Marshaling cleanup of parameter '___files0' native representation
	if (____files0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____files0_marshaled_CleanupLoopCount = (___files0 != NULL) ? (___files0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____files0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____files0_marshaled)[i]);
			(____files0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____files0_marshaled);
		____files0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___subject2' native representation
	il2cpp_codegen_marshal_free(____subject2_marshaled);
	____subject2_marshaled = NULL;

	// Marshaling cleanup of parameter '___text3' native representation
	il2cpp_codegen_marshal_free(____text3_marshaled);
	____text3_marshaled = NULL;

}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::SetSubject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_SetSubject_m8FA269D2A06F23A4D2850ED2DBB862FE43660F22 (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, String_t* ___subject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_SetSubject_m8FA269D2A06F23A4D2850ED2DBB862FE43660F22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B1_1 = NULL;
	{
		// this.subject = subject ?? string.Empty;
		String_t* L_0 = ___subject0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_subject_0(G_B2_0);
		// return this;
		return __this;
	}
}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_SetText_m77F73B106A0478DAD2A547E469F1451D64EC9B6B (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_SetText_m77F73B106A0478DAD2A547E469F1451D64EC9B6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B1_1 = NULL;
	{
		// this.text = text ?? string.Empty;
		String_t* L_0 = ___text0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_text_1(G_B2_0);
		// return this;
		return __this;
	}
}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_SetTitle_mC622BF36893DB9259135CC21534A34A50DFFC5DB (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_SetTitle_mC622BF36893DB9259135CC21534A34A50DFFC5DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B1_1 = NULL;
	{
		// this.title = title ?? string.Empty;
		String_t* L_0 = ___title0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_title_2(G_B2_0);
		// return this;
		return __this;
	}
}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::SetCallback(AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_SetCallback_mA318957B1529AA14FD65B4ABDC2B923EA653A815 (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * ___callback0, const RuntimeMethod* method)
{
	{
		// this.callback = callback;
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_0 = ___callback0;
		__this->set_callback_5(L_0);
		// return this;
		return __this;
	}
}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::SetTarget(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_SetTarget_m379903AA46F8BD24507C642E4995BE9509F8B0C6 (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, String_t* ___androidPackageName0, String_t* ___androidClassName1, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::AddTarget(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_AddTarget_mBB36B4A7A508032F1E3633731B724250645CBBCB (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, String_t* ___androidPackageName0, String_t* ___androidClassName1, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_AddFile_m1427851A2ED59DCAAF4FE30B4841CEC365FB2303 (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, String_t* ___filePath0, String_t* ___mime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_AddFile_m1427851A2ED59DCAAF4FE30B4841CEC365FB2303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * G_B3_1 = NULL;
	{
		// if (!string.IsNullOrEmpty(filePath) && File.Exists(filePath))
		String_t* L_0 = ___filePath0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_2 = ___filePath0;
		bool L_3 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// files.Add(filePath);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_4 = __this->get_files_3();
		String_t* L_5 = ___filePath0;
		NullCheck(L_4);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_4, L_5, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// mimes.Add(mime ?? string.Empty);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = __this->get_mimes_4();
		String_t* L_7 = ___mime1;
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_002c;
		}
	}
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_002c:
	{
		NullCheck(G_B4_1);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(G_B4_1, G_B4_0, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// }
		goto IL_0043;
	}

IL_0033:
	{
		// Debug.LogError("Share Error: file does not exist at path or permission denied: " + filePath);
		String_t* L_10 = ___filePath0;
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralBD53AF209D51661C55D94DC712DCA7891CF20671, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// return this;
		return __this;
	}
}
// AlmostEngineDependencies.NativeShare.NativeShare AlmostEngineDependencies.NativeShare.NativeShare::AddFile(UnityEngine.Texture2D,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * NativeShare_AddFile_mE4A4C67F18816539D9255C1C6E22069C73421909 (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, String_t* ___createdFileName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_AddFile_mE4A4C67F18816539D9255C1C6E22069C73421909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* G_B12_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * G_B13_2 = NULL;
	{
		// if (!texture)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___texture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("Share Error: Texture does not exist!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral0AE88E088C5BDEE5C02B05298B7BED8DAA2FBEC7, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0014:
	{
		// if (string.IsNullOrEmpty(createdFileName))
		String_t* L_2 = ___createdFileName1;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// createdFileName = "Image.png";
		___createdFileName1 = _stringLiteral365E0981A2EB5C0BB9FD7716CC89469869DEA2C0;
	}

IL_0023:
	{
		// if (createdFileName.EndsWith(".jpeg", System.StringComparison.OrdinalIgnoreCase) || createdFileName.EndsWith(".jpg", System.StringComparison.OrdinalIgnoreCase))
		String_t* L_4 = ___createdFileName1;
		NullCheck(L_4);
		bool L_5 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_4, _stringLiteral801DC5C3610D303D73C37E27B3D6F5AC9F7661DC, 5, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = ___createdFileName1;
		NullCheck(L_6);
		bool L_7 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_6, _stringLiteralDCDFD41CB6E96E78736DEB5F5ADD6F6311DA8E80, 5, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}

IL_003f:
	{
		// saveAsJpeg = true;
		V_0 = (bool)1;
		goto IL_0060;
	}

IL_0043:
	{
		// if (!createdFileName.EndsWith(".png", System.StringComparison.OrdinalIgnoreCase))
		String_t* L_8 = ___createdFileName1;
		NullCheck(L_8);
		bool L_9 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_8, _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0, 5, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		// createdFileName += ".png";
		String_t* L_10 = ___createdFileName1;
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_10, _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0, /*hidden argument*/NULL);
		___createdFileName1 = L_11;
	}

IL_005e:
	{
		// saveAsJpeg = false;
		V_0 = (bool)0;
	}

IL_0060:
	{
		// string filePath = Path.Combine(Application.temporaryCachePath, createdFileName);
		String_t* L_12 = Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C(/*hidden argument*/NULL);
		String_t* L_13 = ___createdFileName1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_14 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// File.WriteAllBytes(filePath, GetTextureBytes(texture, saveAsJpeg));
		String_t* L_15 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = ___texture0;
		bool L_17 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = NativeShare_GetTextureBytes_mAE9D060163BE5C1CF3DFF385AB8E932853EDC7EA(L_16, L_17, /*hidden argument*/NULL);
		File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594(L_15, L_18, /*hidden argument*/NULL);
		// AddFile(filePath, saveAsJpeg ? "image/jpeg" : "image/png");
		String_t* L_19 = V_1;
		bool L_20 = V_0;
		G_B11_0 = L_19;
		G_B11_1 = __this;
		if (L_20)
		{
			G_B12_0 = L_19;
			G_B12_1 = __this;
			goto IL_0085;
		}
	}
	{
		G_B13_0 = _stringLiteral34D71611DCE9C30419B3C3EA42DC9426E931CDDE;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_008a;
	}

IL_0085:
	{
		G_B13_0 = _stringLiteral60C283FF6EF6CAD8B67415AE1A3C6BABD3477040;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_008a:
	{
		NullCheck(G_B13_2);
		NativeShare_AddFile_m1427851A2ED59DCAAF4FE30B4841CEC365FB2303(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// return this;
		return __this;
	}
}
// System.Void AlmostEngineDependencies.NativeShare.NativeShare::Share()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Share_mD25C0BF9747B12BD5D556415F2BE3865D1E9560B (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_Share_mD25C0BF9747B12BD5D556415F2BE3865D1E9560B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (files.Count == 0 && subject.Length == 0 && text.Length == 0)
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_files_3();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_0, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_2 = __this->get_subject_0();
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_4 = __this->get_text_1();
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogWarning("Share Error: attempting to share nothing!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral5DEEFF80039DD66E38E4F84454D9B596B3F4C3B3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0032:
	{
		// NSShareResultCallbackiOS.Initialize( callback );
		ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * L_6 = __this->get_callback_5();
		NSShareResultCallbackiOS_Initialize_mAEDA086743E5BB6B95175F260DFB9FE7E74419A0(L_6, /*hidden argument*/NULL);
		// _NativeShare_Share( files.ToArray(), files.Count, subject, text );
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_7 = __this->get_files_3();
		NullCheck(L_7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_7, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_9 = __this->get_files_3();
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_9, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		String_t* L_11 = __this->get_subject_0();
		String_t* L_12 = __this->get_text_1();
		NativeShare__NativeShare_Share_mF8D1772F6FD053A82DB373475981441497EB6657(L_8, L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean AlmostEngineDependencies.NativeShare.NativeShare::TargetExists(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_TargetExists_mAFD7B43FEC55BB2E9EDC284647505FDB630E20DC (String_t* ___androidPackageName0, String_t* ___androidClassName1, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean AlmostEngineDependencies.NativeShare.NativeShare::FindTarget(System.String&,System.String&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_FindTarget_m5D9A8A046A6E073146343E36399F8F15629A8302 (String_t** ___androidPackageName0, String_t** ___androidClassName1, String_t* ___packageNameRegex2, String_t* ___classNameRegex3, const RuntimeMethod* method)
{
	{
		// androidPackageName = null;
		String_t** L_0 = ___androidPackageName0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// androidClassName = null;
		String_t** L_1 = ___androidClassName1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Byte[] AlmostEngineDependencies.NativeShare.NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeShare_GetTextureBytes_mAE9D060163BE5C1CF3DFF385AB8E932853EDC7EA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_GetTextureBytes_mAE9D060163BE5C1CF3DFF385AB8E932853EDC7EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG(100) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b;
			}
		}

IL_0003:
		{
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = ___texture0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617(L_1, /*hidden argument*/NULL);
			G_B3_0 = L_2;
			goto IL_0013;
		}

IL_000b:
		{
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ___texture0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ImageConversion_EncodeToJPG_mE289598FD45B6658A645B2CE359C4E6FC97BF875(L_3, ((int32_t)100), /*hidden argument*/NULL);
			G_B3_0 = L_4;
		}

IL_0013:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0016;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0021;
		throw e;
	}

CATCH_0016:
	{ // begin catch(UnityEngine.UnityException)
		// catch (UnityException)
		// return GetTextureBytesFromCopy(texture, isJpeg);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = NativeShare_GetTextureBytesFromCopy_m92BB02ED836FB88843570321401EBE9F9FB78BD7(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_002c;
	} // end catch (depth: 1)

CATCH_0021:
	{ // begin catch(System.ArgumentException)
		// catch (System.ArgumentException)
		// return GetTextureBytesFromCopy(texture, isJpeg);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = NativeShare_GetTextureBytesFromCopy_m92BB02ED836FB88843570321401EBE9F9FB78BD7(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] AlmostEngineDependencies.NativeShare.NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeShare_GetTextureBytesFromCopy_m92BB02ED836FB88843570321401EBE9F9FB78BD7 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare_GetTextureBytesFromCopy_m92BB02ED836FB88843570321401EBE9F9FB78BD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_0 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_1 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B11_0 = NULL;
	{
		// Debug.LogWarning("Sharing non-readable textures is slower than sharing readable textures");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral452E516DC251DCE80C63726D70CDB94E1D48BEC3, /*hidden argument*/NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary(texture.width, texture.height);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_4 = RenderTexture_GetTemporary_m02547EA84CDEB9038FCF1EEDD283AF24114C735F(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_5 = RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957(/*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// Graphics.Blit(texture, rt);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = ___texture0;
				RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_7 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
				Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113(L_6, L_7, /*hidden argument*/NULL);
				// RenderTexture.active = rt;
				RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_8 = V_1;
				RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_8, /*hidden argument*/NULL);
				// sourceTexReadable = new Texture2D(texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_9 = ___texture0;
				NullCheck(L_9);
				int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = ___texture0;
				NullCheck(L_11);
				int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
				bool L_13 = ___isJpeg1;
				G_B2_0 = L_12;
				G_B2_1 = L_10;
				if (L_13)
				{
					G_B3_0 = L_12;
					G_B3_1 = L_10;
					goto IL_0043;
				}
			}

IL_0040:
			{
				G_B4_0 = 4;
				G_B4_1 = G_B2_0;
				G_B4_2 = G_B2_1;
				goto IL_0044;
			}

IL_0043:
			{
				G_B4_0 = 3;
				G_B4_1 = G_B3_0;
				G_B4_2 = G_B3_1;
			}

IL_0044:
			{
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_14 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
				Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_14, G_B4_2, G_B4_1, G_B4_0, (bool)0, /*hidden argument*/NULL);
				V_0 = L_14;
				// sourceTexReadable.ReadPixels(new Rect(0, 0, texture.width, texture.height), 0, 0, false);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = V_0;
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = ___texture0;
				NullCheck(L_16);
				int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_18 = ___texture0;
				NullCheck(L_18);
				int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
				Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_20;
				memset((&L_20), 0, sizeof(L_20));
				Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_20), (0.0f), (0.0f), (((float)((float)L_17))), (((float)((float)L_19))), /*hidden argument*/NULL);
				NullCheck(L_15);
				Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE(L_15, L_20, 0, 0, (bool)0, /*hidden argument*/NULL);
				// sourceTexReadable.Apply(false, false);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = V_0;
				NullCheck(L_21);
				Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1(L_21, (bool)0, (bool)0, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x97, FINALLY_008a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_007b;
			throw e;
		}

CATCH_007b:
		{ // begin catch(System.Exception)
			// Debug.LogException(e);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// Object.DestroyImmediate(sourceTexReadable);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_22 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_22, /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
			IL2CPP_LEAVE(0xBE, FINALLY_008a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		// RenderTexture.active = activeRT;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_23 = V_2;
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_23, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(rt);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_24 = V_1;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_24, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0097:
	{
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// return isJpeg ? sourceTexReadable.EncodeToJPG(100) : sourceTexReadable.EncodeToPNG();
				bool L_25 = ___isJpeg1;
				if (L_25)
				{
					goto IL_00a3;
				}
			}

IL_009b:
			{
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_26 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617(L_26, /*hidden argument*/NULL);
				G_B11_0 = L_27;
				goto IL_00ab;
			}

IL_00a3:
			{
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_28 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = ImageConversion_EncodeToJPG_mE289598FD45B6658A645B2CE359C4E6FC97BF875(L_28, ((int32_t)100), /*hidden argument*/NULL);
				G_B11_0 = L_29;
			}

IL_00ab:
			{
				V_3 = G_B11_0;
				IL2CPP_LEAVE(0xBE, FINALLY_00b7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00ae;
			throw e;
		}

CATCH_00ae:
		{ // begin catch(System.Exception)
			// Debug.LogException(e);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
			IL2CPP_LEAVE(0xBE, FINALLY_00b7);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		// Object.DestroyImmediate(sourceTexReadable);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_30, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_3;
		return L_31;
	}
}
// System.Void AlmostEngineDependencies.NativeShare.NativeShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__ctor_m289BC16707830C1D84234E1CA442A6D89E884C92 (NativeShare_t38C3239F3163BEB3E09BAD1A9B2022752C9F4275 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeShare__ctor_m289BC16707830C1D84234E1CA442A6D89E884C92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string subject = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_subject_0(L_0);
		// private string text = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_text_1(L_1);
		// private string title = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_title_2(L_2);
		// private readonly List<string> files = new List<string>(0);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4(L_3, 0, /*hidden argument*/List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4_RuntimeMethod_var);
		__this->set_files_3(L_3);
		// private readonly List<string> mimes = new List<string>(0);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_4 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4(L_4, 0, /*hidden argument*/List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4_RuntimeMethod_var);
		__this->set_mimes_4(L_4);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___shareTarget1' to native representation
	char* ____shareTarget1_marshaled = NULL;
	____shareTarget1_marshaled = il2cpp_codegen_marshal_string(___shareTarget1);

	// Native function invocation
	il2cppPInvokeFunc(___result0, ____shareTarget1_marshaled);

	// Marshaling cleanup of parameter '___shareTarget1' native representation
	il2cpp_codegen_marshal_free(____shareTarget1_marshaled);
	____shareTarget1_marshaled = NULL;

}
// System.Void AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback__ctor_mCD9F94F9254FB374DFE9F9951030A6DE71316A03 (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback::Invoke(AlmostEngineDependencies.NativeShare.NativeShare_ShareResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_mA703B009967B33641DA8DAF25C57A877ACEEE355 (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, ___shareTarget1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___shareTarget1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, ___shareTarget1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___result0, ___shareTarget1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___result0, ___shareTarget1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0, ___shareTarget1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0, ___shareTarget1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), ___shareTarget1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___shareTarget1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback::BeginInvoke(AlmostEngineDependencies.NativeShare.NativeShare_ShareResult,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShareResultCallback_BeginInvoke_m8D065AEFFADA62B4793BC9EA39B5CDE35CA57B95 (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * __this, int32_t ___result0, String_t* ___shareTarget1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShareResultCallback_BeginInvoke_m8D065AEFFADA62B4793BC9EA39B5CDE35CA57B95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ShareResult_t6608DA24F381D18F7C040C07B7F2844AF0391166_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___shareTarget1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void AlmostEngineDependencies.NativeShare.NativeShare_ShareResultCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_EndInvoke_m5F7EBC5AE7C71B28E6C1B2EC0B7CA7FF7744200F (ShareResultCallback_tA9F21AF0AC997F6EF34E3B997409768A08EE6885 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * RawImage_get_texture_m992AF81884D22B9ADC97A800AB931DCB4140954E_inline (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, const RuntimeMethod* method)
{
	{
		// return m_Texture;
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_0 = __this->get_m_Texture_35();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
