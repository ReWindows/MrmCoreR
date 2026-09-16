#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 18 member(s).
namespace Microsoft::Resources {
class StaticAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@StaticAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@@Z
    virtual bool Contains(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@StaticAtomPool@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool Contains(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StaticAtomPool@Resources@Microsoft@@SAJPEBQEBGHPEBGW4_StaticAtomPoolFlags@123@PEAPEAV123@@Z
    static long CreateInstance(unsigned short const * const *, int, unsigned short const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@StaticAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@PEBG@Z
    virtual bool Equals(WindissectOpaque, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomPoolGroup@StaticAtomPool@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@23@XZ
    virtual WindissectOpaque * GetAtomPoolGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@StaticAtomPool@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetDescription() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCaseInsensitive@StaticAtomPool@Resources@Microsoft@@UEBA_NXZ
    virtual bool GetIsCaseInsensitive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumAtoms@StaticAtomPool@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoolIndex@StaticAtomPool@Resources@Microsoft@@UEBAHXZ
    virtual int GetPoolIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtomPoolGroup@StaticAtomPool@Resources@Microsoft@@UEAAXPEAVAtomPoolGroup@23@@Z
    virtual void SetAtomPoolGroup(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPoolIndex@StaticAtomPool@Resources@Microsoft@@UEAAXH@Z
    virtual void SetPoolIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAtom@StaticAtomPool@Resources@Microsoft@@UEBA_NPEBGPEAUAtom@23@@Z
    virtual bool TryGetAtom(unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIndex@StaticAtomPool@Resources@Microsoft@@UEBA_NPEBGPEAH@Z
    virtual bool TryGetIndex(unsigned short const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetString@StaticAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@PEAVStringResult@23@@Z
    virtual bool TryGetString(WindissectOpaque, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetString@StaticAtomPool@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@@Z
    virtual bool TryGetString(int, WindissectOpaque *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StaticAtomPool@Resources@Microsoft@@IEAA@PEBQEBGHPEBGW4_DEFCOMPAREOPTIONS@@@Z
    StaticAtomPool(unsigned short const * const *, int, unsigned short const *, int);
};
} // namespace Microsoft::Resources
