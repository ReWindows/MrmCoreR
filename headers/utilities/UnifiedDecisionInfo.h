#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources {
class UnifiedDecisionInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@UnifiedDecisionInfo@Resources@Microsoft@@SAJPEBVUnifiedEnvironment@23@PEBVManagedFile@23@PEBVIDecisionInfo@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecision@UnifiedDecisionInfo@Resources@Microsoft@@UEBAJHPEAVDecisionResult@23@@Z
    virtual long GetDecision(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionNumQualifierSets@UnifiedDecisionInfo@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetDecisionNumQualifierSets(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDecisions@UnifiedDecisionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumDecisions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierSets@UnifiedDecisionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierSets() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@UnifiedDecisionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@UnifiedDecisionInfo@Resources@Microsoft@@UEBAJHPEAVQualifierResult@23@@Z
    virtual long GetQualifier(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSet@UnifiedDecisionInfo@Resources@Microsoft@@UEBAJHPEAVQualifierSetResult@23@@Z
    virtual long GetQualifierSet(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Merge@UnifiedDecisionInfo@Resources@Microsoft@@QEAAJPEBVIDecisionInfo@23@PEAVRemapUInt16@23@11@Z
    long Merge(WindissectOpaque const *, WindissectOpaque*, WindissectOpaque*, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Merge@UnifiedDecisionInfo@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEBVIDecisionInfo@23@PEAVRemapUInt16@23@22@Z
    long Merge(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque*, WindissectOpaque*, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteFileUnloading@UnifiedDecisionInfo@Resources@Microsoft@@QEAAJPEBVManagedFile@23@PEA_N@Z
    long NoteFileUnloading(WindissectOpaque const *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedDecisionInfo@Resources@Microsoft@@UEAA@XZ
    virtual ~UnifiedDecisionInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@UnifiedDecisionInfo@Resources@Microsoft@@IEAAJPEBVUnifiedEnvironment@23@PEBVManagedFile@23@PEBVIDecisionInfo@23@@Z
    long Init(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedDecisionInfo@Resources@Microsoft@@IEAA@XZ
    UnifiedDecisionInfo();
};
} // namespace Microsoft::Resources
