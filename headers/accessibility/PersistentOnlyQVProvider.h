#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources {
class PersistentOnlyQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowPersistentEmptyStringValue@PersistentOnlyQVProvider@Resources@Microsoft@@UEBA_NXZ
    virtual bool AllowPersistentEmptyStringValue() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PersistentOnlyQVProvider@Resources@Microsoft@@SAJPEBVCoreProfile@23@PEBG1_NPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, unsigned short const *, unsigned short const *, bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@PersistentOnlyQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPersistentQualifier@PersistentOnlyQVProvider@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsPersistentQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPersistentQualifierValue@PersistentOnlyQVProvider@Resources@Microsoft@@UEBAJPEBG0PEBVIProviderDataSources@23@@Z
    virtual long SetPersistentQualifierValue(unsigned short const *, unsigned short const *, WindissectOpaque const *) const;
};
} // namespace Microsoft::Resources
