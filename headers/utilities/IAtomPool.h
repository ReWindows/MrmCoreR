#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class IAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@IAtomPool@Resources@Microsoft@@UEAAJPEAPEAV123@@Z
    virtual long Clone(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@IAtomPool@Resources@Microsoft@@UEBA_NH@Z
    virtual bool Contains(int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IAtomPool@Resources@Microsoft@@QEAA@XZ
    IAtomPool();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAtom@IAtomPool@Resources@Microsoft@@UEBA_NHPEAUAtom@23@@Z
    virtual bool TryGetAtom(int, WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
