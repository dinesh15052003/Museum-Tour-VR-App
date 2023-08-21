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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Runtime.CompilerServices.StrongBox`1<System.Text.Encodings.Web.AllowedBmpCodePointsBitmap>
struct StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Text.Unicode.UnicodeRange[]
struct UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.Encodings.Web.DefaultJavaScriptEncoder
struct DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32;
// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tE7E19B7C5DA9D5F0F3E9E4F5C58359E27C875752;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t00F22A38A8B8F8AD1EE66FFB472324DC68579566;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFE5A7C65174014C30D08774B620633CA2141B346;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.CompilerServices.NativeIntegerAttribute
struct NativeIntegerAttribute_t36F90F85F9AB1060C84D9BE50958F53BD4994EEB;
// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t8C5CACE4D6ECB37DDBCFA14BAE9F06F4AF804DF4;
// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t73F0155DC58B7B5F84A0AD50345DA439AFEEEBE2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tCBFFAB20AD9E68064976C7DC9D9AD53E3130BA14;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t0F2E3CF46D8AB038E589C88FA392D5D8B69150FE;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t76ED56E08ED096A598020BA0FF5FD30635089077;
// System.Text.Encodings.Web.OptimizedInboxTextEncoder
struct OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Text.Encodings.Web.ScalarEscaperBase
struct ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38;
// System.String
struct String_t;
// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691;
// System.Text.Encodings.Web.TextEncoderSettings
struct TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B;
// System.Type
struct Type_t;
// System.Text.Unicode.UnicodeRange
struct UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation
struct EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
// System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14
struct U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF;

IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t5105958E328309C5A95F382E7406067DD9C5E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09EAD6A50C87B14995000A914300979F01096C97;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2;
IL2CPP_EXTERN_C String_t* _stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AD0F59C87E26DB328E73CE5878FFD76F11C3D3;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultJavaScriptEncoder__ctor_mA437BC36BA8C0EB2D04AC4B6DB40AA0F0242C233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StrongBox_1__ctor_mAA0952E24233FFF62E573D25C01EBC58C7284E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRange_mE18D9F922D41074A99B571237B152FA25E3CD466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRanges_m51D0C4BD65E72A1D7166C0CA74656AA1658D7580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_mA7F4E71D5A47B9FCEF35DD1DA98E064740DA4F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_mACA7ECF42D262ACCEF9D9D9BCF2AACDCA47AF658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_Reset_m0D5E32F55B790BBEE2CB26685070A5CACE549AE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange_Create_m45AF1389FADA69EF5C153C7FA1B09D9C77F469AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_tFAEA042F3014DBF835A33A8D548D05BAFB56EE2F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_0_0_0_var;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_StaticFields____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0_RVAStorage;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t52CD7D93335451DFE123EF6FCFD7CA4EFA1F77F6 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.HexConverter
struct HexConverter_t143D3EC900A7E50DED0D9A2007DB8B9B5A9EEB39  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// FxResources.System.Text.Encodings.Web.SR
struct SR_tFAEA042F3014DBF835A33A8D548D05BAFB56EE2F  : public RuntimeObject
{
};

// System.SR
struct SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5  : public RuntimeObject
{
};

struct SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_StaticFields
{
	// System.Boolean System.SR::s_usingResourceKeys
	bool ___s_usingResourceKeys_0;
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_1;
};

// System.Text.Encodings.Web.ScalarEscaperBase
struct ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38  : public RuntimeObject
{
};

// System.Text.Encodings.Web.SpanUtility
struct SpanUtility_tD7A58B9BE2F5E981833B1DC9F5A08DBC91E55637  : public RuntimeObject
{
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

// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691  : public RuntimeObject
{
};

// System.Text.Encodings.Web.ThrowHelper
struct ThrowHelper_tA613771B41E814855ED19BA41E817D23E6C7810D  : public RuntimeObject
{
};

// System.Text.Unicode.UnicodeHelpers
struct UnicodeHelpers_t5A5A5BBFB4BD837753ED0CAC899C31F43C701F71  : public RuntimeObject
{
};

// System.Text.Unicode.UnicodeRange
struct UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836  : public RuntimeObject
{
	// System.Int32 System.Text.Unicode.UnicodeRange::<FirstCodePoint>k__BackingField
	int32_t ___U3CFirstCodePointU3Ek__BackingField_0;
	// System.Int32 System.Text.Unicode.UnicodeRange::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
};

// System.Text.Unicode.UnicodeRanges
struct UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7  : public RuntimeObject
{
};

struct UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields
{
	// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::_all
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* ____all_0;
	// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::_u0000
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* ____u0000_1;
};

// System.Text.UnicodeUtility
struct UnicodeUtility_t62149882DA12C1D23BA45AC572963C7FEA9DF32C  : public RuntimeObject
{
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

// System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14
struct U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF  : public RuntimeObject
{
	// System.Int32 System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Int32 System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::<>2__current
	int32_t ___U3CU3E2__current_1;
	// System.Int32 System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Text.Encodings.Web.TextEncoderSettings System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::<>4__this
	TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* ___U3CU3E4__this_3;
	// System.Int32 System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::<i>5__2
	int32_t ___U3CiU3E5__2_4;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tE7E19B7C5DA9D5F0F3E9E4F5C58359E27C875752  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t00F22A38A8B8F8AD1EE66FFB472324DC68579566  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFE5A7C65174014C30D08774B620633CA2141B346  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2  : public TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691
{
};

// System.Runtime.CompilerServices.NativeIntegerAttribute
struct NativeIntegerAttribute_t36F90F85F9AB1060C84D9BE50958F53BD4994EEB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean[] System.Runtime.CompilerServices.NativeIntegerAttribute::TransformFlags
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___TransformFlags_0;
};

// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t8C5CACE4D6ECB37DDBCFA14BAE9F06F4AF804DF4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t73F0155DC58B7B5F84A0AD50345DA439AFEEEBE2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tCBFFAB20AD9E68064976C7DC9D9AD53E3130BA14  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t0F2E3CF46D8AB038E589C88FA392D5D8B69150FE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t76ED56E08ED096A598020BA0FF5FD30635089077  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;
};

// System.Text.Rune
struct Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 
{
	// System.UInt32 System.Text.Rune::_value
	uint32_t ____value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192
struct __StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5__padding[8192];
	};
};

// System.Text.Encodings.Web.AllowedBmpCodePointsBitmap/<Bitmap>e__FixedBuffer
struct U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07 
{
	union
	{
		struct
		{
			// System.UInt32 System.Text.Encodings.Web.AllowedBmpCodePointsBitmap/<Bitmap>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07__padding[8192];
	};
};

// System.Text.Encodings.Web.AsciiByteMap/<Buffer>e__FixedBuffer
struct U3CBufferU3Ee__FixedBuffer_t4DCEAE18051B9DD5B9B154FBBFC5C00A81ADCCCD 
{
	union
	{
		struct
		{
			// System.Byte System.Text.Encodings.Web.AsciiByteMap/<Buffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CBufferU3Ee__FixedBuffer_t4DCEAE18051B9DD5B9B154FBBFC5C00A81ADCCCD__padding[128];
	};
};

// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints/<AsBytes>e__FixedBuffer
struct U3CAsBytesU3Ee__FixedBuffer_t842F006B8F9E052F18A8AED1AE4550DF9F6DA616 
{
	union
	{
		struct
		{
			// System.Byte System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints/<AsBytes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CAsBytesU3Ee__FixedBuffer_t842F006B8F9E052F18A8AED1AE4550DF9F6DA616__padding[16];
	};
};

// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_tF714B57AAA84902A9E491237DCEC6FA44847887E 
{
	union
	{
		struct
		{
			// System.UInt64 System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData/<Data>e__FixedBuffer::FixedElementField
			uint64_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_tF714B57AAA84902A9E491237DCEC6FA44847887E__padding[1024];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt32>
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192 <PrivateImplementationDetails>::8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6
	__StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5 ___8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0;
};

// System.Text.Encodings.Web.AllowedBmpCodePointsBitmap
struct AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6 
{
	// System.Text.Encodings.Web.AllowedBmpCodePointsBitmap/<Bitmap>e__FixedBuffer System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::Bitmap
	U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07 ___Bitmap_0;
};

// System.Text.Encodings.Web.AsciiByteMap
struct AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65 
{
	// System.Text.Encodings.Web.AsciiByteMap/<Buffer>e__FixedBuffer System.Text.Encodings.Web.AsciiByteMap::Buffer
	U3CBufferU3Ee__FixedBuffer_t4DCEAE18051B9DD5B9B154FBBFC5C00A81ADCCCD ___Buffer_0;
};

// System.Text.Encodings.Web.DefaultJavaScriptEncoder
struct DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32  : public JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2
{
	// System.Text.Encodings.Web.OptimizedInboxTextEncoder System.Text.Encodings.Web.DefaultJavaScriptEncoder::_innerEncoder
	OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* ____innerEncoder_2;
};

struct DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields
{
	// System.Text.Encodings.Web.DefaultJavaScriptEncoder System.Text.Encodings.Web.DefaultJavaScriptEncoder::BasicLatinSingleton
	DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* ___BasicLatinSingleton_0;
	// System.Text.Encodings.Web.DefaultJavaScriptEncoder System.Text.Encodings.Web.DefaultJavaScriptEncoder::UnsafeRelaxedEscapingSingleton
	DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* ___UnsafeRelaxedEscapingSingleton_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints
struct AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints/<AsBytes>e__FixedBuffer System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints::AsBytes
			U3CAsBytesU3Ee__FixedBuffer_t842F006B8F9E052F18A8AED1AE4550DF9F6DA616 ___AsBytes_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CAsBytesU3Ee__FixedBuffer_t842F006B8F9E052F18A8AED1AE4550DF9F6DA616 ___AsBytes_0_forAlignmentOnly;
		};
	};
};

// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData
struct AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD 
{
	// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData/<Data>e__FixedBuffer System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData::Data
	U3CDataU3Ee__FixedBuffer_tF714B57AAA84902A9E491237DCEC6FA44847887E ___Data_0;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.UInt32>
struct Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Runtime.CompilerServices.StrongBox`1<System.Text.Encodings.Web.AllowedBmpCodePointsBitmap>
struct StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765  : public RuntimeObject
{
	// T System.Runtime.CompilerServices.StrongBox`1::Value
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6 ___Value_0;
};

