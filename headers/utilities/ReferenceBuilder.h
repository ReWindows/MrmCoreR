#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources {
class ReferenceBuilder {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalReferenceBlob@ReferenceBuilder@Resources@Microsoft@@SAJPEBVNamedResourceResult@23@PEAVBlobResult@23@@Z
    static long GetInternalReferenceBlob(WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiteralBlob@ReferenceBuilder@Resources@Microsoft@@SAJPEBGPEAVBlobResult@23@@Z
    static long GetLiteralBlob(unsigned short const *, WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildReferenceBlob@ReferenceBuilder@Resources@Microsoft@@KAJGPEBG_KPEBXPEAVBlobResult@23@@Z
    static long BuildReferenceBlob(unsigned short, unsigned short const *, uint64_t, void const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetOnlyValue@ReferenceBuilder@Resources@Microsoft@@KA_NPEBVNamedResourceResult@23@PEAVStringResult@23@@Z
    static bool TryGetOnlyValue(WindissectOpaque const *, WindissectOpaque *);
};
} // namespace Microsoft::Resources
