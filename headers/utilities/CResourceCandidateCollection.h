#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
class CResourceCandidateCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidate@CResourceCandidateCollection@@UEAAJIPEAPEAUIResourceCandidate@@@Z
    virtual long GetCandidate(unsigned int, IResourceCandidate * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CResourceCandidateCollection@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceCandidateCollection@@MEAA@XZ
    virtual ~CResourceCandidateCollection();
};
