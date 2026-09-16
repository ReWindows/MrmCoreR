#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources {
class RemapUInt16 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@RemapUInt16@Resources@Microsoft@@SAJHPEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@RemapUInt16@Resources@Microsoft@@SAJPEBV123@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSize@RemapUInt16@Resources@Microsoft@@QEAAJH@Z
    long EnsureSize(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemapUInt16@Resources@Microsoft@@QEAA@XZ
    RemapUInt16();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMapping@RemapUInt16@Resources@Microsoft@@QEBA_NGPEAG@Z
    bool TryGetMapping(unsigned short, unsigned short *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetMapping@RemapUInt16@Resources@Microsoft@@QEAA_NGG@Z
    bool TrySetMapping(unsigned short, unsigned short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemapUInt16@Resources@Microsoft@@UEAA@XZ
    virtual ~RemapUInt16();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPresent@RemapUInt16@Resources@Microsoft@@IEAA_NG@Z
    bool SetIsPresent(unsigned short);
};
} // namespace Microsoft::Resources
