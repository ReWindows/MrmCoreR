#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources {
class ScaleQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ScaleQVProvider@Resources@Microsoft@@SAJ_NPEAPEAV123@@Z
    static long CreateInstance(bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@ScaleQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
