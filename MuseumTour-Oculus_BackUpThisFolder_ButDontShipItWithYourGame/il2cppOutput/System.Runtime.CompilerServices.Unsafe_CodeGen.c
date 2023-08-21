#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000002 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000003 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x00000004 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000005 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000006 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x00000007 T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x00000008 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E,
};
static const int32_t s_InvokerIndices[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7390,
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x06000005, { 0, 1 } },
	{ 0x06000006, { 1, 1 } },
};
extern const uint32_t g_rgctx_T_t9128C56B93A0B3D20E4B0519028DDB3D94DCD377;
extern const uint32_t g_rgctx_T_t8D7FEEC44B0948A12AEC7D76039F751C91E63FBB;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9128C56B93A0B3D20E4B0519028DDB3D94DCD377 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8D7FEEC44B0948A12AEC7D76039F751C91E63FBB },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	2,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
