#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
namespace Microsoft::Resources::Build {
class OrchestratorHashMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddtoMap@OrchestratorHashMap@Build@Resources@Microsoft@@QEAAJIPEAVOrchestratorDataReference@234@@Z
    long AddtoMap(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@OrchestratorHashMap@Build@Resources@Microsoft@@SAJHMPEAPEAV1234@@Z
    static long CreateInstance(int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFromMap@OrchestratorHashMap@Build@Resources@Microsoft@@QEAAPEAVOrchestratorDataReference@234@IPEBX_K@Z
    WindissectOpaque * TryGetFromMap(unsigned int, void const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OrchestratorHashMap@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~OrchestratorHashMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@OrchestratorHashMap@Build@Resources@Microsoft@@AEAAJH@Z
    long Init(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OrchestratorHashMap@Build@Resources@Microsoft@@AEAA@HM@Z
    OrchestratorHashMap(int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeMap@OrchestratorHashMap@Build@Resources@Microsoft@@AEAAJXZ
    long ResizeMap();
};
} // namespace Microsoft::Resources::Build