// System.Text.Encodings.Web.OptimizedInboxTextEncoder
struct OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2  : public RuntimeObject
{
	// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints System.Text.Encodings.Web.OptimizedInboxTextEncoder::_allowedAsciiCodePoints
	AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE ____allowedAsciiCodePoints_0;
	// System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData System.Text.Encodings.Web.OptimizedInboxTextEncoder::_asciiPreescapedData
	AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD ____asciiPreescapedData_1;
	// System.Text.Encodings.Web.AllowedBmpCodePointsBitmap System.Text.Encodings.Web.OptimizedInboxTextEncoder::_allowedBmpCodePoints
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6 ____allowedBmpCodePoints_2;
	// System.Text.Encodings.Web.ScalarEscaperBase System.Text.Encodings.Web.OptimizedInboxTextEncoder::_scalarEscaper
	ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* ____scalarEscaper_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Text.Encodings.Web.TextEncoderSettings
struct TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B  : public RuntimeObject
{
	// System.Text.Encodings.Web.AllowedBmpCodePointsBitmap System.Text.Encodings.Web.TextEncoderSettings::_allowedCodePointsBitmap
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6 ____allowedCodePointsBitmap_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation
struct EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382  : public ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38
{
	// System.Text.Encodings.Web.AsciiByteMap System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::_preescapedMap
	AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65 ____preescapedMap_2;
};

struct EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_StaticFields
{
	// System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::Singleton
	EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* ___Singleton_0;
	// System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::SingletonMinimallyEscaped
	EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* ___SingletonMinimallyEscaped_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Text.Unicode.UnicodeRange[]
struct UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3  : public RuntimeArray
{
	ALIGN_FIELD (8) UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* m_Items[1];

	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.UInt32>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.UInt32>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.Span`1<System.Char>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Char>(System.ReadOnlySpan`1<T>,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Char>(System.Span`1<T>,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Byte>(System.ReadOnlySpan`1<T>,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Byte>(System.Span`1<T>,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Byte>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.StrongBox`1<System.Text.Encodings.Web.AllowedBmpCodePointsBitmap>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrongBox_1__ctor_mAA0952E24233FFF62E573D25C01EBC58C7284E00_gshared (StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765* __this, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m8C14F370900C8B1B82539519884EBE831D7BE288_inline (const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mF7C8D9E23CD8A3723A3A25D0C0993C9CA4E2FD8A (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___resourceSource0, const RuntimeMethod* method) ;
// System.String System.SR::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m1181593FEF45715143BB97DC38E685DEBA193D4E (String_t* ___resourceKey0, const RuntimeMethod* method) ;
// System.Boolean System.AppContext::TryGetSwitch(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___switchName0, bool* ___isEnabled1, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsInRangeInclusive(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsValidUnicodeScalar(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsValidUnicodeScalar_m6341D06901F7CB719B986E47FF9F5F591E73BFF6_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.ThrowHelper::ThrowArgumentOutOfRangeException(System.Text.Encodings.Web.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mACA7ECF42D262ACCEF9D9D9BCF2AACDCA47AF658 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.Text.Rune::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m9C01D58CBB39C6843FFA1C2BDDE0F407DA084A4B (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Rune::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m5049D8D8C9A88C367276707B8DD2438046AA869E (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Rune::.ctor(System.UInt32,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rune__ctor_m00F41C5ECA7D5E0BF8CFC18A3C467F1AAD16091F_inline (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, uint32_t ___scalarValue0, bool ___unused1, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsAsciiCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_mDE38F64B792FCDC8C910B91B7A5C7019ECBADA44_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Rune::get_IsAscii()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsAscii_m926D4D25D848D71B5654EBC4C95CFEF863A8CC3B (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsBmpCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsBmpCodePoint_m1731BD5BA563BEACC810435FAB45DD75DCFEE5E1_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Rune::get_IsBmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsBmp_m6DC82A851E2568B6903ABEC63FBBF6550D750457 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) ;
// System.Text.Rune System.Text.Rune::UnsafeCreate(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 Rune_UnsafeCreate_m3737AF01D7128A65576819EB030DFCBD1AD19049_inline (uint32_t ___scalarValue0, const RuntimeMethod* method) ;
// System.Int32 System.Text.UnicodeUtility::GetUtf16SequenceLength(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeUtility_GetUtf16SequenceLength_m0FE2252F5535FFF306564627DEFE355C5DF2CD9A (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.Rune::get_Utf16SequenceLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_get_Utf16SequenceLength_m41A5350A1A1EB001286DEC1C4327BD067A180D70 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Rune::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
inline bool ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_gshared)(__this, method);
}
// System.Boolean System.Text.Rune::TryCreate(System.Char,System.Text.Rune&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_mFF438A876AA1E64C63838A408EB97C207B5ACD68 (Il2CppChar ___ch0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.Boolean System.Text.Rune::TryCreate(System.Char,System.Char,System.Text.Rune&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_m217F00513E9D8BDCA2A26F4A989082E8C9EFDDFE (Il2CppChar ___highSurrogate0, Il2CppChar ___lowSurrogate1, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsHighSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_mED1E5FB863528ABB0D7D3DC4DE0FAB4517760658 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Text.Rune System.Text.Rune::get_ReplacementChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 Rune_get_ReplacementChar_m8B48EED104ACB68B0099807EB38B46917CCA681B (const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Boolean System.Text.Rune::Equals(System.Text.Rune)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_mFDF475233C841767173E6AFFB22B23ED4145DEE5 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Rune::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_m807F9BE7953B423EE49F837A98C492BB0317442C (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Rune::op_Equality(System.Text.Rune,System.Text.Rune)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_op_Equality_m7AE03DB2053774E785AE460DAD8EB65F83410EFF (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___left0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Text.Rune::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_GetHashCode_m569612006C412F37D205B2989E3281C8E59686C6 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.UnicodeUtility::IsSurrogateCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_mE6713FFE894D59D385CD071BB60A2618B68573C1_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
// System.Void System.Text.UnicodeUtility::GetUtf16SurrogatesFromSupplementaryPlaneScalar(System.UInt32,System.Char&,System.Char&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_m8D9EDA5D2D46942BFBE9AD439CF2638C6961073F_inline (uint32_t ___value0, Il2CppChar* ___highSurrogateCodePoint1, Il2CppChar* ___lowSurrogateCodePoint2, const RuntimeMethod* method) ;
// System.Boolean System.Text.Rune::TryEncodeToUtf16(System.Span`1<System.Char>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf16_m77F94DBA35818EB78CDE8C8D666025AA42B91CBE (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Boolean System.Text.Rune::TryEncodeToUtf8(System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf8_m0AA0B964D629E2B290DD0FEB2243176F5140F6C5 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::get_DefinedCharsBitmapSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D UnicodeHelpers_get_DefinedCharsBitmapSpan_mBF980F8D332E76BC8CEBCFEDD1233C8A2A45ABEF (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeRange::set_FirstCodePoint(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeRange::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___firstCodePoint0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::CreateRange(System.Text.Unicode.UnicodeRange&,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_CreateRange_mD0D98535E601E77326370417B89B42D5C0FCACC3 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** ___range0, Il2CppChar ___first1, Il2CppChar ___last2, const RuntimeMethod* method) ;
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRange::Create(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRange_Create_m45AF1389FADA69EF5C153C7FA1B09D9C77F469AD (Il2CppChar ___firstCharacter0, Il2CppChar ___lastCharacter1, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.AsciiByteMap::InsertAsciiChar(System.Char,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F (AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* __this, Il2CppChar ___key0, uint8_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.AsciiByteMap::TryLookup(System.Text.Rune,System.Byte&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiByteMap_TryLookup_m51327CA173DD3C3BC6D46EDD00A935BDD22781F0_inline (AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___key0, uint8_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::_GetIndexAndOffset(System.UInt32,System.UIntPtr&,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline (uint32_t ___value0, uintptr_t* ___index1, int32_t* ___offset2, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::AllowChar(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_AllowChar_mCF318B486232607869FDF9E6178642075E150255_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::ForbidChar(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::ForbidHtmlCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8C72DC21464A257FDE3116A693A102D81DD6C9F9 (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::GetDefinedBmpCodePointsBitmapLittleEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D UnicodeHelpers_GetDefinedBmpCodePointsBitmapLittleEndian_mC0C5D05DAD533B5E6A7DC69007E7B87749D16BE5 (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.UInt32>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___start0, method);
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReadUInt32LittleEndian(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.UInt32>::get_Length()
inline int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, const RuntimeMethod*))Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline)(__this, method);
}
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::ForbidUndefinedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_mF66AF49D2335CD06E0955715F4AD7CD75F1D4F2A (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::IsCharAllowed(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::IsCodePointAllowed(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData::PopulatePreescapedData(System.Text.Encodings.Web.AllowedBmpCodePointsBitmap&,System.Text.Encodings.Web.ScalarEscaperBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiPreescapedData_PopulatePreescapedData_mD3F469DF9379798FE32B20941DFDC5B183D643C5 (AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* __this, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedCodePointsBmp0, ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* ___innerEncoder1, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints::PopulateAllowedCodePoints(System.Text.Encodings.Web.AllowedBmpCodePointsBitmap&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedAsciiCodePoints_PopulateAllowedCodePoints_m66003EAD322DE1E935B597C73488A252B9DCB9E4 (AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE* __this, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedBmpCodePoints0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Int32 System.Text.Encodings.Web.OptimizedInboxTextEncoder::GetIndexOfFirstCharToEncode(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_m07D47124853E98545FDA8559FF486EFC7B6C2BDC (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___data0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Boolean System.Span`1<System.Char>::get_IsEmpty()
inline bool Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_gshared)(__this, method);
}
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder::_AssertThisNotNull()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__AssertThisNotNull_mA3244C2240DF3C39C442815E852B9E35CDA19B83_inline (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Char>(System.ReadOnlySpan`1<T>,System.Int32)
inline bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_gshared_inline)(___span0, ___index1, method);
}
// System.Boolean System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData::TryGetPreescapedData(System.UInt32,System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiPreescapedData_TryGetPreescapedData_mFAD9B22F27B908437820CFF8E0E09EE38E29FA5D_inline (AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* __this, uint32_t ___codePoint0, uint64_t* ___preescapedData1, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Char>(System.Span`1<T>,System.Int32)
inline bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_gshared_inline)(___span0, ___index1, method);
}
// System.Boolean System.Text.Encodings.Web.OptimizedInboxTextEncoder::IsScalarValueAllowed(System.Text.Rune)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_IsScalarValueAllowed_m88271348696719D01CCCB8E11C020420B034AF47_inline (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline)(__this, ___start0, method);
}
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Byte>(System.ReadOnlySpan`1<T>,System.Int32)
inline bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_gshared_inline)(___span0, ___index1, method);
}
// System.Boolean System.Text.Encodings.Web.SpanUtility::TryWriteUInt64LittleEndian(System.Span`1<System.Byte>,System.Int32,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_TryWriteUInt64LittleEndian_m7D5E41B8B07C02C78FD3C67CCF159F7A97E7D2DF_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, int32_t ___offset1, uint64_t ___value2, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::IsValidIndex<System.Byte>(System.Span`1<T>,System.Int32)
inline bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_gshared_inline)(___span0, ___index1, method);
}
// System.Buffers.OperationStatus System.Text.Rune::DecodeFromUtf8(System.ReadOnlySpan`1<System.Byte>,System.Text.Rune&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf8_m7514B54F21E834213D6086BC3469A1510D9F741C (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result1, int32_t* ___bytesConsumed2, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___start0, method);
}
// System.Boolean System.ReadOnlySpan`1<System.Byte>::get_IsEmpty()
inline bool ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_gshared)(__this, method);
}
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::GetPinnableReference()
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Text.Rune::IsControl(System.Text.Rune)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_IsControl_m5FBE621B271302901940EA9B48F94DF3B196501C (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.Span`1<System.Char>::Clear()
inline void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared_inline)(__this, method);
}
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mA437BC36BA8C0EB2D04AC4B6DB40AA0F0242C233 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* ___settings0, bool ___allowMinimalJsonEscaping1, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.JavaScriptEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m59B9FB268C118BDFC532CC01F6E9798DE75386B6 (JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Text.Encodings.Web.AllowedBmpCodePointsBitmap& modreq(System.Runtime.InteropServices.InAttribute) System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCodePointsBitmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* TextEncoderSettings_GetAllowedCodePointsBitmap_m95C4F626CEF1E2F2F45538BAE18C936C21B595D6 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared)(___span0, method);
}
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder::.ctor(System.Text.Encodings.Web.ScalarEscaperBase,System.Text.Encodings.Web.AllowedBmpCodePointsBitmap&,System.Boolean,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__ctor_m50F390D761CB79AF76A123DD4510E371F6E4145E (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* ___scalarEscaper0, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedCodePointsBmp1, bool ___forbidHtmlSensitiveCharacters2, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___extraCharactersToEscape3, const RuntimeMethod* method) ;
// System.Buffers.OperationStatus System.Text.Encodings.Web.OptimizedInboxTextEncoder::Encode(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_Encode_m5FBACEF29880C9D7B0F7DB0F665131D4FCF1BC66 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) ;
// System.Buffers.OperationStatus System.Text.Encodings.Web.OptimizedInboxTextEncoder::EncodeUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_EncodeUtf8_m99EA45E92440D1DEDC9EBB005E10C30D24FEFF81 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) ;
// System.Int32 System.Text.Encodings.Web.OptimizedInboxTextEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_FindFirstCharacterToEncode_m07ADBE2EE6EF6E7BFA0DD39464FC02315A52A3E4_inline (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) ;
// System.Int32 System.Text.Encodings.Web.OptimizedInboxTextEncoder::GetIndexOfFirstByteToEncode(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstByteToEncode_m71A73F27E3142774DAA746F032898C222F7B0A12 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.OptimizedInboxTextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_TryEncodeUnicodeScalar_m2AB31857FA2468305C34AE8C239C4D93B0CD049F (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) ;
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_BasicLatin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_get_BasicLatin_mAB30D6E10C1E286D899D7C56E1049A418E6C4698 (const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.TextEncoderSettings::.ctor(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* ___allowedRanges0, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mA51700CBF3A1398145A1D36FD81975EB9BA025DD (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* ___settings0, const RuntimeMethod* method) ;
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_All()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_get_All_m1A526C379AD005828865670A9F7584BBB817431E (const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.ScalarEscaperBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarEscaperBase__ctor_m3B2325A7E8C5FFA0C3E885E722D5943F4B20A456 (ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::<EncodeUtf8>g__TryEncodeScalarAsHex|4_0(System.Object,System.Text.Rune,System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf8U3Eg__TryEncodeScalarAsHexU7C4_0_m75E21B5836F1A09C9D1617CE5D475C13B18FB2E1 (RuntimeObject* ___this0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value1, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination2, const RuntimeMethod* method) ;
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::<EncodeUtf16>g__TryEncodeScalarAsHex|5_0(System.Object,System.Text.Rune,System.Span`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf16U3Eg__TryEncodeScalarAsHexU7C5_0_m9463B6FBBC962E54B0E8AC6CFC95A4B3358A3741 (RuntimeObject* ___this0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value1, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination2, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscaperImplementation__ctor_mBC4CE30052CEBCD9B6921D7EA65F69A73AC8688A (EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* __this, bool ___allowMinimalEscaping0, const RuntimeMethod* method) ;
// System.Void System.HexConverter::ToBytesBuffer(System.Byte,System.Span`1<System.Byte>,System.Int32,System.HexConverter/Casing)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline (uint8_t ___value0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer1, int32_t ___startingIndex2, uint32_t ___casing3, const RuntimeMethod* method) ;
// System.Void System.Text.Unicode.UnicodeHelpers::GetUtf16SurrogatePairFromAstralScalarValue(System.UInt32,System.Char&,System.Char&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mCB0AC125106CDDF907FE901ECF499607D31A5F2C_inline (uint32_t ___scalar0, Il2CppChar* ___highSurrogate1, Il2CppChar* ___lowSurrogate2, const RuntimeMethod* method) ;
// System.Void System.HexConverter::ToCharsBuffer(System.Byte,System.Span`1<System.Char>,System.Int32,System.HexConverter/Casing)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline (uint8_t ___value0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___buffer1, int32_t ___startingIndex2, uint32_t ___casing3, const RuntimeMethod* method) ;
// System.Boolean System.Text.Encodings.Web.SpanUtility::AreValidIndexAndLength(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_AreValidIndexAndLength_m459BD2CF00AB2A7AAFF49796C1EC464FE4F898D4_inline (int32_t ___spanRealLength0, int32_t ___requestedOffset1, int32_t ___requestedLength2, const RuntimeMethod* method) ;
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline (uint64_t ___value0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared)(___span0, method);
}
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.TextEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_mAB973DBE5360A8CE416505D5F1487855B4A9B660 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_gshared)(___span0, method);
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.UInt32,System.Span`1<System.Char>,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalar_m0C09469AAD2B20098F8E1038DC56725C3623A224_inline (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___unicodeScalar0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___buffer1, int32_t* ___charsWritten2, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.TextEncoder::ThrowArgumentException_MaxOutputCharsPerInputChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_mA7F4E71D5A47B9FCEF35DD1DA98E064740DA4F29 (const RuntimeMethod* method) ;
// System.Buffers.OperationStatus System.Text.Rune::DecodeFromUtf16(System.ReadOnlySpan`1<System.Char>,System.Text.Rune&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf16_m5284B79784E5D5D1BE53259A7697D9D20B252A4B (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result1, int32_t* ___charsConsumed2, const RuntimeMethod* method) ;
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetUtf8RepresentationForScalarValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetUtf8RepresentationForScalarValue_mAE8F5692BCC965708D65737961CC88FDD9616220 (uint32_t ___scalar0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared)(__this, ___destination0, method);
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalarUtf8(System.UInt32,System.Span`1<System.Char>,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalarUtf8_mAF4D846CF0CB8F80A3E7ED64F39B4A60989DC5DE (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___unicodeScalar0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___utf16ScratchBuffer1, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___utf8Destination2, int32_t* ___bytesWritten3, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared)(__this, ___destination0, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline)(__this, ___start0, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.ReadOnlySpan`1<T>)
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_gshared)(___span0, method);
}
// System.String System.SR::get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar_m5A91986797D58359CDF5DC1DBB8FFC013E908991 (const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Text.Unicode.UnicodeRange::get_FirstCodePoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Unicode.UnicodeRange::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14__ctor_m96154A64F50C8A114E552FC1379E5D917F1B65F7 (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.StrongBox`1<System.Text.Encodings.Web.AllowedBmpCodePointsBitmap>::.ctor()
inline void StrongBox_1__ctor_mAA0952E24233FFF62E573D25C01EBC58C7284E00 (StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765* __this, const RuntimeMethod* method)
{
	((  void (*) (StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765*, const RuntimeMethod*))StrongBox_1__ctor_mAA0952E24233FFF62E573D25C01EBC58C7284E00_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Int32> System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mDE18BA86FE89579767B863262B0E92E029CBFEC5 (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) ;
// System.String System.Text.Encodings.Web.ThrowHelper::GetArgumentName(System.Text.Encodings.Web.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m5D07908988C13A5E30573F564A16448D2724F47E (int32_t ___argument0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
inline uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline)(___source0, method);
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.SpanHelpers::ClearWithReferences(System.IntPtr&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430 (intptr_t* ___ip0, uint64_t ___pointerSizeLength1, const RuntimeMethod* method) ;
// System.Void System.SpanHelpers::ClearWithoutReferences(System.Byte&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___b0, uint64_t ___byteLength1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___span0, method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m288BA0BFA12E5E462CB60C5B3D8BE3677EFF93F2 (EmbeddedAttribute_t00F22A38A8B8F8AD1EE66FFB472324DC68579566* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m522246D01124BDBCC7B05E716AF928006F31508D (IsReadOnlyAttribute_tFE5A7C65174014C30D08774B620633CA2141B346* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m74E75D3E2DC3E77488AB9C381D226214DF3CC2A0 (NullableAttribute_tCBFFAB20AD9E68064976C7DC9D9AD53E3130BA14* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m09AEB7692E9EE8247068756A53B49D700A2FBDF5 (NullableContextAttribute_t0F2E3CF46D8AB038E589C88FA392D5D8B69150FE* __this, uint8_t p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = p0;
		__this->___Flag_0 = L_0;
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
// System.Void System.Runtime.CompilerServices.NullablePublicOnlyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m1EB5F8C417EC2EC2A3046C71684DACCA5E15D15F (NullablePublicOnlyAttribute_t76ED56E08ED096A598020BA0FF5FD30635089077* __this, bool p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = p0;
		__this->___IncludesInternals_0 = L_0;
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
// System.Void System.Runtime.CompilerServices.NativeIntegerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_m3B44C33E80142C866CA025235A5CE4229890C611 (NativeIntegerAttribute_t36F90F85F9AB1060C84D9BE50958F53BD4994EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		__this->___TransformFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags_0), (void*)L_1);
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
// System.Void System.HexConverter::ToBytesBuffer(System.Byte,System.Span`1<System.Byte>,System.Int32,System.HexConverter/Casing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7 (uint8_t ___value0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer1, int32_t ___startingIndex2, uint32_t ___casing3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___value0;
		uint8_t L_1 = ___value0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___casing3;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___startingIndex2;
		uint8_t* L_6;
		L_6 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(L_5, 1))), ((&___buffer1))->____length_1);
		uint32_t L_7 = V_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		int32_t L_8 = ___startingIndex2;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (L_8), ((&___buffer1))->____length_1);
		uint32_t L_10 = V_1;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
// System.Void System.HexConverter::ToCharsBuffer(System.Byte,System.Span`1<System.Char>,System.Int32,System.HexConverter/Casing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA (uint8_t ___value0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___buffer1, int32_t ___startingIndex2, uint32_t ___casing3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___value0;
		uint8_t L_1 = ___value0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___casing3;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___startingIndex2;
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(L_5, 1))), ((&___buffer1))->____length_1);
		uint32_t L_7 = V_1;
		*((int16_t*)L_6) = (int16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_7&((int32_t)255))));
		int32_t L_8 = ___startingIndex2;
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (L_8), ((&___buffer1))->____length_1);
		uint32_t L_10 = V_1;
		*((int16_t*)L_9) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)L_10>>8)));
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m8C14F370900C8B1B82539519884EBE831D7BE288 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
// System.String System.SR::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m1181593FEF45715143BB97DC38E685DEBA193D4E (String_t* ___resourceKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m8C14F370900C8B1B82539519884EBE831D7BE288_inline(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___resourceKey0;
		return L_1;
	}

IL_0009:
	{
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_2;
		L_2 = SR_get_ResourceManager_mF7C8D9E23CD8A3723A3A25D0C0993C9CA4E2FD8A(NULL);
		String_t* L_3 = ___resourceKey0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_2, L_3);
		V_0 = L_4;
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mF7C8D9E23CD8A3723A3A25D0C0993C9CA4E2FD8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tFAEA042F3014DBF835A33A8D548D05BAFB56EE2F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var))->___s_resourceManager_1;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_tFAEA042F3014DBF835A33A8D548D05BAFB56EE2F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		((SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var))->___s_resourceManager_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var))->___s_resourceManager_1), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar_m5A91986797D58359CDF5DC1DBB8FFC013E908991 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8AD0F59C87E26DB328E73CE5878FFD76F11C3D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m1181593FEF45715143BB97DC38E685DEBA193D4E(_stringLiteralE8AD0F59C87E26DB328E73CE5878FFD76F11C3D3, NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m370973C5F36466C65AEB2249A32DB4C3260CB334 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78(_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6, (&V_0), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		bool L_1 = V_0;
		G_B3_0 = ((int32_t)(L_1));
	}

IL_0012:
	{
		((SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0 = (bool)G_B3_0;
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m2F96337C648C3DF27411B9368A82219C8D6A630D (NotNullAttribute_t8C5CACE4D6ECB37DDBCFA14BAE9F06F4AF804DF4* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_mCD262B78BB016E493884306F629DE30A29DCE1E5 (NotNullWhenAttribute_t73F0155DC58B7B5F84A0AD50345DA439AFEEEBE2* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnAttribute__ctor_mDD73CE8173E5AD3E976D1CE7E960660A9016B5B6 (DoesNotReturnAttribute_tE7E19B7C5DA9D5F0F3E9E4F5C58359E27C875752* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Int32 System.Text.UnicodeUtility::GetUtf16SequenceLength(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeUtility_GetUtf16SequenceLength_m0FE2252F5535FFF306564627DEFE355C5DF2CD9A (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)65536)));
		uint32_t L_1 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)33554432)));
		uint32_t L_2 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_2>>((int32_t)24)));
		uint32_t L_3 = ___value0;
		return L_3;
	}
}
// System.Void System.Text.UnicodeUtility::GetUtf16SurrogatesFromSupplementaryPlaneScalar(System.UInt32,System.Char&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_m8D9EDA5D2D46942BFBE9AD439CF2638C6961073F (uint32_t ___value0, Il2CppChar* ___highSurrogateCodePoint1, Il2CppChar* ___lowSurrogateCodePoint2, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___highSurrogateCodePoint1;
		uint32_t L_1 = ___value0;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___lowSurrogateCodePoint2;
		uint32_t L_3 = ___value0;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
// System.Boolean System.Text.UnicodeUtility::IsAsciiCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_mDE38F64B792FCDC8C910B91B7A5C7019ECBADA44 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.UnicodeUtility::IsBmpCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsBmpCodePoint_m1731BD5BA563BEACC810435FAB45DD75DCFEE5E1 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)65535))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.UnicodeUtility::IsInRangeInclusive(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8 (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = ___lowerBound1;
		uint32_t L_2 = ___upperBound2;
		uint32_t L_3 = ___lowerBound1;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.UnicodeUtility::IsSurrogateCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_mE6713FFE894D59D385CD071BB60A2618B68573C1 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline(L_0, ((int32_t)55296), ((int32_t)57343), NULL);
		return L_1;
	}
}
// System.Boolean System.Text.UnicodeUtility::IsValidUnicodeScalar(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsValidUnicodeScalar_m6341D06901F7CB719B986E47FF9F5F591E73BFF6 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)1114112)))^((int32_t)55296)))) >= ((uint32_t)((int32_t)-1112064))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Text.Rune::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m9C01D58CBB39C6843FFA1C2BDDE0F407DA084A4B (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsValidUnicodeScalar_m6341D06901F7CB719B986E47FF9F5F591E73BFF6_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mACA7ECF42D262ACCEF9D9D9BCF2AACDCA47AF658(0, NULL);
	}

