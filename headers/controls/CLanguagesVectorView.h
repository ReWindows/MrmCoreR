#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources::Runtime::CContext {
class CLanguagesVectorView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CLanguagesVectorView@CContext@Runtime@Resources@Microsoft@@QEAAJPEBGPEAIPEA_N@Z
    long IndexOf(unsigned short const *, unsigned int *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?New@CLanguagesVectorView@CContext@Runtime@Resources@Microsoft@@SAJPEBGPEAPEAV12345@@Z
    static long New(unsigned short const *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLanguagesVectorView@CContext@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CLanguagesVectorView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CLanguagesVectorView@CContext@Runtime@Resources@Microsoft@@AEAAJPEBG@Z
    long Init(unsigned short const *);
};
} // namespace Microsoft::Resources::Runtime::CContext
