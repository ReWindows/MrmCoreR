#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources::Runtime {
class CResourceValidatorInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNamedResource@CResourceValidatorInternal@Runtime@Resources@Microsoft@@QEAAJW4VALIDATE_OPTIONS_INTERNAL@234@PEAVCResolvedInstanceCollectionInternal@234@@Z
    long ValidateNamedResource(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePriFile@CResourceValidatorInternal@Runtime@Resources@Microsoft@@QEAAJW4VALIDATE_OPTIONS_INTERNAL@234@PEBG@Z
    long ValidatePriFile(int, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubTreeWalk@CResourceValidatorInternal@Runtime@Resources@Microsoft@@AEAAJPEBVResourceMapSubtree@34@W4VALIDATE_OPTIONS_INTERNAL@234@_N@Z
    long _SubTreeWalk(WindissectOpaque const *, int, bool);
};
} // namespace Microsoft::Resources::Runtime
