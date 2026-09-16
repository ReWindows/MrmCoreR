#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources {
class ResolverBase {
public:
    class DecisionInfoCache;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateDecision@ResolverBase@Resources@Microsoft@@UEBAJPEBVIDecision@23@HPEAH1@Z
    virtual long EvaluateDecision(WindissectOpaque const *, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateDecision@ResolverBase@Resources@Microsoft@@UEBAJPEBVIDecision@23@PEAHPEAVQualifierSetResult@23@@Z
    virtual long EvaluateDecision(WindissectOpaque const *, int *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateQualifier@ResolverBase@Resources@Microsoft@@UEBAJPEBVIQualifier@23@PEAN1@Z
    virtual long EvaluateQualifier(WindissectOpaque const *, double *, double *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateQualifierSet@ResolverBase@Resources@Microsoft@@UEBAJPEBVIQualifierSet@23@PEA_N11PEAG@Z
    virtual long EvaluateQualifierSet(WindissectOpaque const *, bool *, bool *, bool *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisions@ResolverBase@Resources@Microsoft@@UEBAPEBVIDecisionInfo@23@XZ
    virtual WindissectOpaque const * GetDecisions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironment@ResolverBase@Resources@Microsoft@@UEBAPEBVUnifiedEnvironment@23@XZ
    virtual WindissectOpaque const * GetEnvironment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneration@ResolverBase@Resources@Microsoft@@UEBA_KXZ
    virtual uint64_t GetGeneration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ResolverBase@Resources@Microsoft@@UEAAXXZ
    virtual void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ResolverBase@Resources@Microsoft@@UEAAJPEAUAtom@23@H@Z
    virtual long Reset(WindissectOpaque *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResolverBase@Resources@Microsoft@@UEAA@XZ
    virtual ~ResolverBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateQualifier@ResolverBase@Resources@Microsoft@@IEBAJPEBVIQualifier@23@PEAG1@Z
    long EvaluateQualifier(WindissectOpaque const *, unsigned short *, unsigned short *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ResolverBase@Resources@Microsoft@@IEAAJXZ
    long Init();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResolverBase@Resources@Microsoft@@IEAA@PEBVUnifiedEnvironment@12@PEBVIDecisionInfo@12@@Z
    ResolverBase(WindissectOpaque const *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources
