#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 19 member(s).
namespace Microsoft::Resources::Build {
class FileListBuilder {
public:
    class FinalizedBuilder;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@FileListBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FileListBuilder@Build@Resources@Microsoft@@SAJPEAVFileBuilder@234@IPEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@FileListBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@FileListBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@FileListBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@FileListBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@FileListBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@FileListBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@FileListBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@FileListBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@FileListBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileListBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~FileListBuilder();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignFolderIndices@FileListBuilder@Build@Resources@Microsoft@@IEAAJPEAVFolderInfo@234@HPEAII1I@Z
    long AssignFolderIndices(WindissectOpaque *, int, unsigned int *, unsigned int, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFolderInfo@FileListBuilder@Build@Resources@Microsoft@@IEBAJPEBVFolderInfo@234@HHPEAU_DEFFILE_FILELIST_FOLDER_ENTRY@@PEAIIPEAU_DEFFILE_FILELIST_FILE_ENTRY@@2IPEAVWriteableStringPool@234@@Z
    long BuildFolderInfo(WindissectOpaque const *, int, int, _DEFFILE_FILELIST_FOLDER_ENTRY *, unsigned int *, unsigned int, _DEFFILE_FILELIST_FILE_ENTRY *, unsigned int *, unsigned int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTotalStringsSize@FileListBuilder@Build@Resources@Microsoft@@KAJPEBVFolderInfo@234@IPEA_K1@Z
    static long ComputeTotalStringsSize(WindissectOpaque const *, unsigned int, uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTotalStringsSizeInBytes@FileListBuilder@Build@Resources@Microsoft@@KA_KPEBVFolderInfo@234@I@Z
    static uint64_t ComputeTotalStringsSizeInBytes(WindissectOpaque const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileListBuilder@Build@Resources@Microsoft@@IEAA@PEAVFileBuilder@123@I@Z
    FileListBuilder(WindissectOpaque *, unsigned int);
};
} // namespace Microsoft::Resources::Build
