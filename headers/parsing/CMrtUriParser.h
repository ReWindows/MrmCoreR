#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources::Runtime {
class CMrtUriParser {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseIUri@CMrtUriParser@Runtime@Resources@Microsoft@@QEAAPEAUIUri@@XZ
    IUri * GetBaseIUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMrtUriReference@CMrtUriParser@Runtime@Resources@Microsoft@@SAJPEBGPEA_NPEAVStringResult@34@@Z
    static long IsMrtUriReference(unsigned short const *, bool *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Normalize@CMrtUriParser@Runtime@Resources@Microsoft@@QEAAJPEBG@Z
    long Normalize(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMrtUriParser@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CMrtUriParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUnreserved@CMrtUriParser@Runtime@Resources@Microsoft@@CA_NG@Z
    static bool _IsUnreserved(unsigned short);
};
} // namespace Microsoft::Resources::Runtime
