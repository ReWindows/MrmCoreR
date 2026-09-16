#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 31 member(s).
namespace Microsoft::Resources {
class ManagedSchema {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@ManagedSchema@Resources@Microsoft@@UEBAJPEAPEAVIHierarchicalSchema@23@@Z
    virtual long Clone(WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@ManagedSchema@Resources@Microsoft@@UEBA_NPEBGHPEAH1@Z
    virtual bool Contains(unsigned short const *, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@ManagedSchema@Resources@Microsoft@@UEBA_NPEBGPEAH1@Z
    virtual bool Contains(unsigned short const *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendents@ManagedSchema@Resources@Microsoft@@UEBAJHHPEAH0H00@Z
    virtual long GetDescendents(int, int, int *, int *, int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemNames@ManagedSchema@Resources@Microsoft@@UEBAPEAVIAtomPool@23@XZ
    virtual WindissectOpaque * GetItemNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorVersion@ManagedSchema@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMajorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorVersion@ManagedSchema@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMinorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDescendents@ManagedSchema@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetNumDescendents(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@ManagedSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumNames@ManagedSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumScopes@ManagedSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumScopes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumVersionInfos@ManagedSchema@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumVersionInfos() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaBlobFromFileSection@ManagedSchema@Resources@Microsoft@@UEBAJPEAT_DEFFILE_SECTION_TYPEID@@PEAVBlobResult@23@@Z
    virtual long GetSchemaBlobFromFileSection(_DEFFILE_SECTION_TYPEID *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeNames@ManagedSchema@Resources@Microsoft@@UEBAPEAVIAtomPool@23@XZ
    virtual WindissectOpaque * GetScopeNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimpleId@ManagedSchema@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetSimpleId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@ManagedSchema@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetUniqueId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionInfo@ManagedSchema@Resources@Microsoft@@UEBAPEBVIHierarchicalSchemaVersionInfo@23@H@Z
    virtual WindissectOpaque const * GetVersionInfo(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteFileAdded@ManagedSchema@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEBVIHierarchicalSchema@23@@Z
    long NoteFileAdded(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteFileRemoving@ManagedSchema@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEA_N@Z
    long NoteFileRemoving(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteFileUnloading@ManagedSchema@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEA_N@Z
    long NoteFileUnloading(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemInfo@ManagedSchema@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@@Z
    virtual bool TryGetItemInfo(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemLocalName@ManagedSchema@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@@Z
    virtual bool TryGetItemLocalName(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRelativeItemName@ManagedSchema@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@@Z
    virtual bool TryGetRelativeItemName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRelativeScopeName@ManagedSchema@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@@Z
    virtual bool TryGetRelativeScopeName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChild@ManagedSchema@Resources@Microsoft@@UEBA_NHHPEAH0@Z
    virtual bool TryGetScopeChild(int, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChildName@ManagedSchema@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@@Z
    virtual bool TryGetScopeChildName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeInfo@ManagedSchema@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@PEAH@Z
    virtual bool TryGetScopeInfo(int, WindissectOpaque *, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManagedSchema@Resources@Microsoft@@UEAA@XZ
    virtual ~ManagedSchema();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ManagedSchema@Resources@Microsoft@@AEAA@PEBVManagedFile@12@PEBVIHierarchicalSchema@12@@Z
    ManagedSchema(WindissectOpaque const *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources
