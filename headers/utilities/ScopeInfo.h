#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 22 member(s).
namespace Microsoft::Resources::Build {
class ScopeInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToGlobal@ScopeInfo@Build@Resources@Microsoft@@UEAAJPEAV1234@@Z
    virtual long AddToGlobal(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ScopeInfo@Build@Resources@Microsoft@@SAJPEBVHierarchicalNameSegment@234@PEAV1234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@ScopeInfo@Build@Resources@Microsoft@@QEBAPEAVHNamesNode@234@I@Z
    WindissectOpaque * GetChild(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddItem@ScopeInfo@Build@Resources@Microsoft@@QEAAJPEBGPEAPEAVItemInfo@234@@Z
    long GetOrAddItem(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddScope@ScopeInfo@Build@Resources@Microsoft@@QEAAJPEBGPEAPEAV1234@@Z
    long GetOrAddScope(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScope@ScopeInfo@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsScope() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewRootScope@ScopeInfo@Build@Resources@Microsoft@@SAJPEAVIHNamesGlobalNodes@234@PEAPEAV1234@@Z
    static long NewRootScope(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToItem@ScopeInfo@Build@Resources@Microsoft@@UEAAPEAVItemInfo@234@XZ
    virtual WindissectOpaque * ToItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToScope@ScopeInfo@Build@Resources@Microsoft@@UEAAPEAV1234@XZ
    virtual WindissectOpaque * ToScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetChild@ScopeInfo@Build@Resources@Microsoft@@QEBA_NHPEAPEAVHNamesNode@234@@Z
    bool TryGetChild(int, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetChild@ScopeInfo@Build@Resources@Microsoft@@QEBA_NPEBVHierarchicalNameSegment@234@PEAPEAVHNamesNode@234@@Z
    bool TryGetChild(WindissectOpaque const *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDescendent@ScopeInfo@Build@Resources@Microsoft@@QEBA_NPEBGPEAPEAVHNamesNode@234@@Z
    bool TryGetDescendent(unsigned short const *, WindissectOpaque * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScopeInfo@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~ScopeInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInsertionPoint@ScopeInfo@Build@Resources@Microsoft@@IEBAIPEBGIIPEAH@Z
    unsigned int FindInsertionPoint(unsigned short const *, unsigned int, unsigned int, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSearchRange@ScopeInfo@Build@Resources@Microsoft@@IEBAJPEBGPEAH11@Z
    long FindSearchRange(unsigned short const *, int *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddChildItem@ScopeInfo@Build@Resources@Microsoft@@IEAAJPEBVHierarchicalNameSegment@234@PEAPEAVItemInfo@234@@Z
    long GetOrAddChildItem(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddChildNode@ScopeInfo@Build@Resources@Microsoft@@IEAAJPEAVHNamesNode@234@PEAPEAV5234@@Z
    long GetOrAddChildNode(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddChildScope@ScopeInfo@Build@Resources@Microsoft@@IEAAJPEBVHierarchicalNameSegment@234@PEAPEAV1234@@Z
    long GetOrAddChildScope(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteSubscopeChanges@ScopeInfo@Build@Resources@Microsoft@@IEAA_NHH@Z
    bool NoteSubscopeChanges(int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScopeInfo@Build@Resources@Microsoft@@IEAA@PEAVIHNamesGlobalNodes@123@@Z
    ScopeInfo(WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
