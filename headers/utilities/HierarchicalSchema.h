#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 32 member(s).
namespace Microsoft::Resources {
class HierarchicalSchema {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@HierarchicalSchema@Resources@Microsoft@@UEBAJPEAPEAVIHierarchicalSchema@23@@Z
    virtual long Clone(WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalSchema@Resources@Microsoft@@UEBA_NPEBGHPEAH1@Z
    virtual bool Contains(unsigned short const *, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalSchema@Resources@Microsoft@@UEBA_NPEBGPEAH1@Z
    virtual bool Contains(unsigned short const *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSection@HierarchicalSchema@Resources@Microsoft@@SAJPEBVIFileSection@23@PEAPEAV123@@Z
    static long CreateFromSection(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchema@Resources@Microsoft@@SAJAEBT_DEFFILE_SECTION_TYPEID@@PEBXHPEAPEAV123@@Z
    static long CreateInstance(_DEFFILE_SECTION_TYPEID const &, void const *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendents@HierarchicalSchema@Resources@Microsoft@@UEBAJHHPEAH0H00@Z
    virtual long GetDescendents(int, int, int *, int *, int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemNames@HierarchicalSchema@Resources@Microsoft@@UEBAPEAVIAtomPool@23@XZ
    virtual WindissectOpaque * GetItemNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorVersion@HierarchicalSchema@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMajorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorVersion@HierarchicalSchema@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMinorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDescendents@HierarchicalSchema@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetNumDescendents(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@HierarchicalSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumNames@HierarchicalSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumScopes@HierarchicalSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumScopes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumVersionInfos@HierarchicalSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumVersionInfos() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaBlobFromFileSection@HierarchicalSchema@Resources@Microsoft@@UEBAJPEAT_DEFFILE_SECTION_TYPEID@@PEAVBlobResult@23@@Z
    virtual long GetSchemaBlobFromFileSection(_DEFFILE_SECTION_TYPEID *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeNames@HierarchicalSchema@Resources@Microsoft@@UEBAPEAVIAtomPool@23@XZ
    virtual WindissectOpaque * GetScopeNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimpleId@HierarchicalSchema@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetSimpleId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@HierarchicalSchema@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetUniqueId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionInfo@HierarchicalSchema@Resources@Microsoft@@UEBAPEBVIHierarchicalSchemaVersionInfo@23@H@Z
    virtual WindissectOpaque const * GetVersionInfo(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemInfo@HierarchicalSchema@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@@Z
    virtual bool TryGetItemInfo(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemLocalName@HierarchicalSchema@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@@Z
    virtual bool TryGetItemLocalName(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRelativeItemName@HierarchicalSchema@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@@Z
    virtual bool TryGetRelativeItemName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRelativeScopeName@HierarchicalSchema@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@@Z
    virtual bool TryGetRelativeScopeName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChild@HierarchicalSchema@Resources@Microsoft@@UEBA_NHHPEAH0@Z
    virtual bool TryGetScopeChild(int, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChildName@HierarchicalSchema@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@@Z
    virtual bool TryGetScopeChildName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeInfo@HierarchicalSchema@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@PEAH@Z
    virtual bool TryGetScopeInfo(int, WindissectOpaque *, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HierarchicalSchema@Resources@Microsoft@@UEAA@XZ
    virtual ~HierarchicalSchema();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalSchema@Resources@Microsoft@@AEAA@XZ
    HierarchicalSchema();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HierarchicalSchema@Resources@Microsoft@@AEAAJAEBT_DEFFILE_SECTION_TYPEID@@PEBVIFileSection@23@PEBXH@Z
    long Init(_DEFFILE_SECTION_TYPEID const &, WindissectOpaque const *, void const *, int);
};
} // namespace Microsoft::Resources
