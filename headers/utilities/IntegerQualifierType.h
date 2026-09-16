#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources {
class IntegerQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareForValue@IntegerQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@0PEBGPEAW4_DEFCOMPARISON@@@Z
    virtual long CompareForValue(WindissectOpaque const *, WindissectOpaque const *, unsigned short const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@IntegerQualifierType@Resources@Microsoft@@SAJHH_NPEAPEAV123@@Z
    static long CreateInstance(int, int, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@IntegerQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InnerCompare@IntegerQualifierType@Resources@Microsoft@@MEBAJPEBVIQualifier@23@0PEAW4_DEFCOMPARISON@@@Z
    virtual long InnerCompare(WindissectOpaque const *, WindissectOpaque const *, int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IntegerQualifierType@Resources@Microsoft@@IEAA@HH_N@Z
    IntegerQualifierType(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSingleQualifierValue@IntegerQualifierType@Resources@Microsoft@@MEBAJPEBG@Z
    virtual long ValidateSingleQualifierValue(unsigned short const *) const;
};
} // namespace Microsoft::Resources
