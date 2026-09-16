#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources::Runtime {
class CResolvedInstanceCollectionInternal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResolvedInstanceCollectionInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    CResolvedInstanceCollectionInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexOf@CResolvedInstanceCollectionInternal@Runtime@Resources@Microsoft@@QEAAJPEAVCResolvedInstanceInternal@234@PEAIPEA_N@Z
    long GetIndexOf(WindissectOpaque *, unsigned int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedInstance@CResolvedInstanceCollectionInternal@Runtime@Resources@Microsoft@@QEAAJIPEAVCResolvedInstanceInternal@234@@Z
    long GetResolvedInstance(unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedInstanceByIndexInDecision@CResolvedInstanceCollectionInternal@Runtime@Resources@Microsoft@@QEAAJIPEAVCResolvedInstanceInternal@234@@Z
    long GetResolvedInstanceByIndexInDecision(unsigned int, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResolvedInstanceCollectionInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CResolvedInstanceCollectionInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetReferenceId@CResolvedInstanceCollectionInternal@Runtime@Resources@Microsoft@@AEAAJPEBG@Z
    long _SetReferenceId(unsigned short const *);
};
} // namespace Microsoft::Resources::Runtime
