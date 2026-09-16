#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources::OverrideResolver {
class PerQualifierPoolInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PerQualifierPoolInfo@OverrideResolver@Resources@Microsoft@@SAJPEBVIAtomPool@34@PEAVPerThreadQualifier@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@PerQualifierPoolInfo@OverrideResolver@Resources@Microsoft@@QEAAJUAtom@34@PEAVStringResult@34@@Z
    long GetQualifierValue(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCache@PerQualifierPoolInfo@OverrideResolver@Resources@Microsoft@@QEAAXXZ
    void ResetCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifierValue@PerQualifierPoolInfo@OverrideResolver@Resources@Microsoft@@QEAAJUAtom@34@PEBG_N@Z
    long SetQualifierValue(WindissectOpaque, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PerQualifierPoolInfo@OverrideResolver@Resources@Microsoft@@QEAA@XZ
    ~PerQualifierPoolInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PerQualifierPoolInfo@OverrideResolver@Resources@Microsoft@@IEAAJXZ
    long Init();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PerQualifierPoolInfo@OverrideResolver@Resources@Microsoft@@IEAA@PEBVIAtomPool@23@PEAVPerThreadQualifier@23@@Z
    PerQualifierPoolInfo(WindissectOpaque const *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::OverrideResolver
