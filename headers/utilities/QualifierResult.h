#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 17 member(s).
namespace Microsoft::Resources {
class QualifierResult {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseQualifierIndex@QualifierResult@Resources@Microsoft@@UEBAJPEAH@Z
    virtual long GetBaseQualifierIndex(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomOperator@QualifierResult@Resources@Microsoft@@UEBAJPEAUAtom@23@@Z
    virtual long GetCustomOperator(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFallbackScore@QualifierResult@Resources@Microsoft@@UEBAJPEAN@Z
    virtual long GetFallbackScore(double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFallbackScoreAsScaledInt@QualifierResult@Resources@Microsoft@@UEBAHXZ
    virtual int GetFallbackScoreAsScaledInt() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperand1Attribute@QualifierResult@Resources@Microsoft@@UEBAJPEAUAtom@23@@Z
    virtual long GetOperand1Attribute(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperand2Attribute@QualifierResult@Resources@Microsoft@@UEBAJPEAUAtom@23@@Z
    virtual long GetOperand2Attribute(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperand2Literal@QualifierResult@Resources@Microsoft@@UEBAJPEAVStringResult@23@@Z
    virtual long GetOperand2Literal(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperator@QualifierResult@Resources@Microsoft@@UEBAJPEAW4ConditionOperator@ICondition@23@@Z
    virtual long GetOperator(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@QualifierResult@Resources@Microsoft@@UEBAHXZ
    virtual int GetPriority() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierIndex@QualifierResult@Resources@Microsoft@@UEBAJPEAH@Z
    virtual long GetQualifierIndex(int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Operand2IsLiteral@QualifierResult@Resources@Microsoft@@UEBAJPEA_N@Z
    virtual long Operand2IsLiteral(bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperatorIsCustom@QualifierResult@Resources@Microsoft@@UEBA_NXZ
    virtual bool OperatorIsCustom() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperatorIsUnary@QualifierResult@Resources@Microsoft@@UEBA_NXZ
    virtual bool OperatorIsUnary() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QualifierResult@Resources@Microsoft@@QEAA@XZ
    QualifierResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@QualifierResult@Resources@Microsoft@@QEAAJPEBVIRawDecisionInfo@23@H@Z
    long Set(WindissectOpaque const *, int);
};
} // namespace Microsoft::Resources
