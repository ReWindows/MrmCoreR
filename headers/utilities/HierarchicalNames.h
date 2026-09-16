#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 29 member(s).
namespace Microsoft::Resources {
class HierarchicalNames {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalNames@Resources@Microsoft@@UEBA_NPEBGHPEAH11@Z
    virtual bool Contains(unsigned short const *, int, int *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@HierarchicalNames@Resources@Microsoft@@UEBA_NPEBGPEAH11@Z
    virtual bool Contains(unsigned short const *, int *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalNames@Resources@Microsoft@@SAJAEBT_DEFFILE_SECTION_TYPEID@@PEBXHPEAPEAV123@@Z
    static long CreateInstance(_DEFFILE_SECTION_TYPEID const &, void const *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendents@HierarchicalNames@Resources@Microsoft@@QEBAJHHPEAH0H00@Z
    long GetDescendents(int, int, int *, int *, int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemNames@HierarchicalNames@Resources@Microsoft@@UEBAPEAVIAtomPool@23@XZ
    virtual WindissectOpaque * GetItemNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxNameLength@HierarchicalNames@Resources@Microsoft@@UEBAHXZ
    virtual int GetMaxNameLength() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@HierarchicalNames@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumNames@HierarchicalNames@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumScopes@HierarchicalNames@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumScopes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeNames@HierarchicalNames@Resources@Microsoft@@UEBAPEAVIAtomPool@23@XZ
    virtual WindissectOpaque * GetScopeNames() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemInfo@HierarchicalNames@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@@Z
    virtual bool TryGetItemInfo(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemLocalName@HierarchicalNames@Resources@Microsoft@@QEBA_NHPEAVStringResult@23@@Z
    bool TryGetItemLocalName(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetName@HierarchicalNames@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@PEAH1@Z
    virtual bool TryGetName(int, int, WindissectOpaque *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetName@HierarchicalNames@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@PEAH1@Z
    virtual bool TryGetName(int, WindissectOpaque *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChild@HierarchicalNames@Resources@Microsoft@@UEBA_NHHPEAH0@Z
    virtual bool TryGetScopeChild(int, int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeChildName@HierarchicalNames@Resources@Microsoft@@UEBA_NHHPEAVStringResult@23@@Z
    virtual bool TryGetScopeChildName(int, int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScopeInfo@HierarchicalNames@Resources@Microsoft@@UEBA_NHPEAVStringResult@23@PEAH@Z
    virtual bool TryGetScopeInfo(int, WindissectOpaque *, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HierarchicalNames@Resources@Microsoft@@UEAA@XZ
    virtual ~HierarchicalNames();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyNameSegment@HierarchicalNames@Resources@Microsoft@@AEBAJIHHPEAG@Z
    long CopyNameSegment(unsigned int, int, int, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsciiName@HierarchicalNames@Resources@Microsoft@@AEBAJHHPEAPEBD@Z
    long GetAsciiName(int, int, char const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDescendents@HierarchicalNames@Resources@Microsoft@@AEBAJHIPEAH0@Z
    long GetNumDescendents(int, unsigned int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUtf16Name@HierarchicalNames@Resources@Microsoft@@AEBAJHHPEAPEBG@Z
    long GetUtf16Name(int, int, unsigned short const * *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalNames@Resources@Microsoft@@AEAA@XZ
    HierarchicalNames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HierarchicalNames@Resources@Microsoft@@AEAAJAEBT_DEFFILE_SECTION_TYPEID@@PEBVIFileSection@23@PEBXH@Z
    long Init(_DEFFILE_SECTION_TYPEID const &, WindissectOpaque const *, void const *, int);
};
} // namespace Microsoft::Resources
