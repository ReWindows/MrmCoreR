#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 13 member(s).
namespace Microsoft::Resources {
class HierarchicalNamesAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool Contains(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@@Z
    virtual bool Contains(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBA_NUAtom@23@PEBG@Z
    virtual bool Equals(WindissectOpaque, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomPoolGroup@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@23@XZ
    virtual WindissectOpaque * GetAtomPoolGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetDescription() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCaseInsensitive@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBA_NXZ
    virtual bool GetIsCaseInsensitive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumAtoms@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoolIndex@HierarchicalNamesAtomPool@Resources@Microsoft@@UEBAHXZ
    virtual int GetPoolIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtomPoolGroup@HierarchicalNamesAtomPool@Resources@Microsoft@@UEAAXPEAVAtomPoolGroup@23@@Z
    virtual void SetAtomPoolGroup(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPoolIndex@HierarchicalNamesAtomPool@Resources@Microsoft@@UEAAXH@Z
    virtual void SetPoolIndex(int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalNamesAtomPool@Resources@Microsoft@@IEAA@PEBVIHierarchicalNames@12@H@Z
    HierarchicalNamesAtomPool(WindissectOpaque const *, int);
};
} // namespace Microsoft::Resources