IL_000e:
	{
		uint32_t L_2 = ___value0;
		__this->____value_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Rune__ctor_m9C01D58CBB39C6843FFA1C2BDDE0F407DA084A4B_AdjustorThunk (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	Rune__ctor_m9C01D58CBB39C6843FFA1C2BDDE0F407DA084A4B(_thisAdjusted, ___value0, method);
}
// System.Void System.Text.Rune::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m5049D8D8C9A88C367276707B8DD2438046AA869E (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		Rune__ctor_m9C01D58CBB39C6843FFA1C2BDDE0F407DA084A4B(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Rune__ctor_m5049D8D8C9A88C367276707B8DD2438046AA869E_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	Rune__ctor_m5049D8D8C9A88C367276707B8DD2438046AA869E(_thisAdjusted, ___value0, method);
}
// System.Void System.Text.Rune::.ctor(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m00F41C5ECA7D5E0BF8CFC18A3C467F1AAD16091F (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, uint32_t ___scalarValue0, bool ___unused1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___scalarValue0;
		__this->____value_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Rune__ctor_m00F41C5ECA7D5E0BF8CFC18A3C467F1AAD16091F_AdjustorThunk (RuntimeObject* __this, uint32_t ___scalarValue0, bool ___unused1, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	Rune__ctor_m00F41C5ECA7D5E0BF8CFC18A3C467F1AAD16091F_inline(_thisAdjusted, ___scalarValue0, ___unused1, method);
}
// System.Boolean System.Text.Rune::get_IsAscii()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsAscii_m926D4D25D848D71B5654EBC4C95CFEF863A8CC3B (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value_0;
		bool L_1;
		L_1 = UnicodeUtility_IsAsciiCodePoint_mDE38F64B792FCDC8C910B91B7A5C7019ECBADA44_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Rune_get_IsAscii_m926D4D25D848D71B5654EBC4C95CFEF863A8CC3B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_get_IsAscii_m926D4D25D848D71B5654EBC4C95CFEF863A8CC3B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Rune::get_IsBmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsBmp_m6DC82A851E2568B6903ABEC63FBBF6550D750457 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value_0;
		bool L_1;
		L_1 = UnicodeUtility_IsBmpCodePoint_m1731BD5BA563BEACC810435FAB45DD75DCFEE5E1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Rune_get_IsBmp_m6DC82A851E2568B6903ABEC63FBBF6550D750457_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_get_IsBmp_m6DC82A851E2568B6903ABEC63FBBF6550D750457(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Rune::op_Equality(System.Text.Rune,System.Text.Rune)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_op_Equality_m7AE03DB2053774E785AE460DAD8EB65F83410EFF (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___left0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___right1, const RuntimeMethod* method) 
{
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_0 = ___left0;
		uint32_t L_1 = L_0.____value_0;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_2 = ___right1;
		uint32_t L_3 = L_2.____value_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean System.Text.Rune::IsControl(System.Text.Rune)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_IsControl_m5FBE621B271302901940EA9B48F94DF3B196501C (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value0, const RuntimeMethod* method) 
{
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_0 = ___value0;
		uint32_t L_1 = L_0.____value_0;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, 1))&((int32_t)-129)))) <= ((uint32_t)((int32_t)32))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.Rune System.Text.Rune::get_ReplacementChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 Rune_get_ReplacementChar_m8B48EED104ACB68B0099807EB38B46917CCA681B (const RuntimeMethod* method) 
{
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_0;
		L_0 = Rune_UnsafeCreate_m3737AF01D7128A65576819EB030DFCBD1AD19049_inline(((int32_t)65533), NULL);
		return L_0;
	}
}
// System.Int32 System.Text.Rune::get_Utf16SequenceLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_get_Utf16SequenceLength_m41A5350A1A1EB001286DEC1C4327BD067A180D70 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->____value_0;
		int32_t L_1;
		L_1 = UnicodeUtility_GetUtf16SequenceLength_m0FE2252F5535FFF306564627DEFE355C5DF2CD9A(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t Rune_get_Utf16SequenceLength_m41A5350A1A1EB001286DEC1C4327BD067A180D70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rune_get_Utf16SequenceLength_m41A5350A1A1EB001286DEC1C4327BD067A180D70(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Text.Rune::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Buffers.OperationStatus System.Text.Rune::DecodeFromUtf16(System.ReadOnlySpan`1<System.Char>,System.Text.Rune&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf16_m5284B79784E5D5D1BE53259A7697D9D20B252A4B (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result1, int32_t* ___charsConsumed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	{
		bool L_0;
		L_0 = ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7((&___source0), ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (0), ((&___source0))->____length_1);
		int32_t L_2 = *((uint16_t*)L_1);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_4 = ___result1;
		bool L_5;
		L_5 = Rune_TryCreate_mFF438A876AA1E64C63838A408EB97C207B5ACD68(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		int32_t* L_6 = ___charsConsumed2;
		*((int32_t*)L_6) = (int32_t)1;
		return (int32_t)(0);
	}

IL_0021:
	{
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)1) < ((uint32_t)L_7))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar* L_8;
		L_8 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (1), ((&___source0))->____length_1);
		int32_t L_9 = *((uint16_t*)L_8);
		V_1 = L_9;
		Il2CppChar L_10 = V_0;
		Il2CppChar L_11 = V_1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_12 = ___result1;
		bool L_13;
		L_13 = Rune_TryCreate_m217F00513E9D8BDCA2A26F4A989082E8C9EFDDFE(L_10, L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_14 = ___charsConsumed2;
		*((int32_t*)L_14) = (int32_t)2;
		return (int32_t)(0);
	}

IL_0044:
	{
		Il2CppChar L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Char_IsHighSurrogate_mED1E5FB863528ABB0D7D3DC4DE0FAB4517760658(L_15, NULL);
		if (!L_16)
		{
			goto IL_0062;
		}
	}

IL_004c:
	{
		int32_t* L_17 = ___charsConsumed2;
		int32_t L_18;
		L_18 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		*((int32_t*)L_17) = (int32_t)L_18;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_19 = ___result1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_20;
		L_20 = Rune_get_ReplacementChar_m8B48EED104ACB68B0099807EB38B46917CCA681B(NULL);
		*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)L_19 = L_20;
		return (int32_t)(2);
	}

IL_0062:
	{
		int32_t* L_21 = ___charsConsumed2;
		*((int32_t*)L_21) = (int32_t)1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_22 = ___result1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_23;
		L_23 = Rune_get_ReplacementChar_m8B48EED104ACB68B0099807EB38B46917CCA681B(NULL);
		*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)L_22 = L_23;
		return (int32_t)(3);
	}
}
// System.Buffers.OperationStatus System.Text.Rune::DecodeFromUtf8(System.ReadOnlySpan`1<System.Byte>,System.Text.Rune&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf8_m7514B54F21E834213D6086BC3469A1510D9F741C (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result1, int32_t* ___bytesConsumed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_2 = V_0;
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_2), ((&___source0))->____length_1);
		int32_t L_4 = *((uint8_t*)L_3);
		V_1 = L_4;
		uint32_t L_5 = V_1;
		bool L_6;
		L_6 = UnicodeUtility_IsAsciiCodePoint_mDE38F64B792FCDC8C910B91B7A5C7019ECBADA44_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}

IL_0021:
	{
		int32_t* L_7 = ___bytesConsumed2;
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_9 = ___result1;
		uint32_t L_10 = V_1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_11;
		L_11 = Rune_UnsafeCreate_m3737AF01D7128A65576819EB030DFCBD1AD19049_inline(L_10, NULL);
		*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)L_9 = L_11;
		return (int32_t)(0);
	}

IL_0034:
	{
		uint32_t L_12 = V_1;
		bool L_13;
		L_13 = UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline(L_12, ((int32_t)194), ((int32_t)244), NULL);
		if (!L_13)
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_14 = V_1;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)194)))<<6));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_16) < ((uint32_t)L_17))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_18 = V_0;
		uint8_t* L_19;
		L_19 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_18), ((&___source0))->____length_1);
		int32_t L_20 = *((uint8_t*)L_19);
		V_2 = ((int8_t)L_20);
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_22 = V_1;
		int32_t L_23 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, L_23));
		uint32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, ((int32_t)128)));
		uint32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, ((int32_t)128)));
		uint32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) >= ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_27 = V_1;
		bool L_28;
		L_28 = UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline(L_27, ((int32_t)2080), ((int32_t)3343), NULL);
		if (!L_28)
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_29 = V_1;
		bool L_30;
		L_30 = UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline(L_29, ((int32_t)2912), ((int32_t)2943), NULL);
		if (L_30)
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_31 = V_1;
		bool L_32;
		L_32 = UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline(L_31, ((int32_t)3072), ((int32_t)3087), NULL);
		if (L_32)
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_34) < ((uint32_t)L_35))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_36 = V_0;
		uint8_t* L_37;
		L_37 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_36), ((&___source0))->____length_1);
		int32_t L_38 = *((uint8_t*)L_37);
		V_2 = ((int8_t)L_38);
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_40 = V_1;
		V_1 = ((int32_t)((int32_t)L_40<<6));
		uint32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, L_42));
		uint32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, ((int32_t)128)));
		uint32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, ((int32_t)131072)));
		uint32_t L_45 = V_1;
		if ((!(((uint32_t)L_45) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_47) < ((uint32_t)L_48))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_49 = V_0;
		uint8_t* L_50;
		L_50 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_49), ((&___source0))->____length_1);
		int32_t L_51 = *((uint8_t*)L_50);
		V_2 = ((int8_t)L_51);
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_53 = V_1;
		V_1 = ((int32_t)((int32_t)L_53<<6));
		uint32_t L_54 = V_1;
		int32_t L_55 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, L_55));
		uint32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, ((int32_t)128)));
		uint32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, ((int32_t)4194304)));
		goto IL_0021;
	}

IL_0151:
	{
		V_0 = 1;
	}

IL_0153:
	{
		int32_t* L_58 = ___bytesConsumed2;
		int32_t L_59 = V_0;
		*((int32_t*)L_58) = (int32_t)L_59;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_60 = ___result1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_61;
		L_61 = Rune_get_ReplacementChar_m8B48EED104ACB68B0099807EB38B46917CCA681B(NULL);
		*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)L_60 = L_61;
		return (int32_t)(3);
	}

IL_0163:
	{
		int32_t* L_62 = ___bytesConsumed2;
		int32_t L_63 = V_0;
		*((int32_t*)L_62) = (int32_t)L_63;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_64 = ___result1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_65;
		L_65 = Rune_get_ReplacementChar_m8B48EED104ACB68B0099807EB38B46917CCA681B(NULL);
		*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)L_64 = L_65;
		return (int32_t)(2);
	}
}
// System.Boolean System.Text.Rune::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_m807F9BE7953B423EE49F837A98C492BB0317442C (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)((Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)UnBox(L_1, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9_il2cpp_TypeInfo_var))));
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_2 = V_0;
		bool L_3;
		L_3 = Rune_Equals_mFDF475233C841767173E6AFFB22B23ED4145DEE5(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rune_Equals_m807F9BE7953B423EE49F837A98C492BB0317442C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_Equals_m807F9BE7953B423EE49F837A98C492BB0317442C(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.Text.Rune::Equals(System.Text.Rune)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_mFDF475233C841767173E6AFFB22B23ED4145DEE5 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___other0, const RuntimeMethod* method) 
{
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_0 = (*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)__this);
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_1 = ___other0;
		bool L_2;
		L_2 = Rune_op_Equality_m7AE03DB2053774E785AE460DAD8EB65F83410EFF(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Rune_Equals_mFDF475233C841767173E6AFFB22B23ED4145DEE5_AdjustorThunk (RuntimeObject* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___other0, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_Equals_mFDF475233C841767173E6AFFB22B23ED4145DEE5(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.Text.Rune::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_GetHashCode_m569612006C412F37D205B2989E3281C8E59686C6 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rune_GetHashCode_m569612006C412F37D205B2989E3281C8E59686C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rune_GetHashCode_m569612006C412F37D205B2989E3281C8E59686C6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Rune::TryCreate(System.Char,System.Text.Rune&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_mFF438A876AA1E64C63838A408EB97C207B5ACD68 (Il2CppChar ___ch0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___ch0;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		bool L_2;
		L_2 = UnicodeUtility_IsSurrogateCodePoint_mE6713FFE894D59D385CD071BB60A2618B68573C1_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_3 = ___result1;
		uint32_t L_4 = V_0;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_5;
		L_5 = Rune_UnsafeCreate_m3737AF01D7128A65576819EB030DFCBD1AD19049_inline(L_4, NULL);
		*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)L_3 = L_5;
		return (bool)1;
	}

IL_0018:
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_6 = ___result1;
		il2cpp_codegen_initobj(L_6, sizeof(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9));
		return (bool)0;
	}
}
// System.Boolean System.Text.Rune::TryCreate(System.Char,System.Char,System.Text.Rune&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_m217F00513E9D8BDCA2A26F4A989082E8C9EFDDFE (Il2CppChar ___highSurrogate0, Il2CppChar ___lowSurrogate1, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* ___result2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___highSurrogate0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)55296)));
		Il2CppChar L_1 = ___lowSurrogate1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)56320)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2|(int32_t)L_3))) <= ((uint32_t)((int32_t)1023)))))
		{
			goto IL_0039;
		}
	}
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_4 = ___result2;
		uint32_t L_5 = V_0;
		Il2CppChar L_6 = ___lowSurrogate1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_7;
		L_7 = Rune_UnsafeCreate_m3737AF01D7128A65576819EB030DFCBD1AD19049_inline(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_5<<((int32_t)10))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)56320))))), ((int32_t)65536))), NULL);
		*(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*)L_4 = L_7;
		return (bool)1;
	}

IL_0039:
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* L_8 = ___result2;
		il2cpp_codegen_initobj(L_8, sizeof(Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9));
		return (bool)0;
	}
}
// System.Boolean System.Text.Rune::TryEncodeToUtf16(System.Span`1<System.Char>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf16_m77F94DBA35818EB78CDE8C8D666025AA42B91CBE (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination0), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		bool L_1;
		L_1 = Rune_get_IsBmp_m6DC82A851E2568B6903ABEC63FBBF6550D750457(__this, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar* L_2;
		L_2 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (0), ((&___destination0))->____length_1);
		uint32_t L_3 = __this->____value_0;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)L_3);
		int32_t* L_4 = ___charsWritten1;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination0), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0051;
		}
	}
	{
		uint32_t L_6 = __this->____value_0;
		Il2CppChar* L_7;
		L_7 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (0), ((&___destination0))->____length_1);
		Il2CppChar* L_8;
		L_8 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (1), ((&___destination0))->____length_1);
		UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_m8D9EDA5D2D46942BFBE9AD439CF2638C6961073F_inline(L_6, L_7, L_8, NULL);
		int32_t* L_9 = ___charsWritten1;
		*((int32_t*)L_9) = (int32_t)2;
		return (bool)1;
	}

IL_0051:
	{
		int32_t* L_10 = ___charsWritten1;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rune_TryEncodeToUtf16_m77F94DBA35818EB78CDE8C8D666025AA42B91CBE_AdjustorThunk (RuntimeObject* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_TryEncodeToUtf16_m77F94DBA35818EB78CDE8C8D666025AA42B91CBE(_thisAdjusted, ___destination0, ___charsWritten1, method);
	return _returnValue;
}
// System.Boolean System.Text.Rune::TryEncodeToUtf8(System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf8_m0AA0B964D629E2B290DD0FEB2243176F5140F6C5 (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0167;
		}
	}
	{
		bool L_1;
		L_1 = Rune_get_IsAscii_m926D4D25D848D71B5654EBC4C95CFEF863A8CC3B(__this, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t* L_2;
		L_2 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (0), ((&___destination0))->____length_1);
		uint32_t L_3 = __this->____value_0;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)L_3);
		int32_t* L_4 = ___bytesWritten1;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}

IL_002a:
	{
		int32_t L_5;
		L_5 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0167;
		}
	}
	{
		uint32_t L_6 = __this->____value_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)2047)))))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t* L_7;
		L_7 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (0), ((&___destination0))->____length_1);
		uint32_t L_8 = __this->____value_0;
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, ((int32_t)12288)))>>6)));
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (1), ((&___destination0))->____length_1);
		uint32_t L_10 = __this->____value_0;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_10&((int32_t)63))), ((int32_t)128))));
		int32_t* L_11 = ___bytesWritten1;
		*((int32_t*)L_11) = (int32_t)2;
		return (bool)1;
	}

IL_007a:
	{
		int32_t L_12;
		L_12 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_0167;
		}
	}
	{
		uint32_t L_13 = __this->____value_0;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)65535)))))
		{
			goto IL_00e9;
		}
	}
	{
		uint8_t* L_14;
		L_14 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (0), ((&___destination0))->____length_1);
		uint32_t L_15 = __this->____value_0;
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, ((int32_t)917504)))>>((int32_t)12))));
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (1), ((&___destination0))->____length_1);
		uint32_t L_17 = __this->____value_0;
		*((int8_t*)L_16) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)L_17&((int32_t)4032)))>>6)), ((int32_t)128))));
		uint8_t* L_18;
		L_18 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (2), ((&___destination0))->____length_1);
		uint32_t L_19 = __this->____value_0;
		*((int8_t*)L_18) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19&((int32_t)63))), ((int32_t)128))));
		int32_t* L_20 = ___bytesWritten1;
		*((int32_t*)L_20) = (int32_t)3;
		return (bool)1;
	}

IL_00e9:
	{
		int32_t L_21;
		L_21 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)4)))
		{
			goto IL_0167;
		}
	}
	{
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (0), ((&___destination0))->____length_1);
		uint32_t L_23 = __this->____value_0;
		*((int8_t*)L_22) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, ((int32_t)62914560)))>>((int32_t)18))));
		uint8_t* L_24;
		L_24 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (1), ((&___destination0))->____length_1);
		uint32_t L_25 = __this->____value_0;
		*((int8_t*)L_24) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)L_25&((int32_t)258048)))>>((int32_t)12))), ((int32_t)128))));
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (2), ((&___destination0))->____length_1);
		uint32_t L_27 = __this->____value_0;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)L_27&((int32_t)4032)))>>6)), ((int32_t)128))));
		uint8_t* L_28;
		L_28 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination0))->____pointer_0))->value, (3), ((&___destination0))->____length_1);
		uint32_t L_29 = __this->____value_0;
		*((int8_t*)L_28) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_29&((int32_t)63))), ((int32_t)128))));
		int32_t* L_30 = ___bytesWritten1;
		*((int32_t*)L_30) = (int32_t)4;
		return (bool)1;
	}

IL_0167:
	{
		int32_t* L_31 = ___bytesWritten1;
		*((int32_t*)L_31) = (int32_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rune_TryEncodeToUtf8_m0AA0B964D629E2B290DD0FEB2243176F5140F6C5_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, int32_t* ___bytesWritten1, const RuntimeMethod* method)
{
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_TryEncodeToUtf8_m0AA0B964D629E2B290DD0FEB2243176F5140F6C5(_thisAdjusted, ___destination0, ___bytesWritten1, method);
	return _returnValue;
}
// System.Text.Rune System.Text.Rune::UnsafeCreate(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 Rune_UnsafeCreate_m3737AF01D7128A65576819EB030DFCBD1AD19049 (uint32_t ___scalarValue0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___scalarValue0;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rune__ctor_m00F41C5ECA7D5E0BF8CFC18A3C467F1AAD16091F_inline((&L_1), L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
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
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::GetDefinedBmpCodePointsBitmapLittleEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D UnicodeHelpers_GetDefinedBmpCodePointsBitmapLittleEndian_mC0C5D05DAD533B5E6A7DC69007E7B87749D16BE5 (const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = UnicodeHelpers_get_DefinedCharsBitmapSpan_mBF980F8D332E76BC8CEBCFEDD1233C8A2A45ABEF(NULL);
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeHelpers::GetUtf16SurrogatePairFromAstralScalarValue(System.UInt32,System.Char&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mCB0AC125106CDDF907FE901ECF499607D31A5F2C (uint32_t ___scalar0, Il2CppChar* ___highSurrogate1, Il2CppChar* ___lowSurrogate2, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___highSurrogate1;
		uint32_t L_1 = ___scalar0;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___lowSurrogate2;
		uint32_t L_3 = ___scalar0;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetUtf8RepresentationForScalarValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetUtf8RepresentationForScalarValue_mAE8F5692BCC965708D65737961CC88FDD9616220 (uint32_t ___scalar0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	uint8_t V_9 = 0x0;
	{
		uint32_t L_0 = ___scalar0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_000a;
		}
	}
	{
		uint32_t L_1 = ___scalar0;
		V_0 = (uint8_t)((int32_t)(uint8_t)L_1);
		uint8_t L_2 = V_0;
		return L_2;
	}

IL_000a:
	{
		uint32_t L_3 = ___scalar0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)2047)))))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_4 = ___scalar0;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)192)|((int32_t)((uint32_t)L_4>>6)))));
		uint32_t L_5 = ___scalar0;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_5&((int32_t)63))))));
		uint8_t L_6 = V_2;
		uint8_t L_7 = V_1;
		return ((int32_t)(((int32_t)((int32_t)L_6<<8))|(int32_t)L_7));
	}

