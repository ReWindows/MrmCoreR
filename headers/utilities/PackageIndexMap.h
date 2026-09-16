#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::DynamicPackageProfile {
class PackageIndexMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PackageIndexMap@DynamicPackageProfile@Resources@Microsoft@@SAJPEAVMrmProfile@34@PEBVIRawResourceMap@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageIndexMap@DynamicPackageProfile@Resources@Microsoft@@UEAA@XZ
    virtual ~PackageIndexMap();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PackageIndexMap@DynamicPackageProfile@Resources@Microsoft@@IEAAJPEAVMrmProfile@34@PEBVIRawResourceMap@34@@Z
    long Init(WindissectOpaque *, WindissectOpaque const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageIndexMap@DynamicPackageProfile@Resources@Microsoft@@IEAA@XZ
    PackageIndexMap();
};
} // namespace Microsoft::Resources::DynamicPackageProfile
