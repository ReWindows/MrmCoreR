#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
namespace Microsoft::Resources {
class AtomPoolGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAtomPool@AtomPoolGroup@Resources@Microsoft@@QEAAJPEAVIAtomPool@23@_N@Z
    long AddAtomPool(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAtomPool@AtomPoolGroup@Resources@Microsoft@@QEAAJPEAVIAtomPool@23@H_N@Z
    long AddAtomPool(WindissectOpaque *, int, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AtomPoolGroup@Resources@Microsoft@@QEAA@XZ
    AtomPoolGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AtomPoolGroup@Resources@Microsoft@@SAJHPEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendPools@AtomPoolGroup@Resources@Microsoft@@QEAAJH@Z
    long ExtendPools(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtomPool@AtomPoolGroup@Resources@Microsoft@@QEAAJPEAVIAtomPool@23@@Z
    long RemoveAtomPool(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AtomPoolGroup@Resources@Microsoft@@UEAA@XZ
    virtual ~AtomPoolGroup();
};
} // namespace Microsoft::Resources
