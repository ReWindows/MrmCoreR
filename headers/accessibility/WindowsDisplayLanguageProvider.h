#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class WindowsDisplayLanguageProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@WindowsDisplayLanguageProvider@Resources@Microsoft@@SAJPEBVCoreProfile@23@PEBG1PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@WindowsDisplayLanguageProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPersistentQualifier@WindowsDisplayLanguageProvider@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsPersistentQualifier() const;
};
} // namespace Microsoft::Resources
