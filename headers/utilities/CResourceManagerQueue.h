#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
class CResourceManagerQueue {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceManagerQueue@@QEAA@XZ
    CResourceManagerQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CResourceManagerQueue@@UEAAJPEBG00PEAPEAG@Z
    virtual long GetString(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceReference@CResourceManagerQueue@@UEAAJPEBG@Z
    virtual long IsResourceReference(unsigned short const *);
};
