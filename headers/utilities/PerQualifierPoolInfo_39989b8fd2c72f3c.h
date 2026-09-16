#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::UnifiedEnvironment {
class PerQualifierPoolInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PerQualifierPoolInfo@UnifiedEnvironment@Resources@Microsoft@@SAJPEBVIEnvironment@34@PEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeOfQualifier@PerQualifierPoolInfo@UnifiedEnvironment@Resources@Microsoft@@QEBAJUAtom@34@PEAPEBVIBuildQualifierType@34@@Z
    long GetTypeOfQualifier(WindissectOpaque, WindissectOpaque const * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PerQualifierPoolInfo@UnifiedEnvironment@Resources@Microsoft@@QEAA@XZ
    ~PerQualifierPoolInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PerQualifierPoolInfo@UnifiedEnvironment@Resources@Microsoft@@IEAAJPEBVIEnvironment@34@PEAVCoreProfile@34@@Z
    long Init(WindissectOpaque const *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PerQualifierPoolInfo@UnifiedEnvironment@Resources@Microsoft@@IEAA@XZ
    PerQualifierPoolInfo();
};
} // namespace Microsoft::Resources::UnifiedEnvironment
