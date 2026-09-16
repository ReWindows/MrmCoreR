#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources {
class ResourceMapSubtree {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendentResourceName@ResourceMapSubtree@Resources@Microsoft@@QEBAJHPEAVStringResult@23@@Z
    long GetDescendentResourceName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@ResourceMapSubtree@Resources@Microsoft@@QEBAJPEBGPEAVNamedResourceResult@23@@Z
    long GetResource(unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceNameBySchemaIndex@ResourceMapSubtree@Resources@Microsoft@@QEBAJHPEAVStringResult@23@@Z
    long GetResourceNameBySchemaIndex(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtree@ResourceMapSubtree@Resources@Microsoft@@QEBAJPEBGPEAPEBV123@@Z
    long GetSubtree(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtreeRootIndex@ResourceMapSubtree@Resources@Microsoft@@UEBAHXZ
    virtual int GetSubtreeRootIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToSubtree@ResourceMapSubtree@Resources@Microsoft@@UEAAJPEBG@Z
    virtual long MoveToSubtree(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceMapSubtree@Resources@Microsoft@@UEAA@XZ
    virtual ~ResourceMapSubtree();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ResourceMapSubtree@Resources@Microsoft@@KAJPEBVIResourceMapBase@23@HPEAPEBV123@@Z
    static long CreateInstance(WindissectOpaque const *, int, WindissectOpaque const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrUpdateDescendentResources@ResourceMapSubtree@Resources@Microsoft@@IEBAJXZ
    long GetOrUpdateDescendentResources() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrUpdateDescendentScopes@ResourceMapSubtree@Resources@Microsoft@@IEBAJXZ
    long GetOrUpdateDescendentScopes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrUpdateDescendents@ResourceMapSubtree@Resources@Microsoft@@IEBAJXZ
    long GetOrUpdateDescendents() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitResourceMapSubtree@ResourceMapSubtree@Resources@Microsoft@@IEAAJPEBVIResourceMapBase@23@H@Z
    long InitResourceMapSubtree(WindissectOpaque const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceMapSubtree@Resources@Microsoft@@IEAA@XZ
    ResourceMapSubtree();
};
} // namespace Microsoft::Resources
