#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class ScalePerWindowQVProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ScalePerWindowQVProvider@Resources@Microsoft@@SAJ_NPEAPEAV123@@Z
    static long CreateInstance(bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValueInner@ScalePerWindowQVProvider@Resources@Microsoft@@UEBAJUAtom@23@PEBVIProviderDataSources@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValueInner(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScalePerWindowQVProvider@Resources@Microsoft@@UEAA@XZ
    virtual ~ScalePerWindowQVProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ScalePerWindowQVProvider@Resources@Microsoft@@IEAAJXZ
    long Init();
};
} // namespace Microsoft::Resources
