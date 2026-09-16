#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 21 member(s).
namespace Microsoft::Resources {
class ResourceLinkSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSection@ResourceLinkSection@Resources@Microsoft@@SAJPEBVIFileSectionResolver@23@PEBVISchemaCollection@23@QEBVIFileSection@23@PEAPEAV123@@Z
    static long CreateFromSection(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const * const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ResourceLinkSection@Resources@Microsoft@@SAJPEBVIFileSectionResolver@23@PEBVISchemaCollection@23@AEBT_DEFFILE_SECTION_TYPEID@@PEBEHPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, _DEFFILE_SECTION_TYPEID const &, unsigned char const *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullResourceLink@ResourceLinkSection@Resources@Microsoft@@UEBAJIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual long GetFullResourceLink(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalResourceLink@ResourceLinkSection@Resources@Microsoft@@UEBAJIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual long GetInternalResourceLink(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFullLinks@ResourceLinkSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumFullLinks() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumInternalLinks@ResourceLinkSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumInternalLinks() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumLinksByResourceIndex@ResourceLinkSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumLinksByResourceIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumReferencedSchemas@ResourceLinkSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumReferencedSchemas() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumTotalLinks@ResourceLinkSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumTotalLinks() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferencedSchema@ResourceLinkSection@Resources@Microsoft@@UEBAJHPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetReferencedSchema(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLink@ResourceLinkSection@Resources@Microsoft@@QEBAJIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    long GetResourceLink(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLinkById@ResourceLinkSection@Resources@Microsoft@@UEBAJIPEAIPEAPEBVIHierarchicalSchema@23@0@Z
    virtual long GetResourceLinkById(unsigned int, unsigned int *, WindissectOpaque const * *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@ResourceLinkSection@Resources@Microsoft@@UEBAPEBVIHierarchicalSchema@23@XZ
    virtual WindissectOpaque const * GetSchema() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSchemaReferences@ResourceLinkSection@Resources@Microsoft@@QEAAJPEBVIFileSectionResolver@23@PEBVISchemaCollection@23@@Z
    long ResolveSchemaReferences(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceLinkForResourceIndex@ResourceLinkSection@Resources@Microsoft@@UEBA_NIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual bool TryGetResourceLinkForResourceIndex(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceLinkSection@Resources@Microsoft@@UEAA@XZ
    virtual ~ResourceLinkSection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ResourceLinkSection@Resources@Microsoft@@AEAAJAEBT_DEFFILE_SECTION_TYPEID@@PEBVIFileSectionResolver@23@PEBVISchemaCollection@23@PEBEI@Z
    long Init(_DEFFILE_SECTION_TYPEID const &, WindissectOpaque const *, WindissectOpaque const *, unsigned char const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceLinkSection@Resources@Microsoft@@AEAA@XZ
    ResourceLinkSection();
};
} // namespace Microsoft::Resources
