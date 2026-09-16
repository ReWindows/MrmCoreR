#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
class CPercentDecodeString {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@CPercentDecodeString@@QEAAJPEAGPEA_KPEAPEAG1K@Z
    long Decode(unsigned short *, uint64_t *, unsigned short * *, uint64_t *, unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDecodeCharacter@CPercentDecodeString@@MEAAJ_KKPEA_N@Z
    virtual long ShouldDecodeCharacter(uint64_t, unsigned long, bool *);
};
