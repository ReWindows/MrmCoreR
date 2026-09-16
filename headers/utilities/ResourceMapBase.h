#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 35 member(s).
namespace Microsoft::Resources {
class ResourceMapBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ResourceMapBase@Resources@Microsoft@@SAJPEBVIFileSectionResolver@23@PEBVISchemaCollection@23@QEBVIFileSection@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const * const, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentGeneration@ResourceMapBase@Resources@Microsoft@@UEBA_KXZ
    virtual uint64_t GetCurrentGeneration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfo@ResourceMapBase@Resources@Microsoft@@UEBAPEBVIDecisionInfo@23@XZ
    virtual WindissectOpaque const * GetDecisionInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullResourceLink@ResourceMapBase@Resources@Microsoft@@UEBAJIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual long GetFullResourceLink(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalResourceLink@ResourceMapBase@Resources@Microsoft@@UEBAJIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual long GetInternalResourceLink(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFullLinks@ResourceMapBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumFullLinks() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumInternalLinks@ResourceMapBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumInternalLinks() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumLinksByResourceIndex@ResourceMapBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumLinksByResourceIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumReferencedSchemas@ResourceMapBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumReferencedSchemas() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResources@ResourceMapBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResources() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumTotalLinks@ResourceMapBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumTotalLinks() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalSchema@ResourceMapBase@Resources@Microsoft@@UEBAPEBVIHierarchicalSchema@23@XZ
    virtual WindissectOpaque const * GetOriginalSchema() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootPath@ResourceMapBase@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetPackageRootPath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferencedSchema@ResourceMapBase@Resources@Microsoft@@UEBAJHPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetReferencedSchema(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@ResourceMapBase@Resources@Microsoft@@UEBAJPEBGPEAVNamedResourceResult@23@@Z
    virtual long GetResource(unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceByIndex@ResourceMapBase@Resources@Microsoft@@UEBAJHPEAVNamedResourceResult@23@@Z
    virtual long GetResourceByIndex(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLinkById@ResourceMapBase@Resources@Microsoft@@UEBAJIPEAIPEAPEBVIHierarchicalSchema@23@0@Z
    virtual long GetResourceLinkById(unsigned int, unsigned int *, WindissectOpaque const * *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootSubtree@ResourceMapBase@Resources@Microsoft@@UEBAPEBVResourceMapSubtree@23@XZ
    virtual WindissectOpaque const * GetRootSubtree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@ResourceMapBase@Resources@Microsoft@@UEBAPEBVIHierarchicalSchema@23@XZ
    virtual WindissectOpaque const * GetSchema() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumResourceValues@ResourceMapBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetTotalNumResourceValues() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToSubtree@ResourceMapBase@Resources@Microsoft@@UEBAJPEBG@Z
    virtual long MoveToSubtree(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDecisionInfoOverride@ResourceMapBase@Resources@Microsoft@@UEBAXXZ
    virtual void ResetDecisionInfoOverride() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDecisionInfoOverride@ResourceMapBase@Resources@Microsoft@@UEBAJPEBVIDecisionInfo@23@PEBVRemapUInt16@23@@Z
    virtual long SetDecisionInfoOverride(WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageRootPath@ResourceMapBase@Resources@Microsoft@@UEBAJPEBG@Z
    virtual long SetPackageRootPath(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSchemaOverride@ResourceMapBase@Resources@Microsoft@@UEBAJPEBVIHierarchicalSchema@23@@Z
    virtual long SetSchemaOverride(WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceLinkForResourceIndex@ResourceMapBase@Resources@Microsoft@@UEBA_NIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual bool TryGetResourceLinkForResourceIndex(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceMapBase@Resources@Microsoft@@UEAA@XZ
    virtual ~ResourceMapBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ResourceMapBase@Resources@Microsoft@@IEAAJPEBVIFileSectionResolver@23@PEBVISchemaCollection@23@AEBT_DEFFILE_SECTION_TYPEID@@QEBVIFileSection@23@PEBEI@Z
    long Init(WindissectOpaque const *, WindissectOpaque const *, _DEFFILE_SECTION_TYPEID const &, WindissectOpaque const * const, unsigned char const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceMapBase@Resources@Microsoft@@IEAA@XZ
    ResourceMapBase();
};
} // namespace Microsoft::Resources
