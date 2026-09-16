#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class DXFeatureLevelQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DXFeatureLevelQualifierType@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@DXFeatureLevelQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPackagingFlags@DXFeatureLevelQualifierType@Resources@Microsoft@@UEBA?AW4_PackagingFlags@IBuildQualifierType@23@XZ
    virtual int GetDefaultPackagingFlags() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DXFeatureLevelQualifierType@Resources@Microsoft@@IEAA@XZ
    DXFeatureLevelQualifierType();
};
} // namespace Microsoft::Resources
