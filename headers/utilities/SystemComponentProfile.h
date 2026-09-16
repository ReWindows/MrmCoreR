#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 14 member(s).
namespace Microsoft::Resources {
class SystemComponentProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SystemComponentProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageProviderType@SystemComponentProfile@Resources@Microsoft@@UEBA?AW4LanguageProviderType@23@XZ
    virtual int GetLanguageProviderType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@SystemComponentProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeFolders@SystemComponentProfile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetMergeFolders(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumThreadAwareQualifiers@SystemComponentProfile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumThreadAwareQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectSharedState@SystemComponentProfile@Resources@Microsoft@@UEBAJPEAW4_MrtSharedObjectState@23@@Z
    virtual long GetObjectSharedState(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@SystemComponentProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemResourcesPriFile@SystemComponentProfile@Resources@Microsoft@@SAJPEBGPEAVStringResult@23@@Z
    static long GetSystemResourcesPriFile(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadAwareQualifierName@SystemComponentProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetThreadAwareQualifierName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceFileAutoLoadSupported@SystemComponentProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsResourceFileAutoLoadSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFileMagicNumber@SystemComponentProfile@Resources@Microsoft@@UEBA_NAEBT_DEFFILE_MAGIC@@@Z
    virtual bool IsSupportedFileMagicNumber(_DEFFILE_MAGIC const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemPackage@SystemComponentProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsSystemPackage() const;
};
} // namespace Microsoft::Resources
