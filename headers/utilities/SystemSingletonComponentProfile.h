#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources {
class SystemSingletonComponentProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SystemSingletonComponentProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectSharedState@SystemSingletonComponentProfile@Resources@Microsoft@@UEBAJPEAW4_MrtSharedObjectState@23@@Z
    virtual long GetObjectSharedState(int *) const;
};
} // namespace Microsoft::Resources
