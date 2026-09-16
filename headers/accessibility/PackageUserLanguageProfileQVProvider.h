#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class PackageUserLanguageProfileQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PackageUserLanguageProfileQVProvider@Resources@Microsoft@@SAJPEBGPEBVCoreProfile@23@00PEAPEAV123@@Z
    static long CreateInstance(unsigned short const *, WindissectOpaque const *, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@PackageUserLanguageProfileQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPersistentQualifier@PackageUserLanguageProfileQVProvider@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsPersistentQualifier() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUserLanguageProfileQVProvider@Resources@Microsoft@@UEAA@XZ
    virtual ~PackageUserLanguageProfileQVProvider();
};
} // namespace Microsoft::Resources
