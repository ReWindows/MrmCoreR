#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class IContextManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateContextManager@IContextManager@Core@Resources@ApplicationModel@Windows@@SAJPEAVMrmProfile@3Microsoft@@PEAPEAV12345@@Z
    static long s_CreateContextManager(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsInDesignMode@IContextManager@Core@Resources@ApplicationModel@Windows@@SAJPEA_N@Z
    static long s_IsInDesignMode(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IContextManager@Core@Resources@ApplicationModel@Windows@@UEAA@XZ
    virtual ~IContextManager();
};
} // namespace Windows::ApplicationModel::Resources::Core
