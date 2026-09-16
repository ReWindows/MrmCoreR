#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources {
class Win32AppClientProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Win32AppClientProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageProviderType@Win32AppClientProfile@Resources@Microsoft@@UEBA?AW4LanguageProviderType@23@XZ
    virtual int GetLanguageProviderType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@Win32AppClientProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumThreadAwareQualifiers@Win32AppClientProfile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumThreadAwareQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectSharedState@Win32AppClientProfile@Resources@Microsoft@@UEBAJPEAW4_MrtSharedObjectState@23@@Z
    virtual long GetObjectSharedState(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@Win32AppClientProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadAwareQualifierName@Win32AppClientProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetThreadAwareQualifierName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceFileAutoLoadSupported@Win32AppClientProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsResourceFileAutoLoadSupported() const;
};
} // namespace Microsoft::Resources
