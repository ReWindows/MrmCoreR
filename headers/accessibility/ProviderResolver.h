#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 14 member(s).
namespace Microsoft::Resources {
class ProviderResolver {
public:
    class PerQualifierPoolInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ProviderResolver@Resources@Microsoft@@SAJPEAVCoreProfile@23@PEBVUnifiedEnvironment@23@PEBVIDecisionInfo@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@ProviderResolver@Resources@Microsoft@@UEBAPEBVIResolver@23@XZ
    virtual WindissectOpaque const * GetParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierProvider@ProviderResolver@Resources@Microsoft@@UEBAJPEBGPEAPEBVIQualifierValueProvider@23@@Z
    virtual long GetQualifierProvider(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@ProviderResolver@Resources@Microsoft@@UEBAJUAtom@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValue(WindissectOpaque, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@ProviderResolver@Resources@Microsoft@@UEBAJPEBGPEAVStringResult@23@@Z
    virtual long GetQualifierValue(unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitAllQualifierProviders@ProviderResolver@Resources@Microsoft@@QEAAJPEAVCoreProfile@23@@Z
    long InitAllQualifierProviders(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ProviderResolver@Resources@Microsoft@@UEAAXXZ
    virtual void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ProviderResolver@Resources@Microsoft@@UEAAJPEAUAtom@23@H@Z
    virtual long Reset(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifier@ProviderResolver@Resources@Microsoft@@UEAAJPEBG0@Z
    virtual long SetQualifier(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifier@ProviderResolver@Resources@Microsoft@@QEAAJUAtom@23@PEBG@Z
    long SetQualifier(WindissectOpaque, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderResolver@Resources@Microsoft@@UEAA@XZ
    virtual ~ProviderResolver();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ProviderResolver@Resources@Microsoft@@IEAAJXZ
    long Init();
};
} // namespace Microsoft::Resources
