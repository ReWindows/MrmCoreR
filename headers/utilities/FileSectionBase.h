#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources {
class FileSectionBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@FileSectionBase@Resources@Microsoft@@UEBAPEBEPEAI@Z
    virtual unsigned char const * GetData(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSize@FileSectionBase@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetDataSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@FileSectionBase@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentFile@FileSectionBase@Resources@Microsoft@@UEBAQEBVBaseFile@23@XZ
    virtual WindissectOpaque const * const GetParentFile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@FileSectionBase@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionHeader@FileSectionBase@Resources@Microsoft@@UEBAJPEAPEBU_DEFFILE_SECTION_HEADER@@@Z
    virtual long GetSectionHeader(_DEFFILE_SECTION_HEADER const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@FileSectionBase@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@FileSectionBase@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@FileSectionBase@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalSize@FileSectionBase@Resources@Microsoft@@UEBAJPEAI@Z
    virtual long GetTotalSize(unsigned int *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileSectionBase@Resources@Microsoft@@IEAA@XZ
    FileSectionBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FileSectionBase@Resources@Microsoft@@IEAAJQEBVIFileSection@23@QEBXH@Z
    long Init(WindissectOpaque const * const, void const * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FileSectionBase@Resources@Microsoft@@IEAAJQEBVIFileSection@23@QEBXHAEBT_DEFFILE_SECTION_TYPEID@@@Z
    long Init(WindissectOpaque const * const, void const * const, int, _DEFFILE_SECTION_TYPEID const &);
};
} // namespace Microsoft::Resources
