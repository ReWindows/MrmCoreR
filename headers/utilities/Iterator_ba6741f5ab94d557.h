#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources::Runtime::CResourceManagerInternal {
class Iterator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Iterator@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEA_N@Z
    long MoveNext(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@Iterator@CResourceManagerInternal@Runtime@Resources@Microsoft@@SAJPEAV2345@PEAPEAV12345@@Z
    static long New(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Iterator@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEAPEBGPEAPEAVCResourceIndexInternal@345@@Z
    long get_Current(unsigned short const * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Iterator@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEA_N@Z
    long get_HasCurrent(bool *);
};
} // namespace Microsoft::Resources::Runtime::CResourceManagerInternal
