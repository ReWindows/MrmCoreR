#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 20 member(s).
namespace Microsoft::Resources::Build {
class DataItemsSectionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataItem@DataItemsSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBXIHPEAU_PrebuildItemReference@1234@@Z
    long AddDataItem(void const *, unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataString@DataItemsSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBGPEAU_PrebuildItemReference@1234@@Z
    long AddDataString(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DataItemsSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DataItemsSectionBuilder@Build@Resources@Microsoft@@SAJPEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuiltItemInfo@DataItemsSectionBuilder@Build@Resources@Microsoft@@QEBAJPEBU_PrebuildItemReference@1234@PEAU_BuiltItemReference@1234@@Z
    long GetBuiltItemInfo(WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataBlob@DataItemsSectionBuilder@Build@Resources@Microsoft@@QEBAJHPEAVBlobResult@34@@Z
    long GetDataBlob(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@DataItemsSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataItemsSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DataItemsSectionBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLargeItemCapacity@DataItemsSectionBuilder@Build@Resources@Microsoft@@AEAAJH@Z
    long EnsureLargeItemCapacity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSmallItemCapacity@DataItemsSectionBuilder@Build@Resources@Microsoft@@AEAAJH@Z
    long EnsureSmallItemCapacity(int);
};
} // namespace Microsoft::Resources::Build