IL_002f:
	{
		uint32_t L_8 = ___scalar0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)65535)))))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_9 = ___scalar0;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)224)|((int32_t)((uint32_t)L_9>>((int32_t)12))))));
		uint32_t L_10 = ___scalar0;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)(((int32_t)((uint32_t)L_10>>6))&((int32_t)63))))));
		uint32_t L_11 = ___scalar0;
		V_5 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_11&((int32_t)63))))));
		uint8_t L_12 = V_5;
		uint8_t L_13 = V_4;
		uint8_t L_14 = V_3;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_12<<8))|(int32_t)L_13))<<8))|(int32_t)L_14));
	}

IL_006b:
	{
		uint32_t L_15 = ___scalar0;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)240)|((int32_t)((uint32_t)L_15>>((int32_t)18))))));
		uint32_t L_16 = ___scalar0;
		V_7 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)(((int32_t)((uint32_t)L_16>>((int32_t)12)))&((int32_t)63))))));
		uint32_t L_17 = ___scalar0;
		V_8 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)(((int32_t)((uint32_t)L_17>>6))&((int32_t)63))))));
		uint32_t L_18 = ___scalar0;
		V_9 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_18&((int32_t)63))))));
		uint8_t L_19 = V_9;
		uint8_t L_20 = V_8;
		uint8_t L_21 = V_7;
		uint8_t L_22 = V_6;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_19<<8))|(int32_t)L_20))<<8))|(int32_t)L_21))<<8))|(int32_t)L_22));
	}
}
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::get_DefinedCharsBitmapSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D UnicodeHelpers_get_DefinedCharsBitmapSpan_mBF980F8D332E76BC8CEBCFEDD1233C8A2A45ABEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_StaticFields____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0_RVAStorage);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline((&L_0), (void*)((__StaticArrayInitTypeSizeU3D8192_t6B42A11F775F676F25B0A63261E746DABAF39CB5*)U3CPrivateImplementationDetailsU3E_t03A72430945148CB9D382B7B249DAE2DDF6F2843_StaticFields____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_0_RVAStorage), ((int32_t)8192), /*hidden argument*/ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
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
// System.Void System.Text.Unicode.UnicodeRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___firstCodePoint0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___firstCodePoint0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___firstCodePoint0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09EAD6A50C87B14995000A914300979F01096C97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = ___firstCodePoint0;
		int32_t L_5 = ___length1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)L_4), ((int64_t)L_5)))) <= ((int64_t)((int64_t)((int32_t)65536)))))
		{
			goto IL_0039;
		}
	}

IL_002e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5_RuntimeMethod_var)));
	}

IL_0039:
	{
		int32_t L_7 = ___firstCodePoint0;
		UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777_inline(__this, L_7, NULL);
		int32_t L_8 = ___length1;
		UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720_inline(__this, L_8, NULL);
		return;
	}
}
// System.Int32 System.Text.Unicode.UnicodeRange::get_FirstCodePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFirstCodePointU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeRange::set_FirstCodePoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFirstCodePointU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 System.Text.Unicode.UnicodeRange::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeRange::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRange::Create(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRange_Create_m45AF1389FADA69EF5C153C7FA1B09D9C77F469AD (Il2CppChar ___firstCharacter0, Il2CppChar ___lastCharacter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___lastCharacter1;
		Il2CppChar L_1 = ___firstCharacter0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange_Create_m45AF1389FADA69EF5C153C7FA1B09D9C77F469AD_RuntimeMethod_var)));
	}

IL_000f:
	{
		Il2CppChar L_3 = ___firstCharacter0;
		Il2CppChar L_4 = ___lastCharacter1;
		Il2CppChar L_5 = ___firstCharacter0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_6 = (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836*)il2cpp_codegen_object_new(UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnicodeRange__ctor_m55C49ADABCAD9160E480CD01439D639C24980AB5(L_6, L_3, ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))), NULL);
		return L_6;
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
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_All()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_get_All_m1A526C379AD005828865670A9F7584BBB817431E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* G_B2_0 = NULL;
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* G_B1_0 = NULL;
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_0 = ((UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var))->____all_0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2;
		L_2 = UnicodeRanges_CreateRange_mD0D98535E601E77326370417B89B42D5C0FCACC3((&((UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var))->____all_0), 0, ((int32_t)65535), NULL);
		G_B2_0 = L_2;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::CreateRange(System.Text.Unicode.UnicodeRange&,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_CreateRange_mD0D98535E601E77326370417B89B42D5C0FCACC3 (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** ___range0, Il2CppChar ___first1, Il2CppChar ___last2, const RuntimeMethod* method) 
{
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** L_0 = ___range0;
		Il2CppChar L_1 = ___first1;
		Il2CppChar L_2 = ___last2;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_3;
		L_3 = UnicodeRange_Create_m45AF1389FADA69EF5C153C7FA1B09D9C77F469AD(L_1, L_2, NULL);
		VolatileWrite(L_0, L_3);
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836** L_4 = ___range0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_5 = *((UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836**)L_4);
		return L_5;
	}
}
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_BasicLatin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* UnicodeRanges_get_BasicLatin_mAB30D6E10C1E286D899D7C56E1049A418E6C4698 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* G_B2_0 = NULL;
	UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* G_B1_0 = NULL;
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_0 = ((UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var))->____u0000_1;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2;
		L_2 = UnicodeRanges_CreateRange_mD0D98535E601E77326370417B89B42D5C0FCACC3((&((UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_tE4E52421F705A0AC65C0E17C05CA14DA03E037C7_il2cpp_TypeInfo_var))->____u0000_1), 0, ((int32_t)127), NULL);
		G_B2_0 = L_2;
	}

IL_0016:
	{
		return G_B2_0;
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
// System.Void System.Text.Encodings.Web.AsciiByteMap::InsertAsciiChar(System.Char,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F (AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* __this, Il2CppChar ___key0, uint8_t ___value1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___key0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0017;
		}
	}
	{
		U3CBufferU3Ee__FixedBuffer_t4DCEAE18051B9DD5B9B154FBBFC5C00A81ADCCCD* L_1 = (&__this->___Buffer_0);
		uint8_t* L_2 = (&L_1->___FixedElementField_0);
		Il2CppChar L_3 = ___key0;
		uint8_t L_4 = ___value1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, (int32_t)L_3))) = (int8_t)L_4;
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___key0, uint8_t ___value1, const RuntimeMethod* method)
{
	AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65*>(__this + _offset);
	AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(_thisAdjusted, ___key0, ___value1, method);
}
// System.Boolean System.Text.Encodings.Web.AsciiByteMap::TryLookup(System.Text.Rune,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsciiByteMap_TryLookup_m51327CA173DD3C3BC6D46EDD00A935BDD22781F0 (AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___key0, uint8_t* ___value1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsAscii_m926D4D25D848D71B5654EBC4C95CFEF863A8CC3B((&___key0), NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		U3CBufferU3Ee__FixedBuffer_t4DCEAE18051B9DD5B9B154FBBFC5C00A81ADCCCD* L_1 = (&__this->___Buffer_0);
		uint8_t* L_2 = (&L_1->___FixedElementField_0);
		int32_t L_3;
		L_3 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___key0), NULL);
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))));
		V_0 = (uint8_t)L_4;
		uint8_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t* L_6 = ___value1;
		uint8_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)L_7;
		return (bool)1;
	}

IL_0027:
	{
		uint8_t* L_8 = ___value1;
		*((int8_t*)L_8) = (int8_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsciiByteMap_TryLookup_m51327CA173DD3C3BC6D46EDD00A935BDD22781F0_AdjustorThunk (RuntimeObject* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___key0, uint8_t* ___value1, const RuntimeMethod* method)
{
	AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsciiByteMap_TryLookup_m51327CA173DD3C3BC6D46EDD00A935BDD22781F0_inline(_thisAdjusted, ___key0, ___value1, method);
	return _returnValue;
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
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::AllowChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_AllowChar_mCF318B486232607869FDF9E6178642075E150255 (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_1 = (&__this->___Bitmap_0);
		uint32_t* L_2 = (&L_1->___FixedElementField_0);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5|((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_AllowChar_mCF318B486232607869FDF9E6178642075E150255_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6*>(__this + _offset);
	AllowedBmpCodePointsBitmap_AllowChar_mCF318B486232607869FDF9E6178642075E150255_inline(_thisAdjusted, ___value0, method);
}
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::ForbidChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395 (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_1 = (&__this->___Bitmap_0);
		uint32_t* L_2 = (&L_1->___FixedElementField_0);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5&((~((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6*>(__this + _offset);
	AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(_thisAdjusted, ___value0, method);
}
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::ForbidHtmlCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8C72DC21464A257FDE3116A693A102D81DD6C9F9 (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, const RuntimeMethod* method) 
{
	{
		AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(__this, ((int32_t)60), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(__this, ((int32_t)62), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(__this, ((int32_t)38), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(__this, ((int32_t)39), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(__this, ((int32_t)34), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(__this, ((int32_t)43), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8C72DC21464A257FDE3116A693A102D81DD6C9F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6*>(__this + _offset);
	AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8C72DC21464A257FDE3116A693A102D81DD6C9F9(_thisAdjusted, method);
}
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::ForbidUndefinedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_mF66AF49D2335CD06E0955715F4AD7CD75F1D4F2A (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_0 = (&__this->___Bitmap_0);
		uint32_t* L_1 = (&L_0->___FixedElementField_0);
		V_1 = L_1;
		uint32_t* L_2 = V_1;
		V_0 = (uint32_t*)((uintptr_t)L_2);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		L_3 = UnicodeHelpers_GetDefinedBmpCodePointsBitmapLittleEndian_mC0C5D05DAD533B5E6A7DC69007E7B87749D16BE5(NULL);
		V_2 = L_3;
		uint32_t* L_4 = V_0;
		Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_inline((&V_3), (void*)L_4, ((int32_t)2048), Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_RuntimeMethod_var);
		V_4 = 0;
		goto IL_004a;
	}

IL_0027:
	{
		int32_t L_5 = V_4;
		uint32_t* L_6;
		L_6 = il2cpp_span_get_item((uint32_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_5), ((&V_3))->____length_1);
		uint32_t* L_7 = L_6;
		int32_t L_8 = *((uint32_t*)L_7);
		int32_t L_9 = V_4;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		L_10 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_2), ((int32_t)il2cpp_codegen_multiply(L_9, 4)), ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint32_t L_11;
		L_11 = BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline(L_10, NULL);
		*((int32_t*)L_7) = (int32_t)((int32_t)(L_8&(int32_t)L_11));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&V_3), Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0027;
		}
	}
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_mF66AF49D2335CD06E0955715F4AD7CD75F1D4F2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6*>(__this + _offset);
	AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_mF66AF49D2335CD06E0955715F4AD7CD75F1D4F2A(_thisAdjusted, method);
}
// System.Boolean System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::IsCharAllowed(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65 (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_1 = (&__this->___Bitmap_0);
		uint32_t* L_2 = (&L_1->___FixedElementField_0);
		uintptr_t L_3 = V_0;
		int32_t L_4 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4)))))));
		int32_t L_5 = V_1;
		if (!((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))))))
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6*>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Boolean System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::IsCodePointAllowed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784 (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsBmpCodePoint_m1731BD5BA563BEACC810435FAB45DD75DCFEE5E1_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		uint32_t L_2 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_2, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_3 = (&__this->___Bitmap_0);
		uint32_t* L_4 = (&L_3->___FixedElementField_0);
		uintptr_t L_5 = V_0;
		int32_t L_6 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_5), ((int64_t)4)))))));
		int32_t L_7 = V_1;
		if (!((int32_t)(L_6&((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784_AdjustorThunk (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6*>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Void System.Text.Encodings.Web.AllowedBmpCodePointsBitmap::_GetIndexAndOffset(System.UInt32,System.UIntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF (uint32_t ___value0, uintptr_t* ___index1, int32_t* ___offset2, const RuntimeMethod* method) 
{
	{
		uintptr_t* L_0 = ___index1;
		uint32_t L_1 = ___value0;
		*((intptr_t*)L_0) = (intptr_t)((uintptr_t)((int32_t)((uint32_t)L_1>>5)));
		int32_t* L_2 = ___offset2;
		uint32_t L_3 = ___value0;
		*((int32_t*)L_2) = (int32_t)((int32_t)((int32_t)L_3&((int32_t)31)));
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
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder::.ctor(System.Text.Encodings.Web.ScalarEscaperBase,System.Text.Encodings.Web.AllowedBmpCodePointsBitmap&,System.Boolean,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__ctor_m50F390D761CB79AF76A123DD4510E371F6E4145E (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* ___scalarEscaper0, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedCodePointsBmp1, bool ___forbidHtmlSensitiveCharacters2, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___extraCharactersToEscape3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_0 = ___scalarEscaper0;
		__this->____scalarEscaper_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scalarEscaper_3), (void*)L_0);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_1 = ___allowedCodePointsBmp1;
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6 L_2 = (*(AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6*)L_1);
		__this->____allowedBmpCodePoints_2 = L_2;
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_3 = (&__this->____allowedBmpCodePoints_2);
		AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_mF66AF49D2335CD06E0955715F4AD7CD75F1D4F2A(L_3, NULL);
		bool L_4 = ___forbidHtmlSensitiveCharacters2;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_5 = (&__this->____allowedBmpCodePoints_2);
		AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8C72DC21464A257FDE3116A693A102D81DD6C9F9(L_5, NULL);
	}

IL_0032:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6 = ___extraCharactersToEscape3;
		V_0 = L_6;
		V_1 = 0;
		goto IL_0053;
	}

IL_0039:
	{
		int32_t L_7 = V_1;
		Il2CppChar* L_8;
		L_8 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_7), ((&V_0))->____length_1);
		int32_t L_9 = *((uint16_t*)L_8);
		V_2 = L_9;
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_10 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar L_11 = V_2;
		AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline(L_10, L_11, NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0053:
	{
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0039;
		}
	}
	{
		AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* L_15 = (&__this->____asciiPreescapedData_1);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_16 = (&__this->____allowedBmpCodePoints_2);
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_17 = ___scalarEscaper0;
		AsciiPreescapedData_PopulatePreescapedData_mD3F469DF9379798FE32B20941DFDC5B183D643C5(L_15, L_16, L_17, NULL);
		AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE* L_18 = (&__this->____allowedAsciiCodePoints_0);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_19 = (&__this->____allowedBmpCodePoints_2);
		AllowedAsciiCodePoints_PopulateAllowedCodePoints_m66003EAD322DE1E935B597C73488A252B9DCB9E4(L_18, L_19, NULL);
		return;
	}
}
// System.Int32 System.Text.Encodings.Web.OptimizedInboxTextEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_FindFirstCharacterToEncode_m07ADBE2EE6EF6E7BFA0DD39464FC02315A52A3E4 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___text0;
		int32_t L_1 = ___textLength1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_inline((&L_2), (void*)L_0, L_1, /*hidden argument*/ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_RuntimeMethod_var);
		int32_t L_3;
		L_3 = OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_m07D47124853E98545FDA8559FF486EFC7B6C2BDC(__this, L_2, NULL);
		return L_3;
	}
}
// System.Boolean System.Text.Encodings.Web.OptimizedInboxTextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_TryEncodeUnicodeScalar_m2AB31857FA2468305C34AE8C239C4D93B0CD049F (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar* L_0 = ___buffer1;
		int32_t L_1 = ___bufferLength2;
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&V_0), (void*)L_0, L_1, Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_2 = (&__this->____allowedBmpCodePoints_2);
		int32_t L_3 = ___unicodeScalar0;
		bool L_4;
		L_4 = AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		bool L_5;
		L_5 = Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30((&V_0), Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (0), ((&V_0))->____length_1);
		int32_t L_7 = ___unicodeScalar0;
		*((int16_t*)L_6) = (int16_t)((int32_t)(uint16_t)L_7);
		int32_t* L_8 = ___numberOfCharactersWritten3;
		*((int32_t*)L_8) = (int32_t)1;
		return (bool)1;
	}

IL_0031:
	{
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_9 = __this->____scalarEscaper_3;
		int32_t L_10 = ___unicodeScalar0;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rune__ctor_m5049D8D8C9A88C367276707B8DD2438046AA869E((&L_11), L_10, /*hidden argument*/NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12 = V_0;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D >::Invoke(4 /* System.Int32 System.Text.Encodings.Web.ScalarEscaperBase::EncodeUtf16(System.Text.Rune,System.Span`1<System.Char>) */, L_9, L_11, L_12);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t* L_15 = ___numberOfCharactersWritten3;
		int32_t L_16 = V_1;
		*((int32_t*)L_15) = (int32_t)L_16;
		return (bool)1;
	}

IL_004e:
	{
		int32_t* L_17 = ___numberOfCharactersWritten3;
		*((int32_t*)L_17) = (int32_t)0;
		return (bool)0;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.OptimizedInboxTextEncoder::Encode(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_Encode_m5FBACEF29880C9D7B0F7DB0F665131D4FCF1BC66 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		OptimizedInboxTextEncoder__AssertThisNotNull_mA3244C2240DF3C39C442815E852B9E35CDA19B83_inline(__this, NULL);
		V_0 = 0;
		V_1 = 0;
	}

IL_000a:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___source0;
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_inline(L_0, L_1, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_3), ((&___source0))->____length_1);
		int32_t L_5 = *((uint16_t*)L_4);
		V_3 = L_5;
		AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* L_6 = (&__this->____asciiPreescapedData_1);
		Il2CppChar L_7 = V_3;
		bool L_8;
		L_8 = AsciiPreescapedData_TryGetPreescapedData_mFAD9B22F27B908437820CFF8E0E09EE38E29FA5D_inline(L_6, L_7, (&V_4), NULL);
		if (!L_8)
		{
			goto IL_009d;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9 = ___destination1;
		int32_t L_10 = V_1;
		bool L_11;
		L_11 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_inline(L_9, L_10, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_12 = V_1;
		Il2CppChar* L_13;
		L_13 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (L_12), ((&___destination1))->____length_1);
		uint64_t L_14 = V_4;
		*((int16_t*)L_13) = (int16_t)((int32_t)(uint8_t)L_14);
		uint64_t L_15 = V_4;
		if (((int32_t)(((int32_t)(uint32_t)L_15)&((int32_t)65280))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		goto IL_000a;
	}

IL_005d:
	{
		uint64_t L_18 = V_4;
		V_4 = ((int64_t)((uint64_t)L_18>>8));
		int32_t L_19 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0068:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_20 = ___destination1;
		int32_t L_21 = V_5;
		bool L_22;
		L_22 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_inline(L_20, L_21, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		Il2CppChar* L_25;
		L_25 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (L_24), ((&___destination1))->____length_1);
		uint64_t L_26 = V_4;
		*((int16_t*)L_25) = (int16_t)((int32_t)(uint8_t)L_26);
		uint64_t L_27 = V_4;
		int64_t L_28 = ((int64_t)((uint64_t)L_27>>8));
		V_4 = L_28;
		if (((int32_t)(uint8_t)L_28))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_29 = V_5;
		V_1 = L_29;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_000a;
	}

IL_009d:
	{
		Il2CppChar L_31 = V_3;
		bool L_32;
		L_32 = Rune_TryCreate_mFF438A876AA1E64C63838A408EB97C207B5ACD68(L_31, (&V_6), NULL);
		if (L_32)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_33 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_34 = ___source0;
		int32_t L_35 = V_8;
		bool L_36;
		L_36 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_inline(L_34, L_35, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_00cc;
		}
	}
	{
		Il2CppChar L_37 = V_3;
		int32_t L_38 = V_8;
		Il2CppChar* L_39;
		L_39 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_38), ((&___source0))->____length_1);
		int32_t L_40 = *((uint16_t*)L_39);
		bool L_41;
		L_41 = Rune_TryCreate_m217F00513E9D8BDCA2A26F4A989082E8C9EFDDFE(L_37, L_40, (&V_6), NULL);
		if (!L_41)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_00e1;
	}

IL_00cc:
	{
		bool L_42 = ___isFinalBlock4;
		if (L_42)
		{
			goto IL_00d8;
		}
	}
	{
		Il2CppChar L_43 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Char_IsHighSurrogate_mED1E5FB863528ABB0D7D3DC4DE0FAB4517760658(L_43, NULL);
		if (L_44)
		{
			goto IL_014c;
		}
	}

IL_00d8:
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_45;
		L_45 = Rune_get_ReplacementChar_m8B48EED104ACB68B0099807EB38B46917CCA681B(NULL);
		V_6 = L_45;
		goto IL_010d;
	}

IL_00e1:
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_46 = V_6;
		bool L_47;
		L_47 = OptimizedInboxTextEncoder_IsScalarValueAllowed_m88271348696719D01CCCB8E11C020420B034AF47_inline(__this, L_46, NULL);
		if (!L_47)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_48 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_49;
		L_49 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___destination1), L_48, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		bool L_50;
		L_50 = Rune_TryEncodeToUtf16_m77F94DBA35818EB78CDE8C8D666025AA42B91CBE((&V_6), L_49, (&V_9), NULL);
		if (!L_50)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_51 = V_1;
		int32_t L_52 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		int32_t L_53 = V_0;
		int32_t L_54 = V_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		goto IL_000a;
	}

