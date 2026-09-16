#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class LayoutDirectionQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@LayoutDirectionQVProvider@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutDirection@LayoutDirectionQVProvider@Resources@Microsoft@@QEBA?AW4BCP47_SCRIPT_DIRECTIONALITY@Internal@Windows@@UAtom@23@PEBVIProviderDataSources@23@@Z
    int GetLayoutDirection(WindissectOpaque, WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@LayoutDirectionQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
