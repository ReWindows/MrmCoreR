#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class GenericQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@GenericQVProvider@Resources@Microsoft@@SAJPEBGPEAPEAV123@@Z
    static long CreateInstance(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@GenericQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GenericQVProvider@Resources@Microsoft@@UEAA@XZ
    virtual ~GenericQVProvider();
};
} // namespace Microsoft::Resources
