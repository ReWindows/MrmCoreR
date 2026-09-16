#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources {
class ResourceReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PayloadIsResourceIndex@ResourceReference@Resources@Microsoft@@QEBA_NXZ
    bool PayloadIsResourceIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAsString@ResourceReference@Resources@Microsoft@@QEBAJPEAVIUnifiedResourceView@23@PEAVIResolver@23@PEAVStringResult@23@@Z
    long ResolveAsString(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@ResourceReference@Resources@Microsoft@@QEAAJ_KPEBX@Z
    long Set(uint64_t, void const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateReferenceBlob@ResourceReference@Resources@Microsoft@@IEAAJXZ
    long ValidateReferenceBlob();
};
} // namespace Microsoft::Resources
