#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources {
class PerThreadQualifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PerThreadQualifier@Resources@Microsoft@@SAJPEBVCoreProfile@23@PEBVUnifiedEnvironment@23@PEBVIResolver@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProvider@PerThreadQualifier@Resources@Microsoft@@QEAAJUAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    long GetProvider(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierPerThread@PerThreadQualifier@Resources@Microsoft@@QEAAJHPEAUAtom@23@@Z
    long GetQualifierPerThread(int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@PerThreadQualifier@Resources@Microsoft@@QEAAJHPEAVStringResult@23@@Z
    long GetQualifierValue(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCache@PerThreadQualifier@Resources@Microsoft@@QEAAXUAtom@23@@Z
    void ResetCache(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCache@PerThreadQualifier@Resources@Microsoft@@QEAAXXZ
    void ResetCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueIsSameAsParent@PerThreadQualifier@Resources@Microsoft@@QEAAJHPEA_N@Z
    long ValueIsSameAsParent(int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PerThreadQualifier@Resources@Microsoft@@QEAA@XZ
    ~PerThreadQualifier();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PerThreadQualifier@Resources@Microsoft@@AEAA@XZ
    PerThreadQualifier();
};
} // namespace Microsoft::Resources
