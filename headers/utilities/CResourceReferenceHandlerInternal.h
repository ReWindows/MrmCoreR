#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::Runtime {
class CResourceReferenceHandlerInternal {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetM3ResourceString@CResourceReferenceHandlerInternal@Runtime@Resources@Microsoft@@QEAAJPEBGPEAVCContext@234@W4RESOURCE_SEARCH_OPTIONS@234@PEAPEBGPEAVCResolvedInstanceCollectionInternal@234@PEAPEAVCResourceIndexInternal@234@PEA_N@Z
    long GetM3ResourceString(unsigned short const *, WindissectOpaque *, int, unsigned short const * *, WindissectOpaque *, WindissectOpaque * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetFullyQualifiedReferenceType@CResourceReferenceHandlerInternal@Runtime@Resources@Microsoft@@SAJPEBGPEAW4FULLY_QUALIFIED_REFERENCE_TYPE@234@@Z
    static long s_GetFullyQualifiedReferenceType(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSchemaName@CResourceReferenceHandlerInternal@Runtime@Resources@Microsoft@@SAJPEBGPEAPEAG@Z
    static long s_GetSchemaName(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ParseFullyQualifiedReference@CResourceReferenceHandlerInternal@Runtime@Resources@Microsoft@@SAJPEBGPEAG1PEAW4FULLY_QUALIFIED_REFERENCE_TYPE@234@@Z
    static long s_ParseFullyQualifiedReference(unsigned short const *, unsigned short *, unsigned short *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetManagedResourceMap@CResourceReferenceHandlerInternal@Runtime@Resources@Microsoft@@AEAAJPEBG0_NPEAPEAVCResourceIndexInternal@234@@Z
    long _GetManagedResourceMap(unsigned short const *, unsigned short const *, bool, WindissectOpaque * *);
};
} // namespace Microsoft::Resources::Runtime
