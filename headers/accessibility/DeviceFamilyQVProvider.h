#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class DeviceFamilyQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DeviceFamilyQVProvider@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagePlatformInfo@DeviceFamilyQVProvider@Resources@Microsoft@@SAJPEBGPEAHPEA_KPEAW4_MrmPlatformVersionInternal@23@@Z
    static long GetPackagePlatformInfo(unsigned short const *, int *, uint64_t *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@DeviceFamilyQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
