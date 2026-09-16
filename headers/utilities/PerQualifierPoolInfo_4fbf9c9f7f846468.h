#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
namespace Microsoft::Resources::ProviderResolver {
class PerQualifierPoolInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@SAJPEBVIAtomPool@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@QEAAJUAtom@34@PEBVIProviderDataSources@34@PEAVStringResult@34@@Z
    long GetQualifierValue(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCacheReset@PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@QEAA_NXZ
    bool IsCacheReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCache@PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@QEAAXUAtom@34@@Z
    void ResetCache(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifierValue@PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@QEAAJUAtom@34@PEBG_N@Z
    long SetQualifierValue(WindissectOpaque, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@QEAA@XZ
    ~PerQualifierPoolInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@IEAAJXZ
    long Init();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PerQualifierPoolInfo@ProviderResolver@Resources@Microsoft@@IEAA@PEBVIAtomPool@23@@Z
    PerQualifierPoolInfo(WindissectOpaque const *);
};
} // namespace Microsoft::Resources::ProviderResolver
