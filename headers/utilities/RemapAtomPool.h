#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class RemapAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@RemapAtomPool@Resources@Microsoft@@SAJHHHPEBGPEAPEAV123@@Z
    static long CreateInstance(int, int, int, unsigned short const *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemapAtomPool@Resources@Microsoft@@UEAA@XZ
    virtual ~RemapAtomPool();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@RemapAtomPool@Resources@Microsoft@@IEAAJHHHPEBG@Z
    long Init(int, int, int, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemapAtomPool@Resources@Microsoft@@IEAA@XZ
    RemapAtomPool();
};
} // namespace Microsoft::Resources
