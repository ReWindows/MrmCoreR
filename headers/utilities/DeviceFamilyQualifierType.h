#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class DeviceFamilyQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DeviceFamilyQualifierType@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@DeviceFamilyQualifierType@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEBGPEAN@Z
    virtual long Evaluate(WindissectOpaque const *, unsigned short const *, double *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeviceFamilyQualifierType@Resources@Microsoft@@IEAA@XZ
    DeviceFamilyQualifierType();
};
} // namespace Microsoft::Resources
