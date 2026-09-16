#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 13 member(s).
namespace Microsoft::Resources {
class CStringResolverInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CStringResolverInternal@Resources@Microsoft@@QEAAJPEBG000@Z
    long Add(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CStringResolverInternal@Resources@Microsoft@@QEAAJPEBG0IPEAUMrmBcQualifier@Build@23@_N@Z
    long Add(unsigned short const *, unsigned short const *, unsigned int, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContext@CStringResolverInternal@Resources@Microsoft@@QEAAJPEAPEBVCContext@Runtime@23@@Z
    long GetContext(WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@CStringResolverInternal@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long New(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAllForContext@CStringResolverInternal@Resources@Microsoft@@QEAAJPEAVCContext@Runtime@23@PEBGPEAVCResolvedInstanceCollectionInternal@523@@Z
    long ResolveAllForContext(WindissectOpaque *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveForContext@CStringResolverInternal@Resources@Microsoft@@QEAAJPEAVCContext@Runtime@23@PEBGPEAPEBGPEA_N@Z
    long ResolveForContext(WindissectOpaque *, unsigned short const *, unsigned short const * *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStringResolverInternal@Resources@Microsoft@@QEAA@XZ
    ~CStringResolverInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildPri@CStringResolverInternal@Resources@Microsoft@@AEAAJXZ
    long _BuildPri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CStringResolverInternal@Resources@Microsoft@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetPackageResources@CStringResolverInternal@Resources@Microsoft@@AEAAXXZ
    void _ResetPackageResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResurrectPriBuilder@CStringResolverInternal@Resources@Microsoft@@AEAAJXZ
    long _ResurrectPriBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetContext@CStringResolverInternal@Resources@Microsoft@@AEAAJXZ
    long _SetContext();
};
} // namespace Microsoft::Resources
