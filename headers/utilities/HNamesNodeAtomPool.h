#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources::Build {
class HNamesNodeAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool Contains(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBA_NUAtom@34@@Z
    virtual bool Contains(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBA_NUAtom@34@PEBG@Z
    virtual bool Equals(WindissectOpaque, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomPoolGroup@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@34@XZ
    virtual WindissectOpaque * GetAtomPoolGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetDescription() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCaseInsensitive@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool GetIsCaseInsensitive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumAtoms@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoolIndex@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetPoolIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtomPoolGroup@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEAAXPEAVAtomPoolGroup@34@@Z
    virtual void SetAtomPoolGroup(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPoolIndex@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEAAXH@Z
    virtual void SetPoolIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAtom@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBA_NPEBGPEAUAtom@34@@Z
    virtual bool TryGetAtom(unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetString@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBA_NHPEAVStringResult@34@@Z
    virtual bool TryGetString(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetString@HNamesNodeAtomPool@Build@Resources@Microsoft@@UEBA_NUAtom@34@PEAVStringResult@34@@Z
    virtual bool TryGetString(WindissectOpaque, WindissectOpaque *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HNamesNodeAtomPool@Build@Resources@Microsoft@@IEAA@PEBVHierarchicalNamesBuilder@123@@Z
    HNamesNodeAtomPool(WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
