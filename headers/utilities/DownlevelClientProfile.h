#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources {
class DownlevelClientProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DownlevelClientProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@DownlevelClientProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@DownlevelClientProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadPriFileAllowed@DownlevelClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@@Z
    virtual bool IsLoadPriFileAllowed(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadResourceMapAllowed@DownlevelClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@0@Z
    virtual bool IsLoadResourceMapAllowed(unsigned short const *, int, unsigned short const *);
};
} // namespace Microsoft::Resources
