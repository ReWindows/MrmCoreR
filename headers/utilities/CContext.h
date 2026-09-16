#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 21 member(s).
namespace Microsoft::Resources::Runtime {
class CContext {
public:
    class CLanguagesVectorView;
    class QualifierValuesIterator;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfQualifierValueUpdateIsAllowedAndRequired@CContext@Runtime@Resources@Microsoft@@QEBAJPEBG0_NPEA_N@Z
    long CheckIfQualifierValueUpdateIsAllowedAndRequired(unsigned short const *, unsigned short const *, bool, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CContext@Runtime@Resources@Microsoft@@QEBAJPEAPEBV1234@@Z
    long Clone(WindissectOpaque const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverrideContext@CContext@Runtime@Resources@Microsoft@@QEBAJIPEAUATTRIBUTE_OVERRIDE_INTERNAL@234@W4ContextType@234@PEAPEBV1234@@Z
    long CreateOverrideContext(unsigned int, WindissectOpaque *, int, WindissectOpaque const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverrideContext@CContext@Runtime@Resources@Microsoft@@QEBAJIPEAUATTRIBUTE_OVERRIDE_INTERNAL@234@PEAPEBV1234@@Z
    long CreateOverrideContext(unsigned int, WindissectOpaque *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValue@CContext@Runtime@Resources@Microsoft@@QEBAJPEBG_KPEAGPEA_K@Z
    long GetAttributeValue(unsigned short const *, uint64_t, unsigned short *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CContext@Runtime@Resources@Microsoft@@QEAAJPEAI@Z
    long GetSize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContext@Runtime@Resources@Microsoft@@QEAAJPEAVMrmProfile@34@PEAVIResolver@34@PEBVUnifiedEnvironment@34@W4ContextType@234@@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContext@Runtime@Resources@Microsoft@@QEAAJPEAVIResolver@34@PEBVUnifiedEnvironment@34@_N@Z
    long Initialize(WindissectOpaque *, WindissectOpaque const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CContext@Runtime@Resources@Microsoft@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CContext@Runtime@Resources@Microsoft@@QEAAJ_N@Z
    long Reset(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAttribute@CContext@Runtime@Resources@Microsoft@@QEAAJPEBG@Z
    long ResetAttribute(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAttribute@CContext@Runtime@Resources@Microsoft@@QEAAJPEBG_N@Z
    long ResetAttribute(unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttributeValue@CContext@Runtime@Resources@Microsoft@@QEAAJPEBG0_N@Z
    long SetAttributeValue(unsigned short const *, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttributeValue@CContext@Runtime@Resources@Microsoft@@QEAAJPEBG0W4_SetQualifierFlags@234@@Z
    long SetAttributeValue(unsigned short const *, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContext@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckQualifierPermissions@CContext@Runtime@Resources@Microsoft@@AEBAJPEBGPEA_N@Z
    long _CheckQualifierPermissions(unsigned short const *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAttributeAtom@CContext@Runtime@Resources@Microsoft@@AEBAJHPEAUAtom@34@@Z
    long _GetAttributeAtom(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSystemQualifierOverridden@CContext@Runtime@Resources@Microsoft@@AEBAJPEBGPEA_N@Z
    long _IsSystemQualifierOverridden(unsigned short const *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEmptyScaleValueForViewIndependentUse@CContext@Runtime@Resources@Microsoft@@AEAAJH@Z
    long _SetEmptyScaleValueForViewIndependentUse(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSystemQualifierOverrideState@CContext@Runtime@Resources@Microsoft@@AEAAJPEBG_N@Z
    long _SetSystemQualifierOverrideState(unsigned short const *, bool);
};
} // namespace Microsoft::Resources::Runtime
