#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources {
class CoreWindowContainer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreWindowContainer@Resources@Microsoft@@QEAA@PEAUICoreWindow@Core@UI@Windows@@@Z
    CoreWindowContainer(::Windows::UI::Core::ICoreWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowContainer@Resources@Microsoft@@QEAA@XZ
    ~CoreWindowContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CoreWindowContainer@Resources@Microsoft@@AEAAJXZ
    long Initialize();
};
} // namespace Microsoft::Resources
