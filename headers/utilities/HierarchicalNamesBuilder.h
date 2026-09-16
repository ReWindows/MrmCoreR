#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 28 member(s).
namespace Microsoft::Resources::Build {
class HierarchicalNamesBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@HierarchicalNamesBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalNamesBuilder@Build@Resources@Microsoft@@QEBA_NPEBGHPEAH1@Z
    bool Contains(unsigned short const *, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalNamesBuilder@Build@Resources@Microsoft@@QEBA_NPEBGPEAH1@Z
    bool Contains(unsigned short const *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalNamesBuilder@Build@Resources@Microsoft@@SAJIPEAVAtomPoolGroup@34@PEAPEAV1234@@Z
    static long CreateInstance(unsigned int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfig@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBAPEBVHierarchicalNamesConfig@34@XZ
    virtual WindissectOpaque const * GetConfig() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddItem@HierarchicalNamesBuilder@Build@Resources@Microsoft@@QEAAJPEBGPEAPEAVItemInfo@234@@Z
    long GetOrAddItem(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddScope@HierarchicalNamesBuilder@Build@Resources@Microsoft@@QEAAJPEBGPEAPEAVScopeInfo@234@@Z
    long GetOrAddScope(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeByIndex@HierarchicalNamesBuilder@Build@Resources@Microsoft@@QEBA_NHPEAPEAVScopeInfo@234@@Z
    bool TryGetScopeByIndex(int, WindissectOpaque * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HierarchicalNamesBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~HierarchicalNamesBuilder();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItem@HierarchicalNamesBuilder@Build@Resources@Microsoft@@MEAAJPEAVItemInfo@234@PEAH@Z
    virtual long AddItem(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScope@HierarchicalNamesBuilder@Build@Resources@Microsoft@@MEAAJPEAVScopeInfo@234@PEAH@Z
    virtual long AddScope(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignChildNameIndices@HierarchicalNamesBuilder@Build@Resources@Microsoft@@IEAA_NPEAVScopeInfo@234@PEAH@Z
    bool AssignChildNameIndices(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTotalStringsSize@HierarchicalNamesBuilder@Build@Resources@Microsoft@@KAJIPEBVScopeInfo@234@PEAH11@Z
    static long ComputeTotalStringsSize(unsigned int, WindissectOpaque const *, int *, int *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalNamesBuilder@Build@Resources@Microsoft@@IEAA@I@Z
    HierarchicalNamesBuilder(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HierarchicalNamesBuilder@Build@Resources@Microsoft@@IEAAJPEAVAtomPoolGroup@34@@Z
    long Init(WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
