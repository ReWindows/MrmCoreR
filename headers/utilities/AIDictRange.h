#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources::Build::AtomIndexedDictionaryBase {
class AIDictRange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignInternalIndex@AIDictRange@AtomIndexedDictionaryBase@Build@Resources@Microsoft@@SAJPEAPEAV12345@HH@Z
    static long AssignInternalIndex(WindissectOpaque * *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextInternedAtom@AIDictRange@AtomIndexedDictionaryBase@Build@Resources@Microsoft@@QEBAJHPEAH0PEAPEBV12345@@Z
    long GetNextInternedAtom(int, int *, int *, WindissectOpaque const * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AIDictRange@AtomIndexedDictionaryBase@Build@Resources@Microsoft@@QEAA@XZ
    ~AIDictRange();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AIDictRange@AtomIndexedDictionaryBase@Build@Resources@Microsoft@@IEAA@H@Z
    AIDictRange(int);
};
} // namespace Microsoft::Resources::Build::AtomIndexedDictionaryBase
