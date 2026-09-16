#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources::ResolverBase::DecisionInfoCache {
class QualifierSetComparer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@QualifierSetComparer@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAHPEAV12345@@Z
    int Compare(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatch@QualifierSetComparer@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAA_NXZ
    bool IsMatch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchOrDefault@QualifierSetComparer@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAA_NXZ
    bool IsMatchOrDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScore@QualifierSetComparer@DecisionInfoCache@ResolverBase@Resources@Microsoft@@QEAAXGGG@Z
    void SetScore(unsigned short, unsigned short, unsigned short);
};
} // namespace Microsoft::Resources::ResolverBase::DecisionInfoCache
