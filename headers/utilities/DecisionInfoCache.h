#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 12 member(s).
namespace Microsoft::Resources::ResolverBase {
class DecisionInfoCache {
public:
    class QualifierSetComparer;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSetDecisionResults@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAJPEBVIDecision@34@PEAPEAU_DecisionPerSetInfo@1234@PEAH@Z
    long BeginSetDecisionResults(WindissectOpaque const *, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSetDecisionResults@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAJPEBVIDecision@34@@Z
    long EndSetDecisionResults(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionResults@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAJPEBVIDecision@34@HPEAH1@Z
    long GetDecisionResults(WindissectOpaque const *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifierScores@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAJPEBVIQualifier@34@HGG@Z
    long SetQualifierScores(WindissectOpaque const *, int, unsigned short, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifierSetResults@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAJPEBVIQualifierSet@34@_N111GG@Z
    long SetQualifierSetResults(WindissectOpaque const *, bool, bool, bool, bool, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DecisionSortingHelper@DecisionInfoCache@ResolverBase@Resources@Microsoft@@SAHPEAU_DecisionSortingInfo@1234@PEBU_DecisionPerSetInfo@1234@1@Z
    static int _DecisionSortingHelper(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAA@XZ
    ~DecisionInfoCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareQualiferType@DecisionInfoCache@ResolverBase@Resources@Microsoft@@IEAAHHHPEBVIResolver@34@@Z
    int CompareQualiferType(int, int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareQualifierSetResultComplex@DecisionInfoCache@ResolverBase@Resources@Microsoft@@IEAAHHHPEBVIResolver@34@@Z
    int CompareQualifierSetResultComplex(int, int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareQualifierSetResultDetails@DecisionInfoCache@ResolverBase@Resources@Microsoft@@IEAAHHHPEBVIResolver@34@@Z
    int CompareQualifierSetResultDetails(int, int, WindissectOpaque const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecisionInfoCache@ResolverBase@Resources@Microsoft@@IEAA@PEBVIDecisionInfo@23@PEBVUnifiedEnvironment@23@@Z
    DecisionInfoCache(WindissectOpaque const *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources::ResolverBase
