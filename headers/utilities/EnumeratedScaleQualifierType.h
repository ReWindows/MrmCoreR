#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources {
class EnumeratedScaleQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateScaleFactorScore@EnumeratedScaleQualifierType@Resources@Microsoft@@SANHH@Z
    static double CalculateScaleFactorScore(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnumeratedScaleQualifierType@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@EnumeratedScaleQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPackagingFlags@EnumeratedScaleQualifierType@Resources@Microsoft@@UEBA?AW4_PackagingFlags@IBuildQualifierType@23@XZ
    virtual int GetDefaultPackagingFlags() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnumeratedScaleQualifierType@Resources@Microsoft@@IEAA@XZ
    EnumeratedScaleQualifierType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InnerCompare@EnumeratedScaleQualifierType@Resources@Microsoft@@MEBAJPEBVIQualifier@23@0PEAW4_DEFCOMPARISON@@@Z
    virtual long InnerCompare(WindissectOpaque const *, WindissectOpaque const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOrMakeCompatibleSingleQualifierValue@EnumeratedScaleQualifierType@Resources@Microsoft@@MEBAJPEBGPEAVStringResult@23@@Z
    virtual long ValidateOrMakeCompatibleSingleQualifierValue(unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSingleQualifierValue@EnumeratedScaleQualifierType@Resources@Microsoft@@MEBAJPEBG@Z
    virtual long ValidateSingleQualifierValue(unsigned short const *) const;
};
} // namespace Microsoft::Resources
