#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources {
class EnvironmentMapping {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnvironmentMapping@Resources@Microsoft@@SAJPEBVCoreProfile@23@PEBVIEnvironmentCollection@23@PEBX_KPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, void const *, uint64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentInfo@EnvironmentMapping@Resources@Microsoft@@QEBAJPEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    long GetEnvironmentInfo(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnvironmentMapping@Resources@Microsoft@@UEAA@XZ
    virtual ~EnvironmentMapping();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnvironmentMapping@Resources@Microsoft@@AEAA@XZ
    EnvironmentMapping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@EnvironmentMapping@Resources@Microsoft@@AEAAJPEBVCoreProfile@23@PEBVIEnvironmentCollection@23@PEBX_K@Z
    long Init(WindissectOpaque const *, WindissectOpaque const *, void const *, uint64_t);
};
} // namespace Microsoft::Resources
