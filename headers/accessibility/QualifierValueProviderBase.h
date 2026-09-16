#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources {
class QualifierValueProviderBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowPersistentEmptyStringValue@QualifierValueProviderBase@Resources@Microsoft@@UEBA_NXZ
    virtual bool AllowPersistentEmptyStringValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@QualifierValueProviderBase@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValue(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPersistentQualifier@QualifierValueProviderBase@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsPersistentQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPersistentQualifierValue@QualifierValueProviderBase@Resources@Microsoft@@UEBAJPEBG0PEBVIProviderDataSources@23@@Z
    virtual long SetPersistentQualifierValue(unsigned short const *, unsigned short const *, WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QualifierValueProviderBase@Resources@Microsoft@@UEAA@XZ
    virtual ~QualifierValueProviderBase();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QualifierValueProviderBase@Resources@Microsoft@@IEAA@XZ
    QualifierValueProviderBase();
};
} // namespace Microsoft::Resources