IL_010d:
	{
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_55 = __this->____scalarEscaper_3;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_56 = V_6;
		int32_t L_57 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_58;
		L_58 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___destination1), L_57, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		NullCheck(L_55);
		int32_t L_59;
		L_59 = VirtualFuncInvoker2< int32_t, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D >::Invoke(4 /* System.Int32 System.Text.Encodings.Web.ScalarEscaperBase::EncodeUtf16(System.Text.Rune,System.Span`1<System.Char>) */, L_55, L_56, L_58);
		V_7 = L_59;
		int32_t L_60 = V_7;
		if ((((int32_t)L_60) < ((int32_t)0)))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_61 = V_1;
		int32_t L_62 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		int32_t L_63 = V_0;
		int32_t L_64;
		L_64 = Rune_get_Utf16SequenceLength_m41A5350A1A1EB001286DEC1C4327BD067A180D70((&V_6), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_63, L_64));
		goto IL_000a;
	}

IL_013d:
	{
		V_2 = 0;
	}

IL_013f:
	{
		int32_t* L_65 = ___charsConsumed2;
		int32_t L_66 = V_0;
		*((int32_t*)L_65) = (int32_t)L_66;
		int32_t* L_67 = ___charsWritten3;
		int32_t L_68 = V_1;
		*((int32_t*)L_67) = (int32_t)L_68;
		int32_t L_69 = V_2;
		return L_69;
	}

IL_0148:
	{
		V_2 = 1;
		goto IL_013f;
	}

IL_014c:
	{
		V_2 = 2;
		goto IL_013f;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.OptimizedInboxTextEncoder::EncodeUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_EncodeUtf8_m99EA45E92440D1DEDC9EBB005E10C30D24FEFF81 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		OptimizedInboxTextEncoder__AssertThisNotNull_mA3244C2240DF3C39C442815E852B9E35CDA19B83_inline(__this, NULL);
		V_0 = 0;
		V_1 = 0;
	}

IL_000a:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___source0;
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_inline(L_0, L_1, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___source0))->____pointer_0))->value, (L_3), ((&___source0))->____length_1);
		int32_t L_5 = *((uint8_t*)L_4);
		V_3 = L_5;
		AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* L_6 = (&__this->____asciiPreescapedData_1);
		uint32_t L_7 = V_3;
		bool L_8;
		L_8 = AsciiPreescapedData_TryGetPreescapedData_mFAD9B22F27B908437820CFF8E0E09EE38E29FA5D_inline(L_6, L_7, (&V_4), NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9 = ___destination1;
		int32_t L_10 = V_1;
		uint64_t L_11 = V_4;
		bool L_12;
		L_12 = SpanUtility_TryWriteUInt64LittleEndian_m7D5E41B8B07C02C78FD3C67CCF159F7A97E7D2DF_inline(L_9, L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_1;
		uint64_t L_14 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)((int64_t)((uint64_t)L_14>>((int32_t)56))))));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_000a;
	}

IL_004a:
	{
		int32_t L_16 = V_1;
		V_5 = L_16;
	}

IL_004d:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = ___destination1;
		int32_t L_18 = V_5;
		bool L_19;
		L_19 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_inline(L_17, L_18, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_20 = V_5;
		int32_t L_21 = L_20;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (L_21), ((&___destination1))->____length_1);
		uint64_t L_23 = V_4;
		*((int8_t*)L_22) = (int8_t)((int32_t)(uint8_t)L_23);
		uint64_t L_24 = V_4;
		int64_t L_25 = ((int64_t)((uint64_t)L_24>>8));
		V_4 = L_25;
		if (((int32_t)(uint8_t)L_25))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_26 = V_5;
		V_1 = L_26;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		goto IL_000a;
	}

IL_007f:
	{
		int32_t L_28 = V_0;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_29;
		L_29 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___source0), L_28, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int32_t L_30;
		L_30 = Rune_DecodeFromUtf8_m7514B54F21E834213D6086BC3469A1510D9F741C(L_29, (&V_7), (&V_8), NULL);
		V_6 = L_30;
		int32_t L_31 = V_6;
		if (!L_31)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_32 = ___isFinalBlock4;
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_33 = V_6;
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_0107;
	}

IL_00a1:
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_34 = V_7;
		bool L_35;
		L_35 = OptimizedInboxTextEncoder_IsScalarValueAllowed_m88271348696719D01CCCB8E11C020420B034AF47_inline(__this, L_34, NULL);
		if (!L_35)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_36 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_37;
		L_37 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___destination1), L_36, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		bool L_38;
		L_38 = Rune_TryEncodeToUtf8_m0AA0B964D629E2B290DD0FEB2243176F5140F6C5((&V_7), L_37, (&V_10), NULL);
		if (!L_38)
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_39 = V_1;
		int32_t L_40 = V_10;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		int32_t L_41 = V_0;
		int32_t L_42 = V_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_000a;
	}

IL_00cd:
	{
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_43 = __this->____scalarEscaper_3;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_44 = V_7;
		int32_t L_45 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_46;
		L_46 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___destination1), L_45, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		NullCheck(L_43);
		int32_t L_47;
		L_47 = VirtualFuncInvoker2< int32_t, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(5 /* System.Int32 System.Text.Encodings.Web.ScalarEscaperBase::EncodeUtf8(System.Text.Rune,System.Span`1<System.Byte>) */, L_43, L_44, L_46);
		V_9 = L_47;
		int32_t L_48 = V_9;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_49 = V_1;
		int32_t L_50 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
		int32_t L_51 = V_0;
		int32_t L_52 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		goto IL_000a;
	}

IL_00f8:
	{
		V_2 = 0;
	}

IL_00fa:
	{
		int32_t* L_53 = ___bytesConsumed2;
		int32_t L_54 = V_0;
		*((int32_t*)L_53) = (int32_t)L_54;
		int32_t* L_55 = ___bytesWritten3;
		int32_t L_56 = V_1;
		*((int32_t*)L_55) = (int32_t)L_56;
		int32_t L_57 = V_2;
		return L_57;
	}

IL_0103:
	{
		V_2 = 1;
		goto IL_00fa;
	}

IL_0107:
	{
		V_2 = 2;
		goto IL_00fa;
	}
}
// System.Int32 System.Text.Encodings.Web.OptimizedInboxTextEncoder::GetIndexOfFirstByteToEncode(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstByteToEncode_m71A73F27E3142774DAA746F032898C222F7B0A12 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___data0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_003b;
	}

IL_000a:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___data0;
		int32_t L_2;
		L_2 = Rune_DecodeFromUtf8_m7514B54F21E834213D6086BC3469A1510D9F741C(L_1, (&V_2), (&V_3), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_4 = V_3;
		if ((((int32_t)L_4) >= ((int32_t)4)))
		{
			goto IL_0044;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_5 = (&__this->____allowedBmpCodePoints_2);
		int32_t L_6;
		L_6 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_2), NULL);
		bool L_7;
		L_7 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_5, ((int32_t)(uint16_t)L_6), NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_8 = V_3;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_9;
		L_9 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___data0), L_8, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___data0 = L_9;
	}

IL_003b:
	{
		bool L_10;
		L_10 = ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843((&___data0), ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_000a;
		}
	}

IL_0044:
	{
		bool L_11;
		L_11 = ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843((&___data0), ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___data0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
	}

IL_0057:
	{
		return (-1);
	}
}
// System.Int32 System.Text.Encodings.Web.OptimizedInboxTextEncoder::GetIndexOfFirstCharToEncode(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_m07D47124853E98545FDA8559FF486EFC7B6C2BDC (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	uintptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	uintptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		Il2CppChar* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&___data0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		V_1 = L_0;
		Il2CppChar* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___data0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_2 = ((uintptr_t)L_2);
		V_3 = ((intptr_t)0);
		uintptr_t L_3 = V_3;
		uintptr_t L_4 = V_2;
		if ((!(((uintptr_t)L_3) < ((uintptr_t)L_4))))
		{
			goto IL_016f;
		}
	}
	{
		OptimizedInboxTextEncoder__AssertThisNotNull_mA3244C2240DF3C39C442815E852B9E35CDA19B83_inline(__this, NULL);
		V_5 = ((intptr_t)0);
		goto IL_013d;
	}

IL_002d:
	{
		V_5 = ((intptr_t)(-1));
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_5 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_6 = V_0;
		uintptr_t L_7 = V_3;
		intptr_t L_8 = V_5;
		intptr_t L_9 = ((intptr_t)il2cpp_codegen_add(L_8, 1));
		V_5 = L_9;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((uintptr_t)L_9))))), ((int64_t)2)))))));
		bool L_11;
		L_11 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_5, L_10, NULL);
		if (!L_11)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_12 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_13 = V_0;
		uintptr_t L_14 = V_3;
		intptr_t L_15 = V_5;
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_add(L_15, 1));
		V_5 = L_16;
		int32_t L_17 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((uintptr_t)L_16))))), ((int64_t)2)))))));
		bool L_18;
		L_18 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_12, L_17, NULL);
		if (!L_18)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_19 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_20 = V_0;
		uintptr_t L_21 = V_3;
		intptr_t L_22 = V_5;
		intptr_t L_23 = ((intptr_t)il2cpp_codegen_add(L_22, 1));
		V_5 = L_23;
		int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_21, (intptr_t)((uintptr_t)L_23))))), ((int64_t)2)))))));
		bool L_25;
		L_25 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_19, L_24, NULL);
		if (!L_25)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_26 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_27 = V_0;
		uintptr_t L_28 = V_3;
		intptr_t L_29 = V_5;
		intptr_t L_30 = ((intptr_t)il2cpp_codegen_add(L_29, 1));
		V_5 = L_30;
		int32_t L_31 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_28, (intptr_t)((uintptr_t)L_30))))), ((int64_t)2)))))));
		bool L_32;
		L_32 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_26, L_31, NULL);
		if (!L_32)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_33 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_34 = V_0;
		uintptr_t L_35 = V_3;
		intptr_t L_36 = V_5;
		intptr_t L_37 = ((intptr_t)il2cpp_codegen_add(L_36, 1));
		V_5 = L_37;
		int32_t L_38 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_35, (intptr_t)((uintptr_t)L_37))))), ((int64_t)2)))))));
		bool L_39;
		L_39 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_33, L_38, NULL);
		if (!L_39)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_40 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_41 = V_0;
		uintptr_t L_42 = V_3;
		intptr_t L_43 = V_5;
		intptr_t L_44 = ((intptr_t)il2cpp_codegen_add(L_43, 1));
		V_5 = L_44;
		int32_t L_45 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_41, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_42, (intptr_t)((uintptr_t)L_44))))), ((int64_t)2)))))));
		bool L_46;
		L_46 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_40, L_45, NULL);
		if (!L_46)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_47 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_48 = V_0;
		uintptr_t L_49 = V_3;
		intptr_t L_50 = V_5;
		intptr_t L_51 = ((intptr_t)il2cpp_codegen_add(L_50, 1));
		V_5 = L_51;
		int32_t L_52 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_49, (intptr_t)((uintptr_t)L_51))))), ((int64_t)2)))))));
		bool L_53;
		L_53 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_47, L_52, NULL);
		if (!L_53)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_54 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_55 = V_0;
		uintptr_t L_56 = V_3;
		intptr_t L_57 = V_5;
		intptr_t L_58 = ((intptr_t)il2cpp_codegen_add(L_57, 1));
		V_5 = L_58;
		int32_t L_59 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_56, (intptr_t)((uintptr_t)L_58))))), ((int64_t)2)))))));
		bool L_60;
		L_60 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_54, L_59, NULL);
		if (!L_60)
		{
			goto IL_0169;
		}
	}
	{
		uintptr_t L_61 = V_3;
		V_3 = ((intptr_t)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)8)));
	}

IL_013d:
	{
		uintptr_t L_62 = V_2;
		uintptr_t L_63 = V_3;
		if ((!(((uintptr_t)((intptr_t)il2cpp_codegen_subtract((intptr_t)L_62, (intptr_t)L_63))) < ((uintptr_t)((intptr_t)8)))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0163;
	}

IL_0149:
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_64 = (&__this->____allowedBmpCodePoints_2);
		Il2CppChar* L_65 = V_0;
		uintptr_t L_66 = V_3;
		int32_t L_67 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_65, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_66), ((int64_t)2)))))));
		bool L_68;
		L_68 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_64, L_67, NULL);
		if (!L_68)
		{
			goto IL_016f;
		}
	}
	{
		uintptr_t L_69 = V_3;
		V_3 = ((intptr_t)il2cpp_codegen_add((intptr_t)L_69, 1));
	}

IL_0163:
	{
		uintptr_t L_70 = V_3;
		uintptr_t L_71 = V_2;
		if ((!(((uintptr_t)L_70) >= ((uintptr_t)L_71))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_016f;
	}

IL_0169:
	{
		uintptr_t L_72 = V_3;
		intptr_t L_73 = V_5;
		V_3 = ((intptr_t)il2cpp_codegen_add((intptr_t)L_72, (intptr_t)((uintptr_t)L_73)));
	}

IL_016f:
	{
		uintptr_t L_74 = V_3;
		V_4 = ((int32_t)L_74);
		int32_t L_75 = V_4;
		uintptr_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)L_76)))))
		{
			goto IL_017c;
		}
	}
	{
		V_4 = (-1);
	}

IL_017c:
	{
		int32_t L_77 = V_4;
		return L_77;
	}
}
// System.Boolean System.Text.Encodings.Web.OptimizedInboxTextEncoder::IsScalarValueAllowed(System.Text.Rune)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_IsScalarValueAllowed_m88271348696719D01CCCB8E11C020420B034AF47 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value0, const RuntimeMethod* method) 
{
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_0 = (&__this->____allowedBmpCodePoints_2);
		int32_t L_1;
		L_1 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value0), NULL);
		bool L_2;
		L_2 = AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder::_AssertThisNotNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__AssertThisNotNull_mA3244C2240DF3C39C442815E852B9E35CDA19B83 (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
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
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder/AllowedAsciiCodePoints::PopulateAllowedCodePoints(System.Text.Encodings.Web.AllowedBmpCodePointsBitmap&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedAsciiCodePoints_PopulateAllowedCodePoints_m66003EAD322DE1E935B597C73488A252B9DCB9E4 (AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE* __this, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedBmpCodePoints0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE));
		V_0 = ((int32_t)32);
		goto IL_0038;
	}

IL_000c:
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_0 = ___allowedBmpCodePoints0;
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_0, ((int32_t)(uint16_t)L_1), NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		U3CAsBytesU3Ee__FixedBuffer_t842F006B8F9E052F18A8AED1AE4550DF9F6DA616* L_3 = (&__this->___AsBytes_0);
		uint8_t* L_4 = (&L_3->___FixedElementField_0);
		int32_t L_5 = V_0;
		uint8_t* L_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((int32_t)(L_5&((int32_t)15)))));
		int32_t L_7 = *((uint8_t*)L_6);
		int32_t L_8 = V_0;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_7|((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)(L_8>>4))&((int32_t)31)))))))));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)127))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedAsciiCodePoints_PopulateAllowedCodePoints_m66003EAD322DE1E935B597C73488A252B9DCB9E4_AdjustorThunk (RuntimeObject* __this, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedBmpCodePoints0, const RuntimeMethod* method)
{
	AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedAsciiCodePoints_tA416356504588DE23816EFFEB64C033E8988B9CE*>(__this + _offset);
	AllowedAsciiCodePoints_PopulateAllowedCodePoints_m66003EAD322DE1E935B597C73488A252B9DCB9E4(_thisAdjusted, ___allowedBmpCodePoints0, method);
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
// System.Void System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData::PopulatePreescapedData(System.Text.Encodings.Web.AllowedBmpCodePointsBitmap&,System.Text.Encodings.Web.ScalarEscaperBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiPreescapedData_PopulatePreescapedData_mD3F469DF9379798FE32B20941DFDC5B183D643C5 (AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* __this, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedCodePointsBmp0, ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* ___innerEncoder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD));
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)16)));
		memset(L_0, 0, ((uintptr_t)((int32_t)16)));
		int8_t* L_1 = (L_0);
		il2cpp_codegen_memset(L_1, 0, ((int32_t)16));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_2), (void*)L_1, 8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_1 = L_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = V_1;
		V_0 = L_3;
		V_2 = 0;
		goto IL_00b0;
	}

