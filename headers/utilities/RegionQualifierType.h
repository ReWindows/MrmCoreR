#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources {
class RegionQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@RegionQualifierType@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@RegionQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InnerCompare@RegionQualifierType@Resources@Microsoft@@MEBAJPEBVIQualifier@23@0PEAW4_DEFCOMPARISON@@@Z
    virtual long InnerCompare(WindissectOpaque const *, WindissectOpaque const *, int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegionQualifierType@Resources@Microsoft@@IEAA@XZ
    RegionQualifierType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSingleQualifierValue@RegionQualifierType@Resources@Microsoft@@MEBAJPEBG@Z
    virtual long ValidateSingleQualifierValue(unsigned short const *) const;
};
} // namespace Microsoft::Resources
