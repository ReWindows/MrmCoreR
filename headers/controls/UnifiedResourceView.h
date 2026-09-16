#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 37 member(s).
namespace Microsoft::Resources {
class UnifiedResourceView {
public:
    class PriFileInfo;
    class UnifiedViewFileInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@UnifiedResourceView@Resources@Microsoft@@SAJPEAVCoreProfile@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSchema@UnifiedResourceView@Resources@Microsoft@@UEBAJPEBVHierarchicalSchemaReference@23@PEAPEBVIHierarchicalSchema@23@@Z
    virtual long FindSchema(WindissectOpaque const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationFileInfo@UnifiedResourceView@Resources@Microsoft@@QEBAJPEAVStringResult@23@0PEA_K1@Z
    long GetApplicationFileInfo(WindissectOpaque *, WindissectOpaque *, uint64_t *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtoms@UnifiedResourceView@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@23@XZ
    virtual WindissectOpaque * GetAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoMergeApplicationFolder@UnifiedResourceView@Resources@Microsoft@@QEBAPEBGXZ
    unsigned short const * GetAutoMergeApplicationFolder() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoMergeSystemFolder@UnifiedResourceView@Resources@Microsoft@@QEBAPEBGXZ
    unsigned short const * GetAutoMergeSystemFolder() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDecisionInfo@UnifiedResourceView@Resources@Microsoft@@UEBAPEAVUnifiedDecisionInfo@23@XZ
    virtual WindissectOpaque * GetDefaultDecisionInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResourceMaps@UnifiedResourceView@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResourceMaps() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumSchemas@UnifiedResourceView@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumSchemas() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddReferencedFile@UnifiedResourceView@Resources@Microsoft@@QEAAJPEBG_N0PEAPEBVManagedResourceMap@23@PEAH@Z
    long GetOrAddReferencedFile(unsigned short const *, bool, unsigned short const *, WindissectOpaque const * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryResourceMap@UnifiedResourceView@Resources@Microsoft@@UEBAJPEAPEBVIResourceMapBase@23@@Z
    virtual long GetPrimaryResourceMap(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimarySchema@UnifiedResourceView@Resources@Microsoft@@UEBAJPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetPrimarySchema(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@UnifiedResourceView@Resources@Microsoft@@UEBAPEAVCoreProfile@23@XZ
    virtual WindissectOpaque * GetProfile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMap@UnifiedResourceView@Resources@Microsoft@@UEBAJHPEAPEBVIResourceMapBase@23@@Z
    virtual long GetResourceMap(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMapById@UnifiedResourceView@Resources@Microsoft@@UEBAJPEBGPEAPEBVIResourceMapBase@23@@Z
    virtual long GetResourceMapById(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@UnifiedResourceView@Resources@Microsoft@@UEBAJHPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetSchema(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaById@UnifiedResourceView@Resources@Microsoft@@UEBAJPEBGPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetSchemaById(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedEnvironment@UnifiedResourceView@Resources@Microsoft@@UEBAPEAVUnifiedEnvironment@23@XZ
    virtual WindissectOpaque * GetUnifiedEnvironment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoMergeRequired@UnifiedResourceView@Resources@Microsoft@@QEAAJPEBGPEAPEAGPEA_N@Z
    long IsAutoMergeRequired(unsigned short const *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPriFiles@UnifiedResourceView@Resources@Microsoft@@QEAAJ_NW4_MRMPROFILE_PHASE@23@PEAV?$DynamicArray@PEAVStringResult@Resources@Microsoft@@@23@W4LoadPriFlags@23@PEAPEAV?$DynamicArray@PEAVPriFileInfo@UnifiedResourceView@Resources@Microsoft@@@23@@Z
    long LoadPriFiles(bool, int, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFileReference@UnifiedResourceView@Resources@Microsoft@@QEAAJPEBG@Z
    long RemoveFileReference(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindResourceMap@UnifiedResourceView@Resources@Microsoft@@UEBA_NPEBVHierarchicalSchemaReference@23@PEAPEBVIResourceMapBase@23@@Z
    virtual bool TryFindResourceMap(WindissectOpaque const *, WindissectOpaque const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetReverseFileMap@UnifiedResourceView@Resources@Microsoft@@UEBA_NPEAPEBVReverseFileMap@23@@Z
    virtual bool TryGetReverseFileMap(WindissectOpaque const * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedResourceView@Resources@Microsoft@@UEAA@XZ
    virtual ~UnifiedResourceView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMergedFile@UnifiedResourceView@Resources@Microsoft@@IEAAJPEAVUnifiedViewFileInfo@123@PEAH@Z
    long AddMergedFile(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReferencedFile@UnifiedResourceView@Resources@Microsoft@@IEAAJPEAVUnifiedViewFileInfo@123@PEAH@Z
    long AddReferencedFile(WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddAutoMergedFile@UnifiedResourceView@Resources@Microsoft@@IEAAJPEBG0PEAPEAVUnifiedViewFileInfo@123@PEAH@Z
    long GetOrAddAutoMergedFile(unsigned short const *, unsigned short const *, WindissectOpaque * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddManagedResourceMap@UnifiedResourceView@Resources@Microsoft@@IEAAJPEBVManagedFile@23@PEBVIResourceMapBase@23@PEAPEAVManagedResourceMap@23@@Z
    long GetOrAddManagedResourceMap(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddManagedSchema@UnifiedResourceView@Resources@Microsoft@@IEAAJPEBVManagedFile@23@PEBVIHierarchicalSchema@23@PEAPEAVManagedSchema@23@@Z
    long GetOrAddManagedSchema(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@UnifiedResourceView@Resources@Microsoft@@IEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFileResourceInfo@UnifiedResourceView@Resources@Microsoft@@IEAAJPEAVUnifiedViewFileInfo@123@@Z
    long RemoveFileResourceInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMergedFile@UnifiedResourceView@Resources@Microsoft@@IEAAJPEBG@Z
    long RemoveMergedFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindReferencedFile@UnifiedResourceView@Resources@Microsoft@@IEAA_NPEBG0PEAPEAVUnifiedViewFileInfo@123@PEAH@Z
    bool TryFindReferencedFile(unsigned short const *, unsigned short const *, WindissectOpaque * *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedResourceView@Resources@Microsoft@@IEAA@PEAVCoreProfile@12@@Z
    UnifiedResourceView(WindissectOpaque *);
};
} // namespace Microsoft::Resources
