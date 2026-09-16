#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources::Build {
class AtomIndexedDictionaryBase {
public:
    class AIDictRange;
    class Iterator;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AtomIndexedDictionaryBase@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~AtomIndexedDictionaryBase();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AtomIndexedDictionaryBase@Build@Resources@Microsoft@@IEAA@PEBVIAtomPool@23@W4_Strategy@0123@@Z
    AtomIndexedDictionaryBase(WindissectOpaque const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextInternedAtomWithData@AtomIndexedDictionaryBase@Build@Resources@Microsoft@@IEBAJPEAVIterator@1234@PEAH1@Z
    long GetNextInternedAtomWithData(WindissectOpaque *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddInternalIndex@AtomIndexedDictionaryBase@Build@Resources@Microsoft@@IEAAJHPEAH@Z
    long GetOrAddInternalIndex(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetInternalIndex@AtomIndexedDictionaryBase@Build@Resources@Microsoft@@IEBA_NHPEAH@Z
    bool TryGetInternalIndex(int, int *) const;
};
} // namespace Microsoft::Resources::Build
