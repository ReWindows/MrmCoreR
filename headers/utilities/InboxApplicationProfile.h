#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
namespace Microsoft::Resources {
class InboxApplicationProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@InboxApplicationProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEBGPEAPEAV123@@Z
    static long CreateInstance(int, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@InboxApplicationProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@InboxApplicationProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationSetting@InboxApplicationProfile@Resources@Microsoft@@UEBAJPEBG00@Z
    virtual long SetApplicationSetting(unsigned short const *, unsigned short const *, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationSetting@InboxApplicationProfile@Resources@Microsoft@@UEBA_NPEBG0PEAVStringResult@23@@Z
    virtual bool TryGetApplicationSetting(unsigned short const *, unsigned short const *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InboxApplicationProfile@Resources@Microsoft@@UEAA@XZ
    virtual ~InboxApplicationProfile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@InboxApplicationProfile@Resources@Microsoft@@AEAAJW4_MrmPlatformVersionInternal@23@PEBG@Z
    long Init(int, unsigned short const *);
};
} // namespace Microsoft::Resources
