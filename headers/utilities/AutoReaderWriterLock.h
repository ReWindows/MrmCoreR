#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources {
class AutoReaderWriterLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoReaderWriterLock@Resources@Microsoft@@QEAA@PEAU_RTL_SRWLOCK@@_N@Z
    AutoReaderWriterLock(_RTL_SRWLOCK *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoReaderWriterLock@Resources@Microsoft@@QEAA@PEAU_RTL_SRWLOCK@@@Z
    AutoReaderWriterLock(_RTL_SRWLOCK *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoReaderWriterLock@Resources@Microsoft@@QEAA@XZ
    ~AutoReaderWriterLock();
};
} // namespace Microsoft::Resources
