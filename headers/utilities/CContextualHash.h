#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources::Runtime {
class CContextualHash {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierList@CContextualHash@Runtime@Resources@Microsoft@@QEAAJPEAVStringResult@34@@Z
    long GetQualifierList(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHash@CContextualHash@Runtime@Resources@Microsoft@@QEAAJHPEBGPEAI@Z
    long _GetHash(int, unsigned short const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CContextualHash@Runtime@Resources@Microsoft@@QEAAJXZ
    long _Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextualHash@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CContextualHash();
};
} // namespace Microsoft::Resources::Runtime
