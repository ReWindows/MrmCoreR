#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources {
class ScaleQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateScaleFactorScore@ScaleQualifierType@Resources@Microsoft@@SANHH@Z
    static double CalculateScaleFactorScore(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ScaleQualifierType@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@ScaleQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPackagingFlags@ScaleQualifierType@Resources@Microsoft@@UEBA?AW4_PackagingFlags@IBuildQualifierType@23@XZ
    virtual int GetDefaultPackagingFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagingInfo@ScaleQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@IPEAPEBG_KPEAW4_PackagingFlags@IBuildQualifierType@23@PEAVStringResult@23@@Z
    virtual long GetPackagingInfo(WindissectOpaque const *, unsigned int, unsigned short const * *, uint64_t, int *, WindissectOpaque *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScaleQualifierType@Resources@Microsoft@@IEAA@XZ
    ScaleQualifierType();
};
} // namespace Microsoft::Resources
