#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class EnumerationQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnumerationQualifierType@Resources@Microsoft@@SAJPEBQEBG_KPEAPEAV123@@Z
    static long CreateInstance(unsigned short const * const *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@EnumerationQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnumerationQualifierType@Resources@Microsoft@@IEAA@PEBQEBG_K@Z
    EnumerationQualifierType(unsigned short const * const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSingleQualifierValue@EnumerationQualifierType@Resources@Microsoft@@MEBAJPEBG@Z
    virtual long ValidateSingleQualifierValue(unsigned short const *) const;
};
} // namespace Microsoft::Resources
