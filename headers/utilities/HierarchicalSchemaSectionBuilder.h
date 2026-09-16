#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 47 member(s).
namespace Microsoft::Resources::Build {
class HierarchicalSchemaSectionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@HierarchicalSchemaSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAJPEAPEAVIHierarchicalSchema@34@@Z
    virtual long Clone(WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NPEBGHPEAH1@Z
    virtual bool Contains(unsigned short const *, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NPEBGPEAH1@Z
    virtual bool Contains(unsigned short const *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@SAJPEAVPriSectionBuilder@234@QEBVIHierarchicalSchema@34@W4PriBuildType@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque const * const, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@SAJPEAVPriSectionBuilder@234@PEBG1GPEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, unsigned short const *, unsigned short const *, unsigned short, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendents@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAJHHPEAH0H00@Z
    virtual long GetDescendents(int, int, int *, int *, int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemNames@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAPEAVIAtomPool@34@XZ
    virtual WindissectOpaque * GetItemNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorVersion@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMajorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorVersion@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMinorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDescendents@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetNumDescendents(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumNames@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumScopes@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumScopes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumVersionInfos@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumVersionInfos() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddItem@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBGPEAH@Z
    long GetOrAddItem(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaBlobFromFileSection@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAJPEAT_DEFFILE_SECTION_TYPEID@@PEAVBlobResult@34@@Z
    virtual long GetSchemaBlobFromFileSection(_DEFFILE_SECTION_TYPEID *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeNames@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAPEAVIAtomPool@34@XZ
    virtual WindissectOpaque * GetScopeNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimpleId@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetSimpleId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetUniqueId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionInfo@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBAPEBVIHierarchicalSchemaVersionInfo@34@H@Z
    virtual WindissectOpaque const * GetVersionInfo(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemInfo@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NHPEAVStringResult@34@@Z
    virtual bool TryGetItemInfo(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemLocalName@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NHPEAVStringResult@34@@Z
    virtual bool TryGetItemLocalName(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRelativeItemName@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NHHPEAVStringResult@34@@Z
    virtual bool TryGetRelativeItemName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRelativeScopeName@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NHHPEAVStringResult@34@@Z
    virtual bool TryGetRelativeScopeName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChild@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NHHPEAH0@Z
    virtual bool TryGetScopeChild(int, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChildName@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NHHPEAVStringResult@34@@Z
    virtual bool TryGetScopeChildName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeInfo@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEBA_NHPEAVStringResult@34@PEAH@Z
    virtual bool TryGetScopeInfo(int, WindissectOpaque *, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~HierarchicalSchemaSectionBuilder();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@AEAA@XZ
    HierarchicalSchemaSectionBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@AEAAJPEAVPriSectionBuilder@234@QEBVIHierarchicalSchema@34@W4PriBuildType@234@@Z
    long Init(WindissectOpaque *, WindissectOpaque const * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@AEAAJPEAVPriSectionBuilder@234@PEBG1G@Z
    long Init(WindissectOpaque *, unsigned short const *, unsigned short const *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinalized@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@AEBA_NXZ
    bool IsFinalized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPreviousSchemaContents@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@AEAAJXZ
    long ReadPreviousSchemaContents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSchemaDescription@HierarchicalSchemaSectionBuilder@Build@Resources@Microsoft@@AEAAJPEBVIHierarchicalSchemaDescription@34@@Z
    long ReadSchemaDescription(WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