IL_0022:
	{
		int32_t L_4 = V_2;
		Rune__ctor_m5049D8D8C9A88C367276707B8DD2438046AA869E((&V_5), L_4, NULL);
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_5 = V_5;
		bool L_6;
		L_6 = Rune_IsControl_m5FBE621B271302901940EA9B48F94DF3B196501C(L_5, NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_7 = ___allowedCodePointsBmp0;
		int32_t L_8 = V_2;
		bool L_9;
		L_9 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_7, ((int32_t)(uint16_t)L_8), NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = V_2;
		V_3 = ((int64_t)(uint64_t)((uint32_t)L_10));
		V_4 = 1;
		goto IL_0093;
	}

IL_0045:
	{
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_11 = ___innerEncoder1;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_12 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_13;
		L_13 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_0), 0, 6, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D >::Invoke(4 /* System.Int32 System.Text.Encodings.Web.ScalarEscaperBase::EncodeUtf16(System.Text.Rune,System.Span`1<System.Char>) */, L_11, L_12, L_13);
		V_4 = L_14;
		V_3 = ((int64_t)0);
		int32_t L_15 = V_4;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16;
		L_16 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&V_0), L_15, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		V_1 = L_16;
		Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_inline((&V_1), Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_RuntimeMethod_var);
		int32_t L_17 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		goto IL_008e;
	}

IL_0074:
	{
		int32_t L_18 = V_6;
		Il2CppChar* L_19;
		L_19 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_18), ((&V_0))->____length_1);
		int32_t L_20 = *((uint16_t*)L_19);
		V_7 = L_20;
		uint64_t L_21 = V_3;
		uint32_t L_22 = V_7;
		V_3 = ((int64_t)(((int64_t)((int64_t)L_21<<8))|((int64_t)(uint64_t)L_22)));
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_008e:
	{
		int32_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}

IL_0093:
	{
		U3CDataU3Ee__FixedBuffer_tF714B57AAA84902A9E491237DCEC6FA44847887E* L_25 = (&__this->___Data_0);
		uint64_t* L_26 = (&L_25->___FixedElementField_0);
		int32_t L_27 = V_2;
		uint64_t L_28 = V_3;
		int32_t L_29 = V_4;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 8))))) = (int64_t)((int64_t)((int64_t)L_28|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_29))<<((int32_t)56)))));
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b0:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)128))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsciiPreescapedData_PopulatePreescapedData_mD3F469DF9379798FE32B20941DFDC5B183D643C5_AdjustorThunk (RuntimeObject* __this, AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* ___allowedCodePointsBmp0, ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* ___innerEncoder1, const RuntimeMethod* method)
{
	AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD*>(__this + _offset);
	AsciiPreescapedData_PopulatePreescapedData_mD3F469DF9379798FE32B20941DFDC5B183D643C5(_thisAdjusted, ___allowedCodePointsBmp0, ___innerEncoder1, method);
}
// System.Boolean System.Text.Encodings.Web.OptimizedInboxTextEncoder/AsciiPreescapedData::TryGetPreescapedData(System.UInt32,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsciiPreescapedData_TryGetPreescapedData_mFAD9B22F27B908437820CFF8E0E09EE38E29FA5D (AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* __this, uint32_t ___codePoint0, uint64_t* ___preescapedData1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___codePoint0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_001c;
		}
	}
	{
		uint64_t* L_1 = ___preescapedData1;
		U3CDataU3Ee__FixedBuffer_tF714B57AAA84902A9E491237DCEC6FA44847887E* L_2 = (&__this->___Data_0);
		uint64_t* L_3 = (&L_2->___FixedElementField_0);
		uint32_t L_4 = ___codePoint0;
		int64_t L_5 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_4), ((int64_t)8)))))));
		*((int64_t*)L_1) = (int64_t)L_5;
		return (bool)1;
	}

IL_001c:
	{
		uint64_t* L_6 = ___preescapedData1;
		*((int64_t*)L_6) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsciiPreescapedData_TryGetPreescapedData_mFAD9B22F27B908437820CFF8E0E09EE38E29FA5D_AdjustorThunk (RuntimeObject* __this, uint32_t ___codePoint0, uint64_t* ___preescapedData1, const RuntimeMethod* method)
{
	AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsciiPreescapedData_TryGetPreescapedData_mFAD9B22F27B908437820CFF8E0E09EE38E29FA5D_inline(_thisAdjusted, ___codePoint0, ___preescapedData1, method);
	return _returnValue;
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
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mA51700CBF3A1398145A1D36FD81975EB9BA025DD (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* ___settings0, const RuntimeMethod* method) 
{
	{
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_0 = ___settings0;
		DefaultJavaScriptEncoder__ctor_mA437BC36BA8C0EB2D04AC4B6DB40AA0F0242C233(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mA437BC36BA8C0EB2D04AC4B6DB40AA0F0242C233 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* ___settings0, bool ___allowMinimalJsonEscaping1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* V_0 = NULL;
	ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* V_1 = NULL;
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* V_2 = NULL;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_3;
	memset((&V_3), 0, sizeof(V_3));
	ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* V_4 = NULL;
	AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* V_5 = NULL;
	{
		JavaScriptEncoder__ctor_m59B9FB268C118BDFC532CC01F6E9798DE75386B6(__this, NULL);
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_0 = ___settings0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultJavaScriptEncoder__ctor_mA437BC36BA8C0EB2D04AC4B6DB40AA0F0242C233_RuntimeMethod_var)));
	}

IL_0014:
	{
		bool L_2 = ___allowMinimalJsonEscaping1;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* L_3 = ((EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var))->___SingletonMinimallyEscaped_1;
		V_1 = L_3;
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_4 = ___settings0;
		NullCheck(L_4);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_5;
		L_5 = TextEncoderSettings_GetAllowedCodePointsBitmap_m95C4F626CEF1E2F2F45538BAE18C936C21B595D6(L_4, NULL);
		V_2 = L_5;
		int8_t* L_6 = (int8_t*) alloca(((uintptr_t)4));
		memset(L_6, 0, ((uintptr_t)4));
		int8_t* L_7 = (L_6);
		*((int16_t*)L_7) = (int16_t)((int32_t)34);
		int8_t* L_8 = L_7;
		*((int16_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 2))) = (int16_t)((int32_t)92);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)L_8, 2, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_3 = L_9;
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_10 = V_1;
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_11 = V_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12 = V_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_13;
		L_13 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_12, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_14 = (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2*)il2cpp_codegen_object_new(OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		OptimizedInboxTextEncoder__ctor_m50F390D761CB79AF76A123DD4510E371F6E4145E(L_14, L_10, L_11, (bool)0, L_13, NULL);
		V_0 = L_14;
		goto IL_007f;
	}

IL_004a:
	{
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* L_15 = ((EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var))->___Singleton_0;
		V_4 = L_15;
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_16 = ___settings0;
		NullCheck(L_16);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_17;
		L_17 = TextEncoderSettings_GetAllowedCodePointsBitmap_m95C4F626CEF1E2F2F45538BAE18C936C21B595D6(L_16, NULL);
		V_5 = L_17;
		int8_t* L_18 = (int8_t*) alloca(((uintptr_t)4));
		memset(L_18, 0, ((uintptr_t)4));
		int8_t* L_19 = (L_18);
		*((int16_t*)L_19) = (int16_t)((int32_t)92);
		int8_t* L_20 = L_19;
		*((int16_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_20, 2))) = (int16_t)((int32_t)96);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_21;
		memset((&L_21), 0, sizeof(L_21));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_21), (void*)L_20, 2, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_3 = L_21;
		ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* L_22 = V_4;
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_23 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_24 = V_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_25;
		L_25 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_24, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_26 = (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2*)il2cpp_codegen_object_new(OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		OptimizedInboxTextEncoder__ctor_m50F390D761CB79AF76A123DD4510E371F6E4145E(L_26, L_22, L_23, (bool)1, L_25, NULL);
		V_0 = L_26;
	}

IL_007f:
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_27 = V_0;
		__this->____innerEncoder_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerEncoder_2), (void*)L_27);
		return;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.DefaultJavaScriptEncoder::EncodeCore(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_EncodeCore_m57EAED8F8551FB45DAA1A0BD43AB9EA8BEA71186 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_0 = __this->____innerEncoder_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___source0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___destination1;
		int32_t* L_3 = ___charsConsumed2;
		int32_t* L_4 = ___charsWritten3;
		bool L_5 = ___isFinalBlock4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = OptimizedInboxTextEncoder_Encode_m5FBACEF29880C9D7B0F7DB0F665131D4FCF1BC66(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.DefaultJavaScriptEncoder::EncodeUtf8Core(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_EncodeUtf8Core_m11141FB5BB172DC7E5621D3175C0FAADCC724584 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___utf8Destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_0 = __this->____innerEncoder_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___utf8Source0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___utf8Destination1;
		int32_t* L_3 = ___bytesConsumed2;
		int32_t* L_4 = ___bytesWritten3;
		bool L_5 = ___isFinalBlock4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = OptimizedInboxTextEncoder_EncodeUtf8_m99EA45E92440D1DEDC9EBB005E10C30D24FEFF81(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder::FindFirstCharacterToEncode(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_FindFirstCharacterToEncode_mCA201659993EB103EA6C553E4D95A9F759A17245 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___text0, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_0 = __this->____innerEncoder_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___text0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_m07D47124853E98545FDA8559FF486EFC7B6C2BDC(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_FindFirstCharacterToEncode_m7429366173C04155877004DC1B4CE5A8E9CB3CC2 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_0 = __this->____innerEncoder_2;
		Il2CppChar* L_1 = ___text0;
		int32_t L_2 = ___textLength1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = OptimizedInboxTextEncoder_FindFirstCharacterToEncode_m07ADBE2EE6EF6E7BFA0DD39464FC02315A52A3E4_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_FindFirstCharacterToEncodeUtf8_m1D9F7798D33CB11EF43A0D2C96F59E8BFB8C1335 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Text0, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_0 = __this->____innerEncoder_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___utf8Text0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = OptimizedInboxTextEncoder_GetIndexOfFirstByteToEncode_m71A73F27E3142774DAA746F032898C222F7B0A12(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_TryEncodeUnicodeScalar_m13DD25B601FFAAB7A6B8E8BF3D1E58423A50D5F7 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_0 = __this->____innerEncoder_2;
		int32_t L_1 = ___unicodeScalar0;
		Il2CppChar* L_2 = ___buffer1;
		int32_t L_3 = ___bufferLength2;
		int32_t* L_4 = ___numberOfCharactersWritten3;
		NullCheck(L_0);
		bool L_5;
		L_5 = OptimizedInboxTextEncoder_TryEncodeUnicodeScalar_m2AB31857FA2468305C34AE8C239C4D93B0CD049F(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::WillEncode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_WillEncode_mA2BD5B4CFBB64BF0F4D8C6E8C12B13D92C0A8513 (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* __this, int32_t ___unicodeScalar0, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* L_0 = __this->____innerEncoder_2;
		int32_t L_1 = ___unicodeScalar0;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rune__ctor_m5049D8D8C9A88C367276707B8DD2438046AA869E((&L_2), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = OptimizedInboxTextEncoder_IsScalarValueAllowed_m88271348696719D01CCCB8E11C020420B034AF47_inline(L_0, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__cctor_mB114601D8B18412421D1B1361DCD23EB9CF70232 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_0 = (UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)SZArrayNew(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_1 = L_0;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2;
		L_2 = UnicodeRanges_get_BasicLatin_mAB30D6E10C1E286D899D7C56E1049A418E6C4698(NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836*)L_2);
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_3 = (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B*)il2cpp_codegen_object_new(TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB(L_3, L_1, NULL);
		DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* L_4 = (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32*)il2cpp_codegen_object_new(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DefaultJavaScriptEncoder__ctor_mA51700CBF3A1398145A1D36FD81975EB9BA025DD(L_4, L_3, NULL);
		((DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var))->___BasicLatinSingleton_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var))->___BasicLatinSingleton_0), (void*)L_4);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_5 = (UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3*)SZArrayNew(UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_6 = L_5;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_7;
		L_7 = UnicodeRanges_get_All_m1A526C379AD005828865670A9F7584BBB817431E(NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836*)L_7);
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_8 = (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B*)il2cpp_codegen_object_new(TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB(L_8, L_6, NULL);
		DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* L_9 = (DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32*)il2cpp_codegen_object_new(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		DefaultJavaScriptEncoder__ctor_mA437BC36BA8C0EB2D04AC4B6DB40AA0F0242C233(L_9, L_8, (bool)1, NULL);
		((DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var))->___UnsafeRelaxedEscapingSingleton_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var))->___UnsafeRelaxedEscapingSingleton_1), (void*)L_9);
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
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscaperImplementation__ctor_mBC4CE30052CEBCD9B6921D7EA65F69A73AC8688A (EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* __this, bool ___allowMinimalEscaping0, const RuntimeMethod* method) 
{
	{
		ScalarEscaperBase__ctor_m3B2325A7E8C5FFA0C3E885E722D5943F4B20A456(__this, NULL);
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_0 = (&__this->____preescapedMap_2);
		AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(L_0, 8, (uint8_t)((int32_t)98), NULL);
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_1 = (&__this->____preescapedMap_2);
		AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(L_1, ((int32_t)9), (uint8_t)((int32_t)116), NULL);
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_2 = (&__this->____preescapedMap_2);
		AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(L_2, ((int32_t)10), (uint8_t)((int32_t)110), NULL);
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_3 = (&__this->____preescapedMap_2);
		AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(L_3, ((int32_t)12), (uint8_t)((int32_t)102), NULL);
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_4 = (&__this->____preescapedMap_2);
		AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(L_4, ((int32_t)13), (uint8_t)((int32_t)114), NULL);
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_5 = (&__this->____preescapedMap_2);
		AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(L_5, ((int32_t)92), (uint8_t)((int32_t)92), NULL);
		bool L_6 = ___allowMinimalEscaping0;
		if (!L_6)
		{
			goto IL_0071;
		}
	}
	{
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_7 = (&__this->____preescapedMap_2);
		AsciiByteMap_InsertAsciiChar_m51ED7B02D0072E8607F38D4DA706A9BD481B4E0F(L_7, ((int32_t)34), (uint8_t)((int32_t)34), NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::EncodeUtf8(System.Text.Rune,System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_EncodeUtf8_m666092E09BDEF41F4E8D3C444E89589BB6D6F08B (EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_0 = (&__this->____preescapedMap_2);
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_1 = ___value0;
		bool L_2;
		L_2 = AsciiByteMap_TryLookup_m51327CA173DD3C3BC6D46EDD00A935BDD22781F0_inline(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___destination1;
		bool L_4;
		L_4 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_inline(L_3, 1, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_5;
		L_5 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (0), ((&___destination1))->____length_1);
		*((int8_t*)L_5) = (int8_t)((int32_t)92);
		uint8_t* L_6;
		L_6 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (1), ((&___destination1))->____length_1);
		uint8_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)L_7;
		return 2;
	}

IL_0030:
	{
		return (-1);
	}

IL_0032:
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_8 = ___value0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = EscaperImplementation_U3CEncodeUtf8U3Eg__TryEncodeScalarAsHexU7C4_0_m75E21B5836F1A09C9D1617CE5D475C13B18FB2E1(__this, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::EncodeUtf16(System.Text.Rune,System.Span`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_EncodeUtf16_mEB54EE8630AD3A3D9597BB2747B2B29A5B63D5E0 (EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* L_0 = (&__this->____preescapedMap_2);
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_1 = ___value0;
		bool L_2;
		L_2 = AsciiByteMap_TryLookup_m51327CA173DD3C3BC6D46EDD00A935BDD22781F0_inline(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___destination1;
		bool L_4;
		L_4 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_inline(L_3, 1, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar* L_5;
		L_5 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (0), ((&___destination1))->____length_1);
		*((int16_t*)L_5) = (int16_t)((int32_t)92);
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination1))->____pointer_0))->value, (1), ((&___destination1))->____length_1);
		uint8_t L_7 = V_0;
		*((int16_t*)L_6) = (int16_t)L_7;
		return 2;
	}

IL_0030:
	{
		return (-1);
	}

IL_0032:
	{
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_8 = ___value0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = EscaperImplementation_U3CEncodeUtf16U3Eg__TryEncodeScalarAsHexU7C5_0_m9463B6FBBC962E54B0E8AC6CFC95A4B3358A3741(__this, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscaperImplementation__cctor_m83E3760ADAEF4F783545307B2FEA3A026D6AFCE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* L_0 = (EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382*)il2cpp_codegen_object_new(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EscaperImplementation__ctor_mBC4CE30052CEBCD9B6921D7EA65F69A73AC8688A(L_0, (bool)0, NULL);
		((EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var))->___Singleton_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var))->___Singleton_0), (void*)L_0);
		EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382* L_1 = (EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382*)il2cpp_codegen_object_new(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EscaperImplementation__ctor_mBC4CE30052CEBCD9B6921D7EA65F69A73AC8688A(L_1, (bool)1, NULL);
		((EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var))->___SingletonMinimallyEscaped_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_t0136D449B258A1A50F47A23C85BC4A1CDB70A382_il2cpp_TypeInfo_var))->___SingletonMinimallyEscaped_1), (void*)L_1);
		return;
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::<EncodeUtf8>g__TryEncodeScalarAsHex|4_0(System.Object,System.Text.Rune,System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf8U3Eg__TryEncodeScalarAsHexU7C4_0_m75E21B5836F1A09C9D1617CE5D475C13B18FB2E1 (RuntimeObject* ___this0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value1, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsBmp_m6DC82A851E2568B6903ABEC63FBBF6550D750457((&___value1), NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___destination2;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_inline(L_1, 5, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00c5;
		}
	}
	{
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (0), ((&___destination2))->____length_1);
		*((int8_t*)L_3) = (int8_t)((int32_t)92);
		uint8_t* L_4;
		L_4 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (1), ((&___destination2))->____length_1);
		*((int8_t*)L_4) = (int8_t)((int32_t)117);
		int32_t L_5;
		L_5 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value1), NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6 = ___destination2;
		HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline((uint8_t)((int32_t)(uint8_t)L_5), L_6, 4, 0, NULL);
		int32_t L_7;
		L_7 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value1), NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = ___destination2;
		HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>8))), L_8, 2, 0, NULL);
		return 6;
	}

IL_004f:
	{
		int32_t L_9;
		L_9 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value1), NULL);
		UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mCB0AC125106CDDF907FE901ECF499607D31A5F2C_inline(L_9, (&V_0), (&V_1), NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10 = ___destination2;
		bool L_11;
		L_11 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_inline(L_10, ((int32_t)11), SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_00c5;
		}
	}
	{
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (0), ((&___destination2))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)92);
		uint8_t* L_13;
		L_13 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (1), ((&___destination2))->____length_1);
		*((int8_t*)L_13) = (int8_t)((int32_t)117);
		Il2CppChar L_14 = V_0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_15 = ___destination2;
		HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline((uint8_t)((int32_t)(uint8_t)L_14), L_15, 4, 0, NULL);
		Il2CppChar L_16 = V_0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = ___destination2;
		HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_16>>8))), L_17, 2, 0, NULL);
		uint8_t* L_18;
		L_18 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (6), ((&___destination2))->____length_1);
		*((int8_t*)L_18) = (int8_t)((int32_t)92);
		uint8_t* L_19;
		L_19 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (7), ((&___destination2))->____length_1);
		*((int8_t*)L_19) = (int8_t)((int32_t)117);
		Il2CppChar L_20 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21 = ___destination2;
		HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline((uint8_t)((int32_t)(uint8_t)L_20), L_21, ((int32_t)10), 0, NULL);
		Il2CppChar L_22 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_23 = ___destination2;
		HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_22>>8))), L_23, 8, 0, NULL);
		return ((int32_t)12);
	}

IL_00c5:
	{
		return (-1);
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder/EscaperImplementation::<EncodeUtf16>g__TryEncodeScalarAsHex|5_0(System.Object,System.Text.Rune,System.Span`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf16U3Eg__TryEncodeScalarAsHexU7C5_0_m9463B6FBBC962E54B0E8AC6CFC95A4B3358A3741 (RuntimeObject* ___this0, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value1, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsBmp_m6DC82A851E2568B6903ABEC63FBBF6550D750457((&___value1), NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1 = ___destination2;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_inline(L_1, 5, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar* L_3;
		L_3 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (0), ((&___destination2))->____length_1);
		*((int16_t*)L_3) = (int16_t)((int32_t)92);
		Il2CppChar* L_4;
		L_4 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (1), ((&___destination2))->____length_1);
		*((int16_t*)L_4) = (int16_t)((int32_t)117);
		int32_t L_5;
		L_5 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value1), NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_6 = ___destination2;
		HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline((uint8_t)((int32_t)(uint8_t)L_5), L_6, 4, 0, NULL);
		int32_t L_7;
		L_7 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value1), NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8 = ___destination2;
		HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>8))), L_8, 2, 0, NULL);
		return 6;
	}

IL_004f:
	{
		int32_t L_9;
		L_9 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value1), NULL);
		UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mCB0AC125106CDDF907FE901ECF499607D31A5F2C_inline(L_9, (&V_0), (&V_1), NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = ___destination2;
		bool L_11;
		L_11 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_inline(L_10, ((int32_t)11), SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar* L_12;
		L_12 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (0), ((&___destination2))->____length_1);
		*((int16_t*)L_12) = (int16_t)((int32_t)92);
		Il2CppChar* L_13;
		L_13 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (1), ((&___destination2))->____length_1);
		*((int16_t*)L_13) = (int16_t)((int32_t)117);
		Il2CppChar L_14 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15 = ___destination2;
		HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline((uint8_t)((int32_t)(uint8_t)L_14), L_15, 4, 0, NULL);
		Il2CppChar L_16 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_17 = ___destination2;
		HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_16>>8))), L_17, 2, 0, NULL);
		Il2CppChar* L_18;
		L_18 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (6), ((&___destination2))->____length_1);
		*((int16_t*)L_18) = (int16_t)((int32_t)92);
		Il2CppChar* L_19;
		L_19 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___destination2))->____pointer_0))->value, (7), ((&___destination2))->____length_1);
		*((int16_t*)L_19) = (int16_t)((int32_t)117);
		Il2CppChar L_20 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_21 = ___destination2;
		HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline((uint8_t)((int32_t)(uint8_t)L_20), L_21, ((int32_t)10), 0, NULL);
		Il2CppChar L_22 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23 = ___destination2;
		HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_22>>8))), L_23, 8, 0, NULL);
		return ((int32_t)12);
	}

IL_00c5:
	{
		return (-1);
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
// System.Boolean System.Text.Encodings.Web.SpanUtility::TryWriteUInt64LittleEndian(System.Span`1<System.Byte>,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanUtility_TryWriteUInt64LittleEndian_m7D5E41B8B07C02C78FD3C67CCF159F7A97E7D2DF (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, int32_t ___offset1, uint64_t ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___span0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		int32_t L_1 = ___offset1;
		bool L_2;
		L_2 = SpanUtility_AreValidIndexAndLength_m459BD2CF00AB2A7AAFF49796C1EC464FE4F898D4_inline(L_0, L_1, 8, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_4 = ___value2;
		uint64_t L_5;
		L_5 = BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline(L_4, NULL);
		___value2 = L_5;
	}

IL_001f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6 = ___span0;
		uint8_t* L_7;
		L_7 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_6, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		int32_t L_8 = ___offset1;
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, (intptr_t)((uintptr_t)L_8));
		uint64_t L_10 = ___value2;
		il2cpp_unsafe_write_unaligned(L_9, L_10);
		return (bool)1;
	}

IL_0034:
	{
		return (bool)0;
	}
}
// System.Boolean System.Text.Encodings.Web.SpanUtility::AreValidIndexAndLength(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanUtility_AreValidIndexAndLength_m459BD2CF00AB2A7AAFF49796C1EC464FE4F898D4 (int32_t ___spanRealLength0, int32_t ___requestedOffset1, int32_t ___requestedLength2, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___requestedOffset1;
		int32_t L_2 = ___spanRealLength0;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_3 = ___requestedLength2;
		int32_t L_4 = ___spanRealLength0;
		int32_t L_5 = ___requestedOffset1;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		int32_t L_6 = ___spanRealLength0;
		int32_t L_7 = ___requestedOffset1;
		int32_t L_8 = ___requestedLength2;
		if ((!(((uint64_t)((int64_t)(uint64_t)((uint32_t)L_6))) < ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_7)), ((int64_t)(uint64_t)((uint32_t)L_8))))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
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
// System.Void System.Text.Encodings.Web.ScalarEscaperBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarEscaperBase__ctor_m3B2325A7E8C5FFA0C3E885E722D5943F4B20A456 (ScalarEscaperBase_t8124338B0477DED88D2C6056090019433F664D38* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Encodings.Web.JavaScriptEncoder::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JavaScriptEncoder_get_Default_mA1BD7ACB1459CE7B06A32D6CF329C522C567D4ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* L_0 = ((DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var))->___BasicLatinSingleton_0;
		return L_0;
	}
}
// System.Void System.Text.Encodings.Web.JavaScriptEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m59B9FB268C118BDFC532CC01F6E9798DE75386B6 (JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* __this, const RuntimeMethod* method) 
{
	{
		TextEncoder__ctor_mAB973DBE5360A8CE416505D5F1487855B4A9B660(__this, NULL);
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
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.UInt32,System.Span`1<System.Char>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalar_m0C09469AAD2B20098F8E1038DC56725C3623A224 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___unicodeScalar0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___buffer1, int32_t* ___charsWritten2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___buffer1;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		V_1 = L_1;
		Il2CppChar* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		uint32_t L_3 = ___unicodeScalar0;
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___buffer1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t* L_6 = ___charsWritten2;
		bool L_7;
		L_7 = VirtualFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4 /* System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&) */, __this, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalarUtf8(System.UInt32,System.Span`1<System.Char>,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalarUtf8_mAF4D846CF0CB8F80A3E7ED64F39B4A60989DC5DE (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___unicodeScalar0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___utf16ScratchBuffer1, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___utf8Destination2, int32_t* ___bytesWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		uint32_t L_0 = ___unicodeScalar0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1 = ___utf16ScratchBuffer1;
		bool L_2;
		L_2 = TextEncoder_TryEncodeUnicodeScalar_m0C09469AAD2B20098F8E1038DC56725C3623A224_inline(__this, L_0, L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_mA7F4E71D5A47B9FCEF35DD1DA98E064740DA4F29(NULL);
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_4;
		L_4 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&___utf16ScratchBuffer1), 0, L_3, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		___utf16ScratchBuffer1 = L_4;
		V_1 = 0;
		goto IL_0078;
	}

IL_0020:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_5 = ___utf16ScratchBuffer1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		L_6 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_5, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Rune_DecodeFromUtf16_m5284B79784E5D5D1BE53259A7697D9D20B252A4B(L_6, (&V_2), (&V_3), NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_mA7F4E71D5A47B9FCEF35DD1DA98E064740DA4F29(NULL);
	}

IL_0036:
	{
		int32_t L_8;
		L_8 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_2), NULL);
		int32_t L_9;
		L_9 = UnicodeHelpers_GetUtf8RepresentationForScalarValue_mAE8F5692BCC965708D65737961CC88FDD9616220(L_8, NULL);
		V_4 = L_9;
	}

IL_0044:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10 = ___utf8Destination2;
		int32_t L_11 = V_1;
		bool L_12;
		L_12 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_inline(L_10, L_11, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___utf8Destination2))->____pointer_0))->value, (L_14), ((&___utf8Destination2))->____length_1);
		uint32_t L_16 = V_4;
		*((int8_t*)L_15) = (int8_t)((int32_t)(uint8_t)L_16);
		goto IL_0065;
	}

IL_005f:
	{
		int32_t* L_17 = ___bytesWritten3;
		*((int32_t*)L_17) = (int32_t)0;
		return (bool)0;
	}

IL_0065:
	{
		uint32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)((uint32_t)L_18>>8));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_20 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_21;
		L_21 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___utf16ScratchBuffer1), L_20, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		___utf16ScratchBuffer1 = L_21;
	}

IL_0078:
	{
		bool L_22;
		L_22 = Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30((&___utf16ScratchBuffer1), Span_1_get_IsEmpty_m268B66CCD131D5B74F41BF2BB79418B91F87DB30_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0020;
		}
	}
	{
		int32_t* L_23 = ___bytesWritten3;
		int32_t L_24 = V_1;
		*((int32_t*)L_23) = (int32_t)L_24;
		return (bool)1;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeUtf8_mBDED5D080EC52F201E62664593CECBC70FCCC200 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___utf8Destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___utf8Source0;
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3;
		L_3 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&___utf8Source0), 0, L_3, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0022:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D >::Invoke(12 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>) */, __this, L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&V_0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0036:
	{
		int32_t L_9 = V_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		L_10 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&___utf8Source0), 0, L_9, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		V_5 = L_10;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11 = ___utf8Destination1;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_5), L_11, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t* L_14 = ___bytesConsumed2;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		*((int32_t*)L_14) = (int32_t)L_15;
		int32_t* L_16 = ___bytesWritten3;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		*((int32_t*)L_16) = (int32_t)L_17;
		return (int32_t)(0);
	}

IL_0068:
	{
		int32_t L_18 = V_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_19;
		L_19 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), L_18, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int32_t L_20 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___utf8Destination1), L_20, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		bool L_22 = ___isFinalBlock4;
		int32_t L_23;
		L_23 = VirtualFuncInvoker5< int32_t, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, int32_t*, int32_t*, bool >::Invoke(8 /* System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8Core(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean) */, __this, L_19, L_21, (&V_3), (&V_4), L_22);
		V_2 = L_23;
		int32_t* L_24 = ___bytesConsumed2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, L_26));
		int32_t* L_27 = ___bytesWritten3;
		int32_t L_28 = V_1;
		int32_t L_29 = V_4;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29));
		int32_t L_30 = V_2;
		return L_30;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8Core(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeUtf8Core_m488B09749C8A40EB90F81F077FFED9506BDED470 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Source0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___utf8Destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		V_1 = L_1;
		int8_t* L_2 = (int8_t*) alloca(((uintptr_t)((int32_t)48)));
		memset(L_2, 0, ((uintptr_t)((int32_t)48)));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_3), (void*)(L_2), ((int32_t)24), /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_4 = L_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_4 = V_4;
		V_2 = L_4;
		goto IL_00ce;
	}

IL_0026:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = ___utf8Source0;
		int32_t L_6;
		L_6 = Rune_DecodeFromUtf8_m7514B54F21E834213D6086BC3469A1510D9F741C(L_5, (&V_6), (&V_7), NULL);
		V_5 = L_6;
		int32_t L_7 = V_5;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		bool L_8 = ___isFinalBlock4;
		if (L_8)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_9 = V_5;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_00f5;
	}

IL_0044:
	{
		int32_t L_10;
		L_10 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_6), NULL);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_10);
		if (L_11)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_12;
		L_12 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_6), NULL);
		int32_t L_13;
		L_13 = UnicodeHelpers_GetUtf8RepresentationForScalarValue_mAE8F5692BCC965708D65737961CC88FDD9616220(L_12, NULL);
		V_9 = L_13;
		V_10 = 0;
	}

IL_0064:
	{
		int32_t L_14 = V_10;
		int32_t L_15;
		L_15 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_14) < ((uint32_t)L_15))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_16 = V_10;
		int32_t L_17 = L_16;
		V_10 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint8_t* L_18;
		L_18 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___utf8Destination1))->____pointer_0))->value, (L_17), ((&___utf8Destination1))->____length_1);
		uint32_t L_19 = V_9;
		*((int8_t*)L_18) = (int8_t)((int32_t)(uint8_t)L_19);
		uint32_t L_20 = V_9;
		int32_t L_21 = ((int32_t)((uint32_t)L_20>>8));
		V_9 = L_21;
		if (L_21)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_22 = V_7;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_23;
		L_23 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), L_22, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___utf8Source0 = L_23;
		int32_t L_24 = V_10;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___utf8Destination1), L_24, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___utf8Destination1 = L_25;
		goto IL_00ce;
	}

IL_00a5:
	{
		int32_t L_26;
		L_26 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_6), NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_27 = V_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = ___utf8Destination1;
		bool L_29;
		L_29 = TextEncoder_TryEncodeUnicodeScalarUtf8_mAF4D846CF0CB8F80A3E7ED64F39B4A60989DC5DE(__this, L_26, L_27, L_28, (&V_8), NULL);
		if (!L_29)
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_30 = V_7;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_31;
		L_31 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Source0), L_30, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___utf8Source0 = L_31;
		int32_t L_32 = V_8;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_33;
		L_33 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___utf8Destination1), L_32, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___utf8Destination1 = L_33;
	}

IL_00ce:
	{
		bool L_34;
		L_34 = ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843((&___utf8Source0), ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_0026;
		}
	}
	{
		V_3 = 0;
	}

IL_00dc:
	{
		int32_t* L_35 = ___bytesConsumed2;
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		*((int32_t*)L_35) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_36, L_37));
		int32_t* L_38 = ___bytesWritten3;
		int32_t L_39 = V_1;
		int32_t L_40;
		L_40 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___utf8Destination1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		*((int32_t*)L_38) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_39, L_40));
		int32_t L_41 = V_3;
		return L_41;
	}

IL_00f5:
	{
		V_3 = 2;
		goto IL_00dc;
	}

IL_00f9:
	{
		V_3 = 1;
		goto IL_00dc;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::Encode(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_Encode_mD4B2544A8B30FBA75511601A6672A95C262EB663 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___source0;
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4;
		L_4 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___source0), 0, L_3, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0022:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 >::Invoke(11 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.ReadOnlySpan`1<System.Char>) */, __this, L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0036:
	{
		int32_t L_9 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		L_10 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___source0), 0, L_9, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_5 = L_10;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11 = ___destination1;
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_5), L_11, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t* L_14 = ___charsConsumed2;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		*((int32_t*)L_14) = (int32_t)L_15;
		int32_t* L_16 = ___charsWritten3;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		*((int32_t*)L_16) = (int32_t)L_17;
		return (int32_t)(0);
	}

IL_0068:
	{
		int32_t L_18 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_19;
		L_19 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___source0), L_18, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		int32_t L_20 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_21;
		L_21 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___destination1), L_20, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		bool L_22 = ___isFinalBlock4;
		int32_t L_23;
		L_23 = VirtualFuncInvoker5< int32_t, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, int32_t*, int32_t*, bool >::Invoke(10 /* System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeCore(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean) */, __this, L_19, L_21, (&V_3), (&V_4), L_22);
		V_2 = L_23;
		int32_t* L_24 = ___charsConsumed2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, L_26));
		int32_t* L_27 = ___charsWritten3;
		int32_t L_28 = V_1;
		int32_t L_29 = V_4;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29));
		int32_t L_30 = V_2;
		return L_30;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeCore(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeCore_m997AEEC4A6921E2BB25A2F9F828ABE6BC1CDA025 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___source0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0085;
	}

IL_0012:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___source0;
		int32_t L_3;
		L_3 = Rune_DecodeFromUtf16_m5284B79784E5D5D1BE53259A7697D9D20B252A4B(L_2, (&V_4), (&V_5), NULL);
		V_3 = L_3;
		int32_t L_4 = V_3;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		bool L_5 = ___isFinalBlock4;
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_6 = V_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00a9;
	}

IL_002a:
	{
		int32_t L_7;
		L_7 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_4), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_7);
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9 = ___destination1;
		bool L_10;
		L_10 = Rune_TryEncodeToUtf16_m77F94DBA35818EB78CDE8C8D666025AA42B91CBE((&V_4), L_9, (&V_7), NULL);
		if (!L_10)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_11 = V_5;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_12;
		L_12 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___source0), L_11, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		___source0 = L_12;
		int32_t L_13 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_14;
		L_14 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___destination1), L_13, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		___destination1 = L_14;
		goto IL_0085;
	}

IL_005d:
	{
		int32_t L_15;
		L_15 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_4), NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = ___destination1;
		bool L_17;
		L_17 = TextEncoder_TryEncodeUnicodeScalar_m0C09469AAD2B20098F8E1038DC56725C3623A224_inline(__this, L_15, L_16, (&V_6), NULL);
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_5;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_19;
		L_19 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___source0), L_18, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		___source0 = L_19;
		int32_t L_20 = V_6;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_21;
		L_21 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___destination1), L_20, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		___destination1 = L_21;
	}

IL_0085:
	{
		bool L_22;
		L_22 = ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7((&___source0), ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0012;
		}
	}
	{
		V_2 = 0;
	}

IL_0090:
	{
		int32_t* L_23 = ___charsConsumed2;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___source0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t* L_26 = ___charsWritten3;
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		*((int32_t*)L_26) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		int32_t L_29 = V_2;
		return L_29;
	}

IL_00a9:
	{
		V_2 = 2;
		goto IL_0090;
	}

IL_00ad:
	{
		V_2 = 1;
		goto IL_0090;
	}
}
// System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncode_m055812C29995C1DFD2E2C899571736DBE5B28589 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___text0;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var);
		V_1 = L_1;
		Il2CppChar* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___text0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_5;
		L_5 = VirtualFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(5 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32) */, __this, L_3, L_4);
		return L_5;
	}
}
// System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncodeUtf8_mAF4E9C94A751B36CE70A67B1324BDC2169D9FA9E (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___utf8Text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Text0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0031;
	}

IL_000a:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___utf8Text0;
		int32_t L_2;
		L_2 = Rune_DecodeFromUtf8_m7514B54F21E834213D6086BC3469A1510D9F741C(L_1, (&V_2), (&V_3), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4;
		L_4 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&V_2), NULL);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = V_3;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		L_7 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___utf8Text0), L_6, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___utf8Text0 = L_7;
	}

IL_0031:
	{
		bool L_8;
		L_8 = ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843((&___utf8Text0), ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_000a;
		}
	}

IL_003a:
	{
		bool L_9;
		L_9 = ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843((&___utf8Text0), ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___utf8Text0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
	}

IL_004d:
	{
		return (-1);
	}
}
// System.Void System.Text.Encodings.Web.TextEncoder::ThrowArgumentException_MaxOutputCharsPerInputChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_mA7F4E71D5A47B9FCEF35DD1DA98E064740DA4F29 (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var)));
		String_t* L_0;
		L_0 = SR_get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar_m5A91986797D58359CDF5DC1DBB8FFC013E908991(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_mA7F4E71D5A47B9FCEF35DD1DA98E064740DA4F29_RuntimeMethod_var)));
	}
}
// System.Void System.Text.Encodings.Web.TextEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_mAB973DBE5360A8CE416505D5F1487855B4A9B660 (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void System.Text.Encodings.Web.TextEncoderSettings::.ctor(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* ___allowedRanges0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_0 = ___allowedRanges0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings__ctor_mF766697620B2A4E93EC4966FB24D3A90749695DB_RuntimeMethod_var)));
	}

IL_0014:
	{
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_2 = ___allowedRanges0;
		VirtualActionInvoker1< UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* >::Invoke(5 /* System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRanges(System.Text.Unicode.UnicodeRange[]) */, __this, L_2);
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRange(System.Text.Unicode.UnicodeRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRange_mE18D9F922D41074A99B571237B152FA25E3CD466 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* ___range0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_0 = ___range0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRange_mE18D9F922D41074A99B571237B152FA25E3CD466_RuntimeMethod_var)));
	}

IL_000e:
	{
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_2 = ___range0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35_inline(L_2, NULL);
		V_0 = L_3;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_4 = ___range0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154_inline(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0035;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_8 = (&__this->____allowedCodePointsBitmap_0);
		int32_t L_9 = V_3;
		AllowedBmpCodePointsBitmap_AllowChar_mCF318B486232607869FDF9E6178642075E150255_inline(L_8, ((int32_t)(uint16_t)L_9), NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRanges(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRanges_m51D0C4BD65E72A1D7166C0CA74656AA1658D7580 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* ___ranges0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_0 = ___ranges0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRanges_m51D0C4BD65E72A1D7166C0CA74656AA1658D7580_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_2 = ___ranges0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		VirtualActionInvoker1< UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* >::Invoke(4 /* System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRange(System.Text.Unicode.UnicodeRange) */, __this, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		UnicodeRangeU5BU5D_t2E7889033F5419DF9DC984717735CBE37D9C02B3* L_8 = ___ranges0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Int32> System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCodePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextEncoderSettings_GetAllowedCodePoints_mF569B617D3B830894B172F8ACF125016DC5644AB (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* L_0 = (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF*)il2cpp_codegen_object_new(U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetAllowedCodePointsU3Ed__14__ctor_m96154A64F50C8A114E552FC1379E5D917F1B65F7(L_0, ((int32_t)-2), NULL);
		U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Text.Encodings.Web.AllowedBmpCodePointsBitmap& modreq(System.Runtime.InteropServices.InAttribute) System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCodePointsBitmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* TextEncoderSettings_GetAllowedCodePointsBitmap_m95C4F626CEF1E2F2F45538BAE18C936C21B595D6 (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrongBox_1__ctor_mAA0952E24233FFF62E573D25C01EBC58C7284E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_4 = (&__this->____allowedCodePointsBitmap_0);
		return L_4;
	}

IL_001e:
	{
		StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765* L_5 = (StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765*)il2cpp_codegen_object_new(StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StrongBox_1__ctor_mAA0952E24233FFF62E573D25C01EBC58C7284E00(L_5, StrongBox_1__ctor_mAA0952E24233FFF62E573D25C01EBC58C7284E00_RuntimeMethod_var);
		V_0 = L_5;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<System.Int32> System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCodePoints() */, __this);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0061;
					}
				}
				{
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0061:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_0032_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_10);
				V_2 = L_11;
				int32_t L_12 = V_2;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)65535)))))
				{
					goto IL_004e_1;
				}
			}
			{
				StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765* L_13 = V_0;
				NullCheck(L_13);
				AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_14 = (&L_13->___Value_0);
				int32_t L_15 = V_2;
				AllowedBmpCodePointsBitmap_AllowChar_mCF318B486232607869FDF9E6178642075E150255_inline(L_14, ((int32_t)(uint16_t)L_15), NULL);
			}

IL_004e_1:
			{
				RuntimeObject* L_16 = V_1;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		StrongBox_1_t1ECCFB4B37B73466454D69278A4717EF5A842765* L_18 = V_0;
		NullCheck(L_18);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_19 = (&L_18->___Value_0);
		return L_19;
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
// System.Void System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14__ctor_m96154A64F50C8A114E552FC1379E5D917F1B65F7 (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14_System_IDisposable_Dispose_m659AE13CF2CFDD002E737286C1AA9FE013ACDA8B (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllowedCodePointsU3Ed__14_MoveNext_m2C9CFA113A7CC5F533EF75F49D00D2A1BFAE7374 (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_0067;
	}

IL_0027:
	{
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_4 = V_1;
		NullCheck(L_4);
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_5 = (&L_4->____allowedCodePointsBitmap_0);
		int32_t L_6 = __this->___U3CiU3E5__2_4;
		bool L_7;
		L_7 = AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline(L_5, ((int32_t)(uint16_t)L_6), NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_8 = __this->___U3CiU3E5__2_4;
		__this->___U3CU3E2__current_1 = L_8;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0057:
	{
		int32_t L_9 = __this->___U3CiU3E5__2_4;
		V_2 = L_9;
		int32_t L_10 = V_2;
		__this->___U3CiU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0067:
	{
		int32_t L_11 = __this->___U3CiU3E5__2_4;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}
}
// System.Int32 System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_mE3195B9A63A53751CD782196A132909920894816 (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_Reset_m0D5E32F55B790BBEE2CB26685070A5CACE549AE5 (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_Reset_m0D5E32F55B790BBEE2CB26685070A5CACE549AE5_RuntimeMethod_var)));
	}
}
// System.Object System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_get_Current_m38BBCA0F8AAE7E16EC705A1F6CCD4AC8FF53AE5A (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___U3CU3E2__current_1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Int32> System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mDE18BA86FE89579767B863262B0E92E029CBFEC5 (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* L_3 = (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF*)il2cpp_codegen_object_new(U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetAllowedCodePointsU3Ed__14__ctor_m96154A64F50C8A114E552FC1379E5D917F1B65F7(L_3, 0, NULL);
		V_0 = L_3;
		U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* L_4 = V_0;
		TextEncoderSettings_t893E26A25D5CD77AC6CD12AAF45CC8C14AB1296B* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator System.Text.Encodings.Web.TextEncoderSettings/<GetAllowedCodePoints>d__14::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerable_GetEnumerator_m1B20F43BB4D66202C5BC2F52C74179D2E996EF1B (U3CGetAllowedCodePointsU3Ed__14_t0DEE3587CAAD43D6EC7E23E8DC6CDCD9019488DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mDE18BA86FE89579767B863262B0E92E029CBFEC5(__this, NULL);
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
// System.Void System.Text.Encodings.Web.ThrowHelper::ThrowArgumentOutOfRangeException(System.Text.Encodings.Web.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mACA7ECF42D262ACCEF9D9D9BCF2AACDCA47AF658 (int32_t ___argument0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m5D07908988C13A5E30573F564A16448D2724F47E(L_0, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_mACA7ECF42D262ACCEF9D9D9BCF2AACDCA47AF658_RuntimeMethod_var)));
	}
}
// System.String System.Text.Encodings.Web.ThrowHelper::GetArgumentName(System.Text.Encodings.Web.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m5D07908988C13A5E30573F564A16448D2724F47E (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t5105958E328309C5A95F382E7406067DD9C5E39C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_t5105958E328309C5A95F382E7406067DD9C5E39C_il2cpp_TypeInfo_var, (&___argument0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m8C14F370900C8B1B82539519884EBE831D7BE288_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_StaticFields*)il2cpp_codegen_static_fields_for(SR_tE596913F81525C06DA5774BD7EADBE66CE21BEF5_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = ___lowerBound1;
		uint32_t L_2 = ___upperBound2;
		uint32_t L_3 = ___lowerBound1;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsValidUnicodeScalar_m6341D06901F7CB719B986E47FF9F5F591E73BFF6_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)1114112)))^((int32_t)55296)))) >= ((uint32_t)((int32_t)-1112064))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rune__ctor_m00F41C5ECA7D5E0BF8CFC18A3C467F1AAD16091F_inline (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, uint32_t ___scalarValue0, bool ___unused1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___scalarValue0;
		__this->____value_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_mDE38F64B792FCDC8C910B91B7A5C7019ECBADA44_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsBmpCodePoint_m1731BD5BA563BEACC810435FAB45DD75DCFEE5E1_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)65535))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 Rune_UnsafeCreate_m3737AF01D7128A65576819EB030DFCBD1AD19049_inline (uint32_t ___scalarValue0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___scalarValue0;
		Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rune__ctor_m00F41C5ECA7D5E0BF8CFC18A3C467F1AAD16091F_inline((&L_1), L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline (Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_mE6713FFE894D59D385CD071BB60A2618B68573C1_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_m1FFA10EDA34D1F09E82721521DCA5E2A2B41C0E8_inline(L_0, ((int32_t)55296), ((int32_t)57343), NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_m8D9EDA5D2D46942BFBE9AD439CF2638C6961073F_inline (uint32_t ___value0, Il2CppChar* ___highSurrogateCodePoint1, Il2CppChar* ___lowSurrogateCodePoint2, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___highSurrogateCodePoint1;
		uint32_t L_1 = ___value0;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___lowSurrogateCodePoint2;
		uint32_t L_3 = ___value0;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m786BFD5158D01D1AD0073DFC0609231BAF4E5777_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFirstCodePointU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m7965F884FA95909701DC2125445C86B43B549720_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiByteMap_TryLookup_m51327CA173DD3C3BC6D46EDD00A935BDD22781F0_inline (AsciiByteMap_t73DE761A6140DF1F5161EEF7AB86C29D10D1CC65* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___key0, uint8_t* ___value1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsAscii_m926D4D25D848D71B5654EBC4C95CFEF863A8CC3B((&___key0), NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		U3CBufferU3Ee__FixedBuffer_t4DCEAE18051B9DD5B9B154FBBFC5C00A81ADCCCD* L_1 = (&__this->___Buffer_0);
		uint8_t* L_2 = (&L_1->___FixedElementField_0);
		int32_t L_3;
		L_3 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___key0), NULL);
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))));
		V_0 = (uint8_t)L_4;
		uint8_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t* L_6 = ___value1;
		uint8_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)L_7;
		return (bool)1;
	}

IL_0027:
	{
		uint8_t* L_8 = ___value1;
		*((int8_t*)L_8) = (int8_t)0;
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline (uint32_t ___value0, uintptr_t* ___index1, int32_t* ___offset2, const RuntimeMethod* method) 
{
	{
		uintptr_t* L_0 = ___index1;
		uint32_t L_1 = ___value0;
		*((intptr_t*)L_0) = (intptr_t)((uintptr_t)((int32_t)((uint32_t)L_1>>5)));
		int32_t* L_2 = ___offset2;
		uint32_t L_3 = ___value0;
		*((int32_t*)L_2) = (int32_t)((int32_t)((int32_t)L_3&((int32_t)31)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_AllowChar_mCF318B486232607869FDF9E6178642075E150255_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_1 = (&__this->___Bitmap_0);
		uint32_t* L_2 = (&L_1->___FixedElementField_0);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5|((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidChar_m312567B7EAF2A1712F7D9EF66DE45262C5A75395_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_1 = (&__this->___Bitmap_0);
		uint32_t* L_2 = (&L_1->___FixedElementField_0);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5&((~((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___source0;
		uint32_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_inline(L_0, MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_3 = V_0;
		uint32_t L_4;
		L_4 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_3, NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		uint32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCharAllowed_m35BA53D253ABFC3956CF7A066F814A4E27400A65_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_1 = (&__this->___Bitmap_0);
		uint32_t* L_2 = (&L_1->___FixedElementField_0);
		uintptr_t L_3 = V_0;
		int32_t L_4 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4)))))));
		int32_t L_5 = V_1;
		if (!((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))))))
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784_inline (AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		bool L_1;
		L_1 = UnicodeUtility_IsBmpCodePoint_m1731BD5BA563BEACC810435FAB45DD75DCFEE5E1_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		uint32_t L_2 = ___value0;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_m3BA4E83EDDC9B4E097B60B695D97129B84BA31BF_inline(L_2, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t49166920393F05430CD9C33FBADFB2C5B7B91A07* L_3 = (&__this->___Bitmap_0);
		uint32_t* L_4 = (&L_3->___FixedElementField_0);
		uintptr_t L_5 = V_0;
		int32_t L_6 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_5), ((int64_t)4)))))));
		int32_t L_7 = V_1;
		if (!((int32_t)(L_6&((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__AssertThisNotNull_mA3244C2240DF3C39C442815E852B9E35CDA19B83_inline (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiPreescapedData_TryGetPreescapedData_mFAD9B22F27B908437820CFF8E0E09EE38E29FA5D_inline (AsciiPreescapedData_t9327534AE71C63E101F48F7A0E5121C43F1B78BD* __this, uint32_t ___codePoint0, uint64_t* ___preescapedData1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___codePoint0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_001c;
		}
	}
	{
		uint64_t* L_1 = ___preescapedData1;
		U3CDataU3Ee__FixedBuffer_tF714B57AAA84902A9E491237DCEC6FA44847887E* L_2 = (&__this->___Data_0);
		uint64_t* L_3 = (&L_2->___FixedElementField_0);
		uint32_t L_4 = ___codePoint0;
		int64_t L_5 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_4), ((int64_t)8)))))));
		*((int64_t*)L_1) = (int64_t)L_5;
		return (bool)1;
	}

IL_001c:
	{
		uint64_t* L_6 = ___preescapedData1;
		*((int64_t*)L_6) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_IsScalarValueAllowed_m88271348696719D01CCCB8E11C020420B034AF47_inline (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, Rune_t2534BA5D625D1913F5021B38D90CA6A133D4ADE9 ___value0, const RuntimeMethod* method) 
{
	{
		AllowedBmpCodePointsBitmap_t9911914A8410D9ADD5C00D4C9026F055FFB43FC6* L_0 = (&__this->____allowedBmpCodePoints_2);
		int32_t L_1;
		L_1 = Rune_get_Value_mCA4AB355F28C978185448999E9618FEE3C1B688A_inline((&___value0), NULL);
		bool L_2;
		L_2 = AllowedBmpCodePointsBitmap_IsCodePointAllowed_m277F2E112B32CF828A952143B377EDBC0B4FB784_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_TryWriteUInt64LittleEndian_m7D5E41B8B07C02C78FD3C67CCF159F7A97E7D2DF_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, int32_t ___offset1, uint64_t ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___span0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		int32_t L_1 = ___offset1;
		bool L_2;
		L_2 = SpanUtility_AreValidIndexAndLength_m459BD2CF00AB2A7AAFF49796C1EC464FE4F898D4_inline(L_0, L_1, 8, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_4 = ___value2;
		uint64_t L_5;
		L_5 = BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline(L_4, NULL);
		___value2 = L_5;
	}

IL_001f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6 = ___span0;
		uint8_t* L_7;
		L_7 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_6, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		int32_t L_8 = ___offset1;
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, (intptr_t)((uintptr_t)L_8));
		uint64_t L_10 = ___value2;
		il2cpp_unsafe_write_unaligned(L_9, L_10);
		return (bool)1;
	}

IL_0034:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_FindFirstCharacterToEncode_m07ADBE2EE6EF6E7BFA0DD39464FC02315A52A3E4_inline (OptimizedInboxTextEncoder_t011A514F983877ED595D51721FD2F71E4AE464F2* __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___text0;
		int32_t L_1 = ___textLength1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_inline((&L_2), (void*)L_0, L_1, /*hidden argument*/ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_RuntimeMethod_var);
		int32_t L_3;
		L_3 = OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_m07D47124853E98545FDA8559FF486EFC7B6C2BDC(__this, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToBytesBuffer_m177A76B3479812420BE4BEC463134F6236E8B6E7_inline (uint8_t ___value0, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer1, int32_t ___startingIndex2, uint32_t ___casing3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___value0;
		uint8_t L_1 = ___value0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___casing3;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___startingIndex2;
		uint8_t* L_6;
		L_6 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(L_5, 1))), ((&___buffer1))->____length_1);
		uint32_t L_7 = V_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		int32_t L_8 = ___startingIndex2;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (L_8), ((&___buffer1))->____length_1);
		uint32_t L_10 = V_1;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mCB0AC125106CDDF907FE901ECF499607D31A5F2C_inline (uint32_t ___scalar0, Il2CppChar* ___highSurrogate1, Il2CppChar* ___lowSurrogate2, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___highSurrogate1;
		uint32_t L_1 = ___scalar0;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___lowSurrogate2;
		uint32_t L_3 = ___scalar0;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToCharsBuffer_mE80A9EB4FFBBCB335CE6FC1DFB551A28FBE02BAA_inline (uint8_t ___value0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___buffer1, int32_t ___startingIndex2, uint32_t ___casing3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___value0;
		uint8_t L_1 = ___value0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___casing3;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___startingIndex2;
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(L_5, 1))), ((&___buffer1))->____length_1);
		uint32_t L_7 = V_1;
		*((int16_t*)L_6) = (int16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_7&((int32_t)255))));
		int32_t L_8 = ___startingIndex2;
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___buffer1))->____pointer_0))->value, (L_8), ((&___buffer1))->____length_1);
		uint32_t L_10 = V_1;
		*((int16_t*)L_9) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_AreValidIndexAndLength_m459BD2CF00AB2A7AAFF49796C1EC464FE4F898D4_inline (int32_t ___spanRealLength0, int32_t ___requestedOffset1, int32_t ___requestedLength2, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___requestedOffset1;
		int32_t L_2 = ___spanRealLength0;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_3 = ___requestedLength2;
		int32_t L_4 = ___spanRealLength0;
		int32_t L_5 = ___requestedOffset1;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		int32_t L_6 = ___spanRealLength0;
		int32_t L_7 = ___requestedOffset1;
		int32_t L_8 = ___requestedLength2;
		if ((!(((uint64_t)((int64_t)(uint64_t)((uint32_t)L_6))) < ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_7)), ((int64_t)(uint64_t)((uint32_t)L_8))))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline (uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___value0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)32))), ((int64_t)(uint64_t)L_3)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalar_m0C09469AAD2B20098F8E1038DC56725C3623A224_inline (TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691* __this, uint32_t ___unicodeScalar0, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___buffer1, int32_t* ___charsWritten2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___buffer1;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		V_1 = L_1;
		Il2CppChar* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		uint32_t L_3 = ___unicodeScalar0;
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___buffer1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t* L_6 = ___charsWritten2;
		bool L_7;
		L_7 = VirtualFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4 /* System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&) */, __this, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_mA023CB7BCEE4210B23D6FBFA1B421D4C53F31D35_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFirstCodePointU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_m3664F9267AB716A55BB92139410B57B47C1AD154_inline (UnicodeRange_t39A4F977F558B4F00AFE470AD6573FA988BDA836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>((uint8_t*)L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5A8FE18532332A4719413C001353E1EF3721037C_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index1;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m74F946F63AE198CE9DE6862EC7CECF5505EF82BC_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index1;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m816920804DCC482BD492BBEAAE3DDA79E586C431_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index1;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4A5F40C9F67F6747AD34013E89D148727DE6826_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index1;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		if (!false)
		{
			goto IL_0034;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>(L_1);
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)((int32_t)(L_4/L_5))))), NULL);
		return;
	}

IL_0034:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_6 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_6;
		Il2CppChar* L_7;
		L_7 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>(L_7);
		int32_t L_9 = (int32_t)__this->____length_1;
		int32_t L_10;
		L_10 = il2cpp_unsafe_sizeof<Il2CppChar>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_8, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_9), ((int64_t)L_10))), NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___source0;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uint32_t L_6;
		L_6 = il2cpp_unsafe_read_unaligned<uint32_t>(L_5);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
