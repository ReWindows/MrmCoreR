#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources {
class Runtime {
public:
    class CContext;
    class CContextualHash;
    class CMrtScopeUri;
    class CMrtUriParser;
    class CResolvedInstanceCollectionInternal;
    class CResolvedInstanceInternal;
    class CResourceIndexInternal;
    class CResourceManagerInternal;
    class CResourceManagerQueueInternal;
    class CResourceReferenceHandlerInternal;
    class CResourceValidatorInternal;
    class IQualifierChangedFunctor;
    class QueueElement;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAutoMergeFile@Runtime@Resources@Microsoft@@YAJPEBGPEAPEAG@Z
    long RequestAutoMergeFile(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MarkLocalExperiencePacksForPriRemerge@Runtime@Resources@Microsoft@@YAJXZ
    long s_MarkLocalExperiencePacksForPriRemerge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RepairResourcesPriAcls@Runtime@Resources@Microsoft@@YAJPEBG@Z
    long s_RepairResourcesPriAcls(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetModifiedPackageStatus@Runtime@Resources@Microsoft@@YAJPEBG@Z
    long s_SetModifiedPackageStatus(unsigned short const *);
};
} // namespace Microsoft::Resources
