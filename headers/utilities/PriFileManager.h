#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 33 member(s).
namespace Microsoft::Resources {
class PriFileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFile@PriFileManager@Resources@Microsoft@@QEAAJPEBVNormalizedFilePath@23@PEBG_NPEAPEAVManagedFile@23@@Z
    long AddFile(WindissectOpaque const *, unsigned short const *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFile@PriFileManager@Resources@Microsoft@@QEAAJPEBG0_NPEAPEAVManagedFile@23@@Z
    long AddFile(unsigned short const *, unsigned short const *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFileManager@Resources@Microsoft@@SAJPEAVUnifiedEnvironment@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsoluteFolderPath@PriFileManager@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetAbsoluteFolderPath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomPoolSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEAVFileAtomPool@23@@Z
    virtual long GetAtomPoolSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataItemsSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEAVFileDataItemsSection@23@@Z
    virtual long GetDataItemsSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEAVFileDataSection@23@@Z
    virtual long GetDataSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfoSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEAVDecisionInfoFileSection@23@@Z
    virtual long GetDecisionInfoSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultQualifierMapping@PriFileManager@Resources@Microsoft@@UEBAJHPEAPEBVRemapAtomPool@23@@Z
    virtual long GetDefaultQualifierMapping(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentMappingSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEBVEnvironmentMapping@23@@Z
    virtual long GetEnvironmentMappingSection(int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFile@PriFileManager@Resources@Microsoft@@QEBAJHPEAPEAVManagedFile@23@@Z
    long GetFile(int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFile@PriFileManager@Resources@Microsoft@@QEBAJPEBGPEAPEAVManagedFile@23@@Z
    long GetFile(unsigned short const *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFile@PriFileManager@Resources@Microsoft@@QEBAJPEBVNormalizedFilePath@23@PEAPEAVManagedFile@23@@Z
    long GetFile(WindissectOpaque const *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileDefaultEnvironment@PriFileManager@Resources@Microsoft@@UEBAJHPEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    virtual long GetFileDefaultEnvironment(int, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileListSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEAVFileFileList@23@@Z
    virtual long GetFileListSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@PriFileManager@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFilePath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFiles@PriFileManager@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumFiles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddFile@PriFileManager@Resources@Microsoft@@QEBAJPEBVNormalizedFilePath@23@PEBGW4LoadPriFlags@23@PEAPEAVManagedFile@23@@Z
    long GetOrAddFile(WindissectOpaque const *, unsigned short const *, int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddFile@PriFileManager@Resources@Microsoft@@QEBAJPEBG0W4LoadPriFlags@23@PEAPEAVManagedFile@23@@Z
    long GetOrAddFile(unsigned short const *, unsigned short const *, int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriDescriptorSection@PriFileManager@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEAVPriDescriptor@23@@Z
    virtual long GetPriDescriptorSection(WindissectOpaque const *, int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@PriFileManager@Resources@Microsoft@@UEBAPEAVCoreProfile@23@XZ
    virtual WindissectOpaque * GetProfile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLinkSection@PriFileManager@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEBVResourceLinkSection@23@@Z
    virtual long GetResourceLinkSection(WindissectOpaque const *, int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMapSection@PriFileManager@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEAVResourceMapBase@23@@Z
    virtual long GetResourceMapSection(WindissectOpaque const *, int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReverseFileMapSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEAVReverseFileMap@23@@Z
    virtual long GetReverseFileMapSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaSection@PriFileManager@Resources@Microsoft@@UEBAJHFPEAPEAVHierarchicalSchema@23@@Z
    virtual long GetSchemaSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSection@PriFileManager@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEBVIFileSection@23@@Z
    virtual long GetSection(WindissectOpaque const *, int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedEnvironment@PriFileManager@Resources@Microsoft@@UEBAPEAVUnifiedEnvironment@23@XZ
    virtual WindissectOpaque * GetUnifiedEnvironment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSectionIndexByType@PriFileManager@Resources@Microsoft@@UEBA?B_NAEBT_DEFFILE_SECTION_TYPEID@@HHPEAH@Z
    virtual bool TryGetSectionIndexByType(_DEFFILE_SECTION_TYPEID const &, int, int, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadFile@PriFileManager@Resources@Microsoft@@QEAAJPEBVManagedFile@23@@Z
    long UnloadFile(WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriFileManager@Resources@Microsoft@@UEAA@XZ
    virtual ~PriFileManager();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriFileManager@Resources@Microsoft@@AEAA@XZ
    PriFileManager();
};
} // namespace Microsoft::Resources
