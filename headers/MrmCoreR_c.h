// Flat C exports observed in MrmCoreR.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef MRMCORER_C_H
#define MRMCORER_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: ResourceManagerQueueGetString (ABI unverified)
// Export: ShouldMergeInproc (ABI unverified)
// Export: GetStringValueForManifestField (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)
// Export: WINRT_GetActivationFactory (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: WINRT_CanUnloadNow (ABI unverified)
// Export: GetInternalReferenceBlobForManifestValue (ABI unverified)
// Export: ResourceManagerQueueIsResourceReference (ABI unverified)
// Export: GetMergedSystemPriEx (ABI unverified)
// Export: ResourceManagerQueueReset (ABI unverified)
// Export: ResourceManagerQueueGetCurrentDepth (ABI unverified)
// Export: ResourceManagerQueueSetGlobalFlags (ABI unverified)
// Export: ResourceManagerQueueGetGlobalFlags (ABI unverified)
// Export: ResourceManagerQueueGetMrtCachePathForPackage (ABI unverified)
// Export: ResourceManagerQueueGetStringDirect (ABI unverified)
// Export: GetMergedSystemPri (ABI unverified)
// Export: MergeResourcePackPri (ABI unverified)
// Export: MergeSystemPriFiles (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // MRMCORER_C_H
