#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources::Build {
class DecisionInfoSectionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DecisionInfoSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@SAJPEAVFileBuilder@234@PEBVUnifiedEnvironment@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionInfoSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DecisionInfoSectionBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DecisionInfoSectionBuilder@Build@Resources@Microsoft@@AEAAJPEAVFileBuilder@234@PEBVUnifiedEnvironment@34@@Z
    long Init(WindissectOpaque *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
