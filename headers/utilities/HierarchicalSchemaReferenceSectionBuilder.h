#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources::Build {
class HierarchicalSchemaReferenceSectionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@HierarchicalSchemaReferenceSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@SAJPEAVIHierarchicalSchema@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueIdLength@HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@AEBAIXZ
    unsigned int GetUniqueIdLength() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalSchemaReferenceSectionBuilder@Build@Resources@Microsoft@@AEAA@PEAVIHierarchicalSchema@23@@Z
    HierarchicalSchemaReferenceSectionBuilder(WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
