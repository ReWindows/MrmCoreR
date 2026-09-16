#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class ContrastQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ContrastQualifierType@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@ContrastQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContrastQualifierType@Resources@Microsoft@@IEAA@XZ
    ContrastQualifierType();
};
} // namespace Microsoft::Resources
