#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources {
class StringResult {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@StringResult@Resources@Microsoft@@QEBAJPEBV123@PEAW4_DEFCOMPARISON@@@Z
    long Compare(WindissectOpaque const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@StringResult@Resources@Microsoft@@QEBAJPEBGPEA_N@Z
    long Contains(unsigned short const *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@StringResult@Resources@Microsoft@@QEBA_NPEBG@Z
    bool Contains(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToOutParams@StringResult@Resources@Microsoft@@QEBAJ_KPEAGPEA_K@Z
    long CopyToOutParams(uint64_t, unsigned short *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRef@StringResult@Resources@Microsoft@@QEBAPEBGXZ
    unsigned short const * GetRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAbsolutePath@StringResult@Resources@Microsoft@@QEBAJGPEA_N@Z
    long IsAbsolutePath(unsigned short, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@StringResult@Resources@Microsoft@@QEAA_NXZ
    bool IsEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizePathSlashes@StringResult@Resources@Microsoft@@QEAAJG@Z
    long NormalizePathSlashes(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentsFromOther@StringResult@Resources@Microsoft@@QEAAJPEAV123@@Z
    long SetContentsFromOther(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StringResult@Resources@Microsoft@@QEAA@XZ
    StringResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindFirstOf@StringResult@Resources@Microsoft@@QEBA_NGPEA_K@Z
    bool TryFindFirstOf(unsigned short, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindLastOf@StringResult@Resources@Microsoft@@QEBA_NGPEA_K@Z
    bool TryFindLastOf(unsigned short, uint64_t *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StringResult@Resources@Microsoft@@QEAA@XZ
    ~StringResult();
};
} // namespace Microsoft::Resources
