#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::UnifiedEnvironment {
class CompatibleEnvironmentInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CompatibleEnvironmentInfo@UnifiedEnvironment@Resources@Microsoft@@SAJPEBGPEBVEnvironmentVersionInfo@34@HHH0PEAPEAV1234@@Z
    static long CreateInstance(unsigned short const *, WindissectOpaque const *, int, int, int, unsigned short const *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompatibleEnvironmentInfo@UnifiedEnvironment@Resources@Microsoft@@UEAA@XZ
    virtual ~CompatibleEnvironmentInfo();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompatibleEnvironmentInfo@UnifiedEnvironment@Resources@Microsoft@@AEAA@XZ
    CompatibleEnvironmentInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CompatibleEnvironmentInfo@UnifiedEnvironment@Resources@Microsoft@@AEAAJPEBGPEBVEnvironmentVersionInfo@34@PEAVRemapAtomPool@34@@Z
    long Init(unsigned short const *, WindissectOpaque const *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::UnifiedEnvironment
