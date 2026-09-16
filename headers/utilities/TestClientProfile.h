#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 13 member(s).
namespace Microsoft::Resources {
class TestClientProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TestClientProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuildConfiguration@TestClientProfile@Resources@Microsoft@@UEAAPEAVMrmBuildConfiguration@23@XZ
    virtual WindissectOpaque * GetBuildConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@TestClientProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumThreadAwareQualifiers@TestClientProfile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumThreadAwareQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@TestClientProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadAwareQualifierName@TestClientProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetThreadAwareQualifierName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeForQualifier@TestClientProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIBuildQualifierType@23@@Z
    virtual long GetTypeForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullyQualifiedReferenceAllowed@TestClientProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool IsFullyQualifiedReferenceAllowed(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadPriFileAllowed@TestClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@@Z
    virtual bool IsLoadPriFileAllowed(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadResourceMapAllowed@TestClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@0@Z
    virtual bool IsLoadResourceMapAllowed(unsigned short const *, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFileMagicNumber@TestClientProfile@Resources@Microsoft@@UEBA_NAEBT_DEFFILE_MAGIC@@@Z
    virtual bool IsSupportedFileMagicNumber(_DEFFILE_MAGIC const &) const;
};
} // namespace Microsoft::Resources
