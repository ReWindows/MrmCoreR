#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources {
class QualifierTypeBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@QualifierTypeBase@Resources@Microsoft@@UEBAJPEBVIQualifier@23@0PEAW4_DEFCOMPARISON@@@Z
    virtual long Compare(WindissectOpaque const *, WindissectOpaque const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareForValue@QualifierTypeBase@Resources@Microsoft@@UEBAJPEBVIQualifier@23@0PEBGPEAW4_DEFCOMPARISON@@@Z
    virtual long CompareForValue(WindissectOpaque const *, WindissectOpaque const *, unsigned short const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@QualifierTypeBase@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPackagingFlags@QualifierTypeBase@Resources@Microsoft@@UEBA?AW4_PackagingFlags@IBuildQualifierType@23@XZ
    virtual int GetDefaultPackagingFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxQualifierEntries@QualifierTypeBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetMaxQualifierEntries() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagingInfo@QualifierTypeBase@Resources@Microsoft@@UEBAJPEBVIQualifier@23@IPEAPEBG_KPEAW4_PackagingFlags@IBuildQualifierType@23@PEAVStringResult@23@@Z
    virtual long GetPackagingInfo(WindissectOpaque const *, unsigned int, unsigned short const * *, uint64_t, int *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOrMakeCompatibleQualifierValue@QualifierTypeBase@Resources@Microsoft@@UEBAJPEBGPEAVStringResult@23@@Z
    virtual long ValidateOrMakeCompatibleQualifierValue(unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQualifier@QualifierTypeBase@Resources@Microsoft@@UEBAJPEBVIQualifier@23@@Z
    virtual long ValidateQualifier(WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQualifierComparison@QualifierTypeBase@Resources@Microsoft@@UEBAJUAtom@23@W4ConditionOperator@ICondition@23@PEBG@Z
    virtual long ValidateQualifierComparison(WindissectOpaque, int, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQualifierValue@QualifierTypeBase@Resources@Microsoft@@UEBAJPEBG@Z
    virtual long ValidateQualifierValue(unsigned short const *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateSingleQualifierValue@QualifierTypeBase@Resources@Microsoft@@MEBANPEBG0@Z
    virtual double EvaluateSingleQualifierValue(unsigned short const *, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InnerCompare@QualifierTypeBase@Resources@Microsoft@@MEBAJPEBVIQualifier@23@0PEAW4_DEFCOMPARISON@@@Z
    virtual long InnerCompare(WindissectOpaque const *, WindissectOpaque const *, int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QualifierTypeBase@Resources@Microsoft@@IEAA@W4_QualifierTypeFlags@012@@Z
    QualifierTypeBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOrMakeCompatibleSingleQualifierValue@QualifierTypeBase@Resources@Microsoft@@MEBAJPEBGPEAVStringResult@23@@Z
    virtual long ValidateOrMakeCompatibleSingleQualifierValue(unsigned short const *, WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
