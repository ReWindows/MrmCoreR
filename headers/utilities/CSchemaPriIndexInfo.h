#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources::Runtime::CResourceManagerInternal {
class CSchemaPriIndexInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSchemaPriIndexInfo@CResourceManagerInternal@Runtime@Resources@Microsoft@@SAJPEBG0PEAVCResourceIndexInternal@345@_NPEAPEAV12345@@Z
    static long CreateInstance(unsigned short const *, unsigned short const *, WindissectOpaque *, bool, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSchemaPriIndexInfo@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CSchemaPriIndexInfo();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSchemaPriIndexInfo@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAA@PEAVCResourceIndexInternal@234@_N@Z
    CSchemaPriIndexInfo(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSchemaPriIndexInfo@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAAJPEBG0@Z
    long Init(unsigned short const *, unsigned short const *);
};
} // namespace Microsoft::Resources::Runtime::CResourceManagerInternal
