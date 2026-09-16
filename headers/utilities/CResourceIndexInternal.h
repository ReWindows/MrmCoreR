#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 33 member(s).
namespace Microsoft::Resources::Runtime {
class CResourceIndexInternal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    CResourceIndexInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseSubtree@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAPEBVResourceMapSubtree@34@XZ
    WindissectOpaque const * GetBaseSubtree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionObjectByIndex@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJIPEAVCResolvedInstanceCollectionInternal@234@@Z
    long GetCollectionObjectByIndex(unsigned int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionObjectByReference@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEBG0PEAVCContext@234@PEAVCResolvedInstanceCollectionInternal@234@PEAPEAV1234@@Z
    long GetCollectionObjectByReference(unsigned short const *, unsigned short const *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionObjectFromNamedResult@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEAVNamedResourceResult@34@PEAVCContext@234@PEAVCResolvedInstanceCollectionInternal@234@@Z
    long GetCollectionObjectFromNamedResult(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultContext@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEAPEBVCContext@234@@Z
    long GetDefaultContext(WindissectOpaque const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendentResourceName@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJIPEAPEBG@Z
    long GetDescendentResourceName(unsigned int, unsigned short const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetM3FullyQualifiedReference@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEBGI0PEAGPEAI@Z
    long GetM3FullyQualifiedReference(unsigned short const *, unsigned int, unsigned short const *, unsigned short *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJPEAPEBG@Z
    long GetName(unsigned short const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDescendentResources@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJPEAI@Z
    long GetNumDescendentResources(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumKeys@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJPEAI@Z
    long GetNumKeys(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultObjectByReference@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJ_NPEBG1PEAVCContext@234@PEAVCResolvedInstanceInternal@234@@Z
    long GetResultObjectByReference(bool, unsigned short const *, unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultObjectByReferenceWithQuery@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEBG0PEAVCContext@234@PEAVCResolvedInstanceInternal@234@@Z
    long GetResultObjectByReferenceWithQuery(unsigned short const *, unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringByReference@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEBG0PEAVCContext@234@W4RESOURCE_SEARCH_OPTIONS@234@PEAPEBGPEA_N@Z
    long GetStringByReference(unsigned short const *, unsigned short const *, WindissectOpaque *, int, unsigned short const * *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtree@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJPEBGPEAPEAV1234@@Z
    long GetSubtree(unsigned short const *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtreeByIndex@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJIPEAPEAV1234@@Z
    long GetSubtreeByIndex(unsigned int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUri@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEBAJPEAPEBG@Z
    long GetUri(unsigned short const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEAVCResourceManagerInternal@234@PEBVManagedResourceMap@34@PEBVResourceMapSubtree@34@PEBVCContext@234@@Z
    long Initialize(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithEmptyIndex@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEAVCResourceManagerInternal@234@PEBGPEBVCContext@234@@Z
    long InitializeWithEmptyIndex(WindissectOpaque *, unsigned short const *, WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsM3ReferencePresent@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEBGPEA_N@Z
    long IsM3ReferencePresent(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOrUpdateIndex@CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAAJPEBVManagedResourceMap@34@@Z
    long ValidateOrUpdateIndex(WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceIndexInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CResourceIndexInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForDirectReference@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEAAJPEBG@Z
    long _CheckForDirectReference(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCandidateIndexAndGeneration@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEAAJPEBGPEAHPEA_K@Z
    long _GetCandidateIndexAndGeneration(unsigned short const *, int *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetQualifiedReference@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEBAJIPEAPEAG_N1@Z
    long _GetQualifiedReference(unsigned int, unsigned short * *, bool, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUri@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEBAJI_NPEAPEBG@Z
    long _GetUri(unsigned int, bool, unsigned short const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValue@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEAAJPEBGPEAUIUri@@0PEAVCContext@234@W4RESOURCE_SEARCH_OPTIONS@234@PEAPEBGPEAVCResolvedInstanceInternal@234@PEAVCResolvedInstanceCollectionInternal@234@PEA_NPEAPEAV1234@@Z
    long _GetValue(unsigned short const *, IUri *, unsigned short const *, WindissectOpaque *, int, unsigned short const * *, WindissectOpaque *, WindissectOpaque *, bool *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEmptyOrValidInit@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEBAJXZ
    long _IsEmptyOrValidInit() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsGetOrSetResourceAllowed@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEBAJXZ
    long _IsGetOrSetResourceAllowed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUriInDefaultScope@CResourceIndexInternal@Runtime@Resources@Microsoft@@CA_NPEBG@Z
    static bool _IsUriInDefaultScope(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetResults@CResourceIndexInternal@Runtime@Resources@Microsoft@@AEAAJPEAVCContext@234@PEAVNamedResourceResult@34@W4RESOURCE_SEARCH_OPTIONS@234@PEAPEBGPEAVCResolvedInstanceInternal@234@PEAVCResolvedInstanceCollectionInternal@234@PEA_N@Z
    long _SetResults(WindissectOpaque *, WindissectOpaque *, int, unsigned short const * *, WindissectOpaque *, WindissectOpaque *, bool *);
};
} // namespace Microsoft::Resources::Runtime
