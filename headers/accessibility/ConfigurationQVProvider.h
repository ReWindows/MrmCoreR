#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources {
class ConfigurationQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ConfigurationQVProvider@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@ConfigurationQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
