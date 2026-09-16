#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 12 member(s).
namespace Microsoft::Resources {
class LanguageQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@LanguageQualifierType@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@LanguageQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPackagingFlags@LanguageQualifierType@Resources@Microsoft@@UEBA?AW4_PackagingFlags@IBuildQualifierType@23@XZ
    virtual int GetDefaultPackagingFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxQualifierEntries@LanguageQualifierType@Resources@Microsoft@@UEBAHXZ
    virtual int GetMaxQualifierEntries() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagingInfo@LanguageQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@IPEAPEBG_KPEAW4_PackagingFlags@IBuildQualifierType@23@PEAVStringResult@23@@Z
    virtual long GetPackagingInfo(WindissectOpaque const *, unsigned int, unsigned short const * *, uint64_t, int *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQualifierComparison@LanguageQualifierType@Resources@Microsoft@@UEBAJUAtom@23@W4ConditionOperator@ICondition@23@PEBG@Z
    virtual long ValidateQualifierComparison(WindissectOpaque, int, unsigned short const *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InnerCompare@LanguageQualifierType@Resources@Microsoft@@MEBAJPEBVIQualifier@23@0PEAW4_DEFCOMPARISON@@@Z
    virtual long InnerCompare(WindissectOpaque const *, WindissectOpaque const *, int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LanguageQualifierType@Resources@Microsoft@@IEAA@XZ
    LanguageQualifierType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSingleQualifierValue@LanguageQualifierType@Resources@Microsoft@@MEBAJPEBG@Z
    virtual long ValidateSingleQualifierValue(unsigned short const *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClosestLanguageInList@LanguageQualifierType@Resources@Microsoft@@AEBAJPEBGPEAPEBG_K1PEAN@Z
    long _GetClosestLanguageInList(unsigned short const *, unsigned short const * *, uint64_t, unsigned short const * *, double *) const;
};
} // namespace Microsoft::Resources
