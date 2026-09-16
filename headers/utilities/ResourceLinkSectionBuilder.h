#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 23 member(s).
namespace Microsoft::Resources::Build {
class ResourceLinkSectionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEAAJHPEBG@Z
    virtual long AddResourceLink(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEAAJHPEBVHierarchicalSchemaSectionBuilder@234@PEBG@Z
    virtual long AddResourceLink(int, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEAAJPEBG0@Z
    virtual long AddResourceLink(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEAAJPEBGPEBVHierarchicalSchemaSectionBuilder@234@0@Z
    virtual long AddResourceLink(unsigned short const *, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@ResourceLinkSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@SAJPEAVHierarchicalSchemaSectionBuilder@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBAPEAVHierarchicalSchemaSectionBuilder@234@XZ
    virtual WindissectOpaque * GetSchema() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceIndex@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@QEBA_NHPEBGPEAH@Z
    bool TryGetResourceIndex(int, unsigned short const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceLinkByResourceIndex@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@QEBA_NHPEAH0@Z
    bool TryGetResourceLinkByResourceIndex(int, int *, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceLinkSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~ResourceLinkSectionBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeLinks@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@AEAAJXZ
    long FinalizeLinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ResourceLinkSectionBuilder@Build@Resources@Microsoft@@AEAAJPEAVHierarchicalSchemaSectionBuilder@234@@Z
    long Init(WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
