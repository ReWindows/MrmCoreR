#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 21 member(s).
namespace Microsoft::Resources {
class OverrideResolver {
public:
    class PerQualifierPoolInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@OverrideResolver@Resources@Microsoft@@SAJPEAVCoreProfile@23@PEBVUnifiedEnvironment@23@PEBVIResolver@23@_NPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@OverrideResolver@Resources@Microsoft@@SAJPEBVIResolver@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateDecision@OverrideResolver@Resources@Microsoft@@UEBAJPEBVIDecision@23@PEAHPEAVQualifierSetResult@23@@Z
    virtual long EvaluateDecision(WindissectOpaque const *, int *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateDecision@OverrideResolver@Resources@Microsoft@@UEBAJPEBVIDecision@23@HPEAH1@Z
    virtual long EvaluateDecision(WindissectOpaque const *, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateQualifier@OverrideResolver@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEAN1@Z
    virtual long EvaluateQualifier(WindissectOpaque const *, double *, double *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateQualifierSet@OverrideResolver@Resources@Microsoft@@UEBAJPEBVIQualifierSet@23@PEA_N11PEAG@Z
    virtual long EvaluateQualifierSet(WindissectOpaque const *, bool *, bool *, bool *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@OverrideResolver@Resources@Microsoft@@UEBAPEBVIResolver@23@XZ
    virtual WindissectOpaque const * GetParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierProvider@OverrideResolver@Resources@Microsoft@@UEBAJPEBGPEAPEBVIQualifierValueProvider@23@@Z
    virtual long GetQualifierProvider(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@OverrideResolver@Resources@Microsoft@@UEBAJUAtom@23@PEAVStringResult@23@@Z
    virtual long GetQualifierValue(WindissectOpaque, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@OverrideResolver@Resources@Microsoft@@UEBAJPEBGPEAVStringResult@23@@Z
    virtual long GetQualifierValue(unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQualifierValueOverriden@OverrideResolver@Resources@Microsoft@@QEBA_NPEBG@Z
    bool IsQualifierValueOverriden(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@OverrideResolver@Resources@Microsoft@@UEAAJPEAUAtom@23@H@Z
    virtual long Reset(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@OverrideResolver@Resources@Microsoft@@UEAAXXZ
    virtual void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifier@OverrideResolver@Resources@Microsoft@@UEAAJPEBG0@Z
    virtual long SetQualifier(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifier@OverrideResolver@Resources@Microsoft@@QEAAJUAtom@23@PEBG@Z
    long SetQualifier(WindissectOpaque, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverrideResolver@Resources@Microsoft@@UEAA@XZ
    virtual ~OverrideResolver();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@OverrideResolver@Resources@Microsoft@@IEAAJPEAVCoreProfile@23@PEBVUnifiedEnvironment@23@@Z
    long Init(WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@OverrideResolver@Resources@Microsoft@@IEAAJXZ
    long Init();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverrideResolver@Resources@Microsoft@@IEAA@PEBVIResolver@12@_N@Z
    OverrideResolver(WindissectOpaque const *, bool);
};
} // namespace Microsoft::Resources
