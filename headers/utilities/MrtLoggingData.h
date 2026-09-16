#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
class MrtLoggingData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtLoggingData@@QEAA@XZ
    MrtLoggingData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@MrtLoggingData@@QEAAXJKPEBDPEBG@Z
    void Set(long, unsigned long, char const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtLoggingData@@QEAA@XZ
    ~MrtLoggingData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@MrtLoggingData@@AEAAXXZ
    void Reset();
};
