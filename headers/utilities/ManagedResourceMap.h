#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 28 member(s).
namespace Microsoft::Resources {
class ManagedResourceMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ManagedResourceMap@Resources@Microsoft@@SAJPEBVManagedFile@23@PEBVIResourceMapBase@23@PEBVManagedSchema@23@PEAVUnifiedDecisionInfo@23@PEAVUnifiedResourceView@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentGeneration@ManagedResourceMap@Resources@Microsoft@@UEBA_KXZ
    virtual uint64_t GetCurrentGeneration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentResourceMap@ManagedResourceMap@Resources@Microsoft@@QEBAPEBVIResourceMapBase@23@XZ
    WindissectOpaque const * GetCurrentResourceMap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfo@ManagedResourceMap@Resources@Microsoft@@UEBAPEBVIDecisionInfo@23@XZ
    virtual WindissectOpaque const * GetDecisionInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResources@ManagedResourceMap@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResources() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalSchema@ManagedResourceMap@Resources@Microsoft@@UEBAPEBVIHierarchicalSchema@23@XZ
    virtual WindissectOpaque const * GetOriginalSchema() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootPath@ManagedResourceMap@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetPackageRootPath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@ManagedResourceMap@Resources@Microsoft@@UEBAJPEBGPEAVNamedResourceResult@23@@Z
    virtual long GetResource(unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceByIndex@ManagedResourceMap@Resources@Microsoft@@UEBAJHPEAVNamedResourceResult@23@@Z
    virtual long GetResourceByIndex(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootSubtree@ManagedResourceMap@Resources@Microsoft@@UEBAPEBVResourceMapSubtree@23@XZ
    virtual WindissectOpaque const * GetRootSubtree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@ManagedResourceMap@Resources@Microsoft@@UEBAPEBVIHierarchicalSchema@23@XZ
    virtual WindissectOpaque const * GetSchema() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumResourceValues@ManagedResourceMap@Resources@Microsoft@@UEBAHXZ
    virtual int GetTotalNumResourceValues() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteFileAdded@ManagedResourceMap@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEBVIResourceMapBase@23@@Z
    long NoteFileAdded(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteFileRemoving@ManagedResourceMap@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEA_N@Z
    long NoteFileRemoving(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteFileUnloading@ManagedResourceMap@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEA_N@Z
    long NoteFileUnloading(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDecisionInfoOverride@ManagedResourceMap@Resources@Microsoft@@UEBAXXZ
    virtual void ResetDecisionInfoOverride() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDecisionInfoOverride@ManagedResourceMap@Resources@Microsoft@@UEBAJPEBVIDecisionInfo@23@PEBVRemapUInt16@23@@Z
    virtual long SetDecisionInfoOverride(WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageRootPath@ManagedResourceMap@Resources@Microsoft@@UEBAJPEBG@Z
    virtual long SetPackageRootPath(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSchemaOverride@ManagedResourceMap@Resources@Microsoft@@UEBAJPEBVIHierarchicalSchema@23@@Z
    virtual long SetSchemaOverride(WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManagedResourceMap@Resources@Microsoft@@UEAA@XZ
    virtual ~ManagedResourceMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptRuntimeMerge@ManagedResourceMap@Resources@Microsoft@@AEBAJW4PriMergeFlags@PriFileMerger@Build@23@@Z
    long AttemptRuntimeMerge(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateFilesList@ManagedResourceMap@Resources@Microsoft@@AEBAJXZ
    long GetOrCreateFilesList() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ManagedResourceMap@Resources@Microsoft@@AEAAJPEBVManagedFile@23@PEBVIResourceMapBase@23@PEBVManagedSchema@23@PEAVUnifiedDecisionInfo@23@PEAVUnifiedResourceView@23@@Z
    long Init(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ManagedResourceMap@Resources@Microsoft@@AEAA@XZ
    ManagedResourceMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrent@ManagedResourceMap@Resources@Microsoft@@AEBAJ_N@Z
    long UpdateCurrent(bool) const;
};
} // namespace Microsoft::Resources
