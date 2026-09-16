#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources {
class HierarchicalSchemaReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsCompatible@HierarchicalSchemaReference@Resources@Microsoft@@QEBA_NPEBVIHierarchicalSchema@23@@Z
    bool CheckIsCompatible(WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsIdentical@HierarchicalSchemaReference@Resources@Microsoft@@QEBA_NPEBVIHierarchicalSchema@23@@Z
    bool CheckIsIdentical(WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchemaReference@Resources@Microsoft@@SAJPEBX_KPEAPEAV123@@Z
    static long CreateInstance(void const *, uint64_t, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HierarchicalSchemaReference@Resources@Microsoft@@UEAA@XZ
    virtual ~HierarchicalSchemaReference();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalSchemaReference@Resources@Microsoft@@IEAA@XZ
    HierarchicalSchemaReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HierarchicalSchemaReference@Resources@Microsoft@@IEAAJPEBX_K@Z
    long Init(void const *, uint64_t);
};
} // namespace Microsoft::Resources
