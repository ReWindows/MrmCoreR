#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
class MrtRuntimeTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergedSystemPri@MrtRuntimeTelemetry@@SAXPEBGJ@Z
    static void GetMergedSystemPri(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadError@MrtRuntimeTelemetry@@SAXPEBG@Z
    static void LoadError(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeFileFailure@MrtRuntimeTelemetry@@SAXPEBG0J@Z
    static void MergeFileFailure(unsigned short const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadError@MrtRuntimeTelemetry@@SAXPEBG@Z
    static void UnloadError(unsigned short const *);
};
