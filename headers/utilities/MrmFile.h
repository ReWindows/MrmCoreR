#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 33 member(s).
namespace Microsoft::Resources {
class MrmFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MrmFile@Resources@Microsoft@@SAJPEAVPriFileManager@23@PEBGPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsoluteFolderPath@MrmFile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetAbsoluteFolderPath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomPoolSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileAtomPool@23@@Z
    virtual long GetAtomPoolSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseFile@MrmFile@Resources@Microsoft@@UEBAJPEAPEBVBaseFile@23@@Z
    virtual long GetBaseFile(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataItemsSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileDataItemsSection@23@@Z
    virtual long GetDataItemsSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileDataSection@23@@Z
    virtual long GetDataSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfoSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEAVDecisionInfoFileSection@23@@Z
    virtual long GetDecisionInfoSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultQualifierMapping@MrmFile@Resources@Microsoft@@UEBAJHPEAPEBVRemapAtomPool@23@@Z
    virtual long GetDefaultQualifierMapping(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentMappingSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEBVEnvironmentMapping@23@@Z
    virtual long GetEnvironmentMappingSection(int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileDefaultEnvironment@MrmFile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    virtual long GetFileDefaultEnvironment(int, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileListSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEAVFileFileList@23@@Z
    virtual long GetFileListSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@MrmFile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFilePath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFiles@MrmFile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumFiles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriDescriptorSection@MrmFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEAVPriDescriptor@23@@Z
    virtual long GetPriDescriptorSection(WindissectOpaque const *, int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@MrmFile@Resources@Microsoft@@UEBAPEAVCoreProfile@23@XZ
    virtual WindissectOpaque * GetProfile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLinkSection@MrmFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEBVResourceLinkSection@23@@Z
    virtual long GetResourceLinkSection(WindissectOpaque const *, int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMapSection@MrmFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEAVResourceMapBase@23@@Z
    virtual long GetResourceMapSection(WindissectOpaque const *, int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReverseFileMapSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEAVReverseFileMap@23@@Z
    virtual long GetReverseFileMapSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaSection@MrmFile@Resources@Microsoft@@UEBAJHFPEAPEAVHierarchicalSchema@23@@Z
    virtual long GetSchemaSection(int, short, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSection@MrmFile@Resources@Microsoft@@UEBAJPEBVISchemaCollection@23@HFPEAPEBVIFileSection@23@@Z
    virtual long GetSection(WindissectOpaque const *, int, short, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedEnvironment@MrmFile@Resources@Microsoft@@UEBAPEAVUnifiedEnvironment@23@XZ
    virtual WindissectOpaque * GetUnifiedEnvironment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveFileFileList@MrmFile@Resources@Microsoft@@UEAAJPEBVFileFileList@23@@Z
    virtual long ResolveFileFileList(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSectionIndexByType@MrmFile@Resources@Microsoft@@UEBA?B_NAEBT_DEFFILE_SECTION_TYPEID@@HHPEAH@Z
    virtual bool TryGetSectionIndexByType(_DEFFILE_SECTION_TYPEID const &, int, int, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrmFile@Resources@Microsoft@@UEAA@XZ
    virtual ~MrmFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MrmFile@Resources@Microsoft@@IEAAJPEAVUnifiedEnvironment@23@IPEBG@Z
    long Init(WindissectOpaque *, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MrmFile@Resources@Microsoft@@IEAAJPEAVPriFileManager@23@PEBG@Z
    long Init(WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MrmFile@Resources@Microsoft@@IEAAJPEAVUnifiedEnvironment@23@IPEBE_K@Z
    long Init(WindissectOpaque *, unsigned int, unsigned char const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSections@MrmFile@Resources@Microsoft@@IEAAJXZ
    long InitSections();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAndGetSection@MrmFile@Resources@Microsoft@@IEBAJFPEAPEAVMrmFileSection@23@@Z
    long InitializeAndGetSection(short, WindissectOpaque * *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrmFile@Resources@Microsoft@@IEAA@XZ
    MrmFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSections@MrmFile@Resources@Microsoft@@IEAAXXZ
    void ReleaseSections();
};
} // namespace Microsoft::Resources
