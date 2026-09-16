#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 23 member(s).
namespace Microsoft::Resources {
class FileAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@FileAtomPool@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool Contains(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@FileAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@@Z
    virtual bool Contains(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FileAtomPool@Resources@Microsoft@@SAJPEBVIFileSection@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@FileAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@PEBG@Z
    virtual bool Equals(WindissectOpaque, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomPoolGroup@FileAtomPool@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@23@XZ
    virtual WindissectOpaque * GetAtomPoolGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@FileAtomPool@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetDescription() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCaseInsensitive@FileAtomPool@Resources@Microsoft@@UEBA_NXZ
    virtual bool GetIsCaseInsensitive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumAtoms@FileAtomPool@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoolIndex@FileAtomPool@Resources@Microsoft@@UEBAHXZ
    virtual int GetPoolIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtomPoolGroup@FileAtomPool@Resources@Microsoft@@UEAAXPEAVAtomPoolGroup@23@@Z
    virtual void SetAtomPoolGroup(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPoolIndex@FileAtomPool@Resources@Microsoft@@UEAAXH@Z
    virtual void SetPoolIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAtom@FileAtomPool@Resources@Microsoft@@UEBA_NPEBGPEAUAtom@23@@Z
    virtual bool TryGetAtom(unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIndex@FileAtomPool@Resources@Microsoft@@UEBA_NPEBGPEAH@Z
    virtual bool TryGetIndex(unsigned short const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetString@FileAtomPool@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@@Z
    virtual bool TryGetString(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetString@FileAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@PEAVStringResult@23@@Z
    virtual bool TryGetString(WindissectOpaque, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateHeader@FileAtomPool@Resources@Microsoft@@SAJPEBXIPEAI@Z
    static long ValidateHeader(void const *, unsigned int, unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareAtHashIndex@FileAtomPool@Resources@Microsoft@@IEBA?AW4_DEFCOMPARISON@@HPEBG@Z
    int CompareAtHashIndex(int, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareAtIndex@FileAtomPool@Resources@Microsoft@@IEBA?AW4_DEFCOMPARISON@@HPEBG@Z
    int CompareAtIndex(int, unsigned short const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileAtomPool@Resources@Microsoft@@IEAA@XZ
    FileAtomPool();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FileAtomPool@Resources@Microsoft@@IEAAJPEBVIFileSection@23@PEBXH@Z
    long Initialize(WindissectOpaque const *, void const *, int);
};
} // namespace Microsoft::Resources
