#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 31 member(s).
namespace Microsoft::Resources {
class ManagedFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ManagedFile@Resources@Microsoft@@SAJPEBVPriFileManager@23@HPEBVNormalizedFilePath@23@PEBGW4LoadPriFlags@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, int, WindissectOpaque const *, unsigned short const *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsoluteFolderPath@ManagedFile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetAbsoluteFolderPath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomPoolSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileAtomPool@23@@Z
    virtual long GetAtomPoolSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseFile@ManagedFile@Resources@Microsoft@@UEBAJPEAPEBVBaseFile@23@@Z
    virtual long GetBaseFile(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataItemsSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileDataItemsSection@23@@Z
    virtual long GetDataItemsSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileDataSection@23@@Z
    virtual long GetDataSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfoSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEAVDecisionInfoFileSection@23@@Z
    virtual long GetDecisionInfoSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultQualifierMapping@ManagedFile@Resources@Microsoft@@UEBAJHPEAPEBVRemapAtomPool@23@@Z
    virtual long GetDefaultQualifierMapping(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentMappingSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEBVEnvironmentMapping@23@@Z
    virtual long GetEnvironmentMappingSection(int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileDefaultEnvironment@ManagedFile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    virtual long GetFileDefaultEnvironment(int, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileListSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileFileList@23@@Z
    virtual long GetFileListSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@ManagedFile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFilePath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFiles@ManagedFile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumFiles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriDescriptorSection@ManagedFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEAVPriDescriptor@23@@Z
    virtual long GetPriDescriptorSection(WindissectOpaque const *, int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@ManagedFile@Resources@Microsoft@@UEBAPEAVCoreProfile@23@XZ
    virtual WindissectOpaque * GetProfile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLinkSection@ManagedFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEBVResourceLinkSection@23@@Z
    virtual long GetResourceLinkSection(WindissectOpaque const *, int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMapSection@ManagedFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEAVResourceMapBase@23@@Z
    virtual long GetResourceMapSection(WindissectOpaque const *, int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReverseFileMapSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEAVReverseFileMap@23@@Z
    virtual long GetReverseFileMapSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaSection@ManagedFile@Resources@Microsoft@@UEBAJHFPEAPEAVHierarchicalSchema@23@@Z
    virtual long GetSchemaSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSection@ManagedFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEBVIFileSection@23@@Z
    virtual long GetSection(WindissectOpaque const *, int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedEnvironment@ManagedFile@Resources@Microsoft@@UEBAPEAVUnifiedEnvironment@23@XZ
    virtual WindissectOpaque * GetUnifiedEnvironment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeFilePath@ManagedFile@Resources@Microsoft@@SAJPEBGPEAVStringResult@23@@Z
    static long NormalizeFilePath(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizePackageRoot@ManagedFile@Resources@Microsoft@@SAJPEBG0PEAVStringResult@23@@Z
    static long NormalizePackageRoot(unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveFileFileList@ManagedFile@Resources@Microsoft@@UEAAJPEBVFileFileList@23@@Z
    virtual long ResolveFileFileList(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSectionIndexByType@ManagedFile@Resources@Microsoft@@UEBA?B_NAEBT_DEFFILE_SECTION_TYPEID@@HHPEAH@Z
    virtual bool TryGetSectionIndexByType(_DEFFILE_SECTION_TYPEID const &, int, int, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManagedFile@Resources@Microsoft@@UEAA@XZ
    virtual ~ManagedFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ManagedFile@Resources@Microsoft@@IEAAJPEBVPriFileManager@23@PEBVNormalizedFilePath@23@PEBG@Z
    long Initialize(WindissectOpaque const *, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InnerLoad@ManagedFile@Resources@Microsoft@@MEBAJXZ
    virtual long InnerLoad() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InnerUnload@ManagedFile@Resources@Microsoft@@MEBAJXZ
    virtual long InnerUnload() const;
};
} // namespace Microsoft::Resources
