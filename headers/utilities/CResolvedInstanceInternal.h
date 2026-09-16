#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 21 member(s).
namespace Microsoft::Resources::Runtime {
class CResolvedInstanceInternal {
public:
    class ConditionInternalCompareFunctor;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    CResolvedInstanceInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCondition@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJIPEAUCONDITION_INTERNAL@234@@Z
    long GetCondition(unsigned int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCondition@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJUCONDITION_INTERNAL@234@PEAI@Z
    long GetCondition(WindissectOpaque, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionCount@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEAI@Z
    long GetConditionCount(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionValue@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEBGPEAPEBG@Z
    long GetConditionValue(unsigned short const *, unsigned short const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrigin@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEAAJPEAPEBG@Z
    long GetOrigin(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceValueType@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEAPEBG@Z
    long GetResourceValueType(unsigned short const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceValueType@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEAW4ResourceValueType@MrmEnvironment@34@@Z
    long GetResourceValueType(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueData@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEAPEBXPEAIPEA_N@Z
    long GetValueData(void const * *, unsigned int *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueString@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEAPEBGPEA_N@Z
    long GetValueString(unsigned short const * *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueStringByType@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJW4ResourceValueType@MrmEnvironment@34@PEAPEBGPEA_N@Z
    long GetValueStringByType(int, unsigned short const * *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefault@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEA_N@Z
    long IsDefault(bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatch@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEA_N@Z
    long IsMatch(bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchAsDefault@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJPEA_N@Z
    long IsMatchAsDefault(bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEBAJXZ
    long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEAAJPEAVMrmProfile@34@PEBVIUnifiedResourceView@34@PEBVManagedResourceMap@34@PEAVResourceCandidateResult@34@PEBVCContext@234@@Z
    long Set(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResolvedInstanceInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CResolvedInstanceInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchStateInitialize@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@AEBAJXZ
    long _MatchStateInitialize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetQueryString@CResolvedInstanceInternal@Runtime@Resources@Microsoft@@AEAAJXZ
    long _SetQueryString();
};
} // namespace Microsoft::Resources::Runtime
